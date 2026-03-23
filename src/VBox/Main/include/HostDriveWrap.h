/** @file
 * VirtualBox API class wrapper header for IHostDrive.
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

#ifndef HostDriveWrap_H_
#define HostDriveWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostDriveWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostDrive)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostDriveWrap, IHostDrive)
    DECLARE_NOT_AGGREGATABLE(HostDriveWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostDriveWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostDrive)
        COM_INTERFACE_ENTRY2(IDispatch, IHostDrive)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostDrive)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostDriveWrap)

    /** @name Public IHostDrive properties
     * @{ */
    STDMETHOD(COMGETTER(DrivePath))(BSTR *aDrivePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PartitioningType))(PartitioningType_T *aPartitioningType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Uuid))(BSTR *aUuid) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SectorSize))(ULONG *aSectorSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Size))(LONG64 *aSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Model))(BSTR *aModel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Partitions))(ComSafeArrayOut(IHostDrivePartition *, aPartitions)) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostDrive methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IHostDrive properties
     * @{ */
    virtual HRESULT getDrivePath(com::Utf8Str &aDrivePath) = 0;
    virtual HRESULT getPartitioningType(PartitioningType_T *aPartitioningType) = 0;
    virtual HRESULT getUuid(com::Guid &aUuid) = 0;
    virtual HRESULT getSectorSize(ULONG *aSectorSize) = 0;
    virtual HRESULT getSize(LONG64 *aSize) = 0;
    virtual HRESULT getModel(com::Utf8Str &aModel) = 0;
    virtual HRESULT getPartitions(std::vector<ComPtr<IHostDrivePartition> > &aPartitions) = 0;
    /** @} */

    /** @name Wrapped IHostDrive methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostDriveWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostDriveWrap_H_
