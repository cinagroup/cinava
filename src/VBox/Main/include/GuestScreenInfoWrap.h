/** @file
 * VirtualBox API class wrapper header for IGuestScreenInfo.
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

#ifndef GuestScreenInfoWrap_H_
#define GuestScreenInfoWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestScreenInfoWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestScreenInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestScreenInfoWrap, IGuestScreenInfo)
    DECLARE_NOT_AGGREGATABLE(GuestScreenInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestScreenInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestScreenInfo)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestScreenInfo)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestScreenInfo)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestScreenInfoWrap)

    /** @name Public IGuestScreenInfo properties
     * @{ */
    STDMETHOD(COMGETTER(ScreenId))(ULONG *aScreenId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GuestMonitorStatus))(GuestMonitorStatus_T *aGuestMonitorStatus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Primary))(BOOL *aPrimary) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Origin))(BOOL *aOrigin) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OriginX))(LONG *aOriginX) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OriginY))(LONG *aOriginY) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Width))(ULONG *aWidth) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Height))(ULONG *aHeight) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BitsPerPixel))(ULONG *aBitsPerPixel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExtendedInfo))(BSTR *aExtendedInfo) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestScreenInfo methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IGuestScreenInfo properties
     * @{ */
    virtual HRESULT getScreenId(ULONG *aScreenId) = 0;
    virtual HRESULT getGuestMonitorStatus(GuestMonitorStatus_T *aGuestMonitorStatus) = 0;
    virtual HRESULT getPrimary(BOOL *aPrimary) = 0;
    virtual HRESULT getOrigin(BOOL *aOrigin) = 0;
    virtual HRESULT getOriginX(LONG *aOriginX) = 0;
    virtual HRESULT getOriginY(LONG *aOriginY) = 0;
    virtual HRESULT getWidth(ULONG *aWidth) = 0;
    virtual HRESULT getHeight(ULONG *aHeight) = 0;
    virtual HRESULT getBitsPerPixel(ULONG *aBitsPerPixel) = 0;
    virtual HRESULT getExtendedInfo(com::Utf8Str &aExtendedInfo) = 0;
    /** @} */

    /** @name Wrapped IGuestScreenInfo methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestScreenInfoWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestScreenInfoWrap_H_
