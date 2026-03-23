/** @file
 * VirtualBox API class wrapper header for IEvent.
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

#ifndef EventWrap_H_
#define EventWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE EventWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EventWrap, IEvent)
    DECLARE_NOT_AGGREGATABLE(EventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(EventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IEvent)
        VBOX_TWEAK_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(EventWrap)

    /** @name Public IEvent properties
     * @{ */
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable) RT_OVERRIDE;
    /** @} */

    /** @name Public IEvent methods
     * @{ */
    STDMETHOD(SetProcessed)() RT_OVERRIDE;
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IEvent properties
     * @{ */
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;
    /** @} */

    /** @name Wrapped IEvent methods
     * @{ */
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(EventWrap); /* Shuts up MSC warning C4625. */

};

#endif // !EventWrap_H_
