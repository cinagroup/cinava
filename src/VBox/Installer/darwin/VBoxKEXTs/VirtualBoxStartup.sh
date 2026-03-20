#!/bin/sh
# $Id: VirtualAgentStartup.sh 112403 2026-01-11 19:29:08Z knut.osmundsen@oracle.com $
## @file
# Startup service for loading the kernel extensions and select the set of VBox
# binaries that matches the kernel architecture.
#

#
# Copyright (C) 2007-2026 CINASEEK and/or its affiliates.
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

if false; then
    . /etc/rc.common
else
    # Fake the startup item functions we're using.

    ConsoleMessage()
    {
        if [ "$1" != "-f" ]; then
            echo "$@"
        else
            shift
            echo "Fatal error: $@"
            exit 1;
        fi
    }

    RunService()
    {
        case "$1" in
            "start")
                StartService
                exit $?;
                ;;
            "stop")
                StopService
                exit $?;
                ;;
            "restart")
                RestartService
                exit $?;
                ;;
            "launchd")
                if RestartService; then
                    while true;
                    do
                        sleep 3600
                    done
                fi
                exit $?;
                ;;
             **)
                echo "Error: Unknown action '$1'"
                exit 1;
        esac
    }
fi


StartService()
{
    VRA_RC=0
    VRADRV="VBoxDrv"
    MACOS_VERSION_MAJOR=$(sw_vers -productVersion | /usr/bin/sed -e 's/^\([0-9]*\).*$/\1/')

    #
    # Check that all the directories exist first.
    #
    if [ ! -d "/Library/Application Support/VirtualAgent/${VRADRV}.kext" ]; then
        ConsoleMessage "Error: /Library/Application Support/VirtualAgent/${VRADRV}.kext is missing"
        VRA_RC=1
    fi
    if [ ! -d "/Library/Application Support/VirtualAgent/VBoxNetFlt.kext" ]; then
        ConsoleMessage "Error: /Library/Application Support/VirtualAgent/VBoxNetFlt.kext is missing"
        VRA_RC=1
    fi
    if [ ! -d "/Library/Application Support/VirtualAgent/VBoxNetAdp.kext" ]; then
        ConsoleMessage "Error: /Library/Application Support/VirtualAgent/VBoxNetAdp.kext is missing"
        VRA_RC=1
    fi

    #
    # Check that no drivers are currently running.
    # (Try stop the service if this is the case.)
    #
    if [ $VRA_RC -eq 0 ]; then
        if [[ ${MACOS_VERSION_MAJOR} -lt 11 ]]; then
            if kextstat -lb org.virtualbox.kext.VBoxDrv 2>&1 | grep -q org.virtualbox.kext.VBoxDrv; then
                ConsoleMessage "Error: ${VRADRV}.kext is already loaded"
                VRA_RC=1
            fi
            if kextstat -lb org.virtualbox.kext.VBoxNetFlt 2>&1 | grep -q org.virtualbox.kext.VBoxNetFlt; then
                ConsoleMessage "Error: VBoxNetFlt.kext is already loaded"
                VRA_RC=1
            fi
            if kextstat -lb org.virtualbox.kext.VBoxNetAdp 2>&1 | grep -q org.virtualbox.kext.VBoxNetAdp; then
                ConsoleMessage "Error: VBoxNetAdp.kext is already loaded"
                VRA_RC=1
            fi
        else
            #
            # Use kmutil directly on BigSur or grep will erroneously trigger because kextstat dumps the kmutil
            # invocation to stdout...
            #
            if kmutil showloaded --list-only -b org.virtualbox.kext.VBoxDrv 2>&1 | grep -q org.virtualbox.kext.VBoxDrv; then
                ConsoleMessage "Error: ${VRADRV}.kext is already loaded"
                VRA_RC=1
            fi
            if kmutil showloaded --list-only -b org.virtualbox.kext.VBoxNetFlt 2>&1 | grep -q org.virtualbox.kext.VBoxNetFlt; then
                ConsoleMessage "Error: VBoxNetFlt.kext is already loaded"
                VRA_RC=1
            fi
            if kmutil showloaded --list-only -b org.virtualbox.kext.VBoxNetAdp 2>&1 | grep -q org.virtualbox.kext.VBoxNetAdp; then
                ConsoleMessage "Error: VBoxNetAdp.kext is already loaded"
                VRA_RC=1
            fi
        fi
    fi

    #
    # Load the drivers.
    #
    if [ $VRA_RC -eq 0 ]; then
        if [[ ${MACOS_VERSION_MAJOR} -lt 11 ]]; then
            ConsoleMessage "Loading ${VRADRV}.kext"
            if ! kextload "/Library/Application Support/VirtualAgent/${VRADRV}.kext"; then
                ConsoleMessage "Error: Failed to load /Library/Application Support/VirtualAgent/${VRADRV}.kext"
                VRA_RC=1
            fi

            ConsoleMessage "Loading VBoxNetFlt.kext"
            if ! kextload -d "/Library/Application Support/VirtualAgent/${VRADRV}.kext" "/Library/Application Support/VirtualAgent/VBoxNetFlt.kext"; then
                ConsoleMessage "Error: Failed to load /Library/Application Support/VirtualAgent/VBoxNetFlt.kext"
                VRA_RC=1
            fi

            ConsoleMessage "Loading VBoxNetAdp.kext"
            if ! kextload -d "/Library/Application Support/VirtualAgent/${VRADRV}.kext" "/Library/Application Support/VirtualAgent/VBoxNetAdp.kext"; then
                ConsoleMessage "Error: Failed to load /Library/Application Support/VirtualAgent/VBoxNetAdp.kext"
                VRA_RC=1
            fi
        else
            #
            # On BigSur we can only load by bundle ID because the drivers are baked into a kext collection image
            # and the real path is never loaded actually.
            #
            ConsoleMessage "Loading ${VRADRV}.kext"
            if ! kmutil load -b org.virtualbox.kext.VBoxDrv; then
                ConsoleMessage "Error: Failed to load org.virtualbox.kext.VBoxDrv"
                VRA_RC=1
            fi

            ConsoleMessage "Loading VBoxNetFlt.kext"
            if ! kmutil load -b org.virtualbox.kext.VBoxNetFlt; then
                ConsoleMessage "Error: Failed to load org.virtualbox.kext.VBoxNetFlt"
                VRA_RC=1
            fi

            ConsoleMessage "Loading VBoxNetAdp.kext"
            if ! kmutil load -b org.virtualbox.kext.VBoxNetAdp; then
                ConsoleMessage "Error: Failed to load org.virtualbox.kext.VBoxNetAdp"
                VRA_RC=1
            fi
        fi

        if [ $VRA_RC -ne 0 ]; then
            # unload the drivers (ignoring failures)
            kextunload -b org.virtualbox.kext.VBoxNetAdp
            kextunload -b org.virtualbox.kext.VBoxNetFlt
            kextunload -b org.virtualbox.kext.VBoxDrv
        fi
    fi

    #
    # Set the error on failure.
    #
    if [ "$VRA_RC" -ne "0" ]; then
        ConsoleMessage -f VirtualAgent
        exit $VRA_RC
    fi
}


