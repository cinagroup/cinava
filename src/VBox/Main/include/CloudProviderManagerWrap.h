/** @file
 * VirtualBox API class wrapper header for ICloudProviderManager.
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

#ifndef CloudProviderManagerWrap_H_
#define CloudProviderManagerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudProviderManagerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudProviderManager)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudProviderManagerWrap, ICloudProviderManager)
    DECLARE_NOT_AGGREGATABLE(CloudProviderManagerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudProviderManagerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudProviderManager)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudProviderManager)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudProviderManager)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudProviderManagerWrap)

    /** @name Public ICloudProviderManager properties
     * @{ */
    STDMETHOD(COMGETTER(Providers))(ComSafeArrayOut(ICloudProvider *, aProviders)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ICloudProviderManager))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudProviderManager methods
     * @{ */
    STDMETHOD(GetProviderById)(IN_BSTR aProviderId,
                               ICloudProvider **aProvider) RT_OVERRIDE;
    STDMETHOD(GetProviderByShortName)(IN_BSTR aProviderName,
                                      ICloudProvider **aProvider) RT_OVERRIDE;
    STDMETHOD(GetProviderByName)(IN_BSTR aProviderName,
                                 ICloudProvider **aProvider) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ICloudProviderManager)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICloudProviderManager)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ICloudProviderManager)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ICloudProviderManager)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICloudProviderManager properties
     * @{ */
    virtual HRESULT getProviders(std::vector<ComPtr<ICloudProvider> > &aProviders) = 0;
    /** @} */

    /** @name Wrapped ICloudProviderManager methods
     * @{ */
    virtual HRESULT getProviderById(const com::Guid &aProviderId,
                                    ComPtr<ICloudProvider> &aProvider) = 0;
    virtual HRESULT getProviderByShortName(const com::Utf8Str &aProviderName,
                                           ComPtr<ICloudProvider> &aProvider) = 0;
    virtual HRESULT getProviderByName(const com::Utf8Str &aProviderName,
                                      ComPtr<ICloudProvider> &aProvider) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudProviderManagerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudProviderManagerWrap_H_
