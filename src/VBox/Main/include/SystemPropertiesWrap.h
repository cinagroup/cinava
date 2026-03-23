/** @file
 * VirtualBox API class wrapper header for ISystemProperties.
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

#ifndef SystemPropertiesWrap_H_
#define SystemPropertiesWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SystemPropertiesWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ISystemProperties)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SystemPropertiesWrap, ISystemProperties)
    DECLARE_NOT_AGGREGATABLE(SystemPropertiesWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SystemPropertiesWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISystemProperties)
        COM_INTERFACE_ENTRY2(IDispatch, ISystemProperties)
        VBOX_TWEAK_INTERFACE_ENTRY(ISystemProperties)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(SystemPropertiesWrap)

    /** @name Public ISystemProperties properties
     * @{ */
    STDMETHOD(COMGETTER(Platform))(IPlatformProperties **aPlatform) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MinGuestRAM))(ULONG *aMinGuestRAM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxGuestRAM))(ULONG *aMaxGuestRAM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MinGuestVRAM))(ULONG *aMinGuestVRAM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxGuestVRAM))(ULONG *aMaxGuestVRAM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MinGuestCPUCount))(ULONG *aMinGuestCPUCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxGuestCPUCount))(ULONG *aMaxGuestCPUCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxGuestMonitors))(ULONG *aMaxGuestMonitors) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InfoVDSize))(LONG64 *aInfoVDSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultMachineFolder))(BSTR *aDefaultMachineFolder) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultMachineFolder))(IN_BSTR aDefaultMachineFolder) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LoggingLevel))(BSTR *aLoggingLevel) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LoggingLevel))(IN_BSTR aLoggingLevel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MediumFormats))(ComSafeArrayOut(IMediumFormat *, aMediumFormats)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultHardDiskFormat))(BSTR *aDefaultHardDiskFormat) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultHardDiskFormat))(IN_BSTR aDefaultHardDiskFormat) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FreeDiskSpaceWarning))(LONG64 *aFreeDiskSpaceWarning) RT_OVERRIDE;
    STDMETHOD(COMSETTER(FreeDiskSpaceWarning))(LONG64 aFreeDiskSpaceWarning) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FreeDiskSpacePercentWarning))(ULONG *aFreeDiskSpacePercentWarning) RT_OVERRIDE;
    STDMETHOD(COMSETTER(FreeDiskSpacePercentWarning))(ULONG aFreeDiskSpacePercentWarning) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FreeDiskSpaceError))(LONG64 *aFreeDiskSpaceError) RT_OVERRIDE;
    STDMETHOD(COMSETTER(FreeDiskSpaceError))(LONG64 aFreeDiskSpaceError) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FreeDiskSpacePercentError))(ULONG *aFreeDiskSpacePercentError) RT_OVERRIDE;
    STDMETHOD(COMSETTER(FreeDiskSpacePercentError))(ULONG aFreeDiskSpacePercentError) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VRDEAuthLibrary))(BSTR *aVRDEAuthLibrary) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VRDEAuthLibrary))(IN_BSTR aVRDEAuthLibrary) RT_OVERRIDE;
    STDMETHOD(COMGETTER(WebServiceAuthLibrary))(BSTR *aWebServiceAuthLibrary) RT_OVERRIDE;
    STDMETHOD(COMSETTER(WebServiceAuthLibrary))(IN_BSTR aWebServiceAuthLibrary) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultVRDEExtPack))(BSTR *aDefaultVRDEExtPack) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultVRDEExtPack))(IN_BSTR aDefaultVRDEExtPack) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultCryptoExtPack))(BSTR *aDefaultCryptoExtPack) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultCryptoExtPack))(IN_BSTR aDefaultCryptoExtPack) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogHistoryCount))(ULONG *aLogHistoryCount) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LogHistoryCount))(ULONG aLogHistoryCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultAudioDriver))(AudioDriverType_T *aDefaultAudioDriver) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutostartDatabasePath))(BSTR *aAutostartDatabasePath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutostartDatabasePath))(IN_BSTR aAutostartDatabasePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultAdditionsISO))(BSTR *aDefaultAdditionsISO) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultAdditionsISO))(IN_BSTR aDefaultAdditionsISO) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultFrontend))(BSTR *aDefaultFrontend) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultFrontend))(IN_BSTR aDefaultFrontend) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ScreenShotFormats))(ComSafeArrayOut(BitmapFormat_T, aScreenShotFormats)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProxyMode))(ProxyMode_T *aProxyMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ProxyMode))(ProxyMode_T aProxyMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProxyURL))(BSTR *aProxyURL) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ProxyURL))(IN_BSTR aProxyURL) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedPlatformArchitectures))(ComSafeArrayOut(PlatformArchitecture_T, aSupportedPlatformArchitectures)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedClipboardModes))(ComSafeArrayOut(ClipboardMode_T, aSupportedClipboardModes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedDnDModes))(ComSafeArrayOut(DnDMode_T, aSupportedDnDModes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedPointingHIDTypes))(ComSafeArrayOut(PointingHIDType_T, aSupportedPointingHIDTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedKeyboardHIDTypes))(ComSafeArrayOut(KeyboardHIDType_T, aSupportedKeyboardHIDTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedVFSTypes))(ComSafeArrayOut(VFSType_T, aSupportedVFSTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedImportOptions))(ComSafeArrayOut(ImportOptions_T, aSupportedImportOptions)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedExportOptions))(ComSafeArrayOut(ExportOptions_T, aSupportedExportOptions)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedGraphicsFeatures))(ComSafeArrayOut(GraphicsFeature_T, aSupportedGraphicsFeatures)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedRecordingFeatures))(ComSafeArrayOut(RecordingFeature_T, aSupportedRecordingFeatures)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedRecordingAudioCodecs))(ComSafeArrayOut(RecordingAudioCodec_T, aSupportedRecordingAudioCodecs)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedRecordingVideoCodecs))(ComSafeArrayOut(RecordingVideoCodec_T, aSupportedRecordingVideoCodecs)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedRecordingVSModes))(ComSafeArrayOut(RecordingVideoScalingMode_T, aSupportedRecordingVSModes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedRecordingARCModes))(ComSafeArrayOut(RecordingRateControlMode_T, aSupportedRecordingARCModes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedRecordingVRCModes))(ComSafeArrayOut(RecordingRateControlMode_T, aSupportedRecordingVRCModes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedCloneOptions))(ComSafeArrayOut(CloneOptions_T, aSupportedCloneOptions)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedAutostopTypes))(ComSafeArrayOut(AutostopType_T, aSupportedAutostopTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedVMProcPriorities))(ComSafeArrayOut(VMProcPriority_T, aSupportedVMProcPriorities)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedNetworkAttachmentTypes))(ComSafeArrayOut(NetworkAttachmentType_T, aSupportedNetworkAttachmentTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedPortModes))(ComSafeArrayOut(PortMode_T, aSupportedPortModes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedAudioDriverTypes))(ComSafeArrayOut(AudioDriverType_T, aSupportedAudioDriverTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LanguageId))(BSTR *aLanguageId) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LanguageId))(IN_BSTR aLanguageId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16ISystemProperties))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ISystemProperties methods
     * @{ */
    STDMETHOD(GetDefaultIoCacheSettingForStorageController)(StorageControllerType_T aControllerType,
                                                            BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(GetCPUProfiles)(CPUArchitecture_T aArchitecture,
                              IN_BSTR aNamePattern,
                              ComSafeArrayOut(ICPUProfile *, aProfiles)) RT_OVERRIDE;
    STDMETHOD(GetExecutionEnginesForVmCpuArchitecture)(CPUArchitecture_T aCpuArchitecture,
                                                       ComSafeArrayOut(VMExecutionEngine_T, aExecutionEngine)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ISystemProperties)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ISystemProperties)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ISystemProperties)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ISystemProperties)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ISystemProperties properties
     * @{ */
    virtual HRESULT getPlatform(ComPtr<IPlatformProperties> &aPlatform) = 0;
    virtual HRESULT getMinGuestRAM(ULONG *aMinGuestRAM) = 0;
    virtual HRESULT getMaxGuestRAM(ULONG *aMaxGuestRAM) = 0;
    virtual HRESULT getMinGuestVRAM(ULONG *aMinGuestVRAM) = 0;
    virtual HRESULT getMaxGuestVRAM(ULONG *aMaxGuestVRAM) = 0;
    virtual HRESULT getMinGuestCPUCount(ULONG *aMinGuestCPUCount) = 0;
    virtual HRESULT getMaxGuestCPUCount(ULONG *aMaxGuestCPUCount) = 0;
    virtual HRESULT getMaxGuestMonitors(ULONG *aMaxGuestMonitors) = 0;
    virtual HRESULT getInfoVDSize(LONG64 *aInfoVDSize) = 0;
    virtual HRESULT getDefaultMachineFolder(com::Utf8Str &aDefaultMachineFolder) = 0;
    virtual HRESULT setDefaultMachineFolder(const com::Utf8Str &aDefaultMachineFolder) = 0;
    virtual HRESULT getLoggingLevel(com::Utf8Str &aLoggingLevel) = 0;
    virtual HRESULT setLoggingLevel(const com::Utf8Str &aLoggingLevel) = 0;
    virtual HRESULT getMediumFormats(std::vector<ComPtr<IMediumFormat> > &aMediumFormats) = 0;
    virtual HRESULT getDefaultHardDiskFormat(com::Utf8Str &aDefaultHardDiskFormat) = 0;
    virtual HRESULT setDefaultHardDiskFormat(const com::Utf8Str &aDefaultHardDiskFormat) = 0;
    virtual HRESULT getFreeDiskSpaceWarning(LONG64 *aFreeDiskSpaceWarning) = 0;
    virtual HRESULT setFreeDiskSpaceWarning(LONG64 aFreeDiskSpaceWarning) = 0;
    virtual HRESULT getFreeDiskSpacePercentWarning(ULONG *aFreeDiskSpacePercentWarning) = 0;
    virtual HRESULT setFreeDiskSpacePercentWarning(ULONG aFreeDiskSpacePercentWarning) = 0;
    virtual HRESULT getFreeDiskSpaceError(LONG64 *aFreeDiskSpaceError) = 0;
    virtual HRESULT setFreeDiskSpaceError(LONG64 aFreeDiskSpaceError) = 0;
    virtual HRESULT getFreeDiskSpacePercentError(ULONG *aFreeDiskSpacePercentError) = 0;
    virtual HRESULT setFreeDiskSpacePercentError(ULONG aFreeDiskSpacePercentError) = 0;
    virtual HRESULT getVRDEAuthLibrary(com::Utf8Str &aVRDEAuthLibrary) = 0;
    virtual HRESULT setVRDEAuthLibrary(const com::Utf8Str &aVRDEAuthLibrary) = 0;
    virtual HRESULT getWebServiceAuthLibrary(com::Utf8Str &aWebServiceAuthLibrary) = 0;
    virtual HRESULT setWebServiceAuthLibrary(const com::Utf8Str &aWebServiceAuthLibrary) = 0;
    virtual HRESULT getDefaultVRDEExtPack(com::Utf8Str &aDefaultVRDEExtPack) = 0;
    virtual HRESULT setDefaultVRDEExtPack(const com::Utf8Str &aDefaultVRDEExtPack) = 0;
    virtual HRESULT getDefaultCryptoExtPack(com::Utf8Str &aDefaultCryptoExtPack) = 0;
    virtual HRESULT setDefaultCryptoExtPack(const com::Utf8Str &aDefaultCryptoExtPack) = 0;
    virtual HRESULT getLogHistoryCount(ULONG *aLogHistoryCount) = 0;
    virtual HRESULT setLogHistoryCount(ULONG aLogHistoryCount) = 0;
    virtual HRESULT getDefaultAudioDriver(AudioDriverType_T *aDefaultAudioDriver) = 0;
    virtual HRESULT getAutostartDatabasePath(com::Utf8Str &aAutostartDatabasePath) = 0;
    virtual HRESULT setAutostartDatabasePath(const com::Utf8Str &aAutostartDatabasePath) = 0;
    virtual HRESULT getDefaultAdditionsISO(com::Utf8Str &aDefaultAdditionsISO) = 0;
    virtual HRESULT setDefaultAdditionsISO(const com::Utf8Str &aDefaultAdditionsISO) = 0;
    virtual HRESULT getDefaultFrontend(com::Utf8Str &aDefaultFrontend) = 0;
    virtual HRESULT setDefaultFrontend(const com::Utf8Str &aDefaultFrontend) = 0;
    virtual HRESULT getScreenShotFormats(std::vector<BitmapFormat_T> &aScreenShotFormats) = 0;
    virtual HRESULT getProxyMode(ProxyMode_T *aProxyMode) = 0;
    virtual HRESULT setProxyMode(ProxyMode_T aProxyMode) = 0;
    virtual HRESULT getProxyURL(com::Utf8Str &aProxyURL) = 0;
    virtual HRESULT setProxyURL(const com::Utf8Str &aProxyURL) = 0;
    virtual HRESULT getSupportedPlatformArchitectures(std::vector<PlatformArchitecture_T> &aSupportedPlatformArchitectures) = 0;
    virtual HRESULT getSupportedClipboardModes(std::vector<ClipboardMode_T> &aSupportedClipboardModes) = 0;
    virtual HRESULT getSupportedDnDModes(std::vector<DnDMode_T> &aSupportedDnDModes) = 0;
    virtual HRESULT getSupportedPointingHIDTypes(std::vector<PointingHIDType_T> &aSupportedPointingHIDTypes) = 0;
    virtual HRESULT getSupportedKeyboardHIDTypes(std::vector<KeyboardHIDType_T> &aSupportedKeyboardHIDTypes) = 0;
    virtual HRESULT getSupportedVFSTypes(std::vector<VFSType_T> &aSupportedVFSTypes) = 0;
    virtual HRESULT getSupportedImportOptions(std::vector<ImportOptions_T> &aSupportedImportOptions) = 0;
    virtual HRESULT getSupportedExportOptions(std::vector<ExportOptions_T> &aSupportedExportOptions) = 0;
    virtual HRESULT getSupportedGraphicsFeatures(std::vector<GraphicsFeature_T> &aSupportedGraphicsFeatures) = 0;
    virtual HRESULT getSupportedRecordingFeatures(std::vector<RecordingFeature_T> &aSupportedRecordingFeatures) = 0;
    virtual HRESULT getSupportedRecordingAudioCodecs(std::vector<RecordingAudioCodec_T> &aSupportedRecordingAudioCodecs) = 0;
    virtual HRESULT getSupportedRecordingVideoCodecs(std::vector<RecordingVideoCodec_T> &aSupportedRecordingVideoCodecs) = 0;
    virtual HRESULT getSupportedRecordingVSModes(std::vector<RecordingVideoScalingMode_T> &aSupportedRecordingVSModes) = 0;
    virtual HRESULT getSupportedRecordingARCModes(std::vector<RecordingRateControlMode_T> &aSupportedRecordingARCModes) = 0;
    virtual HRESULT getSupportedRecordingVRCModes(std::vector<RecordingRateControlMode_T> &aSupportedRecordingVRCModes) = 0;
    virtual HRESULT getSupportedCloneOptions(std::vector<CloneOptions_T> &aSupportedCloneOptions) = 0;
    virtual HRESULT getSupportedAutostopTypes(std::vector<AutostopType_T> &aSupportedAutostopTypes) = 0;
    virtual HRESULT getSupportedVMProcPriorities(std::vector<VMProcPriority_T> &aSupportedVMProcPriorities) = 0;
    virtual HRESULT getSupportedNetworkAttachmentTypes(std::vector<NetworkAttachmentType_T> &aSupportedNetworkAttachmentTypes) = 0;
    virtual HRESULT getSupportedPortModes(std::vector<PortMode_T> &aSupportedPortModes) = 0;
    virtual HRESULT getSupportedAudioDriverTypes(std::vector<AudioDriverType_T> &aSupportedAudioDriverTypes) = 0;
    virtual HRESULT getLanguageId(com::Utf8Str &aLanguageId) = 0;
    virtual HRESULT setLanguageId(const com::Utf8Str &aLanguageId) = 0;
    /** @} */

    /** @name Wrapped ISystemProperties methods
     * @{ */
    virtual HRESULT getDefaultIoCacheSettingForStorageController(StorageControllerType_T aControllerType,
                                                                 BOOL *aEnabled) = 0;
    virtual HRESULT getCPUProfiles(CPUArchitecture_T aArchitecture,
                                   const com::Utf8Str &aNamePattern,
                                   std::vector<ComPtr<ICPUProfile> > &aProfiles) = 0;
    virtual HRESULT getExecutionEnginesForVmCpuArchitecture(CPUArchitecture_T aCpuArchitecture,
                                                            std::vector<VMExecutionEngine_T> &aExecutionEngine) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(SystemPropertiesWrap); /* Shuts up MSC warning C4625. */

};

#endif // !SystemPropertiesWrap_H_
