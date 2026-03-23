/** @file
 * VirtualBox API class wrapper header for IVRDEServer.
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

#ifndef VRDEServerWrap_H_
#define VRDEServerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VRDEServerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVRDEServer)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VRDEServerWrap, IVRDEServer)
    DECLARE_NOT_AGGREGATABLE(VRDEServerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VRDEServerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVRDEServer)
        COM_INTERFACE_ENTRY2(IDispatch, IVRDEServer)
        VBOX_TWEAK_INTERFACE_ENTRY(IVRDEServer)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VRDEServerWrap)

    /** @name Public IVRDEServer properties
     * @{ */
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AuthType))(AuthType_T *aAuthType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AuthType))(AuthType_T aAuthType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AuthTimeout))(ULONG *aAuthTimeout) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AuthTimeout))(ULONG aAuthTimeout) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AllowMultiConnection))(BOOL *aAllowMultiConnection) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AllowMultiConnection))(BOOL aAllowMultiConnection) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ReuseSingleConnection))(BOOL *aReuseSingleConnection) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ReuseSingleConnection))(BOOL aReuseSingleConnection) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VRDEExtPack))(BSTR *aVRDEExtPack) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VRDEExtPack))(IN_BSTR aVRDEExtPack) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AuthLibrary))(BSTR *aAuthLibrary) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AuthLibrary))(IN_BSTR aAuthLibrary) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VRDEProperties))(ComSafeArrayOut(BSTR, aVRDEProperties)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IVRDEServer))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IVRDEServer))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IVRDEServer))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IVRDEServer))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IVRDEServer methods
     * @{ */
    STDMETHOD(SetVRDEProperty)(IN_BSTR aKey,
                               IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(GetVRDEProperty)(IN_BSTR aKey,
                               BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IVRDEServer)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IVRDEServer)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IVRDEServer properties
     * @{ */
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getAuthType(AuthType_T *aAuthType) = 0;
    virtual HRESULT setAuthType(AuthType_T aAuthType) = 0;
    virtual HRESULT getAuthTimeout(ULONG *aAuthTimeout) = 0;
    virtual HRESULT setAuthTimeout(ULONG aAuthTimeout) = 0;
    virtual HRESULT getAllowMultiConnection(BOOL *aAllowMultiConnection) = 0;
    virtual HRESULT setAllowMultiConnection(BOOL aAllowMultiConnection) = 0;
    virtual HRESULT getReuseSingleConnection(BOOL *aReuseSingleConnection) = 0;
    virtual HRESULT setReuseSingleConnection(BOOL aReuseSingleConnection) = 0;
    virtual HRESULT getVRDEExtPack(com::Utf8Str &aVRDEExtPack) = 0;
    virtual HRESULT setVRDEExtPack(const com::Utf8Str &aVRDEExtPack) = 0;
    virtual HRESULT getAuthLibrary(com::Utf8Str &aAuthLibrary) = 0;
    virtual HRESULT setAuthLibrary(const com::Utf8Str &aAuthLibrary) = 0;
    virtual HRESULT getVRDEProperties(std::vector<com::Utf8Str> &aVRDEProperties) = 0;
    /** @} */

    /** @name Wrapped IVRDEServer methods
     * @{ */
    virtual HRESULT setVRDEProperty(const com::Utf8Str &aKey,
                                    const com::Utf8Str &aValue) = 0;
    virtual HRESULT getVRDEProperty(const com::Utf8Str &aKey,
                                    com::Utf8Str &aValue) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VRDEServerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VRDEServerWrap_H_
