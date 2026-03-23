/** @file
 * VirtualBox API class wrapper header for IHostUSBDevice.
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

#ifndef HostUSBDeviceWrap_H_
#define HostUSBDeviceWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostUSBDeviceWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostUSBDevice)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostUSBDeviceWrap, IHostUSBDevice)
    DECLARE_NOT_AGGREGATABLE(HostUSBDeviceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostUSBDeviceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostUSBDevice)
        COM_INTERFACE_ENTRY(IUSBDevice)
        COM_INTERFACE_ENTRY2(IDispatch, IHostUSBDevice)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostUSBDevice)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostUSBDeviceWrap)

    /** @name Public IUSBDevice properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VendorId))(USHORT *aVendorId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProductId))(USHORT *aProductId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Revision))(USHORT *aRevision) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Manufacturer))(BSTR *aManufacturer) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Product))(BSTR *aProduct) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SerialNumber))(BSTR *aSerialNumber) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Address))(BSTR *aAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Port))(USHORT *aPort) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PortPath))(BSTR *aPortPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Version))(USHORT *aVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Speed))(USBConnectionSpeed_T *aSpeed) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Remote))(BOOL *aRemote) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DeviceInfo))(ComSafeArrayOut(BSTR, aDeviceInfo)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Backend))(BSTR *aBackend) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostUSBDevice properties
     * @{ */
    STDMETHOD(COMGETTER(State))(USBDeviceState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHostUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHostUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHostUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHostUSBDevice))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUSBDevice methods
     * @{ */
    /** @} */

    /** @name Public IHostUSBDevice methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IUSBDevice properties
     * @{ */
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getVendorId(USHORT *aVendorId) = 0;
    virtual HRESULT getProductId(USHORT *aProductId) = 0;
    virtual HRESULT getRevision(USHORT *aRevision) = 0;
    virtual HRESULT getManufacturer(com::Utf8Str &aManufacturer) = 0;
    virtual HRESULT getProduct(com::Utf8Str &aProduct) = 0;
    virtual HRESULT getSerialNumber(com::Utf8Str &aSerialNumber) = 0;
    virtual HRESULT getAddress(com::Utf8Str &aAddress) = 0;
    virtual HRESULT getPort(USHORT *aPort) = 0;
    virtual HRESULT getPortPath(com::Utf8Str &aPortPath) = 0;
    virtual HRESULT getVersion(USHORT *aVersion) = 0;
    virtual HRESULT getSpeed(USBConnectionSpeed_T *aSpeed) = 0;
    virtual HRESULT getRemote(BOOL *aRemote) = 0;
    virtual HRESULT getDeviceInfo(std::vector<com::Utf8Str> &aDeviceInfo) = 0;
    virtual HRESULT getBackend(com::Utf8Str &aBackend) = 0;
    /** @} */

    /** @name Wrapped IHostUSBDevice properties
     * @{ */
    virtual HRESULT getState(USBDeviceState_T *aState) = 0;
    /** @} */

    /** @name Wrapped IUSBDevice methods
     * @{ */
    /** @} */

    /** @name Wrapped IHostUSBDevice methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostUSBDeviceWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostUSBDeviceWrap_H_
