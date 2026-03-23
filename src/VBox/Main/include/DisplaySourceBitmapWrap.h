/** @file
 * VirtualBox API class wrapper header for IDisplaySourceBitmap.
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

#ifndef DisplaySourceBitmapWrap_H_
#define DisplaySourceBitmapWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DisplaySourceBitmapWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDisplaySourceBitmap)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DisplaySourceBitmapWrap, IDisplaySourceBitmap)
    DECLARE_NOT_AGGREGATABLE(DisplaySourceBitmapWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DisplaySourceBitmapWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDisplaySourceBitmap)
        COM_INTERFACE_ENTRY2(IDispatch, IDisplaySourceBitmap)
        VBOX_TWEAK_INTERFACE_ENTRY(IDisplaySourceBitmap)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DisplaySourceBitmapWrap)

    /** @name Public IDisplaySourceBitmap properties
     * @{ */
    STDMETHOD(COMGETTER(ScreenId))(ULONG *aScreenId) RT_OVERRIDE;
    /** @} */

    /** @name Public IDisplaySourceBitmap methods
     * @{ */
    STDMETHOD(QueryBitmapInfo)(BYTE **aAddress,
                               ULONG *aWidth,
                               ULONG *aHeight,
                               ULONG *aBitsPerPixel,
                               ULONG *aBytesPerLine,
                               BitmapFormat_T *aBitmapFormat) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDisplaySourceBitmap properties
     * @{ */
    virtual HRESULT getScreenId(ULONG *aScreenId) = 0;
    /** @} */

    /** @name Wrapped IDisplaySourceBitmap methods
     * @{ */
    virtual HRESULT queryBitmapInfo(BYTE **aAddress,
                                    ULONG *aWidth,
                                    ULONG *aHeight,
                                    ULONG *aBitsPerPixel,
                                    ULONG *aBytesPerLine,
                                    BitmapFormat_T *aBitmapFormat) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DisplaySourceBitmapWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DisplaySourceBitmapWrap_H_
