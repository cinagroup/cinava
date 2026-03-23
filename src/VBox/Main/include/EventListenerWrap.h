/** @file
 * VirtualBox API class wrapper header for IEventListener.
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

#ifndef EventListenerWrap_H_
#define EventListenerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE EventListenerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IEventListener)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EventListenerWrap, IEventListener)
    DECLARE_NOT_AGGREGATABLE(EventListenerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(EventListenerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IEventListener)
        COM_INTERFACE_ENTRY2(IDispatch, IEventListener)
        VBOX_TWEAK_INTERFACE_ENTRY(IEventListener)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(EventListenerWrap)

    /** @name Public IEventListener properties
     * @{ */
    /** @} */

    /** @name Public IEventListener methods
     * @{ */
    STDMETHOD(HandleEvent)(IEvent *aEvent) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IEventListener properties
     * @{ */
    /** @} */

    /** @name Wrapped IEventListener methods
     * @{ */
    virtual HRESULT handleEvent(const ComPtr<IEvent> &aEvent) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(EventListenerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !EventListenerWrap_H_
