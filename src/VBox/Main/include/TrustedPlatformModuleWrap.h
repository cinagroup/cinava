/** @file
 * VirtualBox API class wrapper header for ITrustedPlatformModule.
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

#ifndef TrustedPlatformModuleWrap_H_
#define TrustedPlatformModuleWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE TrustedPlatformModuleWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ITrustedPlatformModule)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(TrustedPlatformModuleWrap, ITrustedPlatformModule)
    DECLARE_NOT_AGGREGATABLE(TrustedPlatformModuleWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(TrustedPlatformModuleWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ITrustedPlatformModule)
        COM_INTERFACE_ENTRY2(IDispatch, ITrustedPlatformModule)
        VBOX_TWEAK_INTERFACE_ENTRY(ITrustedPlatformModule)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(TrustedPlatformModuleWrap)

    /** @name Public ITrustedPlatformModule properties
     * @{ */
    STDMETHOD(COMGETTER(Type))(TpmType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Type))(TpmType_T aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Location))(BSTR *aLocation) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Location))(IN_BSTR aLocation) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ITrustedPlatformModule))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ITrustedPlatformModule methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1ITrustedPlatformModule)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ITrustedPlatformModule)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ITrustedPlatformModule properties
     * @{ */
    virtual HRESULT getType(TpmType_T *aType) = 0;
    virtual HRESULT setType(TpmType_T aType) = 0;
    virtual HRESULT getLocation(com::Utf8Str &aLocation) = 0;
    virtual HRESULT setLocation(const com::Utf8Str &aLocation) = 0;
    /** @} */

    /** @name Wrapped ITrustedPlatformModule methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(TrustedPlatformModuleWrap); /* Shuts up MSC warning C4625. */

};

#endif // !TrustedPlatformModuleWrap_H_
