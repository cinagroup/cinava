/** @file
 * VirtualBox API class wrapper header for IEmulatedUSB.
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

#ifndef EmulatedUSBWrap_H_
#define EmulatedUSBWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE EmulatedUSBWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IEmulatedUSB)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EmulatedUSBWrap, IEmulatedUSB)
    DECLARE_NOT_AGGREGATABLE(EmulatedUSBWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(EmulatedUSBWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IEmulatedUSB)
        COM_INTERFACE_ENTRY2(IDispatch, IEmulatedUSB)
        VBOX_TWEAK_INTERFACE_ENTRY(IEmulatedUSB)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(EmulatedUSBWrap)

    /** @name Public IEmulatedUSB properties
     * @{ */
    STDMETHOD(COMGETTER(Webcams))(ComSafeArrayOut(BSTR, aWebcams)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IEmulatedUSB))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IEmulatedUSB))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IEmulatedUSB))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IEmulatedUSB))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IEmulatedUSB methods
     * @{ */
    STDMETHOD(WebcamAttach)(IN_BSTR aPath,
                            IN_BSTR aSettings) RT_OVERRIDE;
    STDMETHOD(WebcamDetach)(IN_BSTR aPath) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IEmulatedUSB)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IEmulatedUSB)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IEmulatedUSB)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IEmulatedUSB)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IEmulatedUSB properties
     * @{ */
    virtual HRESULT getWebcams(std::vector<com::Utf8Str> &aWebcams) = 0;
    /** @} */

    /** @name Wrapped IEmulatedUSB methods
     * @{ */
    virtual HRESULT webcamAttach(const com::Utf8Str &aPath,
                                 const com::Utf8Str &aSettings) = 0;
    virtual HRESULT webcamDetach(const com::Utf8Str &aPath) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(EmulatedUSBWrap); /* Shuts up MSC warning C4625. */

};

#endif // !EmulatedUSBWrap_H_
