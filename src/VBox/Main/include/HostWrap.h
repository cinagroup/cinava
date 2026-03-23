/** @file
 * VirtualBox API class wrapper header for IHost.
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

#ifndef HostWrap_H_
#define HostWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHost)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostWrap, IHost)
    DECLARE_NOT_AGGREGATABLE(HostWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHost)
        COM_INTERFACE_ENTRY2(IDispatch, IHost)
        VBOX_TWEAK_INTERFACE_ENTRY(IHost)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostWrap)

    /** @name Public IHost properties
     * @{ */
    STDMETHOD(COMGETTER(Architecture))(PlatformArchitecture_T *aArchitecture) RT_OVERRIDE;
    STDMETHOD(COMGETTER(X86))(IHostX86 **aX86) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DVDDrives))(ComSafeArrayOut(IMedium *, aDVDDrives)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FloppyDrives))(ComSafeArrayOut(IMedium *, aFloppyDrives)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioDevices))(ComSafeArrayOut(IHostAudioDevice *, aAudioDevices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(USBDevices))(ComSafeArrayOut(IHostUSBDevice *, aUSBDevices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(USBDeviceFilters))(ComSafeArrayOut(IHostUSBDeviceFilter *, aUSBDeviceFilters)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NetworkInterfaces))(ComSafeArrayOut(IHostNetworkInterface *, aNetworkInterfaces)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NameServers))(ComSafeArrayOut(BSTR, aNameServers)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(V6NameServers))(ComSafeArrayOut(BSTR, aV6NameServers)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DomainName))(BSTR *aDomainName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SearchStrings))(ComSafeArrayOut(BSTR, aSearchStrings)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProcessorCount))(ULONG *aProcessorCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProcessorOnlineCount))(ULONG *aProcessorOnlineCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProcessorCoreCount))(ULONG *aProcessorCoreCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProcessorOnlineCoreCount))(ULONG *aProcessorOnlineCoreCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostDrives))(ComSafeArrayOut(IHostDrive *, aHostDrives)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MemorySize))(ULONG *aMemorySize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MemoryAvailable))(ULONG *aMemoryAvailable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OperatingSystem))(BSTR *aOperatingSystem) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OSVersion))(BSTR *aOSVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UTCTime))(LONG64 *aUTCTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoInputDevices))(ComSafeArrayOut(IHostVideoInputDevice *, aVideoInputDevices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UpdateHost))(IUpdateAgent **aUpdateHost) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UpdateExtPack))(IUpdateAgent **aUpdateExtPack) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UpdateGuestAdditions))(IUpdateAgent **aUpdateGuestAdditions) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IHost))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IHost))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHost methods
     * @{ */
    STDMETHOD(GetProcessorSpeed)(ULONG aCpuId,
                                 ULONG *aSpeed) RT_OVERRIDE;
    STDMETHOD(GetProcessorFeature)(ProcessorFeature_T aFeature,
                                   BOOL *aSupported) RT_OVERRIDE;
    STDMETHOD(GetProcessorDescription)(ULONG aCpuId,
                                       BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(CreateHostOnlyNetworkInterface)(IHostNetworkInterface **aHostInterface,
                                              IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(RemoveHostOnlyNetworkInterface)(IN_BSTR aId,
                                              IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CreateUSBDeviceFilter)(IN_BSTR aName,
                                     IHostUSBDeviceFilter **aFilter) RT_OVERRIDE;
    STDMETHOD(InsertUSBDeviceFilter)(ULONG aPosition,
                                     IHostUSBDeviceFilter *aFilter) RT_OVERRIDE;
    STDMETHOD(RemoveUSBDeviceFilter)(ULONG aPosition) RT_OVERRIDE;
    STDMETHOD(FindHostDVDDrive)(IN_BSTR aName,
                                IMedium **aDrive) RT_OVERRIDE;
    STDMETHOD(FindHostFloppyDrive)(IN_BSTR aName,
                                   IMedium **aDrive) RT_OVERRIDE;
    STDMETHOD(FindHostNetworkInterfaceByName)(IN_BSTR aName,
                                              IHostNetworkInterface **aNetworkInterface) RT_OVERRIDE;
    STDMETHOD(FindHostNetworkInterfaceById)(IN_BSTR aId,
                                            IHostNetworkInterface **aNetworkInterface) RT_OVERRIDE;
    STDMETHOD(FindHostNetworkInterfacesOfType)(HostNetworkInterfaceType_T aType,
                                               ComSafeArrayOut(IHostNetworkInterface *, aNetworkInterfaces)) RT_OVERRIDE;
    STDMETHOD(FindUSBDeviceById)(IN_BSTR aId,
                                 IHostUSBDevice **aDevice) RT_OVERRIDE;
    STDMETHOD(FindUSBDeviceByAddress)(IN_BSTR aName,
                                      IHostUSBDevice **aDevice) RT_OVERRIDE;
    STDMETHOD(GenerateMACAddress)(BSTR *aAddress) RT_OVERRIDE;
    STDMETHOD(AddUSBDeviceSource)(IN_BSTR aBackend,
                                  IN_BSTR aId,
                                  IN_BSTR aAddress,
                                  ComSafeArrayIn(IN_BSTR, aPropertyNames),
                                  ComSafeArrayIn(IN_BSTR, aPropertyValues)) RT_OVERRIDE;
    STDMETHOD(RemoveUSBDeviceSource)(IN_BSTR aId) RT_OVERRIDE;
    STDMETHOD(IsExecutionEngineSupported)(CPUArchitecture_T aCpuArchitecture,
                                          VMExecutionEngine_T aExecutionEngine,
                                          BOOL *aIsSupported) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IHost)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IHost)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IHost)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IHost)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IHost)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IHost)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IHost properties
     * @{ */
    virtual HRESULT getArchitecture(PlatformArchitecture_T *aArchitecture) = 0;
    virtual HRESULT getX86(ComPtr<IHostX86> &aX86) = 0;
    virtual HRESULT getDVDDrives(std::vector<ComPtr<IMedium> > &aDVDDrives) = 0;
    virtual HRESULT getFloppyDrives(std::vector<ComPtr<IMedium> > &aFloppyDrives) = 0;
    virtual HRESULT getAudioDevices(std::vector<ComPtr<IHostAudioDevice> > &aAudioDevices) = 0;
    virtual HRESULT getUSBDevices(std::vector<ComPtr<IHostUSBDevice> > &aUSBDevices) = 0;
    virtual HRESULT getUSBDeviceFilters(std::vector<ComPtr<IHostUSBDeviceFilter> > &aUSBDeviceFilters) = 0;
    virtual HRESULT getNetworkInterfaces(std::vector<ComPtr<IHostNetworkInterface> > &aNetworkInterfaces) = 0;
    virtual HRESULT getNameServers(std::vector<com::Utf8Str> &aNameServers) = 0;
    virtual HRESULT getV6NameServers(std::vector<com::Utf8Str> &aV6NameServers) = 0;
    virtual HRESULT getDomainName(com::Utf8Str &aDomainName) = 0;
    virtual HRESULT getSearchStrings(std::vector<com::Utf8Str> &aSearchStrings) = 0;
    virtual HRESULT getProcessorCount(ULONG *aProcessorCount) = 0;
    virtual HRESULT getProcessorOnlineCount(ULONG *aProcessorOnlineCount) = 0;
    virtual HRESULT getProcessorCoreCount(ULONG *aProcessorCoreCount) = 0;
    virtual HRESULT getProcessorOnlineCoreCount(ULONG *aProcessorOnlineCoreCount) = 0;
    virtual HRESULT getHostDrives(std::vector<ComPtr<IHostDrive> > &aHostDrives) = 0;
    virtual HRESULT getMemorySize(ULONG *aMemorySize) = 0;
    virtual HRESULT getMemoryAvailable(ULONG *aMemoryAvailable) = 0;
    virtual HRESULT getOperatingSystem(com::Utf8Str &aOperatingSystem) = 0;
    virtual HRESULT getOSVersion(com::Utf8Str &aOSVersion) = 0;
    virtual HRESULT getUTCTime(LONG64 *aUTCTime) = 0;
    virtual HRESULT getVideoInputDevices(std::vector<ComPtr<IHostVideoInputDevice> > &aVideoInputDevices) = 0;
    virtual HRESULT getUpdateHost(ComPtr<IUpdateAgent> &aUpdateHost) = 0;
    virtual HRESULT getUpdateExtPack(ComPtr<IUpdateAgent> &aUpdateExtPack) = 0;
    virtual HRESULT getUpdateGuestAdditions(ComPtr<IUpdateAgent> &aUpdateGuestAdditions) = 0;
    /** @} */

    /** @name Wrapped IHost methods
     * @{ */
    virtual HRESULT getProcessorSpeed(ULONG aCpuId,
                                      ULONG *aSpeed) = 0;
    virtual HRESULT getProcessorFeature(ProcessorFeature_T aFeature,
                                        BOOL *aSupported) = 0;
    virtual HRESULT getProcessorDescription(ULONG aCpuId,
                                            com::Utf8Str &aDescription) = 0;
    virtual HRESULT createHostOnlyNetworkInterface(ComPtr<IHostNetworkInterface> &aHostInterface,
                                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT removeHostOnlyNetworkInterface(const com::Guid &aId,
                                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createUSBDeviceFilter(const com::Utf8Str &aName,
                                          ComPtr<IHostUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT insertUSBDeviceFilter(ULONG aPosition,
                                          const ComPtr<IHostUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT removeUSBDeviceFilter(ULONG aPosition) = 0;
    virtual HRESULT findHostDVDDrive(const com::Utf8Str &aName,
                                     ComPtr<IMedium> &aDrive) = 0;
    virtual HRESULT findHostFloppyDrive(const com::Utf8Str &aName,
                                        ComPtr<IMedium> &aDrive) = 0;
    virtual HRESULT findHostNetworkInterfaceByName(const com::Utf8Str &aName,
                                                   ComPtr<IHostNetworkInterface> &aNetworkInterface) = 0;
    virtual HRESULT findHostNetworkInterfaceById(const com::Guid &aId,
                                                 ComPtr<IHostNetworkInterface> &aNetworkInterface) = 0;
    virtual HRESULT findHostNetworkInterfacesOfType(HostNetworkInterfaceType_T aType,
                                                    std::vector<ComPtr<IHostNetworkInterface> > &aNetworkInterfaces) = 0;
    virtual HRESULT findUSBDeviceById(const com::Guid &aId,
                                      ComPtr<IHostUSBDevice> &aDevice) = 0;
    virtual HRESULT findUSBDeviceByAddress(const com::Utf8Str &aName,
                                           ComPtr<IHostUSBDevice> &aDevice) = 0;
    virtual HRESULT generateMACAddress(com::Utf8Str &aAddress) = 0;
    virtual HRESULT addUSBDeviceSource(const com::Utf8Str &aBackend,
                                       const com::Utf8Str &aId,
                                       const com::Utf8Str &aAddress,
                                       const std::vector<com::Utf8Str> &aPropertyNames,
                                       const std::vector<com::Utf8Str> &aPropertyValues) = 0;
    virtual HRESULT removeUSBDeviceSource(const com::Utf8Str &aId) = 0;
    virtual HRESULT isExecutionEngineSupported(CPUArchitecture_T aCpuArchitecture,
                                               VMExecutionEngine_T aExecutionEngine,
                                               BOOL *aIsSupported) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostWrap_H_
