/** @file
 * VirtualBox API class wrapper header for IGuestOSType.
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

#ifndef GuestOSTypeWrap_H_
#define GuestOSTypeWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestOSTypeWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestOSType)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestOSTypeWrap, IGuestOSType)
    DECLARE_NOT_AGGREGATABLE(GuestOSTypeWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestOSTypeWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestOSType)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestOSType)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestOSType)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestOSTypeWrap)

    /** @name Public IGuestOSType properties
     * @{ */
    STDMETHOD(COMGETTER(FamilyId))(BSTR *aFamilyId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FamilyDescription))(BSTR *aFamilyDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Subtype))(BSTR *aSubtype) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Is64Bit))(BOOL *aIs64Bit) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PlatformArchitecture))(PlatformArchitecture_T *aPlatformArchitecture) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedIOAPIC))(BOOL *aRecommendedIOAPIC) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedVirtEx))(BOOL *aRecommendedVirtEx) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedRAM))(ULONG *aRecommendedRAM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedGraphicsController))(GraphicsControllerType_T *aRecommendedGraphicsController) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedVRAM))(ULONG *aRecommendedVRAM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Recommended3DAcceleration))(BOOL *aRecommended3DAcceleration) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedHDD))(LONG64 *aRecommendedHDD) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AdapterType))(NetworkAdapterType_T *aAdapterType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedPAE))(BOOL *aRecommendedPAE) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedDVDStorageController))(StorageControllerType_T *aRecommendedDVDStorageController) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedDVDStorageBus))(StorageBus_T *aRecommendedDVDStorageBus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedHDStorageController))(StorageControllerType_T *aRecommendedHDStorageController) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedHDStorageBus))(StorageBus_T *aRecommendedHDStorageBus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedFirmware))(FirmwareType_T *aRecommendedFirmware) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedUSBHID))(BOOL *aRecommendedUSBHID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedHPET))(BOOL *aRecommendedHPET) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedUSBTablet))(BOOL *aRecommendedUSBTablet) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedRTCUseUTC))(BOOL *aRecommendedRTCUseUTC) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedChipset))(ChipsetType_T *aRecommendedChipset) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedIommuType))(IommuType_T *aRecommendedIommuType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedAudioController))(AudioControllerType_T *aRecommendedAudioController) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedAudioCodec))(AudioCodecType_T *aRecommendedAudioCodec) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedFloppy))(BOOL *aRecommendedFloppy) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedUSB))(BOOL *aRecommendedUSB) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedUSB3))(BOOL *aRecommendedUSB3) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedTFReset))(BOOL *aRecommendedTFReset) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedX2APIC))(BOOL *aRecommendedX2APIC) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedCPUCount))(ULONG *aRecommendedCPUCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedTpmType))(TpmType_T *aRecommendedTpmType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedSecureBoot))(BOOL *aRecommendedSecureBoot) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecommendedWDDMGraphics))(BOOL *aRecommendedWDDMGraphics) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GuestAdditionsInstallPackageName))(BSTR *aGuestAdditionsInstallPackageName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IGuestOSType))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestOSType methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IGuestOSType properties
     * @{ */
    virtual HRESULT getFamilyId(com::Utf8Str &aFamilyId) = 0;
    virtual HRESULT getFamilyDescription(com::Utf8Str &aFamilyDescription) = 0;
    virtual HRESULT getId(com::Utf8Str &aId) = 0;
    virtual HRESULT getSubtype(com::Utf8Str &aSubtype) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getIs64Bit(BOOL *aIs64Bit) = 0;
    virtual HRESULT getPlatformArchitecture(PlatformArchitecture_T *aPlatformArchitecture) = 0;
    virtual HRESULT getRecommendedIOAPIC(BOOL *aRecommendedIOAPIC) = 0;
    virtual HRESULT getRecommendedVirtEx(BOOL *aRecommendedVirtEx) = 0;
    virtual HRESULT getRecommendedRAM(ULONG *aRecommendedRAM) = 0;
    virtual HRESULT getRecommendedGraphicsController(GraphicsControllerType_T *aRecommendedGraphicsController) = 0;
    virtual HRESULT getRecommendedVRAM(ULONG *aRecommendedVRAM) = 0;
    virtual HRESULT getRecommended3DAcceleration(BOOL *aRecommended3DAcceleration) = 0;
    virtual HRESULT getRecommendedHDD(LONG64 *aRecommendedHDD) = 0;
    virtual HRESULT getAdapterType(NetworkAdapterType_T *aAdapterType) = 0;
    virtual HRESULT getRecommendedPAE(BOOL *aRecommendedPAE) = 0;
    virtual HRESULT getRecommendedDVDStorageController(StorageControllerType_T *aRecommendedDVDStorageController) = 0;
    virtual HRESULT getRecommendedDVDStorageBus(StorageBus_T *aRecommendedDVDStorageBus) = 0;
    virtual HRESULT getRecommendedHDStorageController(StorageControllerType_T *aRecommendedHDStorageController) = 0;
    virtual HRESULT getRecommendedHDStorageBus(StorageBus_T *aRecommendedHDStorageBus) = 0;
    virtual HRESULT getRecommendedFirmware(FirmwareType_T *aRecommendedFirmware) = 0;
    virtual HRESULT getRecommendedUSBHID(BOOL *aRecommendedUSBHID) = 0;
    virtual HRESULT getRecommendedHPET(BOOL *aRecommendedHPET) = 0;
    virtual HRESULT getRecommendedUSBTablet(BOOL *aRecommendedUSBTablet) = 0;
    virtual HRESULT getRecommendedRTCUseUTC(BOOL *aRecommendedRTCUseUTC) = 0;
    virtual HRESULT getRecommendedChipset(ChipsetType_T *aRecommendedChipset) = 0;
    virtual HRESULT getRecommendedIommuType(IommuType_T *aRecommendedIommuType) = 0;
    virtual HRESULT getRecommendedAudioController(AudioControllerType_T *aRecommendedAudioController) = 0;
    virtual HRESULT getRecommendedAudioCodec(AudioCodecType_T *aRecommendedAudioCodec) = 0;
    virtual HRESULT getRecommendedFloppy(BOOL *aRecommendedFloppy) = 0;
    virtual HRESULT getRecommendedUSB(BOOL *aRecommendedUSB) = 0;
    virtual HRESULT getRecommendedUSB3(BOOL *aRecommendedUSB3) = 0;
    virtual HRESULT getRecommendedTFReset(BOOL *aRecommendedTFReset) = 0;
    virtual HRESULT getRecommendedX2APIC(BOOL *aRecommendedX2APIC) = 0;
    virtual HRESULT getRecommendedCPUCount(ULONG *aRecommendedCPUCount) = 0;
    virtual HRESULT getRecommendedTpmType(TpmType_T *aRecommendedTpmType) = 0;
    virtual HRESULT getRecommendedSecureBoot(BOOL *aRecommendedSecureBoot) = 0;
    virtual HRESULT getRecommendedWDDMGraphics(BOOL *aRecommendedWDDMGraphics) = 0;
    virtual HRESULT getGuestAdditionsInstallPackageName(com::Utf8Str &aGuestAdditionsInstallPackageName) = 0;
    /** @} */

    /** @name Wrapped IGuestOSType methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestOSTypeWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestOSTypeWrap_H_
