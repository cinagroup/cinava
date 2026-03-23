/** @file
 * VirtualBox API class wrapper header for IVRDEServerInfo.
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

#ifndef VRDEServerInfoWrap_H_
#define VRDEServerInfoWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VRDEServerInfoWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVRDEServerInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VRDEServerInfoWrap, IVRDEServerInfo)
    DECLARE_NOT_AGGREGATABLE(VRDEServerInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VRDEServerInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVRDEServerInfo)
        COM_INTERFACE_ENTRY2(IDispatch, IVRDEServerInfo)
        VBOX_TWEAK_INTERFACE_ENTRY(IVRDEServerInfo)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VRDEServerInfoWrap)

    /** @name Public IVRDEServerInfo properties
     * @{ */
    STDMETHOD(COMGETTER(Active))(BOOL *aActive) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Port))(LONG *aPort) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NumberOfClients))(ULONG *aNumberOfClients) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BeginTime))(LONG64 *aBeginTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EndTime))(LONG64 *aEndTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BytesSent))(LONG64 *aBytesSent) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BytesSentTotal))(LONG64 *aBytesSentTotal) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BytesReceived))(LONG64 *aBytesReceived) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BytesReceivedTotal))(LONG64 *aBytesReceivedTotal) RT_OVERRIDE;
    STDMETHOD(COMGETTER(User))(BSTR *aUser) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Domain))(BSTR *aDomain) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ClientName))(BSTR *aClientName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ClientIP))(BSTR *aClientIP) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ClientVersion))(ULONG *aClientVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EncryptionStyle))(ULONG *aEncryptionStyle) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IVRDEServerInfo))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IVRDEServerInfo methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IVRDEServerInfo properties
     * @{ */
    virtual HRESULT getActive(BOOL *aActive) = 0;
    virtual HRESULT getPort(LONG *aPort) = 0;
    virtual HRESULT getNumberOfClients(ULONG *aNumberOfClients) = 0;
    virtual HRESULT getBeginTime(LONG64 *aBeginTime) = 0;
    virtual HRESULT getEndTime(LONG64 *aEndTime) = 0;
    virtual HRESULT getBytesSent(LONG64 *aBytesSent) = 0;
    virtual HRESULT getBytesSentTotal(LONG64 *aBytesSentTotal) = 0;
    virtual HRESULT getBytesReceived(LONG64 *aBytesReceived) = 0;
    virtual HRESULT getBytesReceivedTotal(LONG64 *aBytesReceivedTotal) = 0;
    virtual HRESULT getUser(com::Utf8Str &aUser) = 0;
    virtual HRESULT getDomain(com::Utf8Str &aDomain) = 0;
    virtual HRESULT getClientName(com::Utf8Str &aClientName) = 0;
    virtual HRESULT getClientIP(com::Utf8Str &aClientIP) = 0;
    virtual HRESULT getClientVersion(ULONG *aClientVersion) = 0;
    virtual HRESULT getEncryptionStyle(ULONG *aEncryptionStyle) = 0;
    /** @} */

    /** @name Wrapped IVRDEServerInfo methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VRDEServerInfoWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VRDEServerInfoWrap_H_
