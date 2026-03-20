#!/bin/sh
# $Id: makepackage.sh 112403 2026-01-11 19:29:08Z knut.osmundsen@oracle.com $
## @file
# VirtualAgent Solaris Guest Additions package creation script.
#

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
# The contents of this file may alternatively be used under the terms
# of the Common Development and Distribution License Version 1.0
# (CDDL), a copy of it is provided in the "COPYING.CDDL" file included
# in the VirtualAgent distribution, in which case the provisions of the
# CDDL are applicable instead of those of the GPL.
#
# You may elect to license modified versions of this file under the
# terms and conditions of either the GPL or the CDDL or both.
#
# SPDX-License-Identifier: GPL-3.0-only OR CDDL-1.0
#

#
# Usage:
#       makespackage.sh $(PATH_TARGET)/install packagename svnrev

if test -z "$3"; then
    echo "Usage: $0 installdir packagename svnrev"
    exit 1
fi
ostype=`uname -s`
if test "$ostype" != "Linux" && test "$ostype" != "SunOS" ; then
  echo "Linux/Solaris not detected."
  exit 1
fi

VRA_BASEPKG_DIR=$1
VRA_INSTALLED_DIR="$VRA_BASEPKG_DIR"/opt/VirtualAgentAdditions
VRA_PKGFILENAME=$2
VRA_SVN_REV=$3

VRA_PKGNAME=SUNWvboxguest
VRA_AWK=/usr/bin/awk
case "$ostype" in
"SunOS")
  VRA_GGREP=/usr/sfw/bin/ggrep
  VRA_SOL_PKG_DEV=/var/spool/pkg
  ;;
*)
  VRA_GGREP=`which grep`
  VRA_SOL_PKG_DEV=$4
  ;;
esac
VRA_AWK=/usr/bin/awk

# check for GNU grep we use which might not ship with all Solaris
if test ! -f "$VRA_GGREP" && test ! -h "$VRA_GGREP"; then
    echo "## GNU grep not found in $VRA_GGREP."
    exit 1
fi

# bail out on non-zero exit status
set -e

# Fixup filelist using awk, the parameters must be in awk syntax
# params: filename condition action
filelist_fixup()
{
    "$VRA_AWK" 'NF == 6 && '"$2"' { '"$3"' } { print }' "$1" > "tmp-$1"
    mv -f "tmp-$1" "$1"
}

dirlist_fixup()
{
  "$VRA_AWK" 'NF == 6 && $1 == "d" && '"$2"' { '"$3"' } { print }' "$1" > "tmp-$1"
  mv -f "tmp-$1" "$1"
}

# Create relative hardlinks
cd "$VRA_INSTALLED_DIR"
ln -f ./VBoxISAExec $VRA_INSTALLED_DIR/VBoxService
ln -f ./VBoxISAExec $VRA_INSTALLED_DIR/VBoxClient
ln -f ./VBoxISAExec $VRA_INSTALLED_DIR/VBoxControl
ln -f ./VBoxISAExec $VRA_INSTALLED_DIR/vboxmslnk

# prepare file list
cd "$VRA_BASEPKG_DIR"
echo 'i pkginfo=./vboxguest.pkginfo' > prototype
echo 'i postinstall=./postinstall.sh' >> prototype
echo 'i preremove=./preremove.sh' >> prototype
echo 'i space=./vboxguest.space' >> prototype
echo 'i depend=./vboxguest.depend' >> prototype
if test -f "./vboxguest.copyright"; then
    echo 'i copyright=./vboxguest.copyright' >> prototype
fi

# Exclude directory entries to not cause conflicts (owner,group) with existing directories in the system
find . ! -type d | $VRA_GGREP -v -E 'prototype|makepackage.sh|vboxguest.pkginfo|postinstall.sh|preremove.sh|vboxguest.space|vboxguest.depend|vboxguest.copyright' | pkgproto >> prototype

# Include opt/VirtualAgentAdditions and subdirectories as we want uninstall to clean up directory structure as well
find . -type d | $VRA_GGREP -E 'opt/VirtualAgentAdditions|var/svc/manifest/application/virtualbox' | pkgproto >> prototype

# Include /etc/fs/vboxfs (as we need to create the subdirectory)
find . -type d | $VRA_GGREP -E 'etc/fs/vboxfs' | pkgproto >> prototype


# don't grok for the class files
filelist_fixup prototype '$2 == "none"'                                                                      '$5 = "root"; $6 = "bin"'

# VBoxService requires suid
filelist_fixup prototype '$3 == "opt/VirtualAgentAdditions/VBoxService"'                                       '$4 = "4755"'
filelist_fixup prototype '$3 == "opt/VirtualAgentAdditions/amd64/VBoxService"'                                 '$4 = "4755"'

# Manifest class action scripts
filelist_fixup prototype '$3 == "var/svc/manifest/application/virtualbox/vboxservice.xml"'                   '$2 = "manifest";$6 = "sys"'
filelist_fixup prototype '$3 == "var/svc/manifest/application/virtualbox/vboxmslnk.xml"'                     '$2 = "manifest";$6 = "sys"'

# vboxguest
filelist_fixup prototype '$3 == "usr/kernel/drv/vboxguest"'                                                  '$6="sys"'
filelist_fixup prototype '$3 == "usr/kernel/drv/amd64/vboxguest"'                                            '$6="sys"'

# vboxms
filelist_fixup prototype '$3 == "usr/kernel/drv/vboxms"'                                                     '$6="sys"'
filelist_fixup prototype '$3 == "usr/kernel/drv/amd64/vboxms"'                                               '$6="sys"'

# Use 'root' as group so as to match attributes with the previous installation and prevent a conflict. Otherwise pkgadd bails out thinking
# we're violating directory attributes of another (non existing) package
dirlist_fixup prototype  '$3 == "var/svc/manifest/application/virtualbox"'                                   '$6 = "root"'

echo " --- start of prototype  ---"
cat prototype
echo " --- end of prototype --- "

# explicitly set timestamp to shutup warning
VRAPKG_TIMESTAMP=vboxguest`date '+%Y%m%d%H%M%S'`_r$VRA_SVN_REV

# create the package instance
pkgmk -d $VRA_SOL_PKG_DEV -p $VRAPKG_TIMESTAMP -o -r .

# translate into package datastream
pkgtrans -s -o "$VRA_SOL_PKG_DEV" `pwd`/$VRA_PKGFILENAME "$VRA_PKGNAME"

rm -rf "$VRA_SOL_PKG_DEV/$VRA_PKGNAME"
exit $?

