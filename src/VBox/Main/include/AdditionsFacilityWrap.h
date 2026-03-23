/** @file
 * VirtualBox API class wrapper header for IAdditionsFacility.
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

#ifndef AdditionsFacilityWrap_H_
#define AdditionsFacilityWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE AdditionsFacilityWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IAdditionsFacility)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(AdditionsFacilityWrap, IAdditionsFacility)
    DECLARE_NOT_AGGREGATABLE(AdditionsFacilityWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(AdditionsFacilityWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IAdditionsFacility)
        COM_INTERFACE_ENTRY2(IDispatch, IAdditionsFacility)
        VBOX_TWEAK_INTERFACE_ENTRY(IAdditionsFacility)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(AdditionsFacilityWrap)

    /** @name Public IAdditionsFacility properties
     * @{ */
    STDMETHOD(COMGETTER(ClassType))(AdditionsFacilityClass_T *aClassType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LastUpdated))(LONG64 *aLastUpdated) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Status))(AdditionsFacilityStatus_T *aStatus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(AdditionsFacilityType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IAdditionsFacility))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IAdditionsFacility))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IAdditionsFacility methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IAdditionsFacility properties
     * @{ */
    virtual HRESULT getClassType(AdditionsFacilityClass_T *aClassType) = 0;
    virtual HRESULT getLastUpdated(LONG64 *aLastUpdated) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getStatus(AdditionsFacilityStatus_T *aStatus) = 0;
    virtual HRESULT getType(AdditionsFacilityType_T *aType) = 0;
    /** @} */

    /** @name Wrapped IAdditionsFacility methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(AdditionsFacilityWrap); /* Shuts up MSC warning C4625. */

};

#endif // !AdditionsFacilityWrap_H_
