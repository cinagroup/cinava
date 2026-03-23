/** @file
 * VirtualBox API class wrapper header for IUnattended.
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

#ifndef UnattendedWrap_H_
#define UnattendedWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE UnattendedWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IUnattended)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(UnattendedWrap, IUnattended)
    DECLARE_NOT_AGGREGATABLE(UnattendedWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(UnattendedWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUnattended)
        COM_INTERFACE_ENTRY2(IDispatch, IUnattended)
        VBOX_TWEAK_INTERFACE_ENTRY(IUnattended)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(UnattendedWrap)

    /** @name Public IUnattended properties
     * @{ */
    STDMETHOD(COMGETTER(IsoPath))(BSTR *aIsoPath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IsoPath))(IN_BSTR aIsoPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Machine))(IMachine *aMachine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(User))(BSTR *aUser) RT_OVERRIDE;
    STDMETHOD(COMSETTER(User))(IN_BSTR aUser) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UserPassword))(BSTR *aUserPassword) RT_OVERRIDE;
    STDMETHOD(COMSETTER(UserPassword))(IN_BSTR aUserPassword) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AdminPassword))(BSTR *aAdminPassword) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AdminPassword))(IN_BSTR aAdminPassword) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FullUserName))(BSTR *aFullUserName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(FullUserName))(IN_BSTR aFullUserName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProductKey))(BSTR *aProductKey) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ProductKey))(IN_BSTR aProductKey) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AdditionsIsoPath))(BSTR *aAdditionsIsoPath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AdditionsIsoPath))(IN_BSTR aAdditionsIsoPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InstallGuestAdditions))(BOOL *aInstallGuestAdditions) RT_OVERRIDE;
    STDMETHOD(COMSETTER(InstallGuestAdditions))(BOOL aInstallGuestAdditions) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProductKeyRequired))(BOOL *aProductKeyRequired) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ValidationKitIsoPath))(BSTR *aValidationKitIsoPath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ValidationKitIsoPath))(IN_BSTR aValidationKitIsoPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InstallTestExecService))(BOOL *aInstallTestExecService) RT_OVERRIDE;
    STDMETHOD(COMSETTER(InstallTestExecService))(BOOL aInstallTestExecService) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UserPayloadIsoPath))(BSTR *aUserPayloadIsoPath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(UserPayloadIsoPath))(IN_BSTR aUserPayloadIsoPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InstallUserPayload))(BOOL *aInstallUserPayload) RT_OVERRIDE;
    STDMETHOD(COMSETTER(InstallUserPayload))(BOOL aInstallUserPayload) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TimeZone))(BSTR *aTimeZone) RT_OVERRIDE;
    STDMETHOD(COMSETTER(TimeZone))(IN_BSTR aTimeZone) RT_OVERRIDE;
    STDMETHOD(COMGETTER(KeyboardLayout))(BSTR *aKeyboardLayout) RT_OVERRIDE;
    STDMETHOD(COMSETTER(KeyboardLayout))(IN_BSTR aKeyboardLayout) RT_OVERRIDE;
    STDMETHOD(COMGETTER(KeyboardVariant))(BSTR *aKeyboardVariant) RT_OVERRIDE;
    STDMETHOD(COMSETTER(KeyboardVariant))(IN_BSTR aKeyboardVariant) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Locale))(BSTR *aLocale) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Locale))(IN_BSTR aLocale) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Language))(BSTR *aLanguage) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Language))(IN_BSTR aLanguage) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Country))(BSTR *aCountry) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Country))(IN_BSTR aCountry) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Proxy))(BSTR *aProxy) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Proxy))(IN_BSTR aProxy) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PackageSelectionAdjustments))(BSTR *aPackageSelectionAdjustments) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PackageSelectionAdjustments))(IN_BSTR aPackageSelectionAdjustments) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Hostname))(BSTR *aHostname) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Hostname))(IN_BSTR aHostname) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AuxiliaryBasePath))(BSTR *aAuxiliaryBasePath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AuxiliaryBasePath))(IN_BSTR aAuxiliaryBasePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ImageIndex))(ULONG *aImageIndex) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ImageIndex))(ULONG aImageIndex) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ScriptTemplatePath))(BSTR *aScriptTemplatePath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ScriptTemplatePath))(IN_BSTR aScriptTemplatePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PostInstallScriptTemplatePath))(BSTR *aPostInstallScriptTemplatePath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PostInstallScriptTemplatePath))(IN_BSTR aPostInstallScriptTemplatePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PostInstallCommand))(BSTR *aPostInstallCommand) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PostInstallCommand))(IN_BSTR aPostInstallCommand) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExtraInstallKernelParameters))(BSTR *aExtraInstallKernelParameters) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ExtraInstallKernelParameters))(IN_BSTR aExtraInstallKernelParameters) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DetectedOSTypeId))(BSTR *aDetectedOSTypeId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DetectedOSVersion))(BSTR *aDetectedOSVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DetectedOSFlavor))(BSTR *aDetectedOSFlavor) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DetectedOSLanguages))(BSTR *aDetectedOSLanguages) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DetectedOSHints))(BSTR *aDetectedOSHints) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DetectedImageNames))(ComSafeArrayOut(BSTR, aDetectedImageNames)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DetectedImageIndices))(ComSafeArrayOut(ULONG, aDetectedImageIndices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsUnattendedInstallSupported))(BOOL *aIsUnattendedInstallSupported) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AvoidUpdatesOverNetwork))(BOOL *aAvoidUpdatesOverNetwork) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AvoidUpdatesOverNetwork))(BOOL aAvoidUpdatesOverNetwork) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IUnattended))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUnattended methods
     * @{ */
    STDMETHOD(DetectIsoOS)() RT_OVERRIDE;
    STDMETHOD(Prepare)() RT_OVERRIDE;
    STDMETHOD(ConstructMedia)() RT_OVERRIDE;
    STDMETHOD(ReconfigureVM)() RT_OVERRIDE;
    STDMETHOD(Done)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IUnattended)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IUnattended)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IUnattended)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IUnattended)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IUnattended properties
     * @{ */
    virtual HRESULT getIsoPath(com::Utf8Str &aIsoPath) = 0;
    virtual HRESULT setIsoPath(const com::Utf8Str &aIsoPath) = 0;
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT setMachine(const ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getUser(com::Utf8Str &aUser) = 0;
    virtual HRESULT setUser(const com::Utf8Str &aUser) = 0;
    virtual HRESULT getUserPassword(com::Utf8Str &aUserPassword) = 0;
    virtual HRESULT setUserPassword(const com::Utf8Str &aUserPassword) = 0;
    virtual HRESULT getAdminPassword(com::Utf8Str &aAdminPassword) = 0;
    virtual HRESULT setAdminPassword(const com::Utf8Str &aAdminPassword) = 0;
    virtual HRESULT getFullUserName(com::Utf8Str &aFullUserName) = 0;
    virtual HRESULT setFullUserName(const com::Utf8Str &aFullUserName) = 0;
    virtual HRESULT getProductKey(com::Utf8Str &aProductKey) = 0;
    virtual HRESULT setProductKey(const com::Utf8Str &aProductKey) = 0;
    virtual HRESULT getAdditionsIsoPath(com::Utf8Str &aAdditionsIsoPath) = 0;
    virtual HRESULT setAdditionsIsoPath(const com::Utf8Str &aAdditionsIsoPath) = 0;
    virtual HRESULT getInstallGuestAdditions(BOOL *aInstallGuestAdditions) = 0;
    virtual HRESULT setInstallGuestAdditions(BOOL aInstallGuestAdditions) = 0;
    virtual HRESULT getProductKeyRequired(BOOL *aProductKeyRequired) = 0;
    virtual HRESULT getValidationKitIsoPath(com::Utf8Str &aValidationKitIsoPath) = 0;
    virtual HRESULT setValidationKitIsoPath(const com::Utf8Str &aValidationKitIsoPath) = 0;
    virtual HRESULT getInstallTestExecService(BOOL *aInstallTestExecService) = 0;
    virtual HRESULT setInstallTestExecService(BOOL aInstallTestExecService) = 0;
    virtual HRESULT getUserPayloadIsoPath(com::Utf8Str &aUserPayloadIsoPath) = 0;
    virtual HRESULT setUserPayloadIsoPath(const com::Utf8Str &aUserPayloadIsoPath) = 0;
    virtual HRESULT getInstallUserPayload(BOOL *aInstallUserPayload) = 0;
    virtual HRESULT setInstallUserPayload(BOOL aInstallUserPayload) = 0;
    virtual HRESULT getTimeZone(com::Utf8Str &aTimeZone) = 0;
    virtual HRESULT setTimeZone(const com::Utf8Str &aTimeZone) = 0;
    virtual HRESULT getKeyboardLayout(com::Utf8Str &aKeyboardLayout) = 0;
    virtual HRESULT setKeyboardLayout(const com::Utf8Str &aKeyboardLayout) = 0;
    virtual HRESULT getKeyboardVariant(com::Utf8Str &aKeyboardVariant) = 0;
    virtual HRESULT setKeyboardVariant(const com::Utf8Str &aKeyboardVariant) = 0;
    virtual HRESULT getLocale(com::Utf8Str &aLocale) = 0;
    virtual HRESULT setLocale(const com::Utf8Str &aLocale) = 0;
    virtual HRESULT getLanguage(com::Utf8Str &aLanguage) = 0;
    virtual HRESULT setLanguage(const com::Utf8Str &aLanguage) = 0;
    virtual HRESULT getCountry(com::Utf8Str &aCountry) = 0;
    virtual HRESULT setCountry(const com::Utf8Str &aCountry) = 0;
    virtual HRESULT getProxy(com::Utf8Str &aProxy) = 0;
    virtual HRESULT setProxy(const com::Utf8Str &aProxy) = 0;
    virtual HRESULT getPackageSelectionAdjustments(com::Utf8Str &aPackageSelectionAdjustments) = 0;
    virtual HRESULT setPackageSelectionAdjustments(const com::Utf8Str &aPackageSelectionAdjustments) = 0;
    virtual HRESULT getHostname(com::Utf8Str &aHostname) = 0;
    virtual HRESULT setHostname(const com::Utf8Str &aHostname) = 0;
    virtual HRESULT getAuxiliaryBasePath(com::Utf8Str &aAuxiliaryBasePath) = 0;
    virtual HRESULT setAuxiliaryBasePath(const com::Utf8Str &aAuxiliaryBasePath) = 0;
    virtual HRESULT getImageIndex(ULONG *aImageIndex) = 0;
    virtual HRESULT setImageIndex(ULONG aImageIndex) = 0;
    virtual HRESULT getScriptTemplatePath(com::Utf8Str &aScriptTemplatePath) = 0;
    virtual HRESULT setScriptTemplatePath(const com::Utf8Str &aScriptTemplatePath) = 0;
    virtual HRESULT getPostInstallScriptTemplatePath(com::Utf8Str &aPostInstallScriptTemplatePath) = 0;
    virtual HRESULT setPostInstallScriptTemplatePath(const com::Utf8Str &aPostInstallScriptTemplatePath) = 0;
    virtual HRESULT getPostInstallCommand(com::Utf8Str &aPostInstallCommand) = 0;
    virtual HRESULT setPostInstallCommand(const com::Utf8Str &aPostInstallCommand) = 0;
    virtual HRESULT getExtraInstallKernelParameters(com::Utf8Str &aExtraInstallKernelParameters) = 0;
    virtual HRESULT setExtraInstallKernelParameters(const com::Utf8Str &aExtraInstallKernelParameters) = 0;
    virtual HRESULT getDetectedOSTypeId(com::Utf8Str &aDetectedOSTypeId) = 0;
    virtual HRESULT getDetectedOSVersion(com::Utf8Str &aDetectedOSVersion) = 0;
    virtual HRESULT getDetectedOSFlavor(com::Utf8Str &aDetectedOSFlavor) = 0;
    virtual HRESULT getDetectedOSLanguages(com::Utf8Str &aDetectedOSLanguages) = 0;
    virtual HRESULT getDetectedOSHints(com::Utf8Str &aDetectedOSHints) = 0;
    virtual HRESULT getDetectedImageNames(std::vector<com::Utf8Str> &aDetectedImageNames) = 0;
    virtual HRESULT getDetectedImageIndices(std::vector<ULONG> &aDetectedImageIndices) = 0;
    virtual HRESULT getIsUnattendedInstallSupported(BOOL *aIsUnattendedInstallSupported) = 0;
    virtual HRESULT getAvoidUpdatesOverNetwork(BOOL *aAvoidUpdatesOverNetwork) = 0;
    virtual HRESULT setAvoidUpdatesOverNetwork(BOOL aAvoidUpdatesOverNetwork) = 0;
    /** @} */

    /** @name Wrapped IUnattended methods
     * @{ */
    virtual HRESULT detectIsoOS() = 0;
    virtual HRESULT prepare() = 0;
    virtual HRESULT constructMedia() = 0;
    virtual HRESULT reconfigureVM() = 0;
    virtual HRESULT done() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(UnattendedWrap); /* Shuts up MSC warning C4625. */

};

#endif // !UnattendedWrap_H_
