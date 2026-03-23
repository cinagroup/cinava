/** @file
 * VirtualBox API class wrapper header for ISerialPort.
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

#ifndef SerialPortWrap_H_
#define SerialPortWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SerialPortWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ISerialPort)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SerialPortWrap, ISerialPort)
    DECLARE_NOT_AGGREGATABLE(SerialPortWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SerialPortWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISerialPort)
        COM_INTERFACE_ENTRY2(IDispatch, ISerialPort)
        VBOX_TWEAK_INTERFACE_ENTRY(ISerialPort)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(SerialPortWrap)

    /** @name Public ISerialPort properties
     * @{ */
    STDMETHOD(COMGETTER(Slot))(ULONG *aSlot) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IOAddress))(ULONG *aIOAddress) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IOAddress))(ULONG aIOAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IRQ))(ULONG *aIRQ) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IRQ))(ULONG aIRQ) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostMode))(PortMode_T *aHostMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(HostMode))(PortMode_T aHostMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Server))(BOOL *aServer) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Server))(BOOL aServer) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Path))(BSTR *aPath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Path))(IN_BSTR aPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UartType))(UartType_T *aUartType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(UartType))(UartType_T aUartType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ISerialPort))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ISerialPort))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ISerialPort))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ISerialPort))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ISerialPort methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped ISerialPort properties
     * @{ */
    virtual HRESULT getSlot(ULONG *aSlot) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getIOAddress(ULONG *aIOAddress) = 0;
    virtual HRESULT setIOAddress(ULONG aIOAddress) = 0;
    virtual HRESULT getIRQ(ULONG *aIRQ) = 0;
    virtual HRESULT setIRQ(ULONG aIRQ) = 0;
    virtual HRESULT getHostMode(PortMode_T *aHostMode) = 0;
    virtual HRESULT setHostMode(PortMode_T aHostMode) = 0;
    virtual HRESULT getServer(BOOL *aServer) = 0;
    virtual HRESULT setServer(BOOL aServer) = 0;
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT setPath(const com::Utf8Str &aPath) = 0;
    virtual HRESULT getUartType(UartType_T *aUartType) = 0;
    virtual HRESULT setUartType(UartType_T aUartType) = 0;
    /** @} */

    /** @name Wrapped ISerialPort methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(SerialPortWrap); /* Shuts up MSC warning C4625. */

};

#endif // !SerialPortWrap_H_
