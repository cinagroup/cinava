/** @file
 * VirtualBox API class wrapper header for IPerformanceMetric.
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

#ifndef PerformanceMetricWrap_H_
#define PerformanceMetricWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PerformanceMetricWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPerformanceMetric)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PerformanceMetricWrap, IPerformanceMetric)
    DECLARE_NOT_AGGREGATABLE(PerformanceMetricWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PerformanceMetricWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPerformanceMetric)
        COM_INTERFACE_ENTRY2(IDispatch, IPerformanceMetric)
        VBOX_TWEAK_INTERFACE_ENTRY(IPerformanceMetric)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PerformanceMetricWrap)

    /** @name Public IPerformanceMetric properties
     * @{ */
    STDMETHOD(COMGETTER(MetricName))(BSTR *aMetricName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Object))(IUnknown **aObject) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Period))(ULONG *aPeriod) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Count))(ULONG *aCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Unit))(BSTR *aUnit) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MinimumValue))(LONG *aMinimumValue) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaximumValue))(LONG *aMaximumValue) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IPerformanceMetric))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IPerformanceMetric methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IPerformanceMetric properties
     * @{ */
    virtual HRESULT getMetricName(com::Utf8Str &aMetricName) = 0;
    virtual HRESULT getObject(ComPtr<IUnknown> &aObject) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getPeriod(ULONG *aPeriod) = 0;
    virtual HRESULT getCount(ULONG *aCount) = 0;
    virtual HRESULT getUnit(com::Utf8Str &aUnit) = 0;
    virtual HRESULT getMinimumValue(LONG *aMinimumValue) = 0;
    virtual HRESULT getMaximumValue(LONG *aMaximumValue) = 0;
    /** @} */

    /** @name Wrapped IPerformanceMetric methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PerformanceMetricWrap); /* Shuts up MSC warning C4625. */

};

#endif // !PerformanceMetricWrap_H_
