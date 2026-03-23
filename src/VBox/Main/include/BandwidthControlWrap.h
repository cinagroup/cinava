/** @file
 * VirtualBox API class wrapper header for IBandwidthControl.
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

#ifndef BandwidthControlWrap_H_
#define BandwidthControlWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE BandwidthControlWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IBandwidthControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(BandwidthControlWrap, IBandwidthControl)
    DECLARE_NOT_AGGREGATABLE(BandwidthControlWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(BandwidthControlWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IBandwidthControl)
        COM_INTERFACE_ENTRY2(IDispatch, IBandwidthControl)
        VBOX_TWEAK_INTERFACE_ENTRY(IBandwidthControl)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(BandwidthControlWrap)

    /** @name Public IBandwidthControl properties
     * @{ */
    STDMETHOD(COMGETTER(NumGroups))(ULONG *aNumGroups) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IBandwidthControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IBandwidthControl))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IBandwidthControl methods
     * @{ */
    STDMETHOD(CreateBandwidthGroup)(IN_BSTR aName,
                                    BandwidthGroupType_T aType,
                                    LONG64 aMaxBytesPerSec) RT_OVERRIDE;
    STDMETHOD(DeleteBandwidthGroup)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(GetBandwidthGroup)(IN_BSTR aName,
                                 IBandwidthGroup **aBandwidthGroup) RT_OVERRIDE;
    STDMETHOD(GetAllBandwidthGroups)(ComSafeArrayOut(IBandwidthGroup *, aBandwidthGroups)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IBandwidthControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IBandwidthControl)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IBandwidthControl properties
     * @{ */
    virtual HRESULT getNumGroups(ULONG *aNumGroups) = 0;
    /** @} */

    /** @name Wrapped IBandwidthControl methods
     * @{ */
    virtual HRESULT createBandwidthGroup(const com::Utf8Str &aName,
                                         BandwidthGroupType_T aType,
                                         LONG64 aMaxBytesPerSec) = 0;
    virtual HRESULT deleteBandwidthGroup(const com::Utf8Str &aName) = 0;
    virtual HRESULT getBandwidthGroup(const com::Utf8Str &aName,
                                      ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT getAllBandwidthGroups(std::vector<ComPtr<IBandwidthGroup> > &aBandwidthGroups) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(BandwidthControlWrap); /* Shuts up MSC warning C4625. */

};

#endif // !BandwidthControlWrap_H_
