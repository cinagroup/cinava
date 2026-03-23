/** @file
 * VirtualBox API class wrapper header for IDHCPServer.
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

#ifndef DHCPServerWrap_H_
#define DHCPServerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DHCPServerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDHCPServer)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DHCPServerWrap, IDHCPServer)
    DECLARE_NOT_AGGREGATABLE(DHCPServerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DHCPServerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDHCPServer)
        COM_INTERFACE_ENTRY2(IDispatch, IDHCPServer)
        VBOX_TWEAK_INTERFACE_ENTRY(IDHCPServer)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DHCPServerWrap)

    /** @name Public IDHCPServer properties
     * @{ */
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IPAddress))(BSTR *aIPAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NetworkMask))(BSTR *aNetworkMask) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LowerIP))(BSTR *aLowerIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UpperIP))(BSTR *aUpperIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GlobalConfig))(IDHCPGlobalConfig **aGlobalConfig) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GroupConfigs))(ComSafeArrayOut(IDHCPGroupConfig *, aGroupConfigs)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IndividualConfigs))(ComSafeArrayOut(IDHCPIndividualConfig *, aIndividualConfigs)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDHCPServer))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDHCPServer))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IDHCPServer))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDHCPServer methods
     * @{ */
    STDMETHOD(SetConfiguration)(IN_BSTR aIPAddress,
                                IN_BSTR aNetworkMask,
                                IN_BSTR aFromIPAddress,
                                IN_BSTR aToIPAddress) RT_OVERRIDE;
    STDMETHOD(Start)(IN_BSTR aTrunkName,
                     IN_BSTR aTrunkType) RT_OVERRIDE;
    STDMETHOD(Stop)() RT_OVERRIDE;
    STDMETHOD(Restart)() RT_OVERRIDE;
    STDMETHOD(FindLeaseByMAC)(IN_BSTR aMac,
                              LONG aType,
                              BSTR *aAddress,
                              BSTR *aState,
                              LONG64 *aIssued,
                              LONG64 *aExpire) RT_OVERRIDE;
    STDMETHOD(GetConfig)(DHCPConfigScope_T aScope,
                         IN_BSTR aName,
                         ULONG aSlot,
                         BOOL aMayAdd,
                         IDHCPConfig **aConfig) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDHCPServer properties
     * @{ */
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getIPAddress(com::Utf8Str &aIPAddress) = 0;
    virtual HRESULT getNetworkMask(com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getLowerIP(com::Utf8Str &aLowerIP) = 0;
    virtual HRESULT getUpperIP(com::Utf8Str &aUpperIP) = 0;
    virtual HRESULT getGlobalConfig(ComPtr<IDHCPGlobalConfig> &aGlobalConfig) = 0;
    virtual HRESULT getGroupConfigs(std::vector<ComPtr<IDHCPGroupConfig> > &aGroupConfigs) = 0;
    virtual HRESULT getIndividualConfigs(std::vector<ComPtr<IDHCPIndividualConfig> > &aIndividualConfigs) = 0;
    /** @} */

    /** @name Wrapped IDHCPServer methods
     * @{ */
    virtual HRESULT setConfiguration(const com::Utf8Str &aIPAddress,
                                     const com::Utf8Str &aNetworkMask,
                                     const com::Utf8Str &aFromIPAddress,
                                     const com::Utf8Str &aToIPAddress) = 0;
    virtual HRESULT start(const com::Utf8Str &aTrunkName,
                          const com::Utf8Str &aTrunkType) = 0;
    virtual HRESULT stop() = 0;
    virtual HRESULT restart() = 0;
    virtual HRESULT findLeaseByMAC(const com::Utf8Str &aMac,
                                   LONG aType,
                                   com::Utf8Str &aAddress,
                                   com::Utf8Str &aState,
                                   LONG64 *aIssued,
                                   LONG64 *aExpire) = 0;
    virtual HRESULT getConfig(DHCPConfigScope_T aScope,
                              const com::Utf8Str &aName,
                              ULONG aSlot,
                              BOOL aMayAdd,
                              ComPtr<IDHCPConfig> &aConfig) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DHCPServerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DHCPServerWrap_H_
