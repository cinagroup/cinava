/** @file
 * VirtualBox API class wrapper header for ICloudNetworkGatewayInfo.
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

#ifndef CloudNetworkGatewayInfoWrap_H_
#define CloudNetworkGatewayInfoWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudNetworkGatewayInfoWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudNetworkGatewayInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudNetworkGatewayInfoWrap, ICloudNetworkGatewayInfo)
    DECLARE_NOT_AGGREGATABLE(CloudNetworkGatewayInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudNetworkGatewayInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudNetworkGatewayInfo)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudNetworkGatewayInfo)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudNetworkGatewayInfo)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudNetworkGatewayInfoWrap)

    /** @name Public ICloudNetworkGatewayInfo properties
     * @{ */
    STDMETHOD(COMGETTER(PublicIP))(BSTR *aPublicIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SecondaryPublicIP))(BSTR *aSecondaryPublicIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MacAddress))(BSTR *aMacAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InstanceId))(BSTR *aInstanceId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudNetworkGatewayInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudNetworkGatewayInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudNetworkGatewayInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudNetworkGatewayInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudNetworkGatewayInfo))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudNetworkGatewayInfo methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped ICloudNetworkGatewayInfo properties
     * @{ */
    virtual HRESULT getPublicIP(com::Utf8Str &aPublicIP) = 0;
    virtual HRESULT getSecondaryPublicIP(com::Utf8Str &aSecondaryPublicIP) = 0;
    virtual HRESULT getMacAddress(com::Utf8Str &aMacAddress) = 0;
    virtual HRESULT getInstanceId(com::Utf8Str &aInstanceId) = 0;
    /** @} */

    /** @name Wrapped ICloudNetworkGatewayInfo methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudNetworkGatewayInfoWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudNetworkGatewayInfoWrap_H_
