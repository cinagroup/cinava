/** @file
 * VirtualBox API class wrapper header for IToken.
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

#ifndef TokenWrap_H_
#define TokenWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE TokenWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IToken)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(TokenWrap, IToken)
    DECLARE_NOT_AGGREGATABLE(TokenWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(TokenWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IToken)
        COM_INTERFACE_ENTRY2(IDispatch, IToken)
        VBOX_TWEAK_INTERFACE_ENTRY(IToken)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(TokenWrap)

    /** @name Public IToken properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IToken))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IToken))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IToken methods
     * @{ */
    STDMETHOD(Abandon)() RT_OVERRIDE;
    STDMETHOD(Dummy)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IToken)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IToken properties
     * @{ */
    /** @} */

    /** @name Wrapped IToken methods
     * @{ */
    virtual HRESULT abandon(AutoCaller &aAutoCaller) = 0;
    virtual HRESULT dummy() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(TokenWrap); /* Shuts up MSC warning C4625. */

};

#endif // !TokenWrap_H_
