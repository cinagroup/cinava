/** @file
 * VirtualBox API class wrapper header for INATNetwork.
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

#ifndef NATNetworkWrap_H_
#define NATNetworkWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NATNetworkWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(INATNetwork)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkWrap, INATNetwork)
    DECLARE_NOT_AGGREGATABLE(NATNetworkWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NATNetworkWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INATNetwork)
        COM_INTERFACE_ENTRY2(IDispatch, INATNetwork)
        VBOX_TWEAK_INTERFACE_ENTRY(INATNetwork)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(NATNetworkWrap)

    /** @name Public INATNetwork properties
     * @{ */
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NetworkName))(IN_BSTR aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Network))(BSTR *aNetwork) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Network))(IN_BSTR aNetwork) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Gateway))(BSTR *aGateway) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPv6Enabled))(BOOL *aIPv6Enabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IPv6Enabled))(BOOL aIPv6Enabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPv6Prefix))(BSTR *aIPv6Prefix) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IPv6Prefix))(IN_BSTR aIPv6Prefix) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AdvertiseDefaultIPv6RouteEnabled))(BOOL *aAdvertiseDefaultIPv6RouteEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AdvertiseDefaultIPv6RouteEnabled))(BOOL aAdvertiseDefaultIPv6RouteEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NeedDhcpServer))(BOOL *aNeedDhcpServer) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NeedDhcpServer))(BOOL aNeedDhcpServer) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PortForwardRules4))(ComSafeArrayOut(BSTR, aPortForwardRules4)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LocalMappings))(ComSafeArrayOut(BSTR, aLocalMappings)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LocalhostReachable))(BOOL *aLocalhostReachable) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LocalhostReachable))(BOOL aLocalhostReachable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ForwardBroadcast))(BOOL *aForwardBroadcast) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ForwardBroadcast))(BOOL aForwardBroadcast) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NatMTU))(ULONG *aNatMTU) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NatMTU))(ULONG aNatMTU) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NatMRU))(ULONG *aNatMRU) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NatMRU))(ULONG aNatMRU) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LoopbackIp6))(LONG *aLoopbackIp6) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LoopbackIp6))(LONG aLoopbackIp6) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PortForwardRules6))(ComSafeArrayOut(BSTR, aPortForwardRules6)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8INATNetwork))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public INATNetwork methods
     * @{ */
    STDMETHOD(AddLocalMapping)(IN_BSTR aHostid,
                               LONG aOffset) RT_OVERRIDE;
    STDMETHOD(AddPortForwardRule)(BOOL aIsIpv6,
                                  IN_BSTR aRuleName,
                                  NATProtocol_T aProto,
                                  IN_BSTR aHostIP,
                                  USHORT aHostPort,
                                  IN_BSTR aGuestIP,
                                  USHORT aGuestPort) RT_OVERRIDE;
    STDMETHOD(RemovePortForwardRule)(BOOL aIsIpv6,
                                     IN_BSTR aRuleName) RT_OVERRIDE;
    STDMETHOD(Start)() RT_OVERRIDE;
    STDMETHOD(Stop)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1INATNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2INATNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3INATNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4INATNetwork)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped INATNetwork properties
     * @{ */
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT setNetworkName(const com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getNetwork(com::Utf8Str &aNetwork) = 0;
    virtual HRESULT setNetwork(const com::Utf8Str &aNetwork) = 0;
    virtual HRESULT getGateway(com::Utf8Str &aGateway) = 0;
    virtual HRESULT getIPv6Enabled(BOOL *aIPv6Enabled) = 0;
    virtual HRESULT setIPv6Enabled(BOOL aIPv6Enabled) = 0;
    virtual HRESULT getIPv6Prefix(com::Utf8Str &aIPv6Prefix) = 0;
    virtual HRESULT setIPv6Prefix(const com::Utf8Str &aIPv6Prefix) = 0;
    virtual HRESULT getAdvertiseDefaultIPv6RouteEnabled(BOOL *aAdvertiseDefaultIPv6RouteEnabled) = 0;
    virtual HRESULT setAdvertiseDefaultIPv6RouteEnabled(BOOL aAdvertiseDefaultIPv6RouteEnabled) = 0;
    virtual HRESULT getNeedDhcpServer(BOOL *aNeedDhcpServer) = 0;
    virtual HRESULT setNeedDhcpServer(BOOL aNeedDhcpServer) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getPortForwardRules4(std::vector<com::Utf8Str> &aPortForwardRules4) = 0;
    virtual HRESULT getLocalMappings(std::vector<com::Utf8Str> &aLocalMappings) = 0;
    virtual HRESULT getLocalhostReachable(BOOL *aLocalhostReachable) = 0;
    virtual HRESULT setLocalhostReachable(BOOL aLocalhostReachable) = 0;
    virtual HRESULT getForwardBroadcast(BOOL *aForwardBroadcast) = 0;
    virtual HRESULT setForwardBroadcast(BOOL aForwardBroadcast) = 0;
    virtual HRESULT getNatMTU(ULONG *aNatMTU) = 0;
    virtual HRESULT setNatMTU(ULONG aNatMTU) = 0;
    virtual HRESULT getNatMRU(ULONG *aNatMRU) = 0;
    virtual HRESULT setNatMRU(ULONG aNatMRU) = 0;
    virtual HRESULT getLoopbackIp6(LONG *aLoopbackIp6) = 0;
    virtual HRESULT setLoopbackIp6(LONG aLoopbackIp6) = 0;
    virtual HRESULT getPortForwardRules6(std::vector<com::Utf8Str> &aPortForwardRules6) = 0;
    /** @} */

    /** @name Wrapped INATNetwork methods
     * @{ */
    virtual HRESULT addLocalMapping(const com::Utf8Str &aHostid,
                                    LONG aOffset) = 0;
    virtual HRESULT addPortForwardRule(BOOL aIsIpv6,
                                       const com::Utf8Str &aRuleName,
                                       NATProtocol_T aProto,
                                       const com::Utf8Str &aHostIP,
                                       USHORT aHostPort,
                                       const com::Utf8Str &aGuestIP,
                                       USHORT aGuestPort) = 0;
    virtual HRESULT removePortForwardRule(BOOL aIsIpv6,
                                          const com::Utf8Str &aRuleName) = 0;
    virtual HRESULT start() = 0;
    virtual HRESULT stop() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(NATNetworkWrap); /* Shuts up MSC warning C4625. */

};

#endif // !NATNetworkWrap_H_
