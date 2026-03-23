/** @file
 * VirtualBox API class wrapper header for IGuestDebugControl.
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

#ifndef GuestDebugControlWrap_H_
#define GuestDebugControlWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestDebugControlWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestDebugControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestDebugControlWrap, IGuestDebugControl)
    DECLARE_NOT_AGGREGATABLE(GuestDebugControlWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestDebugControlWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestDebugControl)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestDebugControl)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestDebugControl)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestDebugControlWrap)

    /** @name Public IGuestDebugControl properties
     * @{ */
    STDMETHOD(COMGETTER(DebugProvider))(GuestDebugProvider_T *aDebugProvider) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DebugProvider))(GuestDebugProvider_T aDebugProvider) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DebugIoProvider))(GuestDebugIoProvider_T *aDebugIoProvider) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DebugIoProvider))(GuestDebugIoProvider_T aDebugIoProvider) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DebugAddress))(BSTR *aDebugAddress) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DebugAddress))(IN_BSTR aDebugAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DebugPort))(ULONG *aDebugPort) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DebugPort))(ULONG aDebugPort) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IGuestDebugControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IGuestDebugControl))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestDebugControl methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IGuestDebugControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IGuestDebugControl)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IGuestDebugControl properties
     * @{ */
    virtual HRESULT getDebugProvider(GuestDebugProvider_T *aDebugProvider) = 0;
    virtual HRESULT setDebugProvider(GuestDebugProvider_T aDebugProvider) = 0;
    virtual HRESULT getDebugIoProvider(GuestDebugIoProvider_T *aDebugIoProvider) = 0;
    virtual HRESULT setDebugIoProvider(GuestDebugIoProvider_T aDebugIoProvider) = 0;
    virtual HRESULT getDebugAddress(com::Utf8Str &aDebugAddress) = 0;
    virtual HRESULT setDebugAddress(const com::Utf8Str &aDebugAddress) = 0;
    virtual HRESULT getDebugPort(ULONG *aDebugPort) = 0;
    virtual HRESULT setDebugPort(ULONG aDebugPort) = 0;
    /** @} */

    /** @name Wrapped IGuestDebugControl methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestDebugControlWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestDebugControlWrap_H_
