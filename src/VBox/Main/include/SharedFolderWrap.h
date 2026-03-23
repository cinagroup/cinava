/** @file
 * VirtualBox API class wrapper header for ISharedFolder.
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl
 * Generator: src/VBox/Main/idl/apiwrap-server.xsl
 */

/*
 * Copyright (C) 2010-2026 Oracle and/or its affiliates.
 *
 * This file is part of VirtualBox base platform packages, as
 * available from https://www.virtualbox.org.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, in version 3 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses>.
 *
 * SPDX-License-Identifier: GPL-3.0-only
 */

#ifndef SharedFolderWrap_H_
#define SharedFolderWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SharedFolderWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ISharedFolder)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SharedFolderWrap, ISharedFolder)
    DECLARE_NOT_AGGREGATABLE(SharedFolderWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SharedFolderWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISharedFolder)
        COM_INTERFACE_ENTRY2(IDispatch, ISharedFolder)
        VBOX_TWEAK_INTERFACE_ENTRY(ISharedFolder)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(SharedFolderWrap)

    /** @name Public ISharedFolder properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostPath))(BSTR *aHostPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Accessible))(BOOL *aAccessible) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Writable))(BOOL *aWritable) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Writable))(BOOL aWritable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutoMount))(BOOL *aAutoMount) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutoMount))(BOOL aAutoMount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutoMountPoint))(BSTR *aAutoMountPoint) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutoMountPoint))(IN_BSTR aAutoMountPoint) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LastAccessError))(BSTR *aLastAccessError) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SymlinkPolicy))(SymlinkPolicy_T *aSymlinkPolicy) RT_OVERRIDE;
    STDMETHOD(COMSETTER(SymlinkPolicy))(SymlinkPolicy_T aSymlinkPolicy) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ISharedFolder))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ISharedFolder methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped ISharedFolder properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getHostPath(com::Utf8Str &aHostPath) = 0;
    virtual HRESULT getAccessible(BOOL *aAccessible) = 0;
    virtual HRESULT getWritable(BOOL *aWritable) = 0;
    virtual HRESULT setWritable(BOOL aWritable) = 0;
    virtual HRESULT getAutoMount(BOOL *aAutoMount) = 0;
    virtual HRESULT setAutoMount(BOOL aAutoMount) = 0;
    virtual HRESULT getAutoMountPoint(com::Utf8Str &aAutoMountPoint) = 0;
    virtual HRESULT setAutoMountPoint(const com::Utf8Str &aAutoMountPoint) = 0;
    virtual HRESULT getLastAccessError(com::Utf8Str &aLastAccessError) = 0;
    virtual HRESULT getSymlinkPolicy(SymlinkPolicy_T *aSymlinkPolicy) = 0;
    virtual HRESULT setSymlinkPolicy(SymlinkPolicy_T aSymlinkPolicy) = 0;
    /** @} */

    /** @name Wrapped ISharedFolder methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(SharedFolderWrap); /* Shuts up MSC warning C4625. */

};

#endif // !SharedFolderWrap_H_
