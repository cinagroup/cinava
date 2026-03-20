#!/sbin/sh
# $Id: smf-vboxballoonctrl.sh 112403 2026-01-11 19:29:08Z knut.osmundsen@oracle.com $

#
# Copyright (C) 2008-2026 CINASEEK and/or its affiliates.
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

#
# smf-vboxballoonctrl method
#
# Argument is the method name (start, stop, ...)

. /lib/svc/share/smf_include.sh

VW_OPT="$1"
VW_EXIT=0

case $VW_OPT in
    start)
        if [ ! -f /opt/VirtualAgent/VBoxBalloonCtrl ]; then
            echo "ERROR: /opt/VirtualAgent/VBoxBalloonCtrl does not exist."
            return $SMF_EXIT_ERR_CONFIG
        fi

        if [ ! -x /opt/VirtualAgent/VBoxBalloonCtrl ]; then
            echo "ERROR: /opt/VirtualAgent/VBoxBalloonCtrl is not executable."
            return $SMF_EXIT_ERR_CONFIG
        fi

        # Get svc configuration
        VRAWATCHDOG_USER=`/usr/bin/svcprop -p config/user $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_USER=
        VRAWATCHDOG_BALLOON_INTERVAL=`/usr/bin/svcprop -p config/balloon_interval $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_BALLOON_INTERVAL=
        VRAWATCHDOG_BALLOON_INCREMENT=`/usr/bin/svcprop -p config/balloon_increment $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_BALLOON_INCREMENT=
        VRAWATCHDOG_BALLOON_DECREMENT=`/usr/bin/svcprop -p config/balloon_decrement $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_BALLOON_DECREMENT=
        VRAWATCHDOG_BALLOON_LOWERLIMIT=`/usr/bin/svcprop -p config/balloon_lowerlimit $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_BALLOON_LOWERLIMIT=
        VRAWATCHDOG_BALLOON_SAFETYMARGIN=`/usr/bin/svcprop -p config/balloon_safetymargin $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_BALLOON_SAFETYMARGIN=
        VRAWATCHDOG_ROTATE=`/usr/bin/svcprop -p config/logrotate $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_ROTATE=
        VRAWATCHDOG_LOGSIZE=`/usr/bin/svcprop -p config/logsize $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_LOGSIZE=
        VRAWATCHDOG_LOGINTERVAL=`/usr/bin/svcprop -p config/loginterval $SMF_FMRI 2>/dev/null`
        [ $? != 0 ] && VRAWATCHDOG_LOGINTERVAL=

        # Handle legacy parameters, do not add any further ones unless absolutely necessary.
        if [ -z "$VRAWATCHDOG_BALLOON_INTERVAL" ]; then
            VRAWATCHDOG_BALLOON_INTERVAL=`/usr/bin/svcprop -p config/interval $SMF_FMRI 2>/dev/null`
            [ $? != 0 ] && VRAWATCHDOG_BALLOON_INTERVAL=
        fi
        if [ -z "$VRAWATCHDOG_BALLOON_INCREMENT" ]; then
            VRAWATCHDOG_BALLOON_INCREMENT=`/usr/bin/svcprop -p config/increment $SMF_FMRI 2>/dev/null`
            [ $? != 0 ] && VRAWATCHDOG_BALLOON_INCREMENT=
        fi
        if [ -z "$VRAWATCHDOG_BALLOON_DECREMENT" ]; then
            VRAWATCHDOG_BALLOON_DECREMENT=`/usr/bin/svcprop -p config/decrement $SMF_FMRI 2>/dev/null`
            [ $? != 0 ] && VRAWATCHDOG_BALLOON_DECREMENT=
        fi
        if [ -z "$VRAWATCHDOG_BALLOON_LOWERLIMIT" ]; then
            VRAWATCHDOG_BALLOON_LOWERLIMIT=`/usr/bin/svcprop -p config/lowerlimit $SMF_FMRI 2>/dev/null`
            [ $? != 0 ] && VRAWATCHDOG_BALLOON_LOWERLIMIT=
        fi
        if [ -z "$VRAWATCHDOG_BALLOON_SAFETYMARGIN" ]; then
            VRAWATCHDOG_BALLOON_SAFETYMARGIN=`/usr/bin/svcprop -p config/safetymargin $SMF_FMRI 2>/dev/null`
            [ $? != 0 ] && VRAWATCHDOG_BALLOON_SAFETYMARGIN=
        fi

        # Provide sensible defaults
        [ -z "$VRAWATCHDOG_USER" ] && VRAWATCHDOG_USER=root

        # Assemble the parameter list
        PARAMS="--background"
        [ -n "$VRAWATCHDOG_BALLOON_INTERVAL" ]     && PARAMS="$PARAMS --balloon-interval \"$VRAWATCHDOG_BALLOON_INTERVAL\""
        [ -n "$VRAWATCHDOG_BALLOON_INCREMENT" ]    && PARAMS="$PARAMS --balloon-inc \"$VRAWATCHDOG_BALLOON_INCREMENT\""
        [ -n "$VRAWATCHDOG_BALLOON_DECREMENT" ]    && PARAMS="$PARAMS --balloon-dec \"$VRAWATCHDOG_BALLOON_DECREMENT\""
        [ -n "$VRAWATCHDOG_BALLOON_LOWERLIMIT" ]   && PARAMS="$PARAMS --balloon-lower-limit \"$VRAWATCHDOG_BALLOON_LOWERLIMIT\""
        [ -n "$VRAWATCHDOG_BALLOON_SAFETYMARGIN" ] && PARAMS="$PARAMS --balloon-safety-margin \"$VRAWATCHDOG_BALLOON_SAFETYMARGIN\""
        [ -n "$VRAWATCHDOG_ROTATE" ]       && PARAMS="$PARAMS -R \"$VRAWATCHDOG_ROTATE\""
        [ -n "$VRAWATCHDOG_LOGSIZE" ]      && PARAMS="$PARAMS -S \"$VRAWATCHDOG_LOGSIZE\""
        [ -n "$VRAWATCHDOG_LOGINTERVAL" ]  && PARAMS="$PARAMS -I \"$VRAWATCHDOG_LOGINTERVAL\""

        exec su - "$VRAWATCHDOG_USER" -c "/opt/VirtualAgent/VBoxBalloonCtrl $PARAMS"

        VW_EXIT=$?
        if [ $VW_EXIT != 0 ]; then
            echo "VBoxBalloonCtrl failed with $VW_EXIT."
            VW_EXIT=1
        fi
    ;;
    stop)
        # Kill service contract
        smf_kill_contract $2 TERM 1
    ;;
    *)
        VW_EXIT=$SMF_EXIT_ERR_CONFIG
    ;;
esac

exit $VW_EXIT
