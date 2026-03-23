/** @file
 * VirtualBox API class wrapper header for IStringArray.
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

#ifndef StringArrayWrap_H_
#define StringArrayWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE StringArrayWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IStringArray)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(StringArrayWrap, IStringArray)
    DECLARE_NOT_AGGREGATABLE(StringArrayWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(StringArrayWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IStringArray)
        COM_INTERFACE_ENTRY2(IDispatch, IStringArray)
        VBOX_TWEAK_INTERFACE_ENTRY(IStringArray)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(StringArrayWrap)

    /** @name Public IStringArray properties
     * @{ */
    STDMETHOD(COMGETTER(Values))(ComSafeArrayOut(BSTR, aValues)) RT_OVERRIDE;
    /** @} */

    /** @name Public IStringArray methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IStringArray)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IStringArray)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IStringArray)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IStringArray)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IStringArray properties
     * @{ */
    virtual HRESULT getValues(std::vector<com::Utf8Str> &aValues) = 0;
    /** @} */

    /** @name Wrapped IStringArray methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(StringArrayWrap); /* Shuts up MSC warning C4625. */

};

#endif // !StringArrayWrap_H_
