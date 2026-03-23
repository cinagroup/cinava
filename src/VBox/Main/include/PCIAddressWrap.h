/** @file
 * VirtualBox API class wrapper header for IPCIAddress.
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

#ifndef PCIAddressWrap_H_
#define PCIAddressWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PCIAddressWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPCIAddress)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PCIAddressWrap, IPCIAddress)
    DECLARE_NOT_AGGREGATABLE(PCIAddressWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PCIAddressWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPCIAddress)
        COM_INTERFACE_ENTRY2(IDispatch, IPCIAddress)
        VBOX_TWEAK_INTERFACE_ENTRY(IPCIAddress)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PCIAddressWrap)

    /** @name Public IPCIAddress properties
     * @{ */
    STDMETHOD(COMGETTER(Bus))(SHORT *aBus) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Bus))(SHORT aBus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Device))(SHORT *aDevice) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Device))(SHORT aDevice) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DevFunction))(SHORT *aDevFunction) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DevFunction))(SHORT aDevFunction) RT_OVERRIDE;
    /** @} */

    /** @name Public IPCIAddress methods
     * @{ */
    STDMETHOD(AsLong)(LONG *aResult) RT_OVERRIDE;
    STDMETHOD(FromLong)(LONG aNumber) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IPCIAddress properties
     * @{ */
    virtual HRESULT getBus(SHORT *aBus) = 0;
    virtual HRESULT setBus(SHORT aBus) = 0;
    virtual HRESULT getDevice(SHORT *aDevice) = 0;
    virtual HRESULT setDevice(SHORT aDevice) = 0;
    virtual HRESULT getDevFunction(SHORT *aDevFunction) = 0;
    virtual HRESULT setDevFunction(SHORT aDevFunction) = 0;
    /** @} */

    /** @name Wrapped IPCIAddress methods
     * @{ */
    virtual HRESULT asLong(LONG *aResult) = 0;
    virtual HRESULT fromLong(LONG aNumber) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PCIAddressWrap); /* Shuts up MSC warning C4625. */

};

#endif // !PCIAddressWrap_H_
