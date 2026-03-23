/** @file
 * VirtualBox API class wrapper header for IHostUSBDeviceFilter.
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

#ifndef HostUSBDeviceFilterWrap_H_
#define HostUSBDeviceFilterWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostUSBDeviceFilterWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostUSBDeviceFilter)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostUSBDeviceFilterWrap, IHostUSBDeviceFilter)
    DECLARE_NOT_AGGREGATABLE(HostUSBDeviceFilterWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostUSBDeviceFilterWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostUSBDeviceFilter)
        COM_INTERFACE_ENTRY(IUSBDeviceFilter)
        COM_INTERFACE_ENTRY2(IDispatch, IHostUSBDeviceFilter)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostUSBDeviceFilter)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostUSBDeviceFilterWrap)

    /** @name Public IUSBDeviceFilter properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Active))(BOOL *aActive) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Active))(BOOL aActive) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VendorId))(BSTR *aVendorId) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VendorId))(IN_BSTR aVendorId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProductId))(BSTR *aProductId) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ProductId))(IN_BSTR aProductId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Revision))(BSTR *aRevision) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Revision))(IN_BSTR aRevision) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Manufacturer))(BSTR *aManufacturer) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Manufacturer))(IN_BSTR aManufacturer) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Product))(BSTR *aProduct) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Product))(IN_BSTR aProduct) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SerialNumber))(BSTR *aSerialNumber) RT_OVERRIDE;
    STDMETHOD(COMSETTER(SerialNumber))(IN_BSTR aSerialNumber) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Port))(BSTR *aPort) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Port))(IN_BSTR aPort) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Remote))(BSTR *aRemote) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Remote))(IN_BSTR aRemote) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaskedInterfaces))(ULONG *aMaskedInterfaces) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MaskedInterfaces))(ULONG aMaskedInterfaces) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostUSBDeviceFilter properties
     * @{ */
    STDMETHOD(COMGETTER(Action))(USBDeviceFilterAction_T *aAction) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Action))(USBDeviceFilterAction_T aAction) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IHostUSBDeviceFilter))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUSBDeviceFilter methods
     * @{ */
    /** @} */

    /** @name Public IHostUSBDeviceFilter methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IUSBDeviceFilter properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getActive(BOOL *aActive) = 0;
    virtual HRESULT setActive(BOOL aActive) = 0;
    virtual HRESULT getVendorId(com::Utf8Str &aVendorId) = 0;
    virtual HRESULT setVendorId(const com::Utf8Str &aVendorId) = 0;
    virtual HRESULT getProductId(com::Utf8Str &aProductId) = 0;
    virtual HRESULT setProductId(const com::Utf8Str &aProductId) = 0;
    virtual HRESULT getRevision(com::Utf8Str &aRevision) = 0;
    virtual HRESULT setRevision(const com::Utf8Str &aRevision) = 0;
    virtual HRESULT getManufacturer(com::Utf8Str &aManufacturer) = 0;
    virtual HRESULT setManufacturer(const com::Utf8Str &aManufacturer) = 0;
    virtual HRESULT getProduct(com::Utf8Str &aProduct) = 0;
    virtual HRESULT setProduct(const com::Utf8Str &aProduct) = 0;
    virtual HRESULT getSerialNumber(com::Utf8Str &aSerialNumber) = 0;
    virtual HRESULT setSerialNumber(const com::Utf8Str &aSerialNumber) = 0;
    virtual HRESULT getPort(com::Utf8Str &aPort) = 0;
    virtual HRESULT setPort(const com::Utf8Str &aPort) = 0;
    virtual HRESULT getRemote(com::Utf8Str &aRemote) = 0;
    virtual HRESULT setRemote(const com::Utf8Str &aRemote) = 0;
    virtual HRESULT getMaskedInterfaces(ULONG *aMaskedInterfaces) = 0;
    virtual HRESULT setMaskedInterfaces(ULONG aMaskedInterfaces) = 0;
    /** @} */

    /** @name Wrapped IHostUSBDeviceFilter properties
     * @{ */
    virtual HRESULT getAction(USBDeviceFilterAction_T *aAction) = 0;
    virtual HRESULT setAction(USBDeviceFilterAction_T aAction) = 0;
    /** @} */

    /** @name Wrapped IUSBDeviceFilter methods
     * @{ */
    /** @} */

    /** @name Wrapped IHostUSBDeviceFilter methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostUSBDeviceFilterWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostUSBDeviceFilterWrap_H_
