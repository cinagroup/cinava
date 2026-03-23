/** @file
 * VirtualBox API class wrapper header for IUSBProxyBackend.
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

#ifndef USBProxyBackendWrap_H_
#define USBProxyBackendWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE USBProxyBackendWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IUSBProxyBackend)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(USBProxyBackendWrap, IUSBProxyBackend)
    DECLARE_NOT_AGGREGATABLE(USBProxyBackendWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(USBProxyBackendWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUSBProxyBackend)
        COM_INTERFACE_ENTRY2(IDispatch, IUSBProxyBackend)
        VBOX_TWEAK_INTERFACE_ENTRY(IUSBProxyBackend)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(USBProxyBackendWrap)

    /** @name Public IUSBProxyBackend properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(BSTR *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IUSBProxyBackend))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUSBProxyBackend methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IUSBProxyBackend)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IUSBProxyBackend)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IUSBProxyBackend)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IUSBProxyBackend)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IUSBProxyBackend properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getType(com::Utf8Str &aType) = 0;
    /** @} */

    /** @name Wrapped IUSBProxyBackend methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(USBProxyBackendWrap); /* Shuts up MSC warning C4625. */

};

#endif // !USBProxyBackendWrap_H_
