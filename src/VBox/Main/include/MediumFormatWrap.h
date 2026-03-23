/** @file
 * VirtualBox API class wrapper header for IMediumFormat.
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

#ifndef MediumFormatWrap_H_
#define MediumFormatWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MediumFormatWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMediumFormat)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumFormatWrap, IMediumFormat)
    DECLARE_NOT_AGGREGATABLE(MediumFormatWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MediumFormatWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMediumFormat)
        COM_INTERFACE_ENTRY2(IDispatch, IMediumFormat)
        VBOX_TWEAK_INTERFACE_ENTRY(IMediumFormat)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MediumFormatWrap)

    /** @name Public IMediumFormat properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Capabilities))(ComSafeArrayOut(MediumFormatCapabilities_T, aCapabilities)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMediumFormat))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMediumFormat))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMediumFormat))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMediumFormat))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMediumFormat methods
     * @{ */
    STDMETHOD(DescribeFileExtensions)(ComSafeArrayOut(BSTR, aExtensions),
                                      ComSafeArrayOut(DeviceType_T, aTypes)) RT_OVERRIDE;
    STDMETHOD(DescribeProperties)(ComSafeArrayOut(BSTR, aNames),
                                  ComSafeArrayOut(BSTR, aDescriptions),
                                  ComSafeArrayOut(DataType_T, aTypes),
                                  ComSafeArrayOut(ULONG, aFlags),
                                  ComSafeArrayOut(BSTR, aDefaults)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IMediumFormat)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IMediumFormat)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IMediumFormat properties
     * @{ */
    virtual HRESULT getId(com::Utf8Str &aId) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getCapabilities(std::vector<MediumFormatCapabilities_T> &aCapabilities) = 0;
    /** @} */

    /** @name Wrapped IMediumFormat methods
     * @{ */
    virtual HRESULT describeFileExtensions(std::vector<com::Utf8Str> &aExtensions,
                                           std::vector<DeviceType_T> &aTypes) = 0;
    virtual HRESULT describeProperties(std::vector<com::Utf8Str> &aNames,
                                       std::vector<com::Utf8Str> &aDescriptions,
                                       std::vector<DataType_T> &aTypes,
                                       std::vector<ULONG> &aFlags,
                                       std::vector<com::Utf8Str> &aDefaults) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MediumFormatWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MediumFormatWrap_H_
