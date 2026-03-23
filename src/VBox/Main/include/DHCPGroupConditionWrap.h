/** @file
 * VirtualBox API class wrapper header for IDHCPGroupCondition.
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

#ifndef DHCPGroupConditionWrap_H_
#define DHCPGroupConditionWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DHCPGroupConditionWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDHCPGroupCondition)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DHCPGroupConditionWrap, IDHCPGroupCondition)
    DECLARE_NOT_AGGREGATABLE(DHCPGroupConditionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DHCPGroupConditionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDHCPGroupCondition)
        COM_INTERFACE_ENTRY2(IDispatch, IDHCPGroupCondition)
        VBOX_TWEAK_INTERFACE_ENTRY(IDHCPGroupCondition)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DHCPGroupConditionWrap)

    /** @name Public IDHCPGroupCondition properties
     * @{ */
    STDMETHOD(COMGETTER(Inclusive))(BOOL *aInclusive) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Inclusive))(BOOL aInclusive) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(DHCPGroupConditionType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Type))(DHCPGroupConditionType_T aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Value))(BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Value))(IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDHCPGroupCondition))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDHCPGroupCondition))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IDHCPGroupCondition))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDHCPGroupCondition methods
     * @{ */
    STDMETHOD(Remove)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDHCPGroupCondition)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IDHCPGroupCondition)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IDHCPGroupCondition)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDHCPGroupCondition properties
     * @{ */
    virtual HRESULT getInclusive(BOOL *aInclusive) = 0;
    virtual HRESULT setInclusive(BOOL aInclusive) = 0;
    virtual HRESULT getType(DHCPGroupConditionType_T *aType) = 0;
    virtual HRESULT setType(DHCPGroupConditionType_T aType) = 0;
    virtual HRESULT getValue(com::Utf8Str &aValue) = 0;
    virtual HRESULT setValue(const com::Utf8Str &aValue) = 0;
    /** @} */

    /** @name Wrapped IDHCPGroupCondition methods
     * @{ */
    virtual HRESULT remove() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DHCPGroupConditionWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DHCPGroupConditionWrap_H_
