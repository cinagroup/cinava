/** @file
 * VirtualBox API class wrapper header for IMachine.
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

#ifndef MachineWrap_H_
#define MachineWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MachineWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMachine)
    , VBOX_SCRIPTABLE_IMPL(IInternalMachineControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineWrap, IMachine)
    DECLARE_NOT_AGGREGATABLE(MachineWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MachineWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMachine)
        COM_INTERFACE_ENTRY2(IDispatch, IMachine)
        VBOX_TWEAK_INTERFACE_ENTRY(IMachine)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MachineWrap)

    /** @name Public IMachine properties
     * @{ */
    STDMETHOD(COMGETTER(Parent))(IVirtualBox **aParent) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Icon))(ComSafeArrayOut(BYTE, aIcon)) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Icon))(ComSafeArrayIn(BYTE, aIcon)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Accessible))(BOOL *aAccessible) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AccessError))(IVirtualBoxErrorInfo **aAccessError) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Description))(IN_BSTR aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Groups))(ComSafeArrayOut(BSTR, aGroups)) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Groups))(ComSafeArrayIn(IN_BSTR, aGroups)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OSTypeId))(BSTR *aOSTypeId) RT_OVERRIDE;
    STDMETHOD(COMSETTER(OSTypeId))(IN_BSTR aOSTypeId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HardwareVersion))(BSTR *aHardwareVersion) RT_OVERRIDE;
    STDMETHOD(COMSETTER(HardwareVersion))(IN_BSTR aHardwareVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HardwareUUID))(BSTR *aHardwareUUID) RT_OVERRIDE;
    STDMETHOD(COMSETTER(HardwareUUID))(IN_BSTR aHardwareUUID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CPUCount))(ULONG *aCPUCount) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CPUCount))(ULONG aCPUCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CPUHotPlugEnabled))(BOOL *aCPUHotPlugEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CPUHotPlugEnabled))(BOOL aCPUHotPlugEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CPUExecutionCap))(ULONG *aCPUExecutionCap) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CPUExecutionCap))(ULONG aCPUExecutionCap) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CPUIDPortabilityLevel))(ULONG *aCPUIDPortabilityLevel) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CPUIDPortabilityLevel))(ULONG aCPUIDPortabilityLevel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MemorySize))(ULONG *aMemorySize) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MemorySize))(ULONG aMemorySize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MemoryBalloonSize))(ULONG *aMemoryBalloonSize) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MemoryBalloonSize))(ULONG aMemoryBalloonSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PageFusionEnabled))(BOOL *aPageFusionEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PageFusionEnabled))(BOOL aPageFusionEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GraphicsAdapter))(IGraphicsAdapter **aGraphicsAdapter) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Platform))(IPlatform **aPlatform) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FirmwareSettings))(IFirmwareSettings **aFirmwareSettings) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TrustedPlatformModule))(ITrustedPlatformModule **aTrustedPlatformModule) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NonVolatileStore))(INvramStore **aNonVolatileStore) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecordingSettings))(IRecordingSettings **aRecordingSettings) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PointingHIDType))(PointingHIDType_T *aPointingHIDType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PointingHIDType))(PointingHIDType_T aPointingHIDType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(KeyboardHIDType))(KeyboardHIDType_T *aKeyboardHIDType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(KeyboardHIDType))(KeyboardHIDType_T aKeyboardHIDType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SnapshotFolder))(BSTR *aSnapshotFolder) RT_OVERRIDE;
    STDMETHOD(COMSETTER(SnapshotFolder))(IN_BSTR aSnapshotFolder) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VRDEServer))(IVRDEServer **aVRDEServer) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EmulatedUSBCardReaderEnabled))(BOOL *aEmulatedUSBCardReaderEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(EmulatedUSBCardReaderEnabled))(BOOL aEmulatedUSBCardReaderEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MediumAttachments))(ComSafeArrayOut(IMediumAttachment *, aMediumAttachments)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(USBControllers))(ComSafeArrayOut(IUSBController *, aUSBControllers)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(USBDeviceFilters))(IUSBDeviceFilters **aUSBDeviceFilters) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioSettings))(IAudioSettings **aAudioSettings) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StorageControllers))(ComSafeArrayOut(IStorageController *, aStorageControllers)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SettingsFilePath))(BSTR *aSettingsFilePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SettingsAuxFilePath))(BSTR *aSettingsAuxFilePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SettingsModified))(BOOL *aSettingsModified) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SessionState))(SessionState_T *aSessionState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SessionName))(BSTR *aSessionName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SessionPID))(ULONG *aSessionPID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(State))(MachineState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LastStateChange))(LONG64 *aLastStateChange) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StateFilePath))(BSTR *aStateFilePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogFolder))(BSTR *aLogFolder) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CurrentSnapshot))(ISnapshot **aCurrentSnapshot) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SnapshotCount))(ULONG *aSnapshotCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CurrentStateModified))(BOOL *aCurrentStateModified) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SharedFolders))(ComSafeArrayOut(ISharedFolder *, aSharedFolders)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ClipboardMode))(ClipboardMode_T *aClipboardMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ClipboardMode))(ClipboardMode_T aClipboardMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ClipboardFileTransfersEnabled))(BOOL *aClipboardFileTransfersEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ClipboardFileTransfersEnabled))(BOOL aClipboardFileTransfersEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DnDMode))(DnDMode_T *aDnDMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DnDMode))(DnDMode_T aDnDMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TeleporterEnabled))(BOOL *aTeleporterEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TeleporterEnabled))(BOOL aTeleporterEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TeleporterPort))(ULONG *aTeleporterPort) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TeleporterPort))(ULONG aTeleporterPort) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TeleporterAddress))(BSTR *aTeleporterAddress) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TeleporterAddress))(IN_BSTR aTeleporterAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TeleporterPassword))(BSTR *aTeleporterPassword) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TeleporterPassword))(IN_BSTR aTeleporterPassword) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ParavirtProvider))(ParavirtProvider_T *aParavirtProvider) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ParavirtProvider))(ParavirtProvider_T aParavirtProvider) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IOCacheEnabled))(BOOL *aIOCacheEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IOCacheEnabled))(BOOL aIOCacheEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IOCacheSize))(ULONG *aIOCacheSize) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IOCacheSize))(ULONG aIOCacheSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PCIDeviceAssignments))(ComSafeArrayOut(IPCIDeviceAttachment *, aPCIDeviceAssignments)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BandwidthControl))(IBandwidthControl **aBandwidthControl) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TracingEnabled))(BOOL *aTracingEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TracingEnabled))(BOOL aTracingEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TracingConfig))(BSTR *aTracingConfig) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TracingConfig))(IN_BSTR aTracingConfig) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AllowTracingToAccessVM))(BOOL *aAllowTracingToAccessVM) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AllowTracingToAccessVM))(BOOL aAllowTracingToAccessVM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutostartEnabled))(BOOL *aAutostartEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutostartEnabled))(BOOL aAutostartEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutostartDelay))(ULONG *aAutostartDelay) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutostartDelay))(ULONG aAutostartDelay) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutostopType))(AutostopType_T *aAutostopType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutostopType))(AutostopType_T aAutostopType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultFrontend))(BSTR *aDefaultFrontend) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultFrontend))(IN_BSTR aDefaultFrontend) RT_OVERRIDE;
    STDMETHOD(COMGETTER(USBProxyAvailable))(BOOL *aUSBProxyAvailable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VMProcessPriority))(VMProcPriority_T *aVMProcessPriority) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VMProcessPriority))(VMProcPriority_T aVMProcessPriority) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VMExecutionEngine))(VMExecutionEngine_T *aVMExecutionEngine) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VMExecutionEngine))(VMExecutionEngine_T aVMExecutionEngine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ParavirtDebug))(BSTR *aParavirtDebug) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ParavirtDebug))(IN_BSTR aParavirtDebug) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CPUProfile))(BSTR *aCPUProfile) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CPUProfile))(IN_BSTR aCPUProfile) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StateKeyId))(BSTR *aStateKeyId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StateKeyStore))(BSTR *aStateKeyStore) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogKeyId))(BSTR *aLogKeyId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogKeyStore))(BSTR *aLogKeyStore) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GuestDebugControl))(IGuestDebugControl **aGuestDebugControl) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IMachine))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMachine methods
     * @{ */
    STDMETHOD(LockMachine)(ISession *aSession,
                           LockType_T aLockType) RT_OVERRIDE;
    STDMETHOD(LaunchVMProcess)(ISession *aSession,
                               IN_BSTR aName,
                               ComSafeArrayIn(IN_BSTR, aEnvironmentChanges),
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(SetBootOrder)(ULONG aPosition,
                            DeviceType_T aDevice) RT_OVERRIDE;
    STDMETHOD(GetBootOrder)(ULONG aPosition,
                            DeviceType_T *aDevice) RT_OVERRIDE;
    STDMETHOD(AttachDevice)(IN_BSTR aName,
                            LONG aControllerPort,
                            LONG aDevice,
                            DeviceType_T aType,
                            IMedium *aMedium) RT_OVERRIDE;
    STDMETHOD(AttachDeviceWithoutMedium)(IN_BSTR aName,
                                         LONG aControllerPort,
                                         LONG aDevice,
                                         DeviceType_T aType) RT_OVERRIDE;
    STDMETHOD(DetachDevice)(IN_BSTR aName,
                            LONG aControllerPort,
                            LONG aDevice) RT_OVERRIDE;
    STDMETHOD(PassthroughDevice)(IN_BSTR aName,
                                 LONG aControllerPort,
                                 LONG aDevice,
                                 BOOL aPassthrough) RT_OVERRIDE;
    STDMETHOD(TemporaryEjectDevice)(IN_BSTR aName,
                                    LONG aControllerPort,
                                    LONG aDevice,
                                    BOOL aTemporaryEject) RT_OVERRIDE;
    STDMETHOD(NonRotationalDevice)(IN_BSTR aName,
                                   LONG aControllerPort,
                                   LONG aDevice,
                                   BOOL aNonRotational) RT_OVERRIDE;
    STDMETHOD(SetAutoDiscardForDevice)(IN_BSTR aName,
                                       LONG aControllerPort,
                                       LONG aDevice,
                                       BOOL aDiscard) RT_OVERRIDE;
    STDMETHOD(SetHotPluggableForDevice)(IN_BSTR aName,
                                        LONG aControllerPort,
                                        LONG aDevice,
                                        BOOL aHotPluggable) RT_OVERRIDE;
    STDMETHOD(SetBandwidthGroupForDevice)(IN_BSTR aName,
                                          LONG aControllerPort,
                                          LONG aDevice,
                                          IBandwidthGroup *aBandwidthGroup) RT_OVERRIDE;
    STDMETHOD(SetNoBandwidthGroupForDevice)(IN_BSTR aName,
                                            LONG aControllerPort,
                                            LONG aDevice) RT_OVERRIDE;
    STDMETHOD(UnmountMedium)(IN_BSTR aName,
                             LONG aControllerPort,
                             LONG aDevice,
                             BOOL aForce) RT_OVERRIDE;
    STDMETHOD(MountMedium)(IN_BSTR aName,
                           LONG aControllerPort,
                           LONG aDevice,
                           IMedium *aMedium,
                           BOOL aForce) RT_OVERRIDE;
    STDMETHOD(GetMedium)(IN_BSTR aName,
                         LONG aControllerPort,
                         LONG aDevice,
                         IMedium **aMedium) RT_OVERRIDE;
    STDMETHOD(GetMediumAttachmentsOfController)(IN_BSTR aName,
                                                ComSafeArrayOut(IMediumAttachment *, aMediumAttachments)) RT_OVERRIDE;
    STDMETHOD(GetMediumAttachment)(IN_BSTR aName,
                                   LONG aControllerPort,
                                   LONG aDevice,
                                   IMediumAttachment **aAttachment) RT_OVERRIDE;
    STDMETHOD(AttachHostPCIDevice)(LONG aHostAddress,
                                   LONG aDesiredGuestAddress,
                                   BOOL aTryToUnbind) RT_OVERRIDE;
    STDMETHOD(DetachHostPCIDevice)(LONG aHostAddress) RT_OVERRIDE;
    STDMETHOD(GetNetworkAdapter)(ULONG aSlot,
                                 INetworkAdapter **aAdapter) RT_OVERRIDE;
    STDMETHOD(AddStorageController)(IN_BSTR aName,
                                    StorageBus_T aConnectionType,
                                    IStorageController **aController) RT_OVERRIDE;
    STDMETHOD(GetStorageControllerByName)(IN_BSTR aName,
                                          IStorageController **aStorageController) RT_OVERRIDE;
    STDMETHOD(GetStorageControllerByInstance)(StorageBus_T aConnectionType,
                                              ULONG aInstance,
                                              IStorageController **aStorageController) RT_OVERRIDE;
    STDMETHOD(RemoveStorageController)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(SetStorageControllerBootable)(IN_BSTR aName,
                                            BOOL aBootable) RT_OVERRIDE;
    STDMETHOD(AddUSBController)(IN_BSTR aName,
                                USBControllerType_T aType,
                                IUSBController **aController) RT_OVERRIDE;
    STDMETHOD(RemoveUSBController)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(GetUSBControllerByName)(IN_BSTR aName,
                                      IUSBController **aController) RT_OVERRIDE;
    STDMETHOD(GetUSBControllerCountByType)(USBControllerType_T aType,
                                           ULONG *aControllers) RT_OVERRIDE;
    STDMETHOD(GetSerialPort)(ULONG aSlot,
                             ISerialPort **aPort) RT_OVERRIDE;
    STDMETHOD(GetParallelPort)(ULONG aSlot,
                               IParallelPort **aPort) RT_OVERRIDE;
    STDMETHOD(GetExtraDataKeys)(ComSafeArrayOut(BSTR, aKeys)) RT_OVERRIDE;
    STDMETHOD(GetExtraData)(IN_BSTR aKey,
                            BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(SetExtraData)(IN_BSTR aKey,
                            IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(SetSettingsFilePath)(IN_BSTR aSettingsFilePath,
                                   IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(SaveSettings)() RT_OVERRIDE;
    STDMETHOD(DiscardSettings)() RT_OVERRIDE;
    STDMETHOD(Unregister)(CleanupMode_T aCleanupMode,
                          ComSafeArrayOut(IMedium *, aMedia)) RT_OVERRIDE;
    STDMETHOD(DeleteConfig)(ComSafeArrayIn(IMedium *, aMedia),
                            IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ExportTo)(IAppliance *aAppliance,
                        IN_BSTR aLocation,
                        IVirtualSystemDescription **aDescription) RT_OVERRIDE;
    STDMETHOD(FindSnapshot)(IN_BSTR aNameOrId,
                            ISnapshot **aSnapshot) RT_OVERRIDE;
    STDMETHOD(CreateSharedFolder)(IN_BSTR aName,
                                  IN_BSTR aHostPath,
                                  BOOL aWritable,
                                  BOOL aAutomount,
                                  IN_BSTR aAutoMountPoint) RT_OVERRIDE;
    STDMETHOD(RemoveSharedFolder)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(CanShowConsoleWindow)(BOOL *aCanShow) RT_OVERRIDE;
    STDMETHOD(ShowConsoleWindow)(LONG64 *aWinId) RT_OVERRIDE;
    STDMETHOD(GetGuestProperty)(IN_BSTR aName,
                                BSTR *aValue,
                                LONG64 *aTimestamp,
                                BSTR *aFlags) RT_OVERRIDE;
    STDMETHOD(GetGuestPropertyValue)(IN_BSTR aProperty,
                                     BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(GetGuestPropertyTimestamp)(IN_BSTR aProperty,
                                         LONG64 *aValue) RT_OVERRIDE;
    STDMETHOD(SetGuestProperty)(IN_BSTR aProperty,
                                IN_BSTR aValue,
                                IN_BSTR aFlags) RT_OVERRIDE;
    STDMETHOD(SetGuestPropertyValue)(IN_BSTR aProperty,
                                     IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(DeleteGuestProperty)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(EnumerateGuestProperties)(IN_BSTR aPatterns,
                                        ComSafeArrayOut(BSTR, aNames),
                                        ComSafeArrayOut(BSTR, aValues),
                                        ComSafeArrayOut(LONG64, aTimestamps),
                                        ComSafeArrayOut(BSTR, aFlags)) RT_OVERRIDE;
    STDMETHOD(QuerySavedGuestScreenInfo)(ULONG aScreenId,
                                         ULONG *aOriginX,
                                         ULONG *aOriginY,
                                         ULONG *aWidth,
                                         ULONG *aHeight,
                                         BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(ReadSavedThumbnailToArray)(ULONG aScreenId,
                                         BitmapFormat_T aBitmapFormat,
                                         ULONG *aWidth,
                                         ULONG *aHeight,
                                         ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(QuerySavedScreenshotInfo)(ULONG aScreenId,
                                        ULONG *aWidth,
                                        ULONG *aHeight,
                                        ComSafeArrayOut(BitmapFormat_T, aBitmapFormats)) RT_OVERRIDE;
    STDMETHOD(ReadSavedScreenshotToArray)(ULONG aScreenId,
                                          BitmapFormat_T aBitmapFormat,
                                          ULONG *aWidth,
                                          ULONG *aHeight,
                                          ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(HotPlugCPU)(ULONG aCpu) RT_OVERRIDE;
    STDMETHOD(HotUnplugCPU)(ULONG aCpu) RT_OVERRIDE;
    STDMETHOD(GetCPUStatus)(ULONG aCpu,
                            BOOL *aAttached) RT_OVERRIDE;
    STDMETHOD(GetEffectiveParavirtProvider)(ParavirtProvider_T *aParavirtProvider) RT_OVERRIDE;
    STDMETHOD(QueryLogFilename)(ULONG aIdx,
                                BSTR *aFilename) RT_OVERRIDE;
    STDMETHOD(ReadLog)(ULONG aIdx,
                       LONG64 aOffset,
                       LONG64 aSize,
                       ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(CloneTo)(IMachine *aTarget,
                       CloneMode_T aMode,
                       ComSafeArrayIn(CloneOptions_T, aOptions),
                       IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(MoveTo)(IN_BSTR aFolder,
                      IN_BSTR aType,
                      IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(SaveState)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(AdoptSavedState)(IN_BSTR aSavedStateFile) RT_OVERRIDE;
    STDMETHOD(DiscardSavedState)(BOOL aFRemoveFile) RT_OVERRIDE;
    STDMETHOD(TakeSnapshot)(IN_BSTR aName,
                            IN_BSTR aDescription,
                            BOOL aPause,
                            BSTR *aId,
                            IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DeleteSnapshot)(IN_BSTR aId,
                              IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DeleteSnapshotAndAllChildren)(IN_BSTR aId,
                                            IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DeleteSnapshotRange)(IN_BSTR aStartId,
                                   IN_BSTR aEndId,
                                   IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(RestoreSnapshot)(ISnapshot *aSnapshot,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ApplyDefaults)(IN_BSTR aFlags) RT_OVERRIDE;
    STDMETHOD(ChangeEncryption)(IN_BSTR aCurrentPassword,
                                IN_BSTR aCipher,
                                IN_BSTR aNewPassword,
                                IN_BSTR aNewPasswordId,
                                BOOL aForce,
                                IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetEncryptionSettings)(BSTR *aCipher,
                                     BSTR *aPasswordId) RT_OVERRIDE;
    STDMETHOD(CheckEncryptionPassword)(IN_BSTR aPassword) RT_OVERRIDE;
    STDMETHOD(AddEncryptionPassword)(IN_BSTR aId,
                                     IN_BSTR aPassword) RT_OVERRIDE;
    STDMETHOD(AddEncryptionPasswords)(ComSafeArrayIn(IN_BSTR, aIds),
                                      ComSafeArrayIn(IN_BSTR, aPasswords)) RT_OVERRIDE;
    STDMETHOD(RemoveEncryptionPassword)(IN_BSTR aId) RT_OVERRIDE;
    STDMETHOD(ClearAllEncryptionPasswords)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IMachine)() RT_OVERRIDE;
    /** @} */

    /** @name Public IInternalMachineControl properties
     * @{ */
    /** @} */

    /** @name Public IInternalMachineControl methods
     * @{ */
    STDMETHOD(UpdateState)(MachineState_T aState) RT_OVERRIDE;
    STDMETHOD(BeginPowerUp)(IProgress *aProgress) RT_OVERRIDE;
    STDMETHOD(EndPowerUp)(LONG aResult) RT_OVERRIDE;
    STDMETHOD(BeginPoweringDown)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(EndPoweringDown)(LONG aResult,
                               IN_BSTR aErrMsg) RT_OVERRIDE;
    STDMETHOD(RunUSBDeviceFilters)(IUSBDevice *aDevice,
                                   BOOL *aMatched,
                                   ULONG *aMaskedInterfaces) RT_OVERRIDE;
    STDMETHOD(CaptureUSBDevice)(IN_BSTR aId,
                                IN_BSTR aCaptureFilename) RT_OVERRIDE;
    STDMETHOD(DetachUSBDevice)(IN_BSTR aId,
                               BOOL aDone) RT_OVERRIDE;
    STDMETHOD(AutoCaptureUSBDevices)() RT_OVERRIDE;
    STDMETHOD(DetachAllUSBDevices)(BOOL aDone) RT_OVERRIDE;
    STDMETHOD(OnSessionEnd)(ISession *aSession,
                            IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FinishOnlineMergeMedium)() RT_OVERRIDE;
    STDMETHOD(PullGuestProperties)(ComSafeArrayOut(BSTR, aNames),
                                   ComSafeArrayOut(BSTR, aValues),
                                   ComSafeArrayOut(LONG64, aTimestamps),
                                   ComSafeArrayOut(BSTR, aFlags)) RT_OVERRIDE;
    STDMETHOD(PushGuestProperty)(IN_BSTR aName,
                                 IN_BSTR aValue,
                                 LONG64 aTimestamp,
                                 IN_BSTR aFlags,
                                 BOOL aFWasDeleted) RT_OVERRIDE;
    STDMETHOD(LockMedia)() RT_OVERRIDE;
    STDMETHOD(UnlockMedia)() RT_OVERRIDE;
    STDMETHOD(EjectMedium)(IMediumAttachment *aAttachment,
                           IMediumAttachment **aNewAttachment) RT_OVERRIDE;
    STDMETHOD(ReportVmStatistics)(ULONG aValidStats,
                                  ULONG aCpuUser,
                                  ULONG aCpuKernel,
                                  ULONG aCpuIdle,
                                  ULONG aMemTotal,
                                  ULONG aMemFree,
                                  ULONG aMemBalloon,
                                  ULONG aMemShared,
                                  ULONG aMemCache,
                                  ULONG aPagedTotal,
                                  ULONG aMemAllocTotal,
                                  ULONG aMemFreeTotal,
                                  ULONG aMemBalloonTotal,
                                  ULONG aMemSharedTotal,
                                  ULONG aVmNetRx,
                                  ULONG aVmNetTx) RT_OVERRIDE;
    STDMETHOD(AuthenticateExternal)(ComSafeArrayIn(IN_BSTR, aAuthParams),
                                    BSTR *aResult) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IMachine properties
     * @{ */
    virtual HRESULT getParent(ComPtr<IVirtualBox> &aParent) = 0;
    virtual HRESULT getIcon(std::vector<BYTE> &aIcon) = 0;
    virtual HRESULT setIcon(const std::vector<BYTE> &aIcon) = 0;
    virtual HRESULT getAccessible(BOOL *aAccessible) = 0;
    virtual HRESULT getAccessError(ComPtr<IVirtualBoxErrorInfo> &aAccessError) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT setDescription(const com::Utf8Str &aDescription) = 0;
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getGroups(std::vector<com::Utf8Str> &aGroups) = 0;
    virtual HRESULT setGroups(const std::vector<com::Utf8Str> &aGroups) = 0;
    virtual HRESULT getOSTypeId(com::Utf8Str &aOSTypeId) = 0;
    virtual HRESULT setOSTypeId(const com::Utf8Str &aOSTypeId) = 0;
    virtual HRESULT getHardwareVersion(com::Utf8Str &aHardwareVersion) = 0;
    virtual HRESULT setHardwareVersion(const com::Utf8Str &aHardwareVersion) = 0;
    virtual HRESULT getHardwareUUID(com::Guid &aHardwareUUID) = 0;
    virtual HRESULT setHardwareUUID(const com::Guid &aHardwareUUID) = 0;
    virtual HRESULT getCPUCount(ULONG *aCPUCount) = 0;
    virtual HRESULT setCPUCount(ULONG aCPUCount) = 0;
    virtual HRESULT getCPUHotPlugEnabled(BOOL *aCPUHotPlugEnabled) = 0;
    virtual HRESULT setCPUHotPlugEnabled(BOOL aCPUHotPlugEnabled) = 0;
    virtual HRESULT getCPUExecutionCap(ULONG *aCPUExecutionCap) = 0;
    virtual HRESULT setCPUExecutionCap(ULONG aCPUExecutionCap) = 0;
    virtual HRESULT getCPUIDPortabilityLevel(ULONG *aCPUIDPortabilityLevel) = 0;
    virtual HRESULT setCPUIDPortabilityLevel(ULONG aCPUIDPortabilityLevel) = 0;
    virtual HRESULT getMemorySize(ULONG *aMemorySize) = 0;
    virtual HRESULT setMemorySize(ULONG aMemorySize) = 0;
    virtual HRESULT getMemoryBalloonSize(ULONG *aMemoryBalloonSize) = 0;
    virtual HRESULT setMemoryBalloonSize(ULONG aMemoryBalloonSize) = 0;
    virtual HRESULT getPageFusionEnabled(BOOL *aPageFusionEnabled) = 0;
    virtual HRESULT setPageFusionEnabled(BOOL aPageFusionEnabled) = 0;
    virtual HRESULT getGraphicsAdapter(ComPtr<IGraphicsAdapter> &aGraphicsAdapter) = 0;
    virtual HRESULT getPlatform(ComPtr<IPlatform> &aPlatform) = 0;
    virtual HRESULT getFirmwareSettings(ComPtr<IFirmwareSettings> &aFirmwareSettings) = 0;
    virtual HRESULT getTrustedPlatformModule(ComPtr<ITrustedPlatformModule> &aTrustedPlatformModule) = 0;
    virtual HRESULT getNonVolatileStore(ComPtr<INvramStore> &aNonVolatileStore) = 0;
    virtual HRESULT getRecordingSettings(ComPtr<IRecordingSettings> &aRecordingSettings) = 0;
    virtual HRESULT getPointingHIDType(PointingHIDType_T *aPointingHIDType) = 0;
    virtual HRESULT setPointingHIDType(PointingHIDType_T aPointingHIDType) = 0;
    virtual HRESULT getKeyboardHIDType(KeyboardHIDType_T *aKeyboardHIDType) = 0;
    virtual HRESULT setKeyboardHIDType(KeyboardHIDType_T aKeyboardHIDType) = 0;
    virtual HRESULT getSnapshotFolder(com::Utf8Str &aSnapshotFolder) = 0;
    virtual HRESULT setSnapshotFolder(const com::Utf8Str &aSnapshotFolder) = 0;
    virtual HRESULT getVRDEServer(ComPtr<IVRDEServer> &aVRDEServer) = 0;
    virtual HRESULT getEmulatedUSBCardReaderEnabled(BOOL *aEmulatedUSBCardReaderEnabled) = 0;
    virtual HRESULT setEmulatedUSBCardReaderEnabled(BOOL aEmulatedUSBCardReaderEnabled) = 0;
    virtual HRESULT getMediumAttachments(std::vector<ComPtr<IMediumAttachment> > &aMediumAttachments) = 0;
    virtual HRESULT getUSBControllers(std::vector<ComPtr<IUSBController> > &aUSBControllers) = 0;
    virtual HRESULT getUSBDeviceFilters(ComPtr<IUSBDeviceFilters> &aUSBDeviceFilters) = 0;
    virtual HRESULT getAudioSettings(ComPtr<IAudioSettings> &aAudioSettings) = 0;
    virtual HRESULT getStorageControllers(std::vector<ComPtr<IStorageController> > &aStorageControllers) = 0;
    virtual HRESULT getSettingsFilePath(com::Utf8Str &aSettingsFilePath) = 0;
    virtual HRESULT getSettingsAuxFilePath(com::Utf8Str &aSettingsAuxFilePath) = 0;
    virtual HRESULT getSettingsModified(BOOL *aSettingsModified) = 0;
    virtual HRESULT getSessionState(SessionState_T *aSessionState) = 0;
    virtual HRESULT getSessionName(com::Utf8Str &aSessionName) = 0;
    virtual HRESULT getSessionPID(ULONG *aSessionPID) = 0;
    virtual HRESULT getState(MachineState_T *aState) = 0;
    virtual HRESULT getLastStateChange(LONG64 *aLastStateChange) = 0;
    virtual HRESULT getStateFilePath(com::Utf8Str &aStateFilePath) = 0;
    virtual HRESULT getLogFolder(com::Utf8Str &aLogFolder) = 0;
    virtual HRESULT getCurrentSnapshot(ComPtr<ISnapshot> &aCurrentSnapshot) = 0;
    virtual HRESULT getSnapshotCount(ULONG *aSnapshotCount) = 0;
    virtual HRESULT getCurrentStateModified(BOOL *aCurrentStateModified) = 0;
    virtual HRESULT getSharedFolders(std::vector<ComPtr<ISharedFolder> > &aSharedFolders) = 0;
    virtual HRESULT getClipboardMode(ClipboardMode_T *aClipboardMode) = 0;
    virtual HRESULT setClipboardMode(ClipboardMode_T aClipboardMode) = 0;
    virtual HRESULT getClipboardFileTransfersEnabled(BOOL *aClipboardFileTransfersEnabled) = 0;
    virtual HRESULT setClipboardFileTransfersEnabled(BOOL aClipboardFileTransfersEnabled) = 0;
    virtual HRESULT getDnDMode(DnDMode_T *aDnDMode) = 0;
    virtual HRESULT setDnDMode(DnDMode_T aDnDMode) = 0;
    virtual HRESULT getTeleporterEnabled(BOOL *aTeleporterEnabled) = 0;
    virtual HRESULT setTeleporterEnabled(BOOL aTeleporterEnabled) = 0;
    virtual HRESULT getTeleporterPort(ULONG *aTeleporterPort) = 0;
    virtual HRESULT setTeleporterPort(ULONG aTeleporterPort) = 0;
    virtual HRESULT getTeleporterAddress(com::Utf8Str &aTeleporterAddress) = 0;
    virtual HRESULT setTeleporterAddress(const com::Utf8Str &aTeleporterAddress) = 0;
    virtual HRESULT getTeleporterPassword(com::Utf8Str &aTeleporterPassword) = 0;
    virtual HRESULT setTeleporterPassword(const com::Utf8Str &aTeleporterPassword) = 0;
    virtual HRESULT getParavirtProvider(ParavirtProvider_T *aParavirtProvider) = 0;
    virtual HRESULT setParavirtProvider(ParavirtProvider_T aParavirtProvider) = 0;
    virtual HRESULT getIOCacheEnabled(BOOL *aIOCacheEnabled) = 0;
    virtual HRESULT setIOCacheEnabled(BOOL aIOCacheEnabled) = 0;
    virtual HRESULT getIOCacheSize(ULONG *aIOCacheSize) = 0;
    virtual HRESULT setIOCacheSize(ULONG aIOCacheSize) = 0;
    virtual HRESULT getPCIDeviceAssignments(std::vector<ComPtr<IPCIDeviceAttachment> > &aPCIDeviceAssignments) = 0;
    virtual HRESULT getBandwidthControl(ComPtr<IBandwidthControl> &aBandwidthControl) = 0;
    virtual HRESULT getTracingEnabled(BOOL *aTracingEnabled) = 0;
    virtual HRESULT setTracingEnabled(BOOL aTracingEnabled) = 0;
    virtual HRESULT getTracingConfig(com::Utf8Str &aTracingConfig) = 0;
    virtual HRESULT setTracingConfig(const com::Utf8Str &aTracingConfig) = 0;
    virtual HRESULT getAllowTracingToAccessVM(BOOL *aAllowTracingToAccessVM) = 0;
    virtual HRESULT setAllowTracingToAccessVM(BOOL aAllowTracingToAccessVM) = 0;
    virtual HRESULT getAutostartEnabled(BOOL *aAutostartEnabled) = 0;
    virtual HRESULT setAutostartEnabled(BOOL aAutostartEnabled) = 0;
    virtual HRESULT getAutostartDelay(ULONG *aAutostartDelay) = 0;
    virtual HRESULT setAutostartDelay(ULONG aAutostartDelay) = 0;
    virtual HRESULT getAutostopType(AutostopType_T *aAutostopType) = 0;
    virtual HRESULT setAutostopType(AutostopType_T aAutostopType) = 0;
    virtual HRESULT getDefaultFrontend(com::Utf8Str &aDefaultFrontend) = 0;
    virtual HRESULT setDefaultFrontend(const com::Utf8Str &aDefaultFrontend) = 0;
    virtual HRESULT getUSBProxyAvailable(BOOL *aUSBProxyAvailable) = 0;
    virtual HRESULT getVMProcessPriority(VMProcPriority_T *aVMProcessPriority) = 0;
    virtual HRESULT setVMProcessPriority(VMProcPriority_T aVMProcessPriority) = 0;
    virtual HRESULT getVMExecutionEngine(VMExecutionEngine_T *aVMExecutionEngine) = 0;
    virtual HRESULT setVMExecutionEngine(VMExecutionEngine_T aVMExecutionEngine) = 0;
    virtual HRESULT getParavirtDebug(com::Utf8Str &aParavirtDebug) = 0;
    virtual HRESULT setParavirtDebug(const com::Utf8Str &aParavirtDebug) = 0;
    virtual HRESULT getCPUProfile(com::Utf8Str &aCPUProfile) = 0;
    virtual HRESULT setCPUProfile(const com::Utf8Str &aCPUProfile) = 0;
    virtual HRESULT getStateKeyId(com::Utf8Str &aStateKeyId) = 0;
    virtual HRESULT getStateKeyStore(com::Utf8Str &aStateKeyStore) = 0;
    virtual HRESULT getLogKeyId(com::Utf8Str &aLogKeyId) = 0;
    virtual HRESULT getLogKeyStore(com::Utf8Str &aLogKeyStore) = 0;
    virtual HRESULT getGuestDebugControl(ComPtr<IGuestDebugControl> &aGuestDebugControl) = 0;
    /** @} */

    /** @name Wrapped IMachine methods
     * @{ */
    virtual HRESULT lockMachine(const ComPtr<ISession> &aSession,
                                LockType_T aLockType) = 0;
    virtual HRESULT launchVMProcess(const ComPtr<ISession> &aSession,
                                    const com::Utf8Str &aName,
                                    const std::vector<com::Utf8Str> &aEnvironmentChanges,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT setBootOrder(ULONG aPosition,
                                 DeviceType_T aDevice) = 0;
    virtual HRESULT getBootOrder(ULONG aPosition,
                                 DeviceType_T *aDevice) = 0;
    virtual HRESULT attachDevice(const com::Utf8Str &aName,
                                 LONG aControllerPort,
                                 LONG aDevice,
                                 DeviceType_T aType,
                                 const ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT attachDeviceWithoutMedium(const com::Utf8Str &aName,
                                              LONG aControllerPort,
                                              LONG aDevice,
                                              DeviceType_T aType) = 0;
    virtual HRESULT detachDevice(const com::Utf8Str &aName,
                                 LONG aControllerPort,
                                 LONG aDevice) = 0;
    virtual HRESULT passthroughDevice(const com::Utf8Str &aName,
                                      LONG aControllerPort,
                                      LONG aDevice,
                                      BOOL aPassthrough) = 0;
    virtual HRESULT temporaryEjectDevice(const com::Utf8Str &aName,
                                         LONG aControllerPort,
                                         LONG aDevice,
                                         BOOL aTemporaryEject) = 0;
    virtual HRESULT nonRotationalDevice(const com::Utf8Str &aName,
                                        LONG aControllerPort,
                                        LONG aDevice,
                                        BOOL aNonRotational) = 0;
    virtual HRESULT setAutoDiscardForDevice(const com::Utf8Str &aName,
                                            LONG aControllerPort,
                                            LONG aDevice,
                                            BOOL aDiscard) = 0;
    virtual HRESULT setHotPluggableForDevice(const com::Utf8Str &aName,
                                             LONG aControllerPort,
                                             LONG aDevice,
                                             BOOL aHotPluggable) = 0;
    virtual HRESULT setBandwidthGroupForDevice(const com::Utf8Str &aName,
                                               LONG aControllerPort,
                                               LONG aDevice,
                                               const ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT setNoBandwidthGroupForDevice(const com::Utf8Str &aName,
                                                 LONG aControllerPort,
                                                 LONG aDevice) = 0;
    virtual HRESULT unmountMedium(const com::Utf8Str &aName,
                                  LONG aControllerPort,
                                  LONG aDevice,
                                  BOOL aForce) = 0;
    virtual HRESULT mountMedium(const com::Utf8Str &aName,
                                LONG aControllerPort,
                                LONG aDevice,
                                const ComPtr<IMedium> &aMedium,
                                BOOL aForce) = 0;
    virtual HRESULT getMedium(const com::Utf8Str &aName,
                              LONG aControllerPort,
                              LONG aDevice,
                              ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT getMediumAttachmentsOfController(const com::Utf8Str &aName,
                                                     std::vector<ComPtr<IMediumAttachment> > &aMediumAttachments) = 0;
    virtual HRESULT getMediumAttachment(const com::Utf8Str &aName,
                                        LONG aControllerPort,
                                        LONG aDevice,
                                        ComPtr<IMediumAttachment> &aAttachment) = 0;
    virtual HRESULT attachHostPCIDevice(LONG aHostAddress,
                                        LONG aDesiredGuestAddress,
                                        BOOL aTryToUnbind) = 0;
    virtual HRESULT detachHostPCIDevice(LONG aHostAddress) = 0;
    virtual HRESULT getNetworkAdapter(ULONG aSlot,
                                      ComPtr<INetworkAdapter> &aAdapter) = 0;
    virtual HRESULT addStorageController(const com::Utf8Str &aName,
                                         StorageBus_T aConnectionType,
                                         ComPtr<IStorageController> &aController) = 0;
    virtual HRESULT getStorageControllerByName(const com::Utf8Str &aName,
                                               ComPtr<IStorageController> &aStorageController) = 0;
    virtual HRESULT getStorageControllerByInstance(StorageBus_T aConnectionType,
                                                   ULONG aInstance,
                                                   ComPtr<IStorageController> &aStorageController) = 0;
    virtual HRESULT removeStorageController(const com::Utf8Str &aName) = 0;
    virtual HRESULT setStorageControllerBootable(const com::Utf8Str &aName,
                                                 BOOL aBootable) = 0;
    virtual HRESULT addUSBController(const com::Utf8Str &aName,
                                     USBControllerType_T aType,
                                     ComPtr<IUSBController> &aController) = 0;
    virtual HRESULT removeUSBController(const com::Utf8Str &aName) = 0;
    virtual HRESULT getUSBControllerByName(const com::Utf8Str &aName,
                                           ComPtr<IUSBController> &aController) = 0;
    virtual HRESULT getUSBControllerCountByType(USBControllerType_T aType,
                                                ULONG *aControllers) = 0;
    virtual HRESULT getSerialPort(ULONG aSlot,
                                  ComPtr<ISerialPort> &aPort) = 0;
    virtual HRESULT getParallelPort(ULONG aSlot,
                                    ComPtr<IParallelPort> &aPort) = 0;
    virtual HRESULT getExtraDataKeys(std::vector<com::Utf8Str> &aKeys) = 0;
    virtual HRESULT getExtraData(const com::Utf8Str &aKey,
                                 com::Utf8Str &aValue) = 0;
    virtual HRESULT setExtraData(const com::Utf8Str &aKey,
                                 const com::Utf8Str &aValue) = 0;
    virtual HRESULT setSettingsFilePath(const com::Utf8Str &aSettingsFilePath,
                                        ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT saveSettings() = 0;
    virtual HRESULT discardSettings() = 0;
    virtual HRESULT unregister(AutoCaller &aAutoCaller,
                               CleanupMode_T aCleanupMode,
                               std::vector<ComPtr<IMedium> > &aMedia) = 0;
    virtual HRESULT deleteConfig(const std::vector<ComPtr<IMedium> > &aMedia,
                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT exportTo(const ComPtr<IAppliance> &aAppliance,
                             const com::Utf8Str &aLocation,
                             ComPtr<IVirtualSystemDescription> &aDescription) = 0;
    virtual HRESULT findSnapshot(const com::Utf8Str &aNameOrId,
                                 ComPtr<ISnapshot> &aSnapshot) = 0;
    virtual HRESULT createSharedFolder(const com::Utf8Str &aName,
                                       const com::Utf8Str &aHostPath,
                                       BOOL aWritable,
                                       BOOL aAutomount,
                                       const com::Utf8Str &aAutoMountPoint) = 0;
    virtual HRESULT removeSharedFolder(const com::Utf8Str &aName) = 0;
    virtual HRESULT canShowConsoleWindow(BOOL *aCanShow) = 0;
    virtual HRESULT showConsoleWindow(LONG64 *aWinId) = 0;
    virtual HRESULT getGuestProperty(const com::Utf8Str &aName,
                                     com::Utf8Str &aValue,
                                     LONG64 *aTimestamp,
                                     com::Utf8Str &aFlags) = 0;
    virtual HRESULT getGuestPropertyValue(const com::Utf8Str &aProperty,
                                          com::Utf8Str &aValue) = 0;
    virtual HRESULT getGuestPropertyTimestamp(const com::Utf8Str &aProperty,
                                              LONG64 *aValue) = 0;
    virtual HRESULT setGuestProperty(const com::Utf8Str &aProperty,
                                     const com::Utf8Str &aValue,
                                     const com::Utf8Str &aFlags) = 0;
    virtual HRESULT setGuestPropertyValue(const com::Utf8Str &aProperty,
                                          const com::Utf8Str &aValue) = 0;
    virtual HRESULT deleteGuestProperty(const com::Utf8Str &aName) = 0;
    virtual HRESULT enumerateGuestProperties(const com::Utf8Str &aPatterns,
                                             std::vector<com::Utf8Str> &aNames,
                                             std::vector<com::Utf8Str> &aValues,
                                             std::vector<LONG64> &aTimestamps,
                                             std::vector<com::Utf8Str> &aFlags) = 0;
    virtual HRESULT querySavedGuestScreenInfo(ULONG aScreenId,
                                              ULONG *aOriginX,
                                              ULONG *aOriginY,
                                              ULONG *aWidth,
                                              ULONG *aHeight,
                                              BOOL *aEnabled) = 0;
    virtual HRESULT readSavedThumbnailToArray(ULONG aScreenId,
                                              BitmapFormat_T aBitmapFormat,
                                              ULONG *aWidth,
                                              ULONG *aHeight,
                                              std::vector<BYTE> &aData) = 0;
    virtual HRESULT querySavedScreenshotInfo(ULONG aScreenId,
                                             ULONG *aWidth,
                                             ULONG *aHeight,
                                             std::vector<BitmapFormat_T> &aBitmapFormats) = 0;
    virtual HRESULT readSavedScreenshotToArray(ULONG aScreenId,
                                               BitmapFormat_T aBitmapFormat,
                                               ULONG *aWidth,
                                               ULONG *aHeight,
                                               std::vector<BYTE> &aData) = 0;
    virtual HRESULT hotPlugCPU(ULONG aCpu) = 0;
    virtual HRESULT hotUnplugCPU(ULONG aCpu) = 0;
    virtual HRESULT getCPUStatus(ULONG aCpu,
                                 BOOL *aAttached) = 0;
    virtual HRESULT getEffectiveParavirtProvider(ParavirtProvider_T *aParavirtProvider) = 0;
    virtual HRESULT queryLogFilename(ULONG aIdx,
                                     com::Utf8Str &aFilename) = 0;
    virtual HRESULT readLog(ULONG aIdx,
                            LONG64 aOffset,
                            LONG64 aSize,
                            std::vector<BYTE> &aData) = 0;
    virtual HRESULT cloneTo(const ComPtr<IMachine> &aTarget,
                            CloneMode_T aMode,
                            const std::vector<CloneOptions_T> &aOptions,
                            ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT moveTo(const com::Utf8Str &aFolder,
                           const com::Utf8Str &aType,
                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT saveState(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT adoptSavedState(const com::Utf8Str &aSavedStateFile) = 0;
    virtual HRESULT discardSavedState(BOOL aFRemoveFile) = 0;
    virtual HRESULT takeSnapshot(const com::Utf8Str &aName,
                                 const com::Utf8Str &aDescription,
                                 BOOL aPause,
                                 com::Guid &aId,
                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteSnapshot(const com::Guid &aId,
                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteSnapshotAndAllChildren(const com::Guid &aId,
                                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteSnapshotRange(const com::Guid &aStartId,
                                        const com::Guid &aEndId,
                                        ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT restoreSnapshot(const ComPtr<ISnapshot> &aSnapshot,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT applyDefaults(const com::Utf8Str &aFlags) = 0;
    virtual HRESULT changeEncryption(const com::Utf8Str &aCurrentPassword,
                                     const com::Utf8Str &aCipher,
                                     const com::Utf8Str &aNewPassword,
                                     const com::Utf8Str &aNewPasswordId,
                                     BOOL aForce,
                                     ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getEncryptionSettings(com::Utf8Str &aCipher,
                                          com::Utf8Str &aPasswordId) = 0;
    virtual HRESULT checkEncryptionPassword(const com::Utf8Str &aPassword) = 0;
    virtual HRESULT addEncryptionPassword(const com::Utf8Str &aId,
                                          const com::Utf8Str &aPassword) = 0;
    virtual HRESULT addEncryptionPasswords(const std::vector<com::Utf8Str> &aIds,
                                           const std::vector<com::Utf8Str> &aPasswords) = 0;
    virtual HRESULT removeEncryptionPassword(AutoCaller &aAutoCaller,
                                             const com::Utf8Str &aId) = 0;
    virtual HRESULT clearAllEncryptionPasswords(AutoCaller &aAutoCaller) = 0;
    /** @} */

    /** @name Wrapped IInternalMachineControl properties
     * @{ */
    /** @} */

    /** @name Wrapped IInternalMachineControl methods
     * @{ */
    virtual HRESULT updateState(MachineState_T aState) = 0;
    virtual HRESULT beginPowerUp(const ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT endPowerUp(LONG aResult) = 0;
    virtual HRESULT beginPoweringDown(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT endPoweringDown(LONG aResult,
                                    const com::Utf8Str &aErrMsg) = 0;
    virtual HRESULT runUSBDeviceFilters(const ComPtr<IUSBDevice> &aDevice,
                                        BOOL *aMatched,
                                        ULONG *aMaskedInterfaces) = 0;
    virtual HRESULT captureUSBDevice(const com::Guid &aId,
                                     const com::Utf8Str &aCaptureFilename) = 0;
    virtual HRESULT detachUSBDevice(const com::Guid &aId,
                                    BOOL aDone) = 0;
    virtual HRESULT autoCaptureUSBDevices() = 0;
    virtual HRESULT detachAllUSBDevices(BOOL aDone) = 0;
    virtual HRESULT onSessionEnd(const ComPtr<ISession> &aSession,
                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT finishOnlineMergeMedium() = 0;
    virtual HRESULT pullGuestProperties(std::vector<com::Utf8Str> &aNames,
                                        std::vector<com::Utf8Str> &aValues,
                                        std::vector<LONG64> &aTimestamps,
                                        std::vector<com::Utf8Str> &aFlags) = 0;
    virtual HRESULT pushGuestProperty(const com::Utf8Str &aName,
                                      const com::Utf8Str &aValue,
                                      LONG64 aTimestamp,
                                      const com::Utf8Str &aFlags,
                                      BOOL aFWasDeleted) = 0;
    virtual HRESULT lockMedia() = 0;
    virtual HRESULT unlockMedia() = 0;
    virtual HRESULT ejectMedium(const ComPtr<IMediumAttachment> &aAttachment,
                                ComPtr<IMediumAttachment> &aNewAttachment) = 0;
    virtual HRESULT reportVmStatistics(ULONG aValidStats,
                                       ULONG aCpuUser,
                                       ULONG aCpuKernel,
                                       ULONG aCpuIdle,
                                       ULONG aMemTotal,
                                       ULONG aMemFree,
                                       ULONG aMemBalloon,
                                       ULONG aMemShared,
                                       ULONG aMemCache,
                                       ULONG aPagedTotal,
                                       ULONG aMemAllocTotal,
                                       ULONG aMemFreeTotal,
                                       ULONG aMemBalloonTotal,
                                       ULONG aMemSharedTotal,
                                       ULONG aVmNetRx,
                                       ULONG aVmNetTx) = 0;
    virtual HRESULT authenticateExternal(const std::vector<com::Utf8Str> &aAuthParams,
                                         com::Utf8Str &aResult) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MachineWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MachineWrap_H_
