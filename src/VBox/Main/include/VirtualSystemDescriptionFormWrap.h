/** @file
 * VirtualBox API class wrapper header for IVirtualSystemDescriptionForm.
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

#ifndef VirtualSystemDescriptionFormWrap_H_
#define VirtualSystemDescriptionFormWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VirtualSystemDescriptionFormWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVirtualSystemDescriptionForm)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VirtualSystemDescriptionFormWrap, IVirtualSystemDescriptionForm)
    DECLARE_NOT_AGGREGATABLE(VirtualSystemDescriptionFormWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VirtualSystemDescriptionFormWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVirtualSystemDescriptionForm)
        COM_INTERFACE_ENTRY(IForm)
        COM_INTERFACE_ENTRY2(IDispatch, IVirtualSystemDescriptionForm)
        VBOX_TWEAK_INTERFACE_ENTRY(IVirtualSystemDescriptionForm)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VirtualSystemDescriptionFormWrap)

    /** @name Public IForm properties
     * @{ */
    STDMETHOD(COMGETTER(Values))(ComSafeArrayOut(IFormValue *, aValues)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IForm))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IForm))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IForm))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IForm))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IVirtualSystemDescriptionForm properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IVirtualSystemDescriptionForm))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IVirtualSystemDescriptionForm))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IVirtualSystemDescriptionForm))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IVirtualSystemDescriptionForm))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IForm methods
     * @{ */
    STDMETHOD(GetFieldGroup)(IN_BSTR aField,
                             ComSafeArrayOut(BSTR, aGroup)) RT_OVERRIDE;
    STDMETHOD(Apply)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IForm)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IForm)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IForm)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IForm)() RT_OVERRIDE;
    /** @} */

    /** @name Public IVirtualSystemDescriptionForm methods
     * @{ */
    STDMETHOD(GetVirtualSystemDescription)(IVirtualSystemDescription **aDescription) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IVirtualSystemDescriptionForm)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IVirtualSystemDescriptionForm)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IVirtualSystemDescriptionForm)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IVirtualSystemDescriptionForm)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IForm properties
     * @{ */
    virtual HRESULT getValues(std::vector<ComPtr<IFormValue> > &aValues) = 0;
    /** @} */

    /** @name Wrapped IVirtualSystemDescriptionForm properties
     * @{ */
    /** @} */

    /** @name Wrapped IForm methods
     * @{ */
    virtual HRESULT getFieldGroup(const com::Utf8Str &aField,
                                  std::vector<com::Utf8Str> &aGroup) = 0;
    virtual HRESULT apply(ComPtr<IProgress> &aProgress) = 0;
    /** @} */

    /** @name Wrapped IVirtualSystemDescriptionForm methods
     * @{ */
    virtual HRESULT getVirtualSystemDescription(ComPtr<IVirtualSystemDescription> &aDescription) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VirtualSystemDescriptionFormWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VirtualSystemDescriptionFormWrap_H_
