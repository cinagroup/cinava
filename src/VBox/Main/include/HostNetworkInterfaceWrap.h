/** @file
 * VirtualBox API class wrapper header for IHostNetworkInterface.
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

#ifndef HostNetworkInterfaceWrap_H_
#define HostNetworkInterfaceWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostNetworkInterfaceWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostNetworkInterface)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostNetworkInterfaceWrap, IHostNetworkInterface)
    DECLARE_NOT_AGGREGATABLE(HostNetworkInterfaceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostNetworkInterfaceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostNetworkInterface)
        COM_INTERFACE_ENTRY2(IDispatch, IHostNetworkInterface)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostNetworkInterface)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostNetworkInterfaceWrap)

    /** @name Public IHostNetworkInterface properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ShortName))(BSTR *aShortName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DHCPEnabled))(BOOL *aDHCPEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPAddress))(BSTR *aIPAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NetworkMask))(BSTR *aNetworkMask) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPV6Supported))(BOOL *aIPV6Supported) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPV6Address))(BSTR *aIPV6Address) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPV6NetworkMaskPrefixLength))(ULONG *aIPV6NetworkMaskPrefixLength) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HardwareAddress))(BSTR *aHardwareAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MediumType))(HostNetworkInterfaceMediumType_T *aMediumType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Status))(HostNetworkInterfaceStatus_T *aStatus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InterfaceType))(HostNetworkInterfaceType_T *aInterfaceType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Wireless))(BOOL *aWireless) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHostNetworkInterface))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHostNetworkInterface))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHostNetworkInterface))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHostNetworkInterface))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostNetworkInterface methods
     * @{ */
    STDMETHOD(EnableStaticIPConfig)(IN_BSTR aIPAddress,
                                    IN_BSTR aNetworkMask) RT_OVERRIDE;
    STDMETHOD(EnableStaticIPConfigV6)(IN_BSTR aIPV6Address,
                                      ULONG aIPV6NetworkMaskPrefixLength) RT_OVERRIDE;
    STDMETHOD(EnableDynamicIPConfig)() RT_OVERRIDE;
    STDMETHOD(DHCPRediscover)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IHostNetworkInterface)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IHostNetworkInterface)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IHostNetworkInterface properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getShortName(com::Utf8Str &aShortName) = 0;
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getDHCPEnabled(BOOL *aDHCPEnabled) = 0;
    virtual HRESULT getIPAddress(com::Utf8Str &aIPAddress) = 0;
    virtual HRESULT getNetworkMask(com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT getIPV6Supported(BOOL *aIPV6Supported) = 0;
    virtual HRESULT getIPV6Address(com::Utf8Str &aIPV6Address) = 0;
    virtual HRESULT getIPV6NetworkMaskPrefixLength(ULONG *aIPV6NetworkMaskPrefixLength) = 0;
    virtual HRESULT getHardwareAddress(com::Utf8Str &aHardwareAddress) = 0;
    virtual HRESULT getMediumType(HostNetworkInterfaceMediumType_T *aMediumType) = 0;
    virtual HRESULT getStatus(HostNetworkInterfaceStatus_T *aStatus) = 0;
    virtual HRESULT getInterfaceType(HostNetworkInterfaceType_T *aInterfaceType) = 0;
    virtual HRESULT getWireless(BOOL *aWireless) = 0;
    /** @} */

    /** @name Wrapped IHostNetworkInterface methods
     * @{ */
    virtual HRESULT enableStaticIPConfig(const com::Utf8Str &aIPAddress,
                                         const com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT enableStaticIPConfigV6(const com::Utf8Str &aIPV6Address,
                                           ULONG aIPV6NetworkMaskPrefixLength) = 0;
    virtual HRESULT enableDynamicIPConfig() = 0;
    virtual HRESULT dHCPRediscover() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostNetworkInterfaceWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostNetworkInterfaceWrap_H_
