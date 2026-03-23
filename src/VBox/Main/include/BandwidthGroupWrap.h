/** @file
 * VirtualBox API class wrapper header for IBandwidthGroup.
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

#ifndef BandwidthGroupWrap_H_
#define BandwidthGroupWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE BandwidthGroupWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IBandwidthGroup)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(BandwidthGroupWrap, IBandwidthGroup)
    DECLARE_NOT_AGGREGATABLE(BandwidthGroupWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(BandwidthGroupWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IBandwidthGroup)
        COM_INTERFACE_ENTRY2(IDispatch, IBandwidthGroup)
        VBOX_TWEAK_INTERFACE_ENTRY(IBandwidthGroup)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(BandwidthGroupWrap)

    /** @name Public IBandwidthGroup properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(BandwidthGroupType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Reference))(ULONG *aReference) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxBytesPerSec))(LONG64 *aMaxBytesPerSec) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MaxBytesPerSec))(LONG64 aMaxBytesPerSec) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IBandwidthGroup))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IBandwidthGroup))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IBandwidthGroup))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IBandwidthGroup))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IBandwidthGroup methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IBandwidthGroup properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getType(BandwidthGroupType_T *aType) = 0;
    virtual HRESULT getReference(ULONG *aReference) = 0;
    virtual HRESULT getMaxBytesPerSec(LONG64 *aMaxBytesPerSec) = 0;
    virtual HRESULT setMaxBytesPerSec(LONG64 aMaxBytesPerSec) = 0;
    /** @} */

    /** @name Wrapped IBandwidthGroup methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(BandwidthGroupWrap); /* Shuts up MSC warning C4625. */

};

#endif // !BandwidthGroupWrap_H_
