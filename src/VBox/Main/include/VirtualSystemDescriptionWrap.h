/** @file
 * VirtualBox API class wrapper header for IVirtualSystemDescription.
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

#ifndef VirtualSystemDescriptionWrap_H_
#define VirtualSystemDescriptionWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VirtualSystemDescriptionWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVirtualSystemDescription)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VirtualSystemDescriptionWrap, IVirtualSystemDescription)
    DECLARE_NOT_AGGREGATABLE(VirtualSystemDescriptionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VirtualSystemDescriptionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVirtualSystemDescription)
        COM_INTERFACE_ENTRY2(IDispatch, IVirtualSystemDescription)
        VBOX_TWEAK_INTERFACE_ENTRY(IVirtualSystemDescription)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VirtualSystemDescriptionWrap)

    /** @name Public IVirtualSystemDescription properties
     * @{ */
    STDMETHOD(COMGETTER(Count))(ULONG *aCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IVirtualSystemDescription))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IVirtualSystemDescription))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IVirtualSystemDescription))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IVirtualSystemDescription))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IVirtualSystemDescription methods
     * @{ */
    STDMETHOD(GetDescription)(ComSafeArrayOut(VirtualSystemDescriptionType_T, aTypes),
                              ComSafeArrayOut(BSTR, aRefs),
                              ComSafeArrayOut(BSTR, aOVFValues),
                              ComSafeArrayOut(BSTR, aVBoxValues),
                              ComSafeArrayOut(BSTR, aExtraConfigValues)) RT_OVERRIDE;
    STDMETHOD(GetDescriptionByType)(VirtualSystemDescriptionType_T aType,
                                    ComSafeArrayOut(VirtualSystemDescriptionType_T, aTypes),
                                    ComSafeArrayOut(BSTR, aRefs),
                                    ComSafeArrayOut(BSTR, aOVFValues),
                                    ComSafeArrayOut(BSTR, aVBoxValues),
                                    ComSafeArrayOut(BSTR, aExtraConfigValues)) RT_OVERRIDE;
    STDMETHOD(RemoveDescriptionByType)(VirtualSystemDescriptionType_T aType) RT_OVERRIDE;
    STDMETHOD(GetValuesByType)(VirtualSystemDescriptionType_T aType,
                               VirtualSystemDescriptionValueType_T aWhich,
                               ComSafeArrayOut(BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(SetFinalValues)(ComSafeArrayIn(BOOL, aEnabled),
                              ComSafeArrayIn(IN_BSTR, aVBoxValues),
                              ComSafeArrayIn(IN_BSTR, aExtraConfigValues)) RT_OVERRIDE;
    STDMETHOD(AddDescription)(VirtualSystemDescriptionType_T aType,
                              IN_BSTR aVBoxValue,
                              IN_BSTR aExtraConfigValue) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IVirtualSystemDescription)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IVirtualSystemDescription)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IVirtualSystemDescription)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IVirtualSystemDescription)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IVirtualSystemDescription properties
     * @{ */
    virtual HRESULT getCount(ULONG *aCount) = 0;
    /** @} */

    /** @name Wrapped IVirtualSystemDescription methods
     * @{ */
    virtual HRESULT getDescription(std::vector<VirtualSystemDescriptionType_T> &aTypes,
                                   std::vector<com::Utf8Str> &aRefs,
                                   std::vector<com::Utf8Str> &aOVFValues,
                                   std::vector<com::Utf8Str> &aVBoxValues,
                                   std::vector<com::Utf8Str> &aExtraConfigValues) = 0;
    virtual HRESULT getDescriptionByType(VirtualSystemDescriptionType_T aType,
                                         std::vector<VirtualSystemDescriptionType_T> &aTypes,
                                         std::vector<com::Utf8Str> &aRefs,
                                         std::vector<com::Utf8Str> &aOVFValues,
                                         std::vector<com::Utf8Str> &aVBoxValues,
                                         std::vector<com::Utf8Str> &aExtraConfigValues) = 0;
    virtual HRESULT removeDescriptionByType(VirtualSystemDescriptionType_T aType) = 0;
    virtual HRESULT getValuesByType(VirtualSystemDescriptionType_T aType,
                                    VirtualSystemDescriptionValueType_T aWhich,
                                    std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT setFinalValues(const std::vector<BOOL> &aEnabled,
                                   const std::vector<com::Utf8Str> &aVBoxValues,
                                   const std::vector<com::Utf8Str> &aExtraConfigValues) = 0;
    virtual HRESULT addDescription(VirtualSystemDescriptionType_T aType,
                                   const com::Utf8Str &aVBoxValue,
                                   const com::Utf8Str &aExtraConfigValue) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VirtualSystemDescriptionWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VirtualSystemDescriptionWrap_H_
