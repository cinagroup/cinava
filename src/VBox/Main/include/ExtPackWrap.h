/** @file
 * VirtualBox API class wrapper header for IExtPack.
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

#ifndef ExtPackWrap_H_
#define ExtPackWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ExtPackWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IExtPack)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtPackWrap, IExtPack)
    DECLARE_NOT_AGGREGATABLE(ExtPackWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ExtPackWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IExtPack)
        COM_INTERFACE_ENTRY(IExtPackBase)
        COM_INTERFACE_ENTRY2(IDispatch, IExtPack)
        VBOX_TWEAK_INTERFACE_ENTRY(IExtPack)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ExtPackWrap)

    /** @name Public IExtPackBase properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Version))(BSTR *aVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Revision))(ULONG *aRevision) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Edition))(BSTR *aEdition) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VRDEModule))(BSTR *aVRDEModule) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CryptoModule))(BSTR *aCryptoModule) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PlugIns))(ComSafeArrayOut(IExtPackPlugIn *, aPlugIns)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Usable))(BOOL *aUsable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(WhyUnusable))(BSTR *aWhyUnusable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ShowLicense))(BOOL *aShowLicense) RT_OVERRIDE;
    STDMETHOD(COMGETTER(License))(BSTR *aLicense) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IExtPackBase))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IExtPack properties
     * @{ */
    /** @} */

    /** @name Public IExtPackBase methods
     * @{ */
    STDMETHOD(QueryLicense)(IN_BSTR aPreferredLocale,
                            IN_BSTR aPreferredLanguage,
                            IN_BSTR aFormat,
                            BSTR *aLicenseText) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IExtPackBase)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IExtPackBase)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IExtPackBase)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IExtPackBase)() RT_OVERRIDE;
    /** @} */

    /** @name Public IExtPack methods
     * @{ */
    STDMETHOD(QueryObject)(IN_BSTR aObjUuid,
                           IUnknown **aReturnInterface) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IExtPackBase properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getVersion(com::Utf8Str &aVersion) = 0;
    virtual HRESULT getRevision(ULONG *aRevision) = 0;
    virtual HRESULT getEdition(com::Utf8Str &aEdition) = 0;
    virtual HRESULT getVRDEModule(com::Utf8Str &aVRDEModule) = 0;
    virtual HRESULT getCryptoModule(com::Utf8Str &aCryptoModule) = 0;
    virtual HRESULT getPlugIns(std::vector<ComPtr<IExtPackPlugIn> > &aPlugIns) = 0;
    virtual HRESULT getUsable(BOOL *aUsable) = 0;
    virtual HRESULT getWhyUnusable(com::Utf8Str &aWhyUnusable) = 0;
    virtual HRESULT getShowLicense(BOOL *aShowLicense) = 0;
    virtual HRESULT getLicense(com::Utf8Str &aLicense) = 0;
    /** @} */

    /** @name Wrapped IExtPack properties
     * @{ */
    /** @} */

    /** @name Wrapped IExtPackBase methods
     * @{ */
    virtual HRESULT queryLicense(const com::Utf8Str &aPreferredLocale,
                                 const com::Utf8Str &aPreferredLanguage,
                                 const com::Utf8Str &aFormat,
                                 com::Utf8Str &aLicenseText) = 0;
    /** @} */

    /** @name Wrapped IExtPack methods
     * @{ */
    virtual HRESULT queryObject(const com::Utf8Str &aObjUuid,
                                ComPtr<IUnknown> &aReturnInterface) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ExtPackWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ExtPackWrap_H_
