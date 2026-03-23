/** @file
 * VirtualBox API class wrapper header for IVirtualBox.
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

#ifndef VirtualBoxWrap_H_
#define VirtualBoxWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VirtualBoxWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVirtualBox)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VirtualBoxWrap, IVirtualBox)
    DECLARE_NOT_AGGREGATABLE(VirtualBoxWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VirtualBoxWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVirtualBox)
        COM_INTERFACE_ENTRY2(IDispatch, IVirtualBox)
        VBOX_TWEAK_INTERFACE_ENTRY(IVirtualBox)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VirtualBoxWrap)

    /** @name Public IVirtualBox properties
     * @{ */
    STDMETHOD(COMGETTER(Version))(BSTR *aVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VersionNormalized))(BSTR *aVersionNormalized) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Revision))(ULONG *aRevision) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PackageType))(BSTR *aPackageType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(APIVersion))(BSTR *aAPIVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(APIRevision))(LONG64 *aAPIRevision) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HomeFolder))(BSTR *aHomeFolder) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SettingsFilePath))(BSTR *aSettingsFilePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Host))(IHost **aHost) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SystemProperties))(ISystemProperties **aSystemProperties) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Machines))(ComSafeArrayOut(IMachine *, aMachines)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MachineGroups))(ComSafeArrayOut(BSTR, aMachineGroups)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HardDisks))(ComSafeArrayOut(IMedium *, aHardDisks)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DVDImages))(ComSafeArrayOut(IMedium *, aDVDImages)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FloppyImages))(ComSafeArrayOut(IMedium *, aFloppyImages)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProgressOperations))(ComSafeArrayOut(IProgress *, aProgressOperations)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GuestOSTypes))(ComSafeArrayOut(IGuestOSType *, aGuestOSTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GuestOSFamilies))(ComSafeArrayOut(BSTR, aGuestOSFamilies)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SharedFolders))(ComSafeArrayOut(ISharedFolder *, aSharedFolders)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PerformanceCollector))(IPerformanceCollector **aPerformanceCollector) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DHCPServers))(ComSafeArrayOut(IDHCPServer *, aDHCPServers)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NATNetworks))(ComSafeArrayOut(INATNetwork *, aNATNetworks)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExtensionPackManager))(IExtPackManager **aExtensionPackManager) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalNetworks))(ComSafeArrayOut(BSTR, aInternalNetworks)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostOnlyNetworks))(ComSafeArrayOut(IHostOnlyNetwork *, aHostOnlyNetworks)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GenericNetworkDrivers))(ComSafeArrayOut(BSTR, aGenericNetworkDrivers)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CloudNetworks))(ComSafeArrayOut(ICloudNetwork *, aCloudNetworks)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CloudProviderManager))(ICloudProviderManager **aCloudProviderManager) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IVirtualBox))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IVirtualBox methods
     * @{ */
    STDMETHOD(ComposeMachineFilename)(IN_BSTR aName,
                                      IN_BSTR aGroup,
                                      IN_BSTR aCreateFlags,
                                      IN_BSTR aBaseFolder,
                                      BSTR *aFile) RT_OVERRIDE;
    STDMETHOD(GetPlatformProperties)(PlatformArchitecture_T aArchitecture,
                                     IPlatformProperties **aProperties) RT_OVERRIDE;
    STDMETHOD(CreateMachine)(IN_BSTR aSettingsFile,
                             IN_BSTR aName,
                             PlatformArchitecture_T aPlatform,
                             ComSafeArrayIn(IN_BSTR, aGroups),
                             IN_BSTR aOsTypeId,
                             IN_BSTR aFlags,
                             IN_BSTR aCipher,
                             IN_BSTR aPasswordId,
                             IN_BSTR aPassword,
                             IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(OpenMachine)(IN_BSTR aSettingsFile,
                           IN_BSTR aPassword,
                           IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(RegisterMachine)(IMachine *aMachine) RT_OVERRIDE;
    STDMETHOD(FindMachine)(IN_BSTR aNameOrId,
                           IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(GetMachinesByGroups)(ComSafeArrayIn(IN_BSTR, aGroups),
                                   ComSafeArrayOut(IMachine *, aMachines)) RT_OVERRIDE;
    STDMETHOD(GetMachineStates)(ComSafeArrayIn(IMachine *, aMachines),
                                ComSafeArrayOut(MachineState_T, aStates)) RT_OVERRIDE;
    STDMETHOD(CreateAppliance)(IAppliance **aAppliance) RT_OVERRIDE;
    STDMETHOD(CreateUnattendedInstaller)(IUnattended **aUnattended) RT_OVERRIDE;
    STDMETHOD(CreateMedium)(IN_BSTR aFormat,
                            IN_BSTR aLocation,
                            AccessMode_T aAccessMode,
                            DeviceType_T aADeviceTypeType,
                            IMedium **aMedium) RT_OVERRIDE;
    STDMETHOD(OpenMedium)(IN_BSTR aLocation,
                          DeviceType_T aDeviceType,
                          AccessMode_T aAccessMode,
                          BOOL aForceNewUuid,
                          IMedium **aMedium) RT_OVERRIDE;
    STDMETHOD(GetGuestOSType)(IN_BSTR aId,
                              IGuestOSType **aType) RT_OVERRIDE;
    STDMETHOD(GetGuestOSSubtypesByFamilyId)(IN_BSTR aFamily,
                                            ComSafeArrayOut(BSTR, aOSsubtypes)) RT_OVERRIDE;
    STDMETHOD(GetGuestOSDescsBySubtype)(IN_BSTR aOSSubtype,
                                        ComSafeArrayOut(BSTR, aGuestOSDescs)) RT_OVERRIDE;
    STDMETHOD(CreateSharedFolder)(IN_BSTR aName,
                                  IN_BSTR aHostPath,
                                  BOOL aWritable,
                                  BOOL aAutomount,
                                  IN_BSTR aAutoMountPoint) RT_OVERRIDE;
    STDMETHOD(RemoveSharedFolder)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(GetExtraDataKeys)(ComSafeArrayOut(BSTR, aKeys)) RT_OVERRIDE;
    STDMETHOD(GetExtraData)(IN_BSTR aKey,
                            BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(SetExtraData)(IN_BSTR aKey,
                            IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(SetSettingsSecret)(IN_BSTR aPassword) RT_OVERRIDE;
    STDMETHOD(CreateDHCPServer)(IN_BSTR aName,
                                IDHCPServer **aServer) RT_OVERRIDE;
    STDMETHOD(FindDHCPServerByNetworkName)(IN_BSTR aName,
                                           IDHCPServer **aServer) RT_OVERRIDE;
    STDMETHOD(RemoveDHCPServer)(IDHCPServer *aServer) RT_OVERRIDE;
    STDMETHOD(CreateNATNetwork)(IN_BSTR aNetworkName,
                                INATNetwork **aNetwork) RT_OVERRIDE;
    STDMETHOD(FindNATNetworkByName)(IN_BSTR aNetworkName,
                                    INATNetwork **aNetwork) RT_OVERRIDE;
    STDMETHOD(RemoveNATNetwork)(INATNetwork *aNetwork) RT_OVERRIDE;
    STDMETHOD(CreateHostOnlyNetwork)(IN_BSTR aNetworkName,
                                     IHostOnlyNetwork **aNetwork) RT_OVERRIDE;
    STDMETHOD(FindHostOnlyNetworkByName)(IN_BSTR aNetworkName,
                                         IHostOnlyNetwork **aNetwork) RT_OVERRIDE;
    STDMETHOD(FindHostOnlyNetworkById)(IN_BSTR aId,
                                       IHostOnlyNetwork **aNetwork) RT_OVERRIDE;
    STDMETHOD(RemoveHostOnlyNetwork)(IHostOnlyNetwork *aNetwork) RT_OVERRIDE;
    STDMETHOD(CreateCloudNetwork)(IN_BSTR aNetworkName,
                                  ICloudNetwork **aNetwork) RT_OVERRIDE;
    STDMETHOD(FindCloudNetworkByName)(IN_BSTR aNetworkName,
                                      ICloudNetwork **aNetwork) RT_OVERRIDE;
    STDMETHOD(RemoveCloudNetwork)(ICloudNetwork *aNetwork) RT_OVERRIDE;
    STDMETHOD(CheckFirmwarePresent)(PlatformArchitecture_T aPlatformArchitecture,
                                    FirmwareType_T aFirmwareType,
                                    IN_BSTR aVersion,
                                    BSTR *aUrl,
                                    BSTR *aFile,
                                    BOOL *aResult) RT_OVERRIDE;
    STDMETHOD(FindProgressById)(IN_BSTR aId,
                                IProgress **aProgressObject) RT_OVERRIDE;
    STDMETHOD(GetTrackedObject)(IN_BSTR aTrObjId,
                                IUnknown **aPIface,
                                TrackedObjectState_T *aState,
                                LONG64 *aCreationTime,
                                LONG64 *aDeletionTime) RT_OVERRIDE;
    STDMETHOD(GetTrackedObjectIds)(IN_BSTR aName,
                                   ComSafeArrayOut(BSTR, aObjIdsList)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IVirtualBox)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IVirtualBox)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IVirtualBox)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IVirtualBox)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IVirtualBox)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IVirtualBox)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IVirtualBox properties
     * @{ */
    virtual HRESULT getVersion(com::Utf8Str &aVersion) = 0;
    virtual HRESULT getVersionNormalized(com::Utf8Str &aVersionNormalized) = 0;
    virtual HRESULT getRevision(ULONG *aRevision) = 0;
    virtual HRESULT getPackageType(com::Utf8Str &aPackageType) = 0;
    virtual HRESULT getAPIVersion(com::Utf8Str &aAPIVersion) = 0;
    virtual HRESULT getAPIRevision(LONG64 *aAPIRevision) = 0;
    virtual HRESULT getHomeFolder(com::Utf8Str &aHomeFolder) = 0;
    virtual HRESULT getSettingsFilePath(com::Utf8Str &aSettingsFilePath) = 0;
    virtual HRESULT getHost(ComPtr<IHost> &aHost) = 0;
    virtual HRESULT getSystemProperties(ComPtr<ISystemProperties> &aSystemProperties) = 0;
    virtual HRESULT getMachines(std::vector<ComPtr<IMachine> > &aMachines) = 0;
    virtual HRESULT getMachineGroups(std::vector<com::Utf8Str> &aMachineGroups) = 0;
    virtual HRESULT getHardDisks(std::vector<ComPtr<IMedium> > &aHardDisks) = 0;
    virtual HRESULT getDVDImages(std::vector<ComPtr<IMedium> > &aDVDImages) = 0;
    virtual HRESULT getFloppyImages(std::vector<ComPtr<IMedium> > &aFloppyImages) = 0;
    virtual HRESULT getProgressOperations(std::vector<ComPtr<IProgress> > &aProgressOperations) = 0;
    virtual HRESULT getGuestOSTypes(std::vector<ComPtr<IGuestOSType> > &aGuestOSTypes) = 0;
    virtual HRESULT getGuestOSFamilies(std::vector<com::Utf8Str> &aGuestOSFamilies) = 0;
    virtual HRESULT getSharedFolders(std::vector<ComPtr<ISharedFolder> > &aSharedFolders) = 0;
    virtual HRESULT getPerformanceCollector(ComPtr<IPerformanceCollector> &aPerformanceCollector) = 0;
    virtual HRESULT getDHCPServers(std::vector<ComPtr<IDHCPServer> > &aDHCPServers) = 0;
    virtual HRESULT getNATNetworks(std::vector<ComPtr<INATNetwork> > &aNATNetworks) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getExtensionPackManager(ComPtr<IExtPackManager> &aExtensionPackManager) = 0;
    virtual HRESULT getInternalNetworks(std::vector<com::Utf8Str> &aInternalNetworks) = 0;
    virtual HRESULT getHostOnlyNetworks(std::vector<ComPtr<IHostOnlyNetwork> > &aHostOnlyNetworks) = 0;
    virtual HRESULT getGenericNetworkDrivers(std::vector<com::Utf8Str> &aGenericNetworkDrivers) = 0;
    virtual HRESULT getCloudNetworks(std::vector<ComPtr<ICloudNetwork> > &aCloudNetworks) = 0;
    virtual HRESULT getCloudProviderManager(ComPtr<ICloudProviderManager> &aCloudProviderManager) = 0;
    /** @} */

    /** @name Wrapped IVirtualBox methods
     * @{ */
    virtual HRESULT composeMachineFilename(const com::Utf8Str &aName,
                                           const com::Utf8Str &aGroup,
                                           const com::Utf8Str &aCreateFlags,
                                           const com::Utf8Str &aBaseFolder,
                                           com::Utf8Str &aFile) = 0;
    virtual HRESULT getPlatformProperties(PlatformArchitecture_T aArchitecture,
                                          ComPtr<IPlatformProperties> &aProperties) = 0;
    virtual HRESULT createMachine(const com::Utf8Str &aSettingsFile,
                                  const com::Utf8Str &aName,
                                  PlatformArchitecture_T aPlatform,
                                  const std::vector<com::Utf8Str> &aGroups,
                                  const com::Utf8Str &aOsTypeId,
                                  const com::Utf8Str &aFlags,
                                  const com::Utf8Str &aCipher,
                                  const com::Utf8Str &aPasswordId,
                                  const com::Utf8Str &aPassword,
                                  ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT openMachine(const com::Utf8Str &aSettingsFile,
                                const com::Utf8Str &aPassword,
                                ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT registerMachine(const ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT findMachine(const com::Utf8Str &aNameOrId,
                                ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getMachinesByGroups(const std::vector<com::Utf8Str> &aGroups,
                                        std::vector<ComPtr<IMachine> > &aMachines) = 0;
    virtual HRESULT getMachineStates(const std::vector<ComPtr<IMachine> > &aMachines,
                                     std::vector<MachineState_T> &aStates) = 0;
    virtual HRESULT createAppliance(ComPtr<IAppliance> &aAppliance) = 0;
    virtual HRESULT createUnattendedInstaller(ComPtr<IUnattended> &aUnattended) = 0;
    virtual HRESULT createMedium(const com::Utf8Str &aFormat,
                                 const com::Utf8Str &aLocation,
                                 AccessMode_T aAccessMode,
                                 DeviceType_T aADeviceTypeType,
                                 ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT openMedium(const com::Utf8Str &aLocation,
                               DeviceType_T aDeviceType,
                               AccessMode_T aAccessMode,
                               BOOL aForceNewUuid,
                               ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT getGuestOSType(const com::Utf8Str &aId,
                                   ComPtr<IGuestOSType> &aType) = 0;
    virtual HRESULT getGuestOSSubtypesByFamilyId(const com::Utf8Str &aFamily,
                                                 std::vector<com::Utf8Str> &aOSsubtypes) = 0;
    virtual HRESULT getGuestOSDescsBySubtype(const com::Utf8Str &aOSSubtype,
                                             std::vector<com::Utf8Str> &aGuestOSDescs) = 0;
    virtual HRESULT createSharedFolder(const com::Utf8Str &aName,
                                       const com::Utf8Str &aHostPath,
                                       BOOL aWritable,
                                       BOOL aAutomount,
                                       const com::Utf8Str &aAutoMountPoint) = 0;
    virtual HRESULT removeSharedFolder(const com::Utf8Str &aName) = 0;
    virtual HRESULT getExtraDataKeys(std::vector<com::Utf8Str> &aKeys) = 0;
    virtual HRESULT getExtraData(const com::Utf8Str &aKey,
                                 com::Utf8Str &aValue) = 0;
    virtual HRESULT setExtraData(const com::Utf8Str &aKey,
                                 const com::Utf8Str &aValue) = 0;
    virtual HRESULT setSettingsSecret(const com::Utf8Str &aPassword) = 0;
    virtual HRESULT createDHCPServer(const com::Utf8Str &aName,
                                     ComPtr<IDHCPServer> &aServer) = 0;
    virtual HRESULT findDHCPServerByNetworkName(const com::Utf8Str &aName,
                                                ComPtr<IDHCPServer> &aServer) = 0;
    virtual HRESULT removeDHCPServer(const ComPtr<IDHCPServer> &aServer) = 0;
    virtual HRESULT createNATNetwork(const com::Utf8Str &aNetworkName,
                                     ComPtr<INATNetwork> &aNetwork) = 0;
    virtual HRESULT findNATNetworkByName(const com::Utf8Str &aNetworkName,
                                         ComPtr<INATNetwork> &aNetwork) = 0;
    virtual HRESULT removeNATNetwork(const ComPtr<INATNetwork> &aNetwork) = 0;
    virtual HRESULT createHostOnlyNetwork(const com::Utf8Str &aNetworkName,
                                          ComPtr<IHostOnlyNetwork> &aNetwork) = 0;
    virtual HRESULT findHostOnlyNetworkByName(const com::Utf8Str &aNetworkName,
                                              ComPtr<IHostOnlyNetwork> &aNetwork) = 0;
    virtual HRESULT findHostOnlyNetworkById(const com::Guid &aId,
                                            ComPtr<IHostOnlyNetwork> &aNetwork) = 0;
    virtual HRESULT removeHostOnlyNetwork(const ComPtr<IHostOnlyNetwork> &aNetwork) = 0;
    virtual HRESULT createCloudNetwork(const com::Utf8Str &aNetworkName,
                                       ComPtr<ICloudNetwork> &aNetwork) = 0;
    virtual HRESULT findCloudNetworkByName(const com::Utf8Str &aNetworkName,
                                           ComPtr<ICloudNetwork> &aNetwork) = 0;
    virtual HRESULT removeCloudNetwork(const ComPtr<ICloudNetwork> &aNetwork) = 0;
    virtual HRESULT checkFirmwarePresent(PlatformArchitecture_T aPlatformArchitecture,
                                         FirmwareType_T aFirmwareType,
                                         const com::Utf8Str &aVersion,
                                         com::Utf8Str &aUrl,
                                         com::Utf8Str &aFile,
                                         BOOL *aResult) = 0;
    virtual HRESULT findProgressById(const com::Guid &aId,
                                     ComPtr<IProgress> &aProgressObject) = 0;
    virtual HRESULT getTrackedObject(const com::Utf8Str &aTrObjId,
                                     ComPtr<IUnknown> &aPIface,
                                     TrackedObjectState_T *aState,
                                     LONG64 *aCreationTime,
                                     LONG64 *aDeletionTime) = 0;
    virtual HRESULT getTrackedObjectIds(const com::Utf8Str &aName,
                                        std::vector<com::Utf8Str> &aObjIdsList) = 0;
    /** @} */

public:
    virtual void i_callHook(const char *a_pszFunction) { RT_NOREF_PV(a_pszFunction); }

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VirtualBoxWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VirtualBoxWrap_H_
