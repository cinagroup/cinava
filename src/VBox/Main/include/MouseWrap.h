/** @file
 * VirtualBox API class wrapper header for IMouse.
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

#ifndef MouseWrap_H_
#define MouseWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MouseWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMouse)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MouseWrap, IMouse)
    DECLARE_NOT_AGGREGATABLE(MouseWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MouseWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMouse)
        COM_INTERFACE_ENTRY2(IDispatch, IMouse)
        VBOX_TWEAK_INTERFACE_ENTRY(IMouse)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MouseWrap)

    /** @name Public IMouse properties
     * @{ */
    STDMETHOD(COMGETTER(AbsoluteSupported))(BOOL *aAbsoluteSupported) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RelativeSupported))(BOOL *aRelativeSupported) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TouchScreenSupported))(BOOL *aTouchScreenSupported) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TouchPadSupported))(BOOL *aTouchPadSupported) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NeedsHostCursor))(BOOL *aNeedsHostCursor) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PointerShape))(IMousePointerShape **aPointerShape) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMouse))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMouse))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMouse))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMouse))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMouse methods
     * @{ */
    STDMETHOD(PutMouseEvent)(LONG aDx,
                             LONG aDy,
                             LONG aDz,
                             LONG aDw,
                             LONG aButtonState) RT_OVERRIDE;
    STDMETHOD(PutMouseEventAbsolute)(LONG aX,
                                     LONG aY,
                                     LONG aDz,
                                     LONG aDw,
                                     LONG aButtonState) RT_OVERRIDE;
    STDMETHOD(PutEventMultiTouch)(LONG aCount,
                                  ComSafeArrayIn(LONG64, aContacts),
                                  BOOL aIsTouchScreen,
                                  ULONG aScanTime) RT_OVERRIDE;
    STDMETHOD(PutEventMultiTouchString)(LONG aCount,
                                        IN_BSTR aContacts,
                                        BOOL aIsTouchScreen,
                                        ULONG aScanTime) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IMouse)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IMouse)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IMouse)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IMouse)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IMouse properties
     * @{ */
    virtual HRESULT getAbsoluteSupported(BOOL *aAbsoluteSupported) = 0;
    virtual HRESULT getRelativeSupported(BOOL *aRelativeSupported) = 0;
    virtual HRESULT getTouchScreenSupported(BOOL *aTouchScreenSupported) = 0;
    virtual HRESULT getTouchPadSupported(BOOL *aTouchPadSupported) = 0;
    virtual HRESULT getNeedsHostCursor(BOOL *aNeedsHostCursor) = 0;
    virtual HRESULT getPointerShape(ComPtr<IMousePointerShape> &aPointerShape) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    /** @} */

    /** @name Wrapped IMouse methods
     * @{ */
    virtual HRESULT putMouseEvent(LONG aDx,
                                  LONG aDy,
                                  LONG aDz,
                                  LONG aDw,
                                  LONG aButtonState) = 0;
    virtual HRESULT putMouseEventAbsolute(LONG aX,
                                          LONG aY,
                                          LONG aDz,
                                          LONG aDw,
                                          LONG aButtonState) = 0;
    virtual HRESULT putEventMultiTouch(LONG aCount,
                                       const std::vector<LONG64> &aContacts,
                                       BOOL aIsTouchScreen,
                                       ULONG aScanTime) = 0;
    virtual HRESULT putEventMultiTouchString(LONG aCount,
                                             const com::Utf8Str &aContacts,
                                             BOOL aIsTouchScreen,
                                             ULONG aScanTime) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MouseWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MouseWrap_H_
