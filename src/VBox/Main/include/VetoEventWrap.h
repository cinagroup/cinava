/** @file
 * VirtualBox API class wrapper header for IVetoEvent.
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

#ifndef VetoEventWrap_H_
#define VetoEventWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VetoEventWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVetoEvent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VetoEventWrap, IVetoEvent)
    DECLARE_NOT_AGGREGATABLE(VetoEventWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VetoEventWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVetoEvent)
        COM_INTERFACE_ENTRY(IEvent)
        COM_INTERFACE_ENTRY2(IDispatch, IVetoEvent)
        VBOX_TWEAK_INTERFACE_ENTRY(IVetoEvent)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VetoEventWrap)

    /** @name Public IEvent properties
     * @{ */
    STDMETHOD(COMGETTER(Type))(VBoxEventType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Source))(IEventSource **aSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Waitable))(BOOL *aWaitable) RT_OVERRIDE;
    /** @} */

    /** @name Public IVetoEvent properties
     * @{ */
    /** @} */

    /** @name Public IEvent methods
     * @{ */
    STDMETHOD(SetProcessed)() RT_OVERRIDE;
    STDMETHOD(WaitProcessed)(LONG aTimeout,
                             BOOL *aResult) RT_OVERRIDE;
    /** @} */

    /** @name Public IVetoEvent methods
     * @{ */
    STDMETHOD(AddVeto)(IN_BSTR aReason) RT_OVERRIDE;
    STDMETHOD(IsVetoed)(BOOL *aResult) RT_OVERRIDE;
    STDMETHOD(GetVetos)(ComSafeArrayOut(BSTR, aResult)) RT_OVERRIDE;
    STDMETHOD(AddApproval)(IN_BSTR aReason) RT_OVERRIDE;
    STDMETHOD(IsApproved)(BOOL *aResult) RT_OVERRIDE;
    STDMETHOD(GetApprovals)(ComSafeArrayOut(BSTR, aResult)) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IEvent properties
     * @{ */
    virtual HRESULT getType(VBoxEventType_T *aType) = 0;
    virtual HRESULT getSource(ComPtr<IEventSource> &aSource) = 0;
    virtual HRESULT getWaitable(BOOL *aWaitable) = 0;
    /** @} */

    /** @name Wrapped IVetoEvent properties
     * @{ */
    /** @} */

    /** @name Wrapped IEvent methods
     * @{ */
    virtual HRESULT setProcessed() = 0;
    virtual HRESULT waitProcessed(LONG aTimeout,
                                  BOOL *aResult) = 0;
    /** @} */

    /** @name Wrapped IVetoEvent methods
     * @{ */
    virtual HRESULT addVeto(const com::Utf8Str &aReason) = 0;
    virtual HRESULT isVetoed(BOOL *aResult) = 0;
    virtual HRESULT getVetos(std::vector<com::Utf8Str> &aResult) = 0;
    virtual HRESULT addApproval(const com::Utf8Str &aReason) = 0;
    virtual HRESULT isApproved(BOOL *aResult) = 0;
    virtual HRESULT getApprovals(std::vector<com::Utf8Str> &aResult) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VetoEventWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VetoEventWrap_H_
