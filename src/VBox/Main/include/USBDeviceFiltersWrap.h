/** @file
 * VirtualBox API class wrapper header for IUSBDeviceFilters.
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

#ifndef USBDeviceFiltersWrap_H_
#define USBDeviceFiltersWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE USBDeviceFiltersWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IUSBDeviceFilters)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(USBDeviceFiltersWrap, IUSBDeviceFilters)
    DECLARE_NOT_AGGREGATABLE(USBDeviceFiltersWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(USBDeviceFiltersWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUSBDeviceFilters)
        COM_INTERFACE_ENTRY2(IDispatch, IUSBDeviceFilters)
        VBOX_TWEAK_INTERFACE_ENTRY(IUSBDeviceFilters)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(USBDeviceFiltersWrap)

    /** @name Public IUSBDeviceFilters properties
     * @{ */
    STDMETHOD(COMGETTER(DeviceFilters))(ComSafeArrayOut(IUSBDeviceFilter *, aDeviceFilters)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUSBDeviceFilters))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUSBDeviceFilters))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUSBDeviceFilters methods
     * @{ */
    STDMETHOD(CreateDeviceFilter)(IN_BSTR aName,
                                  IUSBDeviceFilter **aFilter) RT_OVERRIDE;
    STDMETHOD(InsertDeviceFilter)(ULONG aPosition,
                                  IUSBDeviceFilter *aFilter) RT_OVERRIDE;
    STDMETHOD(RemoveDeviceFilter)(ULONG aPosition,
                                  IUSBDeviceFilter **aFilter) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IUSBDeviceFilters)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IUSBDeviceFilters)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IUSBDeviceFilters properties
     * @{ */
    virtual HRESULT getDeviceFilters(std::vector<ComPtr<IUSBDeviceFilter> > &aDeviceFilters) = 0;
    /** @} */

    /** @name Wrapped IUSBDeviceFilters methods
     * @{ */
    virtual HRESULT createDeviceFilter(const com::Utf8Str &aName,
                                       ComPtr<IUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT insertDeviceFilter(ULONG aPosition,
                                       const ComPtr<IUSBDeviceFilter> &aFilter) = 0;
    virtual HRESULT removeDeviceFilter(ULONG aPosition,
                                       ComPtr<IUSBDeviceFilter> &aFilter) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(USBDeviceFiltersWrap); /* Shuts up MSC warning C4625. */

};

#endif // !USBDeviceFiltersWrap_H_
