/** @file
 * VirtualBox API class wrapper header for IMousePointerShape.
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

#ifndef MousePointerShapeWrap_H_
#define MousePointerShapeWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MousePointerShapeWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMousePointerShape)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MousePointerShapeWrap, IMousePointerShape)
    DECLARE_NOT_AGGREGATABLE(MousePointerShapeWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MousePointerShapeWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMousePointerShape)
        COM_INTERFACE_ENTRY2(IDispatch, IMousePointerShape)
        VBOX_TWEAK_INTERFACE_ENTRY(IMousePointerShape)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MousePointerShapeWrap)

    /** @name Public IMousePointerShape properties
     * @{ */
    STDMETHOD(COMGETTER(Visible))(BOOL *aVisible) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Alpha))(BOOL *aAlpha) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HotX))(ULONG *aHotX) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HotY))(ULONG *aHotY) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Width))(ULONG *aWidth) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Height))(ULONG *aHeight) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Shape))(ComSafeArrayOut(BYTE, aShape)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMousePointerShape))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMousePointerShape))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMousePointerShape))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMousePointerShape))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMousePointerShape methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IMousePointerShape properties
     * @{ */
    virtual HRESULT getVisible(BOOL *aVisible) = 0;
    virtual HRESULT getAlpha(BOOL *aAlpha) = 0;
    virtual HRESULT getHotX(ULONG *aHotX) = 0;
    virtual HRESULT getHotY(ULONG *aHotY) = 0;
    virtual HRESULT getWidth(ULONG *aWidth) = 0;
    virtual HRESULT getHeight(ULONG *aHeight) = 0;
    virtual HRESULT getShape(std::vector<BYTE> &aShape) = 0;
    /** @} */

    /** @name Wrapped IMousePointerShape methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MousePointerShapeWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MousePointerShapeWrap_H_
