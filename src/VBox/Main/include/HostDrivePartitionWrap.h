/** @file
 * VirtualBox API class wrapper header for IHostDrivePartition.
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

#ifndef HostDrivePartitionWrap_H_
#define HostDrivePartitionWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostDrivePartitionWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostDrivePartition)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostDrivePartitionWrap, IHostDrivePartition)
    DECLARE_NOT_AGGREGATABLE(HostDrivePartitionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostDrivePartitionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostDrivePartition)
        COM_INTERFACE_ENTRY2(IDispatch, IHostDrivePartition)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostDrivePartition)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostDrivePartitionWrap)

    /** @name Public IHostDrivePartition properties
     * @{ */
    STDMETHOD(COMGETTER(Number))(ULONG *aNumber) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Size))(LONG64 *aSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Start))(LONG64 *aStart) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(PartitionType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Active))(BOOL *aActive) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TypeMBR))(ULONG *aTypeMBR) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StartCylinder))(ULONG *aStartCylinder) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StartHead))(ULONG *aStartHead) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StartSector))(ULONG *aStartSector) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EndCylinder))(ULONG *aEndCylinder) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EndHead))(ULONG *aEndHead) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EndSector))(ULONG *aEndSector) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TypeUuid))(BSTR *aTypeUuid) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Uuid))(BSTR *aUuid) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostDrivePartition methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IHostDrivePartition properties
     * @{ */
    virtual HRESULT getNumber(ULONG *aNumber) = 0;
    virtual HRESULT getSize(LONG64 *aSize) = 0;
    virtual HRESULT getStart(LONG64 *aStart) = 0;
    virtual HRESULT getType(PartitionType_T *aType) = 0;
    virtual HRESULT getActive(BOOL *aActive) = 0;
    virtual HRESULT getTypeMBR(ULONG *aTypeMBR) = 0;
    virtual HRESULT getStartCylinder(ULONG *aStartCylinder) = 0;
    virtual HRESULT getStartHead(ULONG *aStartHead) = 0;
    virtual HRESULT getStartSector(ULONG *aStartSector) = 0;
    virtual HRESULT getEndCylinder(ULONG *aEndCylinder) = 0;
    virtual HRESULT getEndHead(ULONG *aEndHead) = 0;
    virtual HRESULT getEndSector(ULONG *aEndSector) = 0;
    virtual HRESULT getTypeUuid(com::Guid &aTypeUuid) = 0;
    virtual HRESULT getUuid(com::Guid &aUuid) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    /** @} */

    /** @name Wrapped IHostDrivePartition methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostDrivePartitionWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostDrivePartitionWrap_H_
