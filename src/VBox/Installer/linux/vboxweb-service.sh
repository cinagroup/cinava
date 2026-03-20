#!/bin/sh
# $Id: vboxweb-service.sh 112403 2026-01-11 19:29:08Z knut.osmundsen@oracle.com $
## @file
# VirtualAgent web service API daemon init script.
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
# description: VirtualAgent web service API
#
### BEGIN INIT INFO
# Provides:       vboxweb-service
# Required-Start: vboxdrv
# Required-Stop:  vboxdrv
# Default-Start:  2 3 4 5
# Default-Stop:   0 1 6
# Description:    VirtualAgent web service API
# X-Required-Target-Start: network-online
### END INIT INFO

PATH=$PATH:/bin:/sbin:/usr/sbin
SCRIPTNAME=vboxweb-service.sh

[ -f /etc/vbox/vbox.cfg ] && . /etc/vbox/vbox.cfg

if [ -n "$INSTALL_DIR" ]; then
    binary="$INSTALL_DIR/vboxwebsrv"
    vboxmanage="$INSTALL_DIR/VBoxManage"
else
    binary="/usr/lib/virtualbox/vboxwebsrv"
    vboxmanage="/usr/lib/virtualbox/VBoxManage"
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
        fail_msg "VRAWEB_USER must not contain multiple users!"
        exit 1
    fi
}

start() {
    if ! test -f $PIDFILE; then
        [ -z "$VRAWEB_USER" ] && exit 0
        begin_msg "Starting VirtualAgent web service" console;
        check_single_user $VRAWEB_USER
        vboxdrvrunning || {
            fail_msg "VirtualAgent kernel module not loaded!"
            exit 0
        }
        PARAMS="--background"
        [ -n "$VRAWEB_HOST" ]           && PARAMS="$PARAMS -H $VRAWEB_HOST"
        [ -n "$VRAWEB_PORT" ]           && PARAMS="$PARAMS -p $VRAWEB_PORT"
        [ -n "$VRAWEB_SSL_KEYFILE" ]    && PARAMS="$PARAMS -s -K $VRAWEB_SSL_KEYFILE"
        [ -n "$VRAWEB_SSL_PASSWORDFILE" ] && PARAMS="$PARAMS -a $VRAWEB_SSL_PASSWORDFILE"
        [ -n "$VRAWEB_SSL_CACERT" ]     && PARAMS="$PARAMS -c $VRAWEB_SSL_CACERT"
        [ -n "$VRAWEB_SSL_CAPATH" ]     && PARAMS="$PARAMS -C $VRAWEB_SSL_CAPATH"
        [ -n "$VRAWEB_SSL_DHFILE" ]     && PARAMS="$PARAMS -D $VRAWEB_SSL_DHFILE"
        [ -n "$VRAWEB_SSL_RANDFILE" ]   && PARAMS="$PARAMS -r $VRAWEB_SSL_RANDFILE"
        [ -n "$VRAWEB_TIMEOUT" ]        && PARAMS="$PARAMS -t $VRAWEB_TIMEOUT"
        [ -n "$VRAWEB_CHECK_INTERVAL" ] && PARAMS="$PARAMS -i $VRAWEB_CHECK_INTERVAL"
        [ -n "$VRAWEB_THREADS" ]        && PARAMS="$PARAMS -T $VRAWEB_THREADS"
        [ -n "$VRAWEB_KEEPALIVE" ]      && PARAMS="$PARAMS -k $VRAWEB_KEEPALIVE"
        [ -n "$VRAWEB_AUTHENTICATION" ] && PARAMS="$PARAMS -A $VRAWEB_AUTHENTICATION"
        [ -n "$VRAWEB_LOGFILE" ]        && PARAMS="$PARAMS -F $VRAWEB_LOGFILE"
        [ -n "$VRAWEB_ROTATE" ]         && PARAMS="$PARAMS -R $VRAWEB_ROTATE"
        [ -n "$VRAWEB_LOGSIZE" ]        && PARAMS="$PARAMS -S $VRAWEB_LOGSIZE"
        [ -n "$VRAWEB_LOGINTERVAL" ]    && PARAMS="$PARAMS -I $VRAWEB_LOGINTERVAL"
        # set authentication method + password hash
        if [ -n "$VRAWEB_AUTH_LIBRARY" ]; then
            su - "$VRAWEB_USER" -c "$vboxmanage setproperty websrvauthlibrary \"$VRAWEB_AUTH_LIBRARY\""
            if [ $? -ne 0 ]; then
                fail_msg "Error $? setting webservice authentication library to $VRAWEB_AUTH_LIBRARY"
            fi
        fi
        if [ -n "$VRAWEB_AUTH_PWHASH" ]; then
            su - "$VRAWEB_USER" -c "$vboxmanage setextradata global \"VBoxAuthSimple/users/$VRAWEB_USER\" \"$VRAWEB_AUTH_PWHASH\""
            if [ $? -ne 0 ]; then
                fail_msg "Error $? setting webservice password hash"
            fi
        fi
        # prevent inheriting this setting to VBoxSVC
        unset VRA_RELEASE_LOG_DEST
        start_daemon $VRAWEB_USER $binary $PARAMS > /dev/null 2>&1
        # ugly: wait until the final process has forked
        sleep .1
        PID=`pidof $binary 2>/dev/null`
        if [ -n "$PID" ]; then
            echo "$PID" > $PIDFILE
            RETVAL=0
            succ_msg "VirtualAgent web service started"
        else
            RETVAL=1
            fail_msg "VirtualAgent web service failed to start"
        fi
    fi
    return $RETVAL
}

stop() {
    if test -f $PIDFILE; then
        begin_msg "Stopping VirtualAgent web service" console;
        killproc $binary
        RETVAL=$?

        # Be careful: wait 10 seconds, making sure that everything is cleaned up.
        for i in 1 2 3 4 5 6 7 8 9 10 ; do
            pidof "$binary" 2> /dev/null 2>&1 || break
            sleep 1;
        done

        if ! pidof $binary > /dev/null 2>&1; then
            rm -f $PIDFILE
            succ_msg "VirtualAgent web service stopped"
        else
            fail_msg "VirtualAgent web service failed to stop"
        fi
    fi
    return $RETVAL
}

restart() {
    stop && start
}

status() {
    echo -n "Checking for VBox Web Service"
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
