/** @file
 * VirtualBox API class wrapper header for IRangedInteger64FormValue.
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

#ifndef RangedInteger64FormValueWrap_H_
#define RangedInteger64FormValueWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE RangedInteger64FormValueWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IRangedInteger64FormValue)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(RangedInteger64FormValueWrap, IRangedInteger64FormValue)
    DECLARE_NOT_AGGREGATABLE(RangedInteger64FormValueWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(RangedInteger64FormValueWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IRangedInteger64FormValue)
        COM_INTERFACE_ENTRY(IFormValue)
        COM_INTERFACE_ENTRY2(IDispatch, IRangedInteger64FormValue)
        VBOX_TWEAK_INTERFACE_ENTRY(IRangedInteger64FormValue)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(RangedInteger64FormValueWrap)

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

    /** @name Public IRangedInteger64FormValue properties
     * @{ */
    STDMETHOD(COMGETTER(Suffix))(BSTR *aSuffix) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Minimum))(LONG64 *aMinimum) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Maximum))(LONG64 *aMaximum) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IRangedInteger64FormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IRangedInteger64FormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IRangedInteger64FormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IRangedInteger64FormValue))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IFormValue methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IFormValue)() RT_OVERRIDE;
    /** @} */

    /** @name Public IRangedInteger64FormValue methods
     * @{ */
    STDMETHOD(GetInteger)(LONG64 *aValue) RT_OVERRIDE;
    STDMETHOD(SetInteger)(LONG64 aValue,
                          IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IRangedInteger64FormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IRangedInteger64FormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IRangedInteger64FormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IRangedInteger64FormValue)() RT_OVERRIDE;
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

    /** @name Wrapped IRangedInteger64FormValue properties
     * @{ */
    virtual HRESULT getSuffix(com::Utf8Str &aSuffix) = 0;
    virtual HRESULT getMinimum(LONG64 *aMinimum) = 0;
    virtual HRESULT getMaximum(LONG64 *aMaximum) = 0;
    /** @} */

    /** @name Wrapped IFormValue methods
     * @{ */
    /** @} */

    /** @name Wrapped IRangedInteger64FormValue methods
     * @{ */
    virtual HRESULT getInteger(LONG64 *aValue) = 0;
    virtual HRESULT setInteger(LONG64 aValue,
                               ComPtr<IProgress> &aProgress) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(RangedInteger64FormValueWrap); /* Shuts up MSC warning C4625. */

};

#endif // !RangedInteger64FormValueWrap_H_
