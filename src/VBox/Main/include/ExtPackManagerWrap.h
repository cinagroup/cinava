/** @file
 * VirtualBox API class wrapper header for IExtPackManager.
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

#ifndef ExtPackManagerWrap_H_
#define ExtPackManagerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ExtPackManagerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IExtPackManager)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtPackManagerWrap, IExtPackManager)
    DECLARE_NOT_AGGREGATABLE(ExtPackManagerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ExtPackManagerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IExtPackManager)
        COM_INTERFACE_ENTRY2(IDispatch, IExtPackManager)
        VBOX_TWEAK_INTERFACE_ENTRY(IExtPackManager)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ExtPackManagerWrap)

    /** @name Public IExtPackManager properties
     * @{ */
    STDMETHOD(COMGETTER(InstalledExtPacks))(ComSafeArrayOut(IExtPack *, aInstalledExtPacks)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IExtPackManager))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IExtPackManager methods
     * @{ */
    STDMETHOD(Find)(IN_BSTR aName,
                    IExtPack **aReturnData) RT_OVERRIDE;
    STDMETHOD(OpenExtPackFile)(IN_BSTR aPath,
                               IExtPackFile **aFile) RT_OVERRIDE;
    STDMETHOD(Uninstall)(IN_BSTR aName,
                         BOOL aForcedRemoval,
                         IN_BSTR aDisplayInfo,
                         IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Cleanup)() RT_OVERRIDE;
    STDMETHOD(QueryAllPlugInsForFrontend)(IN_BSTR aFrontendName,
                                          ComSafeArrayOut(BSTR, aPlugInModules)) RT_OVERRIDE;
    STDMETHOD(IsExtPackUsable)(IN_BSTR aName,
                               BOOL *aUsable) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IExtPackManager)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IExtPackManager)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IExtPackManager)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IExtPackManager)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IExtPackManager properties
     * @{ */
    virtual HRESULT getInstalledExtPacks(std::vector<ComPtr<IExtPack> > &aInstalledExtPacks) = 0;
    /** @} */

    /** @name Wrapped IExtPackManager methods
     * @{ */
    virtual HRESULT find(const com::Utf8Str &aName,
                         ComPtr<IExtPack> &aReturnData) = 0;
    virtual HRESULT openExtPackFile(const com::Utf8Str &aPath,
                                    ComPtr<IExtPackFile> &aFile) = 0;
    virtual HRESULT uninstall(const com::Utf8Str &aName,
                              BOOL aForcedRemoval,
                              const com::Utf8Str &aDisplayInfo,
                              ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cleanup() = 0;
    virtual HRESULT queryAllPlugInsForFrontend(const com::Utf8Str &aFrontendName,
                                               std::vector<com::Utf8Str> &aPlugInModules) = 0;
    virtual HRESULT isExtPackUsable(const com::Utf8Str &aName,
                                    BOOL *aUsable) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ExtPackManagerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ExtPackManagerWrap_H_
