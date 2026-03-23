/** @file
 * VirtualBox API class wrapper header for IRangedIntegerFormValue.
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

#ifndef RangedIntegerFormValueWrap_H_
#define RangedIntegerFormValueWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE RangedIntegerFormValueWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IRangedIntegerFormValue)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(RangedIntegerFormValueWrap, IRangedIntegerFormValue)
    DECLARE_NOT_AGGREGATABLE(RangedIntegerFormValueWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(RangedIntegerFormValueWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IRangedIntegerFormValue)
        COM_INTERFACE_ENTRY(IFormValue)
        COM_INTERFACE_ENTRY2(IDispatch, IRangedIntegerFormValue)
        VBOX_TWEAK_INTERFACE_ENTRY(IRangedIntegerFormValue)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(RangedIntegerFormValueWrap)

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

    /** @name Public IRangedIntegerFormValue properties
     * @{ */
    STDMETHOD(COMGETTER(Suffix))(BSTR *aSuffix) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Minimum))(LONG *aMinimum) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Maximum))(LONG *aMaximum) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IRangedIntegerFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IRangedIntegerFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IRangedIntegerFormValue))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IRangedIntegerFormValue))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IFormValue methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IFormValue)() RT_OVERRIDE;
    /** @} */

    /** @name Public IRangedIntegerFormValue methods
     * @{ */
    STDMETHOD(GetInteger)(LONG *aValue) RT_OVERRIDE;
    STDMETHOD(SetInteger)(LONG aValue,
                          IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IRangedIntegerFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IRangedIntegerFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IRangedIntegerFormValue)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IRangedIntegerFormValue)() RT_OVERRIDE;
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

    /** @name Wrapped IRangedIntegerFormValue properties
     * @{ */
    virtual HRESULT getSuffix(com::Utf8Str &aSuffix) = 0;
    virtual HRESULT getMinimum(LONG *aMinimum) = 0;
    virtual HRESULT getMaximum(LONG *aMaximum) = 0;
    /** @} */

    /** @name Wrapped IFormValue methods
     * @{ */
    /** @} */

    /** @name Wrapped IRangedIntegerFormValue methods
     * @{ */
    virtual HRESULT getInteger(LONG *aValue) = 0;
    virtual HRESULT setInteger(LONG aValue,
                               ComPtr<IProgress> &aProgress) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(RangedIntegerFormValueWrap); /* Shuts up MSC warning C4625. */

};

#endif // !RangedIntegerFormValueWrap_H_
