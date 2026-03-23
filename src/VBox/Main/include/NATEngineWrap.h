/** @file
 * VirtualBox API class wrapper header for INATEngine.
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

#ifndef NATEngineWrap_H_
#define NATEngineWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NATEngineWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(INATEngine)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATEngineWrap, INATEngine)
    DECLARE_NOT_AGGREGATABLE(NATEngineWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NATEngineWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INATEngine)
        COM_INTERFACE_ENTRY2(IDispatch, INATEngine)
        VBOX_TWEAK_INTERFACE_ENTRY(INATEngine)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(NATEngineWrap)

    /** @name Public INATEngine properties
     * @{ */
    STDMETHOD(COMGETTER(Network))(BSTR *aNetwork) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Network))(IN_BSTR aNetwork) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostIP))(BSTR *aHostIP) RT_OVERRIDE;
    STDMETHOD(COMSETTER(HostIP))(IN_BSTR aHostIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TFTPPrefix))(BSTR *aTFTPPrefix) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TFTPPrefix))(IN_BSTR aTFTPPrefix) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TFTPBootFile))(BSTR *aTFTPBootFile) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TFTPBootFile))(IN_BSTR aTFTPBootFile) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TFTPNextServer))(BSTR *aTFTPNextServer) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TFTPNextServer))(IN_BSTR aTFTPNextServer) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AliasMode))(ULONG *aAliasMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AliasMode))(ULONG aAliasMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DNSPassDomain))(BOOL *aDNSPassDomain) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DNSPassDomain))(BOOL aDNSPassDomain) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DNSProxy))(BOOL *aDNSProxy) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DNSProxy))(BOOL aDNSProxy) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DNSUseHostResolver))(BOOL *aDNSUseHostResolver) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DNSUseHostResolver))(BOOL aDNSUseHostResolver) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Redirects))(ComSafeArrayOut(BSTR, aRedirects)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LocalhostReachable))(BOOL *aLocalhostReachable) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LocalhostReachable))(BOOL aLocalhostReachable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ForwardBroadcast))(BOOL *aForwardBroadcast) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ForwardBroadcast))(BOOL aForwardBroadcast) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EnableTFTP))(BOOL *aEnableTFTP) RT_OVERRIDE;
    STDMETHOD(COMSETTER(EnableTFTP))(BOOL aEnableTFTP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NatMRU))(ULONG *aNatMRU) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NatMRU))(ULONG aNatMRU) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPv6Enabled))(BOOL *aIPv6Enabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IPv6Enabled))(BOOL aIPv6Enabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPv6Prefix))(BSTR *aIPv6Prefix) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IPv6Prefix))(IN_BSTR aIPv6Prefix) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1INATEngine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2INATEngine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3INATEngine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4INATEngine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5INATEngine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6INATEngine))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public INATEngine methods
     * @{ */
    STDMETHOD(SetNetworkSettings)(ULONG aMtu,
                                  ULONG aSockSnd,
                                  ULONG aSockRcv,
                                  ULONG aTcpWndSnd,
                                  ULONG aTcpWndRcv) RT_OVERRIDE;
    STDMETHOD(GetNetworkSettings)(ULONG *aMtu,
                                  ULONG *aSockSnd,
                                  ULONG *aSockRcv,
                                  ULONG *aTcpWndSnd,
                                  ULONG *aTcpWndRcv) RT_OVERRIDE;
    STDMETHOD(AddRedirect)(IN_BSTR aName,
                           NATProtocol_T aProto,
                           IN_BSTR aHostIP,
                           USHORT aHostPort,
                           IN_BSTR aGuestIP,
                           USHORT aGuestPort) RT_OVERRIDE;
    STDMETHOD(RemoveRedirect)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1INATEngine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2INATEngine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3INATEngine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4INATEngine)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped INATEngine properties
     * @{ */
    virtual HRESULT getNetwork(com::Utf8Str &aNetwork) = 0;
    virtual HRESULT setNetwork(const com::Utf8Str &aNetwork) = 0;
    virtual HRESULT getHostIP(com::Utf8Str &aHostIP) = 0;
    virtual HRESULT setHostIP(const com::Utf8Str &aHostIP) = 0;
    virtual HRESULT getTFTPPrefix(com::Utf8Str &aTFTPPrefix) = 0;
    virtual HRESULT setTFTPPrefix(const com::Utf8Str &aTFTPPrefix) = 0;
    virtual HRESULT getTFTPBootFile(com::Utf8Str &aTFTPBootFile) = 0;
    virtual HRESULT setTFTPBootFile(const com::Utf8Str &aTFTPBootFile) = 0;
    virtual HRESULT getTFTPNextServer(com::Utf8Str &aTFTPNextServer) = 0;
    virtual HRESULT setTFTPNextServer(const com::Utf8Str &aTFTPNextServer) = 0;
    virtual HRESULT getAliasMode(ULONG *aAliasMode) = 0;
    virtual HRESULT setAliasMode(ULONG aAliasMode) = 0;
    virtual HRESULT getDNSPassDomain(BOOL *aDNSPassDomain) = 0;
    virtual HRESULT setDNSPassDomain(BOOL aDNSPassDomain) = 0;
    virtual HRESULT getDNSProxy(BOOL *aDNSProxy) = 0;
    virtual HRESULT setDNSProxy(BOOL aDNSProxy) = 0;
    virtual HRESULT getDNSUseHostResolver(BOOL *aDNSUseHostResolver) = 0;
    virtual HRESULT setDNSUseHostResolver(BOOL aDNSUseHostResolver) = 0;
    virtual HRESULT getRedirects(std::vector<com::Utf8Str> &aRedirects) = 0;
    virtual HRESULT getLocalhostReachable(BOOL *aLocalhostReachable) = 0;
    virtual HRESULT setLocalhostReachable(BOOL aLocalhostReachable) = 0;
    virtual HRESULT getForwardBroadcast(BOOL *aForwardBroadcast) = 0;
    virtual HRESULT setForwardBroadcast(BOOL aForwardBroadcast) = 0;
    virtual HRESULT getEnableTFTP(BOOL *aEnableTFTP) = 0;
    virtual HRESULT setEnableTFTP(BOOL aEnableTFTP) = 0;
    virtual HRESULT getNatMRU(ULONG *aNatMRU) = 0;
    virtual HRESULT setNatMRU(ULONG aNatMRU) = 0;
    virtual HRESULT getIPv6Enabled(BOOL *aIPv6Enabled) = 0;
    virtual HRESULT setIPv6Enabled(BOOL aIPv6Enabled) = 0;
    virtual HRESULT getIPv6Prefix(com::Utf8Str &aIPv6Prefix) = 0;
    virtual HRESULT setIPv6Prefix(const com::Utf8Str &aIPv6Prefix) = 0;
    /** @} */

    /** @name Wrapped INATEngine methods
     * @{ */
    virtual HRESULT setNetworkSettings(ULONG aMtu,
                                       ULONG aSockSnd,
                                       ULONG aSockRcv,
                                       ULONG aTcpWndSnd,
                                       ULONG aTcpWndRcv) = 0;
    virtual HRESULT getNetworkSettings(ULONG *aMtu,
                                       ULONG *aSockSnd,
                                       ULONG *aSockRcv,
                                       ULONG *aTcpWndSnd,
                                       ULONG *aTcpWndRcv) = 0;
    virtual HRESULT addRedirect(const com::Utf8Str &aName,
                                NATProtocol_T aProto,
                                const com::Utf8Str &aHostIP,
                                USHORT aHostPort,
                                const com::Utf8Str &aGuestIP,
                                USHORT aGuestPort) = 0;
    virtual HRESULT removeRedirect(const com::Utf8Str &aName) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(NATEngineWrap); /* Shuts up MSC warning C4625. */

};

#endif // !NATEngineWrap_H_