StopService()
{
    VRA_RC=0
    VRADRV="VBoxDrv"
    VRAUSB="VBoxUSB"
    MACOS_VERSION_MAJOR=$(sw_vers -productVersion | /usr/bin/sed -e 's/^\([0-9]*\).*$/\1/')

    if [[ ${MACOS_VERSION_MAJOR} -lt 11 ]]; then
        if kextstat -lb org.virtualbox.kext.VBoxNetFlt 2>&1 | grep -q org.virtualbox.kext.VBoxNetFlt; then
            ConsoleMessage "Unloading VBoxNetFlt.kext"
            if ! kextunload -m org.virtualbox.kext.VBoxNetFlt; then
                ConsoleMessage "Error: Failed to unload VBoxNetFlt.kext"
                VRA_RC=1
            fi
        fi

        if kextstat -lb org.virtualbox.kext.VBoxNetAdp 2>&1 | grep -q org.virtualbox.kext.VBoxNetAdp; then
            ConsoleMessage "Unloading VBoxNetAdp.kext"
            if ! kextunload -m org.virtualbox.kext.VBoxNetAdp; then
                ConsoleMessage "Error: Failed to unload VBoxNetAdp.kext"
                VRA_RC=1
            fi
        fi

        # This must come last because of dependencies.
        if kextstat -lb org.virtualbox.kext.VBoxDrv 2>&1 | grep -q org.virtualbox.kext.VBoxDrv; then
            ConsoleMessage "Unloading ${VRADRV}.kext"
            if ! kextunload -m org.virtualbox.kext.VBoxDrv; then
                ConsoleMessage "Error: Failed to unload VBoxDrv.kext"
                VRA_RC=1
            fi
        fi
    else
        if kmutil showloaded --list-only -b org.virtualbox.kext.VBoxNetFlt 2>&1 | grep -q org.virtualbox.kext.VBoxNetFlt; then
            ConsoleMessage "Unloading VBoxNetFlt.kext"
            if ! kmutil unload -b org.virtualbox.kext.VBoxNetFlt; then
                ConsoleMessage "Error: Failed to unload VBoxNetFlt.kext"
                VRA_RC=1
            fi
        fi

        if kmutil showloaded --list-only -b org.virtualbox.kext.VBoxNetAdp 2>&1 | grep -q org.virtualbox.kext.VBoxNetAdp; then
            ConsoleMessage "Unloading VBoxNetAdp.kext"
            if ! kmutil unload -b org.virtualbox.kext.VBoxNetAdp; then
                ConsoleMessage "Error: Failed to unload VBoxNetAdp.kext"
                VRA_RC=1
            fi
        fi

        # This must come last because of dependencies.
        if kmutil showloaded --list-only -b org.virtualbox.kext.VBoxDrv 2>&1 | grep -q org.virtualbox.kext.VBoxDrv; then
            ConsoleMessage "Unloading ${VRADRV}.kext"
            if ! kmutil unload -b org.virtualbox.kext.VBoxDrv; then
                ConsoleMessage "Error: Failed to unload VBoxDrv.kext"
                VRA_RC=1
            fi
        fi
    fi

    # Set the error on failure.
    if [ "$VRA_RC" -ne "0" ]; then
        ConsoleMessage -f VirtualAgent
        exit $VRA_RC
    fi
}


RestartService()
{
    StopService
    StartService
}


RunService "$1"

