/** @file
 * VirtualBox API class wrapper header for ICloudNetwork.
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

#ifndef CloudNetworkWrap_H_
#define CloudNetworkWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudNetworkWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudNetwork)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudNetworkWrap, ICloudNetwork)
    DECLARE_NOT_AGGREGATABLE(CloudNetworkWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudNetworkWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudNetwork)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudNetwork)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudNetwork)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudNetworkWrap)

    /** @name Public ICloudNetwork properties
     * @{ */
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NetworkName))(IN_BSTR aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Provider))(BSTR *aProvider) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Provider))(IN_BSTR aProvider) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Profile))(BSTR *aProfile) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Profile))(IN_BSTR aProfile) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NetworkId))(BSTR *aNetworkId) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NetworkId))(IN_BSTR aNetworkId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12ICloudNetwork))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudNetwork methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1ICloudNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICloudNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ICloudNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ICloudNetwork)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICloudNetwork properties
     * @{ */
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT setNetworkName(const com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getProvider(com::Utf8Str &aProvider) = 0;
    virtual HRESULT setProvider(const com::Utf8Str &aProvider) = 0;
    virtual HRESULT getProfile(com::Utf8Str &aProfile) = 0;
    virtual HRESULT setProfile(const com::Utf8Str &aProfile) = 0;
    virtual HRESULT getNetworkId(com::Utf8Str &aNetworkId) = 0;
    virtual HRESULT setNetworkId(const com::Utf8Str &aNetworkId) = 0;
    /** @} */

    /** @name Wrapped ICloudNetwork methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudNetworkWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudNetworkWrap_H_
