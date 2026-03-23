/** @file
 * VirtualBox API class wrapper header for IFormValue.
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

#ifndef FormValueWrap_H_
#define FormValueWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE FormValueWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IFormValue)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(FormValueWrap, IFormValue)
    DECLARE_NOT_AGGREGATABLE(FormValueWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(FormValueWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IFormValue)
        COM_INTERFACE_ENTRY2(IDispatch, IFormValue)
        VBOX_TWEAK_INTERFACE_ENTRY(IFormValue)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(FormValueWrap)

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

    /** @name Public IFormValue methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IFormValue)() RT_OVERRIDE;
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

    /** @name Wrapped IFormValue methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(FormValueWrap); /* Shuts up MSC warning C4625. */

};

#endif // !FormValueWrap_H_
