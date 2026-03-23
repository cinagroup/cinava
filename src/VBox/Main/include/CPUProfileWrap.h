/** @file
 * VirtualBox API class wrapper header for ICPUProfile.
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

#ifndef CPUProfileWrap_H_
#define CPUProfileWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CPUProfileWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICPUProfile)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CPUProfileWrap, ICPUProfile)
    DECLARE_NOT_AGGREGATABLE(CPUProfileWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CPUProfileWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICPUProfile)
        COM_INTERFACE_ENTRY2(IDispatch, ICPUProfile)
        VBOX_TWEAK_INTERFACE_ENTRY(ICPUProfile)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CPUProfileWrap)

    /** @name Public ICPUProfile properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FullName))(BSTR *aFullName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Architecture))(CPUArchitecture_T *aArchitecture) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ICPUProfile))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICPUProfile methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1ICPUProfile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICPUProfile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ICPUProfile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ICPUProfile)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICPUProfile properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getFullName(com::Utf8Str &aFullName) = 0;
    virtual HRESULT getArchitecture(CPUArchitecture_T *aArchitecture) = 0;
    /** @} */

    /** @name Wrapped ICPUProfile methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CPUProfileWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CPUProfileWrap_H_
