/** @file
 * VirtualBox API class wrapper header for IUSBController.
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

#ifndef USBControllerWrap_H_
#define USBControllerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE USBControllerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IUSBController)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(USBControllerWrap, IUSBController)
    DECLARE_NOT_AGGREGATABLE(USBControllerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(USBControllerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUSBController)
        COM_INTERFACE_ENTRY2(IDispatch, IUSBController)
        VBOX_TWEAK_INTERFACE_ENTRY(IUSBController)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(USBControllerWrap)

    /** @name Public IUSBController properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(USBControllerType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Type))(USBControllerType_T aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(USBStandard))(USHORT *aUSBStandard) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUSBController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUSBController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IUSBController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IUSBController))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUSBController methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IUSBController properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getType(USBControllerType_T *aType) = 0;
    virtual HRESULT setType(USBControllerType_T aType) = 0;
    virtual HRESULT getUSBStandard(USHORT *aUSBStandard) = 0;
    /** @} */

    /** @name Wrapped IUSBController methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(USBControllerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !USBControllerWrap_H_
