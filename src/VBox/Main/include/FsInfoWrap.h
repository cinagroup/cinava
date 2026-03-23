/** @file
 * VirtualBox API class wrapper header for IFsInfo.
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

#ifndef FsInfoWrap_H_
#define FsInfoWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE FsInfoWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IFsInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(FsInfoWrap, IFsInfo)
    DECLARE_NOT_AGGREGATABLE(FsInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(FsInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IFsInfo)
        COM_INTERFACE_ENTRY2(IDispatch, IFsInfo)
        VBOX_TWEAK_INTERFACE_ENTRY(IFsInfo)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(FsInfoWrap)

    /** @name Public IFsInfo properties
     * @{ */
    STDMETHOD(COMGETTER(FreeSize))(LONG64 *aFreeSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TotalSize))(LONG64 *aTotalSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BlockSize))(ULONG *aBlockSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SectorSize))(ULONG *aSectorSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SerialNumber))(ULONG *aSerialNumber) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsRemote))(BOOL *aIsRemote) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsCaseSensitive))(BOOL *aIsCaseSensitive) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsReadOnly))(BOOL *aIsReadOnly) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsCompressed))(BOOL *aIsCompressed) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportsFileCompression))(BOOL *aSupportsFileCompression) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxComponent))(ULONG *aMaxComponent) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(BSTR *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Label))(BSTR *aLabel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MountPoint))(BSTR *aMountPoint) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IFsInfo))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IFsInfo methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IFsInfo properties
     * @{ */
    virtual HRESULT getFreeSize(LONG64 *aFreeSize) = 0;
    virtual HRESULT getTotalSize(LONG64 *aTotalSize) = 0;
    virtual HRESULT getBlockSize(ULONG *aBlockSize) = 0;
    virtual HRESULT getSectorSize(ULONG *aSectorSize) = 0;
    virtual HRESULT getSerialNumber(ULONG *aSerialNumber) = 0;
    virtual HRESULT getIsRemote(BOOL *aIsRemote) = 0;
    virtual HRESULT getIsCaseSensitive(BOOL *aIsCaseSensitive) = 0;
    virtual HRESULT getIsReadOnly(BOOL *aIsReadOnly) = 0;
    virtual HRESULT getIsCompressed(BOOL *aIsCompressed) = 0;
    virtual HRESULT getSupportsFileCompression(BOOL *aSupportsFileCompression) = 0;
    virtual HRESULT getMaxComponent(ULONG *aMaxComponent) = 0;
    virtual HRESULT getType(com::Utf8Str &aType) = 0;
    virtual HRESULT getLabel(com::Utf8Str &aLabel) = 0;
    virtual HRESULT getMountPoint(com::Utf8Str &aMountPoint) = 0;
    /** @} */

    /** @name Wrapped IFsInfo methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(FsInfoWrap); /* Shuts up MSC warning C4625. */

};

#endif // !FsInfoWrap_H_
