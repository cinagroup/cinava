/** @file
 * VirtualBox API class wrapper header for IHostVideoInputDevice.
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

#ifndef HostVideoInputDeviceWrap_H_
#define HostVideoInputDeviceWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostVideoInputDeviceWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostVideoInputDevice)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostVideoInputDeviceWrap, IHostVideoInputDevice)
    DECLARE_NOT_AGGREGATABLE(HostVideoInputDeviceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostVideoInputDeviceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostVideoInputDevice)
        COM_INTERFACE_ENTRY2(IDispatch, IHostVideoInputDevice)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostVideoInputDevice)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostVideoInputDeviceWrap)

    /** @name Public IHostVideoInputDevice properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Path))(BSTR *aPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Alias))(BSTR *aAlias) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHostVideoInputDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHostVideoInputDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHostVideoInputDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHostVideoInputDevice))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostVideoInputDevice methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IHostVideoInputDevice properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT getAlias(com::Utf8Str &aAlias) = 0;
    /** @} */

    /** @name Wrapped IHostVideoInputDevice methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostVideoInputDeviceWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostVideoInputDeviceWrap_H_
