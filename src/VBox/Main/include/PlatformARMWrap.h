/** @file
 * VirtualBox API class wrapper header for IPlatformARM.
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

#ifndef PlatformARMWrap_H_
#define PlatformARMWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PlatformARMWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPlatformARM)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PlatformARMWrap, IPlatformARM)
    DECLARE_NOT_AGGREGATABLE(PlatformARMWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PlatformARMWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPlatformARM)
        COM_INTERFACE_ENTRY2(IDispatch, IPlatformARM)
        VBOX_TWEAK_INTERFACE_ENTRY(IPlatformARM)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PlatformARMWrap)

    /** @name Public IPlatformARM properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IPlatformARM))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IPlatformARM methods
     * @{ */
    STDMETHOD(GetCPUProperty)(CPUPropertyTypeARM_T aProperty,
                              BOOL *aValue) RT_OVERRIDE;
    STDMETHOD(SetCPUProperty)(CPUPropertyTypeARM_T aProperty,
                              BOOL aValue) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IPlatformARM)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IPlatformARM)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IPlatformARM)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IPlatformARM)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IPlatformARM)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IPlatformARM)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IPlatformARM)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IPlatformARM)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IPlatformARM properties
     * @{ */
    /** @} */

    /** @name Wrapped IPlatformARM methods
     * @{ */
    virtual HRESULT getCPUProperty(CPUPropertyTypeARM_T aProperty,
                                   BOOL *aValue) = 0;
    virtual HRESULT setCPUProperty(CPUPropertyTypeARM_T aProperty,
                                   BOOL aValue) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PlatformARMWrap); /* Shuts up MSC warning C4625. */

};

#endif // !PlatformARMWrap_H_
