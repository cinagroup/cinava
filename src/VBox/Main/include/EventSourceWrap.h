/** @file
 * VirtualBox API class wrapper header for IEventSource.
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

#ifndef EventSourceWrap_H_
#define EventSourceWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE EventSourceWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IEventSource)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EventSourceWrap, IEventSource)
    DECLARE_NOT_AGGREGATABLE(EventSourceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(EventSourceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IEventSource)
        COM_INTERFACE_ENTRY2(IDispatch, IEventSource)
        VBOX_TWEAK_INTERFACE_ENTRY(IEventSource)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(EventSourceWrap)

    /** @name Public IEventSource properties
     * @{ */
    /** @} */

    /** @name Public IEventSource methods
     * @{ */
    STDMETHOD(CreateListener)(IEventListener **aListener) RT_OVERRIDE;
    STDMETHOD(CreateAggregator)(ComSafeArrayIn(IEventSource *, aSubordinates),
                                IEventSource **aResult) RT_OVERRIDE;
    STDMETHOD(RegisterListener)(IEventListener *aListener,
                                ComSafeArrayIn(VBoxEventType_T, aInteresting),
                                BOOL aActive) RT_OVERRIDE;
    STDMETHOD(UnregisterListener)(IEventListener *aListener) RT_OVERRIDE;
    STDMETHOD(FireEvent)(IEvent *aEvent,
                         LONG aTimeout,
                         BOOL *aResult) RT_OVERRIDE;
    STDMETHOD(GetEvent)(IEventListener *aListener,
                        LONG aTimeout,
                        IEvent **aEvent) RT_OVERRIDE;
    STDMETHOD(EventProcessed)(IEventListener *aListener,
                              IEvent *aEvent) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IEventSource properties
     * @{ */
    /** @} */

    /** @name Wrapped IEventSource methods
     * @{ */
    virtual HRESULT createListener(ComPtr<IEventListener> &aListener) = 0;
    virtual HRESULT createAggregator(const std::vector<ComPtr<IEventSource> > &aSubordinates,
                                     ComPtr<IEventSource> &aResult) = 0;
    virtual HRESULT registerListener(const ComPtr<IEventListener> &aListener,
                                     const std::vector<VBoxEventType_T> &aInteresting,
                                     BOOL aActive) = 0;
    virtual HRESULT unregisterListener(const ComPtr<IEventListener> &aListener) = 0;
    virtual HRESULT fireEvent(const ComPtr<IEvent> &aEvent,
                              LONG aTimeout,
                              BOOL *aResult) = 0;
    virtual HRESULT getEvent(const ComPtr<IEventListener> &aListener,
                             LONG aTimeout,
                             ComPtr<IEvent> &aEvent) = 0;
    virtual HRESULT eventProcessed(const ComPtr<IEventListener> &aListener,
                                   const ComPtr<IEvent> &aEvent) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(EventSourceWrap); /* Shuts up MSC warning C4625. */

};

#endif // !EventSourceWrap_H_
