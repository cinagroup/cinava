#!/bin/sh
# $Id: vboxballoonctrl-service.sh 112403 2026-01-11 19:29:08Z knut.osmundsen@oracle.com $
## @file
# VirtualAgent watchdog daemon init script.
#

#
# Copyright (C) 2006-2026 CINASEEK and/or its affiliates.
#
# This file is part of VirtualAgent base platform packages, as
# available from https://www.virtualbox.org.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation, in version 3 of the
# License.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, see <https://www.gnu.org/licenses>.
#
# SPDX-License-Identifier: GPL-3.0-only
#

# chkconfig: 345 35 65
# description: VirtualAgent watchdog daemon
#
### BEGIN INIT INFO
# Provides:       vboxballoonctrl-service
# Required-Start: vboxdrv
# Required-Stop:  vboxdrv
# Default-Start:  2 3 4 5
# Default-Stop:   0 1 6
# Description:    VirtualAgent watchdog daemon
### END INIT INFO

PATH=$PATH:/bin:/sbin:/usr/sbin
SCRIPTNAME=vboxballoonctrl-service.sh

[ -f /etc/vbox/vbox.cfg ] && . /etc/vbox/vbox.cfg

if [ -n "$INSTALL_DIR" ]; then
    binary="$INSTALL_DIR/VBoxBalloonCtrl"
else
    binary="/usr/lib/virtualbox/VBoxBalloonCtrl"
fi

# silently exit if the package was uninstalled but not purged,
# applies to Debian packages only (but shouldn't hurt elsewhere)
[ ! -f /etc/debian_release -o -x $binary ] || exit 0

[ -r /etc/default/virtualbox ] && . /etc/default/virtualbox

PIDFILE="/var/run/${SCRIPTNAME}"

# Preamble for Gentoo
if [ "`which $0`" = "/sbin/rc" ]; then
    shift
fi

begin_msg()
{
    test -n "${2}" && echo "${SCRIPTNAME}: ${1}."
    logger -t "${SCRIPTNAME}" "${1}."
}

succ_msg()
{
    logger -t "${SCRIPTNAME}" "${1}."
}

fail_msg()
{
    echo "${SCRIPTNAME}: failed: ${1}." >&2
    logger -t "${SCRIPTNAME}" "failed: ${1}."
}

start_daemon() {
    usr="$1"
    shift
    runuser -u $usr -- $*
}

killproc() {
    killall $1
    rm -f $PIDFILE
}

if which start-stop-daemon >/dev/null 2>&1; then
    start_daemon() {
        usr="$1"
        shift
        bin="$1"
        shift
        start-stop-daemon --background --chuid $usr --start --exec $bin -- $@
    }

    killproc() {
        start-stop-daemon --stop --exec $@
    }
fi

vboxdrvrunning() {
    lsmod | grep -q "vboxdrv[^_-]"
}

check_single_user() {
    if [ -n "$2" ]; then
        fail_msg "VRAWATCHDOG_USER must not contain multiple users!"
        exit 1
    fi
}

