/** @file
 * VirtualBox API class wrapper header for INetworkAdapter.
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

#ifndef NetworkAdapterWrap_H_
#define NetworkAdapterWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NetworkAdapterWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(INetworkAdapter)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NetworkAdapterWrap, INetworkAdapter)
    DECLARE_NOT_AGGREGATABLE(NetworkAdapterWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NetworkAdapterWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INetworkAdapter)
        COM_INTERFACE_ENTRY2(IDispatch, INetworkAdapter)
        VBOX_TWEAK_INTERFACE_ENTRY(INetworkAdapter)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(NetworkAdapterWrap)

    /** @name Public INetworkAdapter properties
     * @{ */
    STDMETHOD(COMGETTER(AdapterType))(NetworkAdapterType_T *aAdapterType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AdapterType))(NetworkAdapterType_T aAdapterType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Slot))(ULONG *aSlot) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MACAddress))(BSTR *aMACAddress) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MACAddress))(IN_BSTR aMACAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AttachmentType))(NetworkAttachmentType_T *aAttachmentType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AttachmentType))(NetworkAttachmentType_T aAttachmentType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BridgedInterface))(BSTR *aBridgedInterface) RT_OVERRIDE;
    STDMETHOD(COMSETTER(BridgedInterface))(IN_BSTR aBridgedInterface) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostOnlyInterface))(BSTR *aHostOnlyInterface) RT_OVERRIDE;
    STDMETHOD(COMSETTER(HostOnlyInterface))(IN_BSTR aHostOnlyInterface) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostOnlyNetwork))(BSTR *aHostOnlyNetwork) RT_OVERRIDE;
    STDMETHOD(COMSETTER(HostOnlyNetwork))(IN_BSTR aHostOnlyNetwork) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalNetwork))(BSTR *aInternalNetwork) RT_OVERRIDE;
    STDMETHOD(COMSETTER(InternalNetwork))(IN_BSTR aInternalNetwork) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NATNetwork))(BSTR *aNATNetwork) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NATNetwork))(IN_BSTR aNATNetwork) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GenericDriver))(BSTR *aGenericDriver) RT_OVERRIDE;
    STDMETHOD(COMSETTER(GenericDriver))(IN_BSTR aGenericDriver) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CloudNetwork))(BSTR *aCloudNetwork) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CloudNetwork))(IN_BSTR aCloudNetwork) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CableConnected))(BOOL *aCableConnected) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CableConnected))(BOOL aCableConnected) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LineSpeed))(ULONG *aLineSpeed) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LineSpeed))(ULONG aLineSpeed) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PromiscModePolicy))(NetworkAdapterPromiscModePolicy_T *aPromiscModePolicy) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PromiscModePolicy))(NetworkAdapterPromiscModePolicy_T aPromiscModePolicy) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TraceEnabled))(BOOL *aTraceEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TraceEnabled))(BOOL aTraceEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TraceFile))(BSTR *aTraceFile) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TraceFile))(IN_BSTR aTraceFile) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NATEngine))(INATEngine **aNATEngine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BootPriority))(ULONG *aBootPriority) RT_OVERRIDE;
    STDMETHOD(COMSETTER(BootPriority))(ULONG aBootPriority) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BandwidthGroup))(IBandwidthGroup **aBandwidthGroup) RT_OVERRIDE;
    STDMETHOD(COMSETTER(BandwidthGroup))(IBandwidthGroup *aBandwidthGroup) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8INetworkAdapter))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public INetworkAdapter methods
     * @{ */
    STDMETHOD(GetProperty)(IN_BSTR aKey,
                           BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(SetProperty)(IN_BSTR aKey,
                           IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(GetProperties)(IN_BSTR aNames,
                             ComSafeArrayOut(BSTR, aReturnNames),
                             ComSafeArrayOut(BSTR, aReturnValues)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1INetworkAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2INetworkAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3INetworkAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4INetworkAdapter)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped INetworkAdapter properties
     * @{ */
    virtual HRESULT getAdapterType(NetworkAdapterType_T *aAdapterType) = 0;
    virtual HRESULT setAdapterType(NetworkAdapterType_T aAdapterType) = 0;
    virtual HRESULT getSlot(ULONG *aSlot) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getMACAddress(com::Utf8Str &aMACAddress) = 0;
    virtual HRESULT setMACAddress(const com::Utf8Str &aMACAddress) = 0;
    virtual HRESULT getAttachmentType(NetworkAttachmentType_T *aAttachmentType) = 0;
    virtual HRESULT setAttachmentType(NetworkAttachmentType_T aAttachmentType) = 0;
    virtual HRESULT getBridgedInterface(com::Utf8Str &aBridgedInterface) = 0;
    virtual HRESULT setBridgedInterface(const com::Utf8Str &aBridgedInterface) = 0;
    virtual HRESULT getHostOnlyInterface(com::Utf8Str &aHostOnlyInterface) = 0;
    virtual HRESULT setHostOnlyInterface(const com::Utf8Str &aHostOnlyInterface) = 0;
    virtual HRESULT getHostOnlyNetwork(com::Utf8Str &aHostOnlyNetwork) = 0;
    virtual HRESULT setHostOnlyNetwork(const com::Utf8Str &aHostOnlyNetwork) = 0;
    virtual HRESULT getInternalNetwork(com::Utf8Str &aInternalNetwork) = 0;
    virtual HRESULT setInternalNetwork(const com::Utf8Str &aInternalNetwork) = 0;
    virtual HRESULT getNATNetwork(com::Utf8Str &aNATNetwork) = 0;
    virtual HRESULT setNATNetwork(const com::Utf8Str &aNATNetwork) = 0;
    virtual HRESULT getGenericDriver(com::Utf8Str &aGenericDriver) = 0;
    virtual HRESULT setGenericDriver(const com::Utf8Str &aGenericDriver) = 0;
    virtual HRESULT getCloudNetwork(com::Utf8Str &aCloudNetwork) = 0;
    virtual HRESULT setCloudNetwork(const com::Utf8Str &aCloudNetwork) = 0;
    virtual HRESULT getCableConnected(BOOL *aCableConnected) = 0;
    virtual HRESULT setCableConnected(BOOL aCableConnected) = 0;
    virtual HRESULT getLineSpeed(ULONG *aLineSpeed) = 0;
    virtual HRESULT setLineSpeed(ULONG aLineSpeed) = 0;
    virtual HRESULT getPromiscModePolicy(NetworkAdapterPromiscModePolicy_T *aPromiscModePolicy) = 0;
    virtual HRESULT setPromiscModePolicy(NetworkAdapterPromiscModePolicy_T aPromiscModePolicy) = 0;
    virtual HRESULT getTraceEnabled(BOOL *aTraceEnabled) = 0;
    virtual HRESULT setTraceEnabled(BOOL aTraceEnabled) = 0;
    virtual HRESULT getTraceFile(com::Utf8Str &aTraceFile) = 0;
    virtual HRESULT setTraceFile(const com::Utf8Str &aTraceFile) = 0;
    virtual HRESULT getNATEngine(ComPtr<INATEngine> &aNATEngine) = 0;
    virtual HRESULT getBootPriority(ULONG *aBootPriority) = 0;
    virtual HRESULT setBootPriority(ULONG aBootPriority) = 0;
    virtual HRESULT getBandwidthGroup(ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT setBandwidthGroup(const ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    /** @} */

    /** @name Wrapped INetworkAdapter methods
     * @{ */
    virtual HRESULT getProperty(const com::Utf8Str &aKey,
                                com::Utf8Str &aValue) = 0;
    virtual HRESULT setProperty(const com::Utf8Str &aKey,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT getProperties(const com::Utf8Str &aNames,
                                  std::vector<com::Utf8Str> &aReturnNames,
                                  std::vector<com::Utf8Str> &aReturnValues) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(NetworkAdapterWrap); /* Shuts up MSC warning C4625. */

};

#endif // !NetworkAdapterWrap_H_
