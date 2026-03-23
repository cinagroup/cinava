/** @file
 * VirtualBox API class wrapper header for IFirmwareSettings.
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

#ifndef FirmwareSettingsWrap_H_
#define FirmwareSettingsWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE FirmwareSettingsWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IFirmwareSettings)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(FirmwareSettingsWrap, IFirmwareSettings)
    DECLARE_NOT_AGGREGATABLE(FirmwareSettingsWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(FirmwareSettingsWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IFirmwareSettings)
        COM_INTERFACE_ENTRY2(IDispatch, IFirmwareSettings)
        VBOX_TWEAK_INTERFACE_ENTRY(IFirmwareSettings)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(FirmwareSettingsWrap)

    /** @name Public IFirmwareSettings properties
     * @{ */
    STDMETHOD(COMGETTER(FirmwareType))(FirmwareType_T *aFirmwareType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(FirmwareType))(FirmwareType_T aFirmwareType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogoFadeIn))(BOOL *aLogoFadeIn) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LogoFadeIn))(BOOL aLogoFadeIn) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogoFadeOut))(BOOL *aLogoFadeOut) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LogoFadeOut))(BOOL aLogoFadeOut) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogoDisplayTime))(ULONG *aLogoDisplayTime) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LogoDisplayTime))(ULONG aLogoDisplayTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogoImagePath))(BSTR *aLogoImagePath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LogoImagePath))(IN_BSTR aLogoImagePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BootMenuMode))(FirmwareBootMenuMode_T *aBootMenuMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(BootMenuMode))(FirmwareBootMenuMode_T aBootMenuMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ACPIEnabled))(BOOL *aACPIEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ACPIEnabled))(BOOL aACPIEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IOAPICEnabled))(BOOL *aIOAPICEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IOAPICEnabled))(BOOL aIOAPICEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(APICMode))(APICMode_T *aAPICMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(APICMode))(APICMode_T aAPICMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TimeOffset))(LONG64 *aTimeOffset) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TimeOffset))(LONG64 aTimeOffset) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PXEDebugEnabled))(BOOL *aPXEDebugEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PXEDebugEnabled))(BOOL aPXEDebugEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SMBIOSUuidLittleEndian))(BOOL *aSMBIOSUuidLittleEndian) RT_OVERRIDE;
    STDMETHOD(COMSETTER(SMBIOSUuidLittleEndian))(BOOL aSMBIOSUuidLittleEndian) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutoSerialNumGen))(BOOL *aAutoSerialNumGen) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutoSerialNumGen))(BOOL aAutoSerialNumGen) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IFirmwareSettings))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IFirmwareSettings methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IFirmwareSettings)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IFirmwareSettings)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IFirmwareSettings properties
     * @{ */
    virtual HRESULT getFirmwareType(FirmwareType_T *aFirmwareType) = 0;
    virtual HRESULT setFirmwareType(FirmwareType_T aFirmwareType) = 0;
    virtual HRESULT getLogoFadeIn(BOOL *aLogoFadeIn) = 0;
    virtual HRESULT setLogoFadeIn(BOOL aLogoFadeIn) = 0;
    virtual HRESULT getLogoFadeOut(BOOL *aLogoFadeOut) = 0;
    virtual HRESULT setLogoFadeOut(BOOL aLogoFadeOut) = 0;
    virtual HRESULT getLogoDisplayTime(ULONG *aLogoDisplayTime) = 0;
    virtual HRESULT setLogoDisplayTime(ULONG aLogoDisplayTime) = 0;
    virtual HRESULT getLogoImagePath(com::Utf8Str &aLogoImagePath) = 0;
    virtual HRESULT setLogoImagePath(const com::Utf8Str &aLogoImagePath) = 0;
    virtual HRESULT getBootMenuMode(FirmwareBootMenuMode_T *aBootMenuMode) = 0;
    virtual HRESULT setBootMenuMode(FirmwareBootMenuMode_T aBootMenuMode) = 0;
    virtual HRESULT getACPIEnabled(BOOL *aACPIEnabled) = 0;
    virtual HRESULT setACPIEnabled(BOOL aACPIEnabled) = 0;
    virtual HRESULT getIOAPICEnabled(BOOL *aIOAPICEnabled) = 0;
    virtual HRESULT setIOAPICEnabled(BOOL aIOAPICEnabled) = 0;
    virtual HRESULT getAPICMode(APICMode_T *aAPICMode) = 0;
    virtual HRESULT setAPICMode(APICMode_T aAPICMode) = 0;
    virtual HRESULT getTimeOffset(LONG64 *aTimeOffset) = 0;
    virtual HRESULT setTimeOffset(LONG64 aTimeOffset) = 0;
    virtual HRESULT getPXEDebugEnabled(BOOL *aPXEDebugEnabled) = 0;
    virtual HRESULT setPXEDebugEnabled(BOOL aPXEDebugEnabled) = 0;
    virtual HRESULT getSMBIOSUuidLittleEndian(BOOL *aSMBIOSUuidLittleEndian) = 0;
    virtual HRESULT setSMBIOSUuidLittleEndian(BOOL aSMBIOSUuidLittleEndian) = 0;
    virtual HRESULT getAutoSerialNumGen(BOOL *aAutoSerialNumGen) = 0;
    virtual HRESULT setAutoSerialNumGen(BOOL aAutoSerialNumGen) = 0;
    /** @} */

    /** @name Wrapped IFirmwareSettings methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(FirmwareSettingsWrap); /* Shuts up MSC warning C4625. */

};

#endif // !FirmwareSettingsWrap_H_