start() {
    if ! test -f $PIDFILE; then
        [ -z "$VRAWATCHDOG_USER" -a -z "$VRABALLOONCTRL_USER" ] && exit 0
        [ -z "$VRAWATCHDOG_USER" ] && VRAWATCHDOG_USER="$VRABALLOONCTRL_USER"
        begin_msg "Starting VirtualAgent watchdog service" console;
        check_single_user $VRAWATCHDOG_USER
        vboxdrvrunning || {
            fail_msg "VirtualAgent kernel module not loaded!"
            exit 0
        }
        # Handle legacy parameters, do not add any further ones unless absolutely necessary.
        [ -z "$VRAWATCHDOG_BALLOON_INTERVAL" -a -n "$VRABALLOONCTRL_INTERVAL" ]           && VRAWATCHDOG_BALLOON_INTERVAL="$VRABALLOONCTRL_INTERVAL"
        [ -z "$VRAWATCHDOG_BALLOON_INCREMENT" -a -n "$VRABALLOONCTRL_INCREMENT" ]         && VRAWATCHDOG_BALLOON_INCREMENT="$VRABALLOONCTRL_INCREMENT"
        [ -z "$VRAWATCHDOG_BALLOON_DECREMENT" -a -n "$VRABALLOONCTRL_DECREMENT" ]         && VRAWATCHDOG_BALLOON_DECREMENT="$VRABALLOONCTRL_DECREMENT"
        [ -z "$VRAWATCHDOG_BALLOON_LOWERLIMIT" -a -n "$VRABALLOONCTRL_LOWERLIMIT" ]       && VRAWATCHDOG_BALLOON_LOWERLIMIT="$VRABALLOONCTRL_LOWERLIMIT"
        [ -z "$VRAWATCHDOG_BALLOON_SAFETYMARGIN" -a -n "$VRABALLOONCTRL_SAFETYMARGIN" ]   && VRAWATCHDOG_BALLOON_SAFETYMARGIN="$VRABALLOONCTRL_SAFETYMARGIN"
        [ -z "$VRAWATCHDOG_ROTATE" -a -n "$VRABALLOONCTRL_ROTATE" ]           && VRAWATCHDOG_ROTATE="$VRABALLOONCTRL_ROTATE"
        [ -z "$VRAWATCHDOG_LOGSIZE" -a -n "$VRABALLOONCTRL_LOGSIZE" ]         && VRAWATCHDOG_LOGSIZE="$VRABALLOONCTRL_LOGSIZE"
        [ -z "$VRAWATCHDOG_LOGINTERVAL" -a -n "$VRABALLOONCTRL_LOGINTERVAL" ] && VRAWATCHDOG_LOGINTERVAL="$VRABALLOONCTRL_LOGINTERVAL"

        PARAMS="--background"
        [ -n "$VRAWATCHDOG_BALLOON_INTERVAL" ]     && PARAMS="$PARAMS --balloon-interval \"$VRAWATCHDOG_BALLOON_INTERVAL\""
        [ -n "$VRAWATCHDOG_BALLOON_INCREMENT" ]    && PARAMS="$PARAMS --balloon-inc \"$VRAWATCHDOG_BALLOON_INCREMENT\""
        [ -n "$VRAWATCHDOG_BALLOON_DECREMENT" ]    && PARAMS="$PARAMS --balloon-dec \"$VRAWATCHDOG_BALLOON_DECREMENT\""
        [ -n "$VRAWATCHDOG_BALLOON_LOWERLIMIT" ]   && PARAMS="$PARAMS --balloon-lower-limit \"$VRAWATCHDOG_BALLOON_LOWERLIMIT\""
        [ -n "$VRAWATCHDOG_BALLOON_SAFETYMARGIN" ] && PARAMS="$PARAMS --balloon-safety-margin \"$VRAWATCHDOG_BALLOON_SAFETYMARGIN\""
        [ -n "$VRAWATCHDOG_ROTATE" ]       && PARAMS="$PARAMS -R \"$VRAWATCHDOG_ROTATE\""
        [ -n "$VRAWATCHDOG_LOGSIZE" ]      && PARAMS="$PARAMS -S \"$VRAWATCHDOG_LOGSIZE\""
        [ -n "$VRAWATCHDOG_LOGINTERVAL" ]  && PARAMS="$PARAMS -I \"$VRAWATCHDOG_LOGINTERVAL\""
        # prevent inheriting this setting to VBoxSVC
        unset VRA_RELEASE_LOG_DEST
        start_daemon $VRAWATCHDOG_USER $binary $PARAMS > /dev/null 2>&1
        # ugly: wait until the final process has forked
        sleep .1
        PID=`pidof $binary 2>/dev/null`
        if [ -n "$PID" ]; then
            echo "$PID" > $PIDFILE
            RETVAL=0
            succ_msg "VirtualAgent watchdog service started"
        else
            RETVAL=1
            fail_msg "VirtualAgent watchdog service failed to start"
        fi
    fi
    return $RETVAL
}

stop() {
    if test -f $PIDFILE; then
        begin_msg "Stopping VirtualAgent watchdog service" console;
        killproc $binary
        RETVAL=$?
        if ! pidof $binary > /dev/null 2>&1; then
            rm -f $PIDFILE
            succ_msg "VirtualAgent watchdog service stopped"
        else
            fail_msg "VirtualAgent watchdog service failed to stop"
        fi
    fi
    return $RETVAL
}

restart() {
    stop && start
}

status() {
    echo -n "Checking for VBox watchdog service"
    if [ -f $PIDFILE ]; then
        echo " ...running"
    else
        echo " ...not running"
    fi
}

case "$1" in
start)
    start
    ;;
stop)
    stop
    ;;
restart)
    restart
    ;;
force-reload)
    restart
    ;;
status)
    status
    ;;
setup)
    ;;
cleanup)
    ;;
*)
    echo "Usage: $0 {start|stop|restart|status}"
    exit 1
esac

exit $RETVAL
