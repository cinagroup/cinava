/** @file
 * VirtualBox API class wrapper header for IPlatformProperties.
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

#ifndef PlatformPropertiesWrap_H_
#define PlatformPropertiesWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PlatformPropertiesWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPlatformProperties)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PlatformPropertiesWrap, IPlatformProperties)
    DECLARE_NOT_AGGREGATABLE(PlatformPropertiesWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PlatformPropertiesWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPlatformProperties)
        COM_INTERFACE_ENTRY2(IDispatch, IPlatformProperties)
        VBOX_TWEAK_INTERFACE_ENTRY(IPlatformProperties)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PlatformPropertiesWrap)

    /** @name Public IPlatformProperties properties
     * @{ */
    STDMETHOD(COMGETTER(RawModeSupported))(BOOL *aRawModeSupported) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExclusiveHwVirt))(BOOL *aExclusiveHwVirt) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ExclusiveHwVirt))(BOOL aExclusiveHwVirt) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SerialPortCount))(ULONG *aSerialPortCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ParallelPortCount))(ULONG *aParallelPortCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxBootPosition))(ULONG *aMaxBootPosition) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedParavirtProviders))(ComSafeArrayOut(ParavirtProvider_T, aSupportedParavirtProviders)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedFirmwareTypes))(ComSafeArrayOut(FirmwareType_T, aSupportedFirmwareTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedGuestOSTypes))(ComSafeArrayOut(IGuestOSType *, aSupportedGuestOSTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedGfxControllerTypes))(ComSafeArrayOut(GraphicsControllerType_T, aSupportedGfxControllerTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedNetAdpPromiscModePols))(ComSafeArrayOut(NetworkAdapterPromiscModePolicy_T, aSupportedNetAdpPromiscModePols)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedNetworkAdapterTypes))(ComSafeArrayOut(NetworkAdapterType_T, aSupportedNetworkAdapterTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedUartTypes))(ComSafeArrayOut(UartType_T, aSupportedUartTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedUSBControllerTypes))(ComSafeArrayOut(USBControllerType_T, aSupportedUSBControllerTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedAudioControllerTypes))(ComSafeArrayOut(AudioControllerType_T, aSupportedAudioControllerTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedBootDevices))(ComSafeArrayOut(DeviceType_T, aSupportedBootDevices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedStorageBuses))(ComSafeArrayOut(StorageBus_T, aSupportedStorageBuses)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedStorageControllerTypes))(ComSafeArrayOut(StorageControllerType_T, aSupportedStorageControllerTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedChipsetTypes))(ComSafeArrayOut(ChipsetType_T, aSupportedChipsetTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedIommuTypes))(ComSafeArrayOut(IommuType_T, aSupportedIommuTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedTpmTypes))(ComSafeArrayOut(TpmType_T, aSupportedTpmTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IPlatformProperties))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IPlatformProperties methods
     * @{ */
    STDMETHOD(GetMaxNetworkAdapters)(ChipsetType_T aChipset,
                                     ULONG *aMaxNetworkAdapters) RT_OVERRIDE;
    STDMETHOD(GetMaxNetworkAdaptersOfType)(ChipsetType_T aChipset,
                                           NetworkAttachmentType_T aType,
                                           ULONG *aMaxNetworkAdapters) RT_OVERRIDE;
    STDMETHOD(GetMaxDevicesPerPortForStorageBus)(StorageBus_T aBus,
                                                 ULONG *aMaxDevicesPerPort) RT_OVERRIDE;
    STDMETHOD(GetMinPortCountForStorageBus)(StorageBus_T aBus,
                                            ULONG *aMinPortCount) RT_OVERRIDE;
    STDMETHOD(GetMaxPortCountForStorageBus)(StorageBus_T aBus,
                                            ULONG *aMaxPortCount) RT_OVERRIDE;
    STDMETHOD(GetMaxInstancesOfStorageBus)(ChipsetType_T aChipset,
                                           StorageBus_T aBus,
                                           ULONG *aMaxInstances) RT_OVERRIDE;
    STDMETHOD(GetSupportedVRAMRange)(GraphicsControllerType_T aGraphicsControllerType,
                                     BOOL aAccelerate3DEnabled,
                                     ULONG *aMinMB,
                                     ULONG *aMaxMB,
                                     ULONG *aStrideSizeMB) RT_OVERRIDE;
    STDMETHOD(GetSupportedGfxFeaturesForType)(GraphicsControllerType_T aGraphicsControllerType,
                                              ComSafeArrayOut(GraphicsFeature_T, aSupportedControllerFeatures)) RT_OVERRIDE;
    STDMETHOD(GetDeviceTypesForStorageBus)(StorageBus_T aBus,
                                           ComSafeArrayOut(DeviceType_T, aDeviceTypes)) RT_OVERRIDE;
    STDMETHOD(GetStorageBusForControllerType)(StorageControllerType_T aStorageControllerType,
                                              StorageBus_T *aStorageBus) RT_OVERRIDE;
    STDMETHOD(GetStorageControllerTypesForBus)(StorageBus_T aStorageBus,
                                               ComSafeArrayOut(StorageControllerType_T, aStorageControllerType)) RT_OVERRIDE;
    STDMETHOD(GetStorageControllerHotplugCapable)(StorageControllerType_T aControllerType,
                                                  BOOL *aHotplugCapable) RT_OVERRIDE;
    STDMETHOD(GetMaxInstancesOfUSBControllerType)(ChipsetType_T aChipset,
                                                  USBControllerType_T aType,
                                                  ULONG *aMaxInstances) RT_OVERRIDE;
    STDMETHOD(GetMinGuestRAM)(FirmwareType_T aFirmware,
                              ULONG *aMinMegabytes) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IPlatformProperties)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IPlatformProperties)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IPlatformProperties)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IPlatformProperties properties
     * @{ */
    virtual HRESULT getRawModeSupported(BOOL *aRawModeSupported) = 0;
    virtual HRESULT getExclusiveHwVirt(BOOL *aExclusiveHwVirt) = 0;
    virtual HRESULT setExclusiveHwVirt(BOOL aExclusiveHwVirt) = 0;
    virtual HRESULT getSerialPortCount(ULONG *aSerialPortCount) = 0;
    virtual HRESULT getParallelPortCount(ULONG *aParallelPortCount) = 0;
    virtual HRESULT getMaxBootPosition(ULONG *aMaxBootPosition) = 0;
    virtual HRESULT getSupportedParavirtProviders(std::vector<ParavirtProvider_T> &aSupportedParavirtProviders) = 0;
    virtual HRESULT getSupportedFirmwareTypes(std::vector<FirmwareType_T> &aSupportedFirmwareTypes) = 0;
    virtual HRESULT getSupportedGuestOSTypes(std::vector<ComPtr<IGuestOSType> > &aSupportedGuestOSTypes) = 0;
    virtual HRESULT getSupportedGfxControllerTypes(std::vector<GraphicsControllerType_T> &aSupportedGfxControllerTypes) = 0;
    virtual HRESULT getSupportedNetAdpPromiscModePols(std::vector<NetworkAdapterPromiscModePolicy_T> &aSupportedNetAdpPromiscModePols) = 0;
    virtual HRESULT getSupportedNetworkAdapterTypes(std::vector<NetworkAdapterType_T> &aSupportedNetworkAdapterTypes) = 0;
    virtual HRESULT getSupportedUartTypes(std::vector<UartType_T> &aSupportedUartTypes) = 0;
    virtual HRESULT getSupportedUSBControllerTypes(std::vector<USBControllerType_T> &aSupportedUSBControllerTypes) = 0;
    virtual HRESULT getSupportedAudioControllerTypes(std::vector<AudioControllerType_T> &aSupportedAudioControllerTypes) = 0;
    virtual HRESULT getSupportedBootDevices(std::vector<DeviceType_T> &aSupportedBootDevices) = 0;
    virtual HRESULT getSupportedStorageBuses(std::vector<StorageBus_T> &aSupportedStorageBuses) = 0;
    virtual HRESULT getSupportedStorageControllerTypes(std::vector<StorageControllerType_T> &aSupportedStorageControllerTypes) = 0;
    virtual HRESULT getSupportedChipsetTypes(std::vector<ChipsetType_T> &aSupportedChipsetTypes) = 0;
    virtual HRESULT getSupportedIommuTypes(std::vector<IommuType_T> &aSupportedIommuTypes) = 0;
    virtual HRESULT getSupportedTpmTypes(std::vector<TpmType_T> &aSupportedTpmTypes) = 0;
    /** @} */

    /** @name Wrapped IPlatformProperties methods
     * @{ */
    virtual HRESULT getMaxNetworkAdapters(ChipsetType_T aChipset,
                                          ULONG *aMaxNetworkAdapters) = 0;
    virtual HRESULT getMaxNetworkAdaptersOfType(ChipsetType_T aChipset,
                                                NetworkAttachmentType_T aType,
                                                ULONG *aMaxNetworkAdapters) = 0;
    virtual HRESULT getMaxDevicesPerPortForStorageBus(StorageBus_T aBus,
                                                      ULONG *aMaxDevicesPerPort) = 0;
    virtual HRESULT getMinPortCountForStorageBus(StorageBus_T aBus,
                                                 ULONG *aMinPortCount) = 0;
    virtual HRESULT getMaxPortCountForStorageBus(StorageBus_T aBus,
                                                 ULONG *aMaxPortCount) = 0;
    virtual HRESULT getMaxInstancesOfStorageBus(ChipsetType_T aChipset,
                                                StorageBus_T aBus,
                                                ULONG *aMaxInstances) = 0;
    virtual HRESULT getSupportedVRAMRange(GraphicsControllerType_T aGraphicsControllerType,
                                          BOOL aAccelerate3DEnabled,
                                          ULONG *aMinMB,
                                          ULONG *aMaxMB,
                                          ULONG *aStrideSizeMB) = 0;
    virtual HRESULT getSupportedGfxFeaturesForType(GraphicsControllerType_T aGraphicsControllerType,
                                                   std::vector<GraphicsFeature_T> &aSupportedControllerFeatures) = 0;
    virtual HRESULT getDeviceTypesForStorageBus(StorageBus_T aBus,
                                                std::vector<DeviceType_T> &aDeviceTypes) = 0;
    virtual HRESULT getStorageBusForControllerType(StorageControllerType_T aStorageControllerType,
                                                   StorageBus_T *aStorageBus) = 0;
    virtual HRESULT getStorageControllerTypesForBus(StorageBus_T aStorageBus,
                                                    std::vector<StorageControllerType_T> &aStorageControllerType) = 0;
    virtual HRESULT getStorageControllerHotplugCapable(StorageControllerType_T aControllerType,
                                                       BOOL *aHotplugCapable) = 0;
    virtual HRESULT getMaxInstancesOfUSBControllerType(ChipsetType_T aChipset,
                                                       USBControllerType_T aType,
                                                       ULONG *aMaxInstances) = 0;
    virtual HRESULT getMinGuestRAM(FirmwareType_T aFirmware,
                                   ULONG *aMinMegabytes) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PlatformPropertiesWrap); /* Shuts up MSC warning C4625. */

};

#endif // !PlatformPropertiesWrap_H_
