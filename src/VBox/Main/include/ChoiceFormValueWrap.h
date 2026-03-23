/** @file
 * VirtualBox API class wrapper header for IChoiceFormValue.
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

#ifndef ChoiceFormValueWrap_H_
#define ChoiceFormValueWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ChoiceFormValueWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IChoiceFormValue)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ChoiceFormValueWrap, IChoiceFormValue)
    DECLARE_NOT_AGGREGATABLE(ChoiceFormValueWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ChoiceFormValueWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IChoiceFormValue)
        COM_INTERFACE_ENTRY(IFormValue)
        COM_INTERFACE_ENTRY2(IDispatch, IChoiceFormValue)
        VBOX_TWEAK_INTERFACE_ENTRY(IChoiceFormValue)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ChoiceFormValueWrap)

    /** @name Public IFormValue properties
     * @{ */
    STDMETHOD(COMGETTER(Type))(FormValueType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Generation))(LONG *aGeneration) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Visible))(BOOL *aVisible) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Label))(BSTR *aLabel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Help))(BSTR *aHelp) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IFormValue))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IChoiceFormValue properties
     * @{ */
    STDMETHOD(COMGETTER(Values))(ComSafeArrayOut(BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IChoiceFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IChoiceFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IChoiceFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IChoiceFormValue))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IFormValue methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IFormValue)() RT_OVERRIDE;
    /** @} */

    /** @name Public IChoiceFormValue methods
     * @{ */
    STDMETHOD(GetSelectedIndex)(LONG *aIndex) RT_OVERRIDE;
    STDMETHOD(SetSelectedIndex)(LONG aIndex,
                                IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IChoiceFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IChoiceFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IChoiceFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IChoiceFormValue)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IFormValue properties
     * @{ */
    virtual HRESULT getType(FormValueType_T *aType) = 0;
    virtual HRESULT getGeneration(LONG *aGeneration) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT getVisible(BOOL *aVisible) = 0;
    virtual HRESULT getLabel(com::Utf8Str &aLabel) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getHelp(com::Utf8Str &aHelp) = 0;
    /** @} */

    /** @name Wrapped IChoiceFormValue properties
     * @{ */
    virtual HRESULT getValues(std::vector<com::Utf8Str> &aValues) = 0;
    /** @} */

    /** @name Wrapped IFormValue methods
     * @{ */
    /** @} */

    /** @name Wrapped IChoiceFormValue methods
     * @{ */
    virtual HRESULT getSelectedIndex(LONG *aIndex) = 0;
    virtual HRESULT setSelectedIndex(LONG aIndex,
                                     ComPtr<IProgress> &aProgress) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ChoiceFormValueWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ChoiceFormValueWrap_H_
