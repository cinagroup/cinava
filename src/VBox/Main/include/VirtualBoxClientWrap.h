/** @file
 * VirtualBox API class wrapper header for IVirtualBoxClient.
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

#ifndef VirtualBoxClientWrap_H_
#define VirtualBoxClientWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VirtualBoxClientWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVirtualBoxClient)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VirtualBoxClientWrap, IVirtualBoxClient)
    DECLARE_NOT_AGGREGATABLE(VirtualBoxClientWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VirtualBoxClientWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVirtualBoxClient)
        COM_INTERFACE_ENTRY2(IDispatch, IVirtualBoxClient)
        VBOX_TWEAK_INTERFACE_ENTRY(IVirtualBoxClient)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VirtualBoxClientWrap)

    /** @name Public IVirtualBoxClient properties
     * @{ */
    STDMETHOD(COMGETTER(VirtualBox))(IVirtualBox **aVirtualBox) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Session))(ISession **aSession) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IVirtualBoxClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IVirtualBoxClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IVirtualBoxClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IVirtualBoxClient))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IVirtualBoxClient methods
     * @{ */
    STDMETHOD(CheckMachineError)(IMachine *aMachine) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IVirtualBoxClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IVirtualBoxClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IVirtualBoxClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IVirtualBoxClient)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IVirtualBoxClient properties
     * @{ */
    virtual HRESULT getVirtualBox(ComPtr<IVirtualBox> &aVirtualBox) = 0;
    virtual HRESULT getSession(ComPtr<ISession> &aSession) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    /** @} */

    /** @name Wrapped IVirtualBoxClient methods
     * @{ */
    virtual HRESULT checkMachineError(const ComPtr<IMachine> &aMachine) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VirtualBoxClientWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VirtualBoxClientWrap_H_
