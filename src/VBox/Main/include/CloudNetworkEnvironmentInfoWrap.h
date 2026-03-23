/** @file
 * VirtualBox API class wrapper header for ICloudNetworkEnvironmentInfo.
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

#ifndef CloudNetworkEnvironmentInfoWrap_H_
#define CloudNetworkEnvironmentInfoWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudNetworkEnvironmentInfoWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudNetworkEnvironmentInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudNetworkEnvironmentInfoWrap, ICloudNetworkEnvironmentInfo)
    DECLARE_NOT_AGGREGATABLE(CloudNetworkEnvironmentInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudNetworkEnvironmentInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudNetworkEnvironmentInfo)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudNetworkEnvironmentInfo)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudNetworkEnvironmentInfo)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudNetworkEnvironmentInfoWrap)

    /** @name Public ICloudNetworkEnvironmentInfo properties
     * @{ */
    STDMETHOD(COMGETTER(TunnelNetworkId))(BSTR *aTunnelNetworkId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudNetworkEnvironmentInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudNetworkEnvironmentInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudNetworkEnvironmentInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudNetworkEnvironmentInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudNetworkEnvironmentInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICloudNetworkEnvironmentInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICloudNetworkEnvironmentInfo))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudNetworkEnvironmentInfo methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped ICloudNetworkEnvironmentInfo properties
     * @{ */
    virtual HRESULT getTunnelNetworkId(com::Utf8Str &aTunnelNetworkId) = 0;
    /** @} */

    /** @name Wrapped ICloudNetworkEnvironmentInfo methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudNetworkEnvironmentInfoWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudNetworkEnvironmentInfoWrap_H_
