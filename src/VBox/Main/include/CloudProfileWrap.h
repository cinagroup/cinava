/** @file
 * VirtualBox API class wrapper header for ICloudProfile.
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

#ifndef CloudProfileWrap_H_
#define CloudProfileWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudProfileWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudProfile)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudProfileWrap, ICloudProfile)
    DECLARE_NOT_AGGREGATABLE(CloudProfileWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudProfileWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudProfile)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudProfile)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudProfile)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudProfileWrap)

    /** @name Public ICloudProfile properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProviderId))(BSTR *aProviderId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ICloudProfile))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudProfile methods
     * @{ */
    STDMETHOD(GetProperty)(IN_BSTR aName,
                           BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(SetProperty)(IN_BSTR aName,
                           IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(GetProperties)(IN_BSTR aNames,
                             ComSafeArrayOut(BSTR, aReturnNames),
                             ComSafeArrayOut(BSTR, aReturnValues)) RT_OVERRIDE;
    STDMETHOD(SetProperties)(ComSafeArrayIn(IN_BSTR, aNames),
                             ComSafeArrayIn(IN_BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(Remove)() RT_OVERRIDE;
    STDMETHOD(CreateCloudClient)(ICloudClient **aCloudClient) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ICloudProfile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICloudProfile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ICloudProfile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ICloudProfile)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICloudProfile properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getProviderId(com::Guid &aProviderId) = 0;
    /** @} */

    /** @name Wrapped ICloudProfile methods
     * @{ */
    virtual HRESULT getProperty(const com::Utf8Str &aName,
                                com::Utf8Str &aValue) = 0;
    virtual HRESULT setProperty(const com::Utf8Str &aName,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT getProperties(const com::Utf8Str &aNames,
                                  std::vector<com::Utf8Str> &aReturnNames,
                                  std::vector<com::Utf8Str> &aReturnValues) = 0;
    virtual HRESULT setProperties(const std::vector<com::Utf8Str> &aNames,
                                  const std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT remove() = 0;
    virtual HRESULT createCloudClient(ComPtr<ICloudClient> &aCloudClient) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudProfileWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudProfileWrap_H_
