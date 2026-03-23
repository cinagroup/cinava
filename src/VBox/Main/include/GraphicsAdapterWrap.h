/** @file
 * VirtualBox API class wrapper header for IGraphicsAdapter.
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

#ifndef GraphicsAdapterWrap_H_
#define GraphicsAdapterWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GraphicsAdapterWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGraphicsAdapter)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GraphicsAdapterWrap, IGraphicsAdapter)
    DECLARE_NOT_AGGREGATABLE(GraphicsAdapterWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GraphicsAdapterWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGraphicsAdapter)
        COM_INTERFACE_ENTRY2(IDispatch, IGraphicsAdapter)
        VBOX_TWEAK_INTERFACE_ENTRY(IGraphicsAdapter)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GraphicsAdapterWrap)

    /** @name Public IGraphicsAdapter properties
     * @{ */
    STDMETHOD(COMGETTER(GraphicsControllerType))(GraphicsControllerType_T *aGraphicsControllerType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(GraphicsControllerType))(GraphicsControllerType_T aGraphicsControllerType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VRAMSize))(ULONG *aVRAMSize) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VRAMSize))(ULONG aVRAMSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MonitorCount))(ULONG *aMonitorCount) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MonitorCount))(ULONG aMonitorCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IGraphicsAdapter))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGraphicsAdapter methods
     * @{ */
    STDMETHOD(SetFeature)(GraphicsFeature_T aFeature,
                          BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(IsFeatureEnabled)(GraphicsFeature_T aFeature,
                                BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IGraphicsAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IGraphicsAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IGraphicsAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IGraphicsAdapter)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IGraphicsAdapter properties
     * @{ */
    virtual HRESULT getGraphicsControllerType(GraphicsControllerType_T *aGraphicsControllerType) = 0;
    virtual HRESULT setGraphicsControllerType(GraphicsControllerType_T aGraphicsControllerType) = 0;
    virtual HRESULT getVRAMSize(ULONG *aVRAMSize) = 0;
    virtual HRESULT setVRAMSize(ULONG aVRAMSize) = 0;
    virtual HRESULT getMonitorCount(ULONG *aMonitorCount) = 0;
    virtual HRESULT setMonitorCount(ULONG aMonitorCount) = 0;
    /** @} */

    /** @name Wrapped IGraphicsAdapter methods
     * @{ */
    virtual HRESULT setFeature(GraphicsFeature_T aFeature,
                               BOOL aEnabled) = 0;
    virtual HRESULT isFeatureEnabled(GraphicsFeature_T aFeature,
                                     BOOL *aEnabled) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GraphicsAdapterWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GraphicsAdapterWrap_H_
