/** @file
 * VirtualBox API class wrapper header for IParallelPort.
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

#ifndef ParallelPortWrap_H_
#define ParallelPortWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ParallelPortWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IParallelPort)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ParallelPortWrap, IParallelPort)
    DECLARE_NOT_AGGREGATABLE(ParallelPortWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ParallelPortWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IParallelPort)
        COM_INTERFACE_ENTRY2(IDispatch, IParallelPort)
        VBOX_TWEAK_INTERFACE_ENTRY(IParallelPort)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ParallelPortWrap)

    /** @name Public IParallelPort properties
     * @{ */
    STDMETHOD(COMGETTER(Slot))(ULONG *aSlot) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IOBase))(ULONG *aIOBase) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IOBase))(ULONG aIOBase) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IRQ))(ULONG *aIRQ) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IRQ))(ULONG aIRQ) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Path))(BSTR *aPath) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Path))(IN_BSTR aPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IParallelPort))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IParallelPort))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IParallelPort))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IParallelPort))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IParallelPort methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IParallelPort properties
     * @{ */
    virtual HRESULT getSlot(ULONG *aSlot) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getIOBase(ULONG *aIOBase) = 0;
    virtual HRESULT setIOBase(ULONG aIOBase) = 0;
    virtual HRESULT getIRQ(ULONG *aIRQ) = 0;
    virtual HRESULT setIRQ(ULONG aIRQ) = 0;
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT setPath(const com::Utf8Str &aPath) = 0;
    /** @} */

    /** @name Wrapped IParallelPort methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ParallelPortWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ParallelPortWrap_H_
