/** @file
 * VirtualBox API class wrapper header for IPerformanceCollector.
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

#ifndef PerformanceCollectorWrap_H_
#define PerformanceCollectorWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PerformanceCollectorWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPerformanceCollector)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PerformanceCollectorWrap, IPerformanceCollector)
    DECLARE_NOT_AGGREGATABLE(PerformanceCollectorWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PerformanceCollectorWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPerformanceCollector)
        COM_INTERFACE_ENTRY2(IDispatch, IPerformanceCollector)
        VBOX_TWEAK_INTERFACE_ENTRY(IPerformanceCollector)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PerformanceCollectorWrap)

    /** @name Public IPerformanceCollector properties
     * @{ */
    STDMETHOD(COMGETTER(MetricNames))(ComSafeArrayOut(BSTR, aMetricNames)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IPerformanceCollector))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IPerformanceCollector methods
     * @{ */
    STDMETHOD(GetMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                          ComSafeArrayIn(IUnknown *, aObjects),
                          ComSafeArrayOut(IPerformanceMetric *, aMetrics)) RT_OVERRIDE;
    STDMETHOD(SetupMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                            ComSafeArrayIn(IUnknown *, aObjects),
                            ULONG aPeriod,
                            ULONG aCount,
                            ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics)) RT_OVERRIDE;
    STDMETHOD(EnableMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                             ComSafeArrayIn(IUnknown *, aObjects),
                             ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics)) RT_OVERRIDE;
    STDMETHOD(DisableMetrics)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                              ComSafeArrayIn(IUnknown *, aObjects),
                              ComSafeArrayOut(IPerformanceMetric *, aAffectedMetrics)) RT_OVERRIDE;
    STDMETHOD(QueryMetricsData)(ComSafeArrayIn(IN_BSTR, aMetricNames),
                                ComSafeArrayIn(IUnknown *, aObjects),
                                ComSafeArrayOut(BSTR, aReturnMetricNames),
                                ComSafeArrayOut(IUnknown *, aReturnObjects),
                                ComSafeArrayOut(BSTR, aReturnUnits),
                                ComSafeArrayOut(ULONG, aReturnScales),
                                ComSafeArrayOut(ULONG, aReturnSequenceNumbers),
                                ComSafeArrayOut(ULONG, aReturnDataIndices),
                                ComSafeArrayOut(ULONG, aReturnDataLengths),
                                ComSafeArrayOut(LONG, aReturnData)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IPerformanceCollector)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IPerformanceCollector)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IPerformanceCollector)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IPerformanceCollector)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IPerformanceCollector properties
     * @{ */
    virtual HRESULT getMetricNames(std::vector<com::Utf8Str> &aMetricNames) = 0;
    /** @} */

    /** @name Wrapped IPerformanceCollector methods
     * @{ */
    virtual HRESULT getMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                               const std::vector<ComPtr<IUnknown> > &aObjects,
                               std::vector<ComPtr<IPerformanceMetric> > &aMetrics) = 0;
    virtual HRESULT setupMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                                 const std::vector<ComPtr<IUnknown> > &aObjects,
                                 ULONG aPeriod,
                                 ULONG aCount,
                                 std::vector<ComPtr<IPerformanceMetric> > &aAffectedMetrics) = 0;
    virtual HRESULT enableMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                                  const std::vector<ComPtr<IUnknown> > &aObjects,
                                  std::vector<ComPtr<IPerformanceMetric> > &aAffectedMetrics) = 0;
    virtual HRESULT disableMetrics(const std::vector<com::Utf8Str> &aMetricNames,
                                   const std::vector<ComPtr<IUnknown> > &aObjects,
                                   std::vector<ComPtr<IPerformanceMetric> > &aAffectedMetrics) = 0;
    virtual HRESULT queryMetricsData(const std::vector<com::Utf8Str> &aMetricNames,
                                     const std::vector<ComPtr<IUnknown> > &aObjects,
                                     std::vector<com::Utf8Str> &aReturnMetricNames,
                                     std::vector<ComPtr<IUnknown> > &aReturnObjects,
                                     std::vector<com::Utf8Str> &aReturnUnits,
                                     std::vector<ULONG> &aReturnScales,
                                     std::vector<ULONG> &aReturnSequenceNumbers,
                                     std::vector<ULONG> &aReturnDataIndices,
                                     std::vector<ULONG> &aReturnDataLengths,
                                     std::vector<LONG> &aReturnData) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PerformanceCollectorWrap); /* Shuts up MSC warning C4625. */

};

#endif // !PerformanceCollectorWrap_H_
