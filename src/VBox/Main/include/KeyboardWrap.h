/** @file
 * VirtualBox API class wrapper header for IKeyboard.
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

#ifndef KeyboardWrap_H_
#define KeyboardWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE KeyboardWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IKeyboard)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(KeyboardWrap, IKeyboard)
    DECLARE_NOT_AGGREGATABLE(KeyboardWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(KeyboardWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IKeyboard)
        COM_INTERFACE_ENTRY2(IDispatch, IKeyboard)
        VBOX_TWEAK_INTERFACE_ENTRY(IKeyboard)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(KeyboardWrap)

    /** @name Public IKeyboard properties
     * @{ */
    STDMETHOD(COMGETTER(KeyboardLEDs))(ComSafeArrayOut(KeyboardLED_T, aKeyboardLEDs)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IKeyboard))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IKeyboard))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IKeyboard))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IKeyboard))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IKeyboard methods
     * @{ */
    STDMETHOD(PutScancode)(LONG aScancode) RT_OVERRIDE;
    STDMETHOD(PutScancodes)(ComSafeArrayIn(LONG, aScancodes),
                            ULONG *aCodesStored) RT_OVERRIDE;
    STDMETHOD(PutCAD)() RT_OVERRIDE;
    STDMETHOD(ReleaseKeys)() RT_OVERRIDE;
    STDMETHOD(PutUsageCode)(LONG aUsageCode,
                            LONG aUsagePage,
                            BOOL aKeyRelease) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IKeyboard)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IKeyboard)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IKeyboard)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IKeyboard)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IKeyboard properties
     * @{ */
    virtual HRESULT getKeyboardLEDs(std::vector<KeyboardLED_T> &aKeyboardLEDs) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    /** @} */

    /** @name Wrapped IKeyboard methods
     * @{ */
    virtual HRESULT putScancode(LONG aScancode) = 0;
    virtual HRESULT putScancodes(const std::vector<LONG> &aScancodes,
                                 ULONG *aCodesStored) = 0;
    virtual HRESULT putCAD() = 0;
    virtual HRESULT releaseKeys() = 0;
    virtual HRESULT putUsageCode(LONG aUsageCode,
                                 LONG aUsagePage,
                                 BOOL aKeyRelease) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(KeyboardWrap); /* Shuts up MSC warning C4625. */

};

#endif // !KeyboardWrap_H_
