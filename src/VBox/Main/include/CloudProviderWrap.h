/** @file
 * VirtualBox API class wrapper header for ICloudProvider.
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

#ifndef CloudProviderWrap_H_
#define CloudProviderWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudProviderWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudProvider)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudProviderWrap, ICloudProvider)
    DECLARE_NOT_AGGREGATABLE(CloudProviderWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudProviderWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudProvider)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudProvider)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudProvider)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudProviderWrap)

    /** @name Public ICloudProvider properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ShortName))(BSTR *aShortName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Profiles))(ComSafeArrayOut(ICloudProfile *, aProfiles)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProfileNames))(ComSafeArrayOut(BSTR, aProfileNames)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedPropertyNames))(ComSafeArrayOut(BSTR, aSupportedPropertyNames)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16ICloudProvider))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudProvider methods
     * @{ */
    STDMETHOD(GetPropertyDescription)(IN_BSTR aName,
                                      BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(CreateProfile)(IN_BSTR aProfileName,
                             ComSafeArrayIn(IN_BSTR, aNames),
                             ComSafeArrayIn(IN_BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(ImportProfiles)() RT_OVERRIDE;
    STDMETHOD(RestoreProfiles)() RT_OVERRIDE;
    STDMETHOD(SaveProfiles)() RT_OVERRIDE;
    STDMETHOD(GetProfileByName)(IN_BSTR aProfileName,
                                ICloudProfile **aProfile) RT_OVERRIDE;
    STDMETHOD(PrepareUninstall)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ICloudProvider)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICloudProvider)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ICloudProvider)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ICloudProvider)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5ICloudProvider)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6ICloudProvider)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7ICloudProvider)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8ICloudProvider)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICloudProvider properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getShortName(com::Utf8Str &aShortName) = 0;
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getProfiles(std::vector<ComPtr<ICloudProfile> > &aProfiles) = 0;
    virtual HRESULT getProfileNames(std::vector<com::Utf8Str> &aProfileNames) = 0;
    virtual HRESULT getSupportedPropertyNames(std::vector<com::Utf8Str> &aSupportedPropertyNames) = 0;
    /** @} */

    /** @name Wrapped ICloudProvider methods
     * @{ */
    virtual HRESULT getPropertyDescription(const com::Utf8Str &aName,
                                           com::Utf8Str &aDescription) = 0;
    virtual HRESULT createProfile(const com::Utf8Str &aProfileName,
                                  const std::vector<com::Utf8Str> &aNames,
                                  const std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT importProfiles() = 0;
    virtual HRESULT restoreProfiles() = 0;
    virtual HRESULT saveProfiles() = 0;
    virtual HRESULT getProfileByName(const com::Utf8Str &aProfileName,
                                     ComPtr<ICloudProfile> &aProfile) = 0;
    virtual HRESULT prepareUninstall(AutoCaller &aAutoCaller) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudProviderWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudProviderWrap_H_
