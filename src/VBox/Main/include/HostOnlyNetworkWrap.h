/** @file
 * VirtualBox API class wrapper header for IHostOnlyNetwork.
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

#ifndef HostOnlyNetworkWrap_H_
#define HostOnlyNetworkWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostOnlyNetworkWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostOnlyNetwork)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostOnlyNetworkWrap, IHostOnlyNetwork)
    DECLARE_NOT_AGGREGATABLE(HostOnlyNetworkWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostOnlyNetworkWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostOnlyNetwork)
        COM_INTERFACE_ENTRY2(IDispatch, IHostOnlyNetwork)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostOnlyNetwork)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostOnlyNetworkWrap)

    /** @name Public IHostOnlyNetwork properties
     * @{ */
    STDMETHOD(COMGETTER(NetworkName))(BSTR *aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NetworkName))(IN_BSTR aNetworkName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NetworkMask))(BSTR *aNetworkMask) RT_OVERRIDE;
    STDMETHOD(COMSETTER(NetworkMask))(IN_BSTR aNetworkMask) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostIP))(BSTR *aHostIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LowerIP))(BSTR *aLowerIP) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LowerIP))(IN_BSTR aLowerIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UpperIP))(BSTR *aUpperIP) RT_OVERRIDE;
    STDMETHOD(COMSETTER(UpperIP))(IN_BSTR aUpperIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Id))(IN_BSTR aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IHostOnlyNetwork))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostOnlyNetwork methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IHostOnlyNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IHostOnlyNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IHostOnlyNetwork)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IHostOnlyNetwork)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IHostOnlyNetwork properties
     * @{ */
    virtual HRESULT getNetworkName(com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT setNetworkName(const com::Utf8Str &aNetworkName) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getNetworkMask(com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT setNetworkMask(const com::Utf8Str &aNetworkMask) = 0;
    virtual HRESULT getHostIP(com::Utf8Str &aHostIP) = 0;
    virtual HRESULT getLowerIP(com::Utf8Str &aLowerIP) = 0;
    virtual HRESULT setLowerIP(const com::Utf8Str &aLowerIP) = 0;
    virtual HRESULT getUpperIP(com::Utf8Str &aUpperIP) = 0;
    virtual HRESULT setUpperIP(const com::Utf8Str &aUpperIP) = 0;
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT setId(const com::Guid &aId) = 0;
    /** @} */

    /** @name Wrapped IHostOnlyNetwork methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostOnlyNetworkWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostOnlyNetworkWrap_H_
