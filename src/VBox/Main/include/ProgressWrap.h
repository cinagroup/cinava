/** @file
 * VirtualBox API class wrapper header for IProgress.
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

#ifndef ProgressWrap_H_
#define ProgressWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ProgressWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IProgress)
    , VBOX_SCRIPTABLE_IMPL(IInternalProgressControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ProgressWrap, IProgress)
    DECLARE_NOT_AGGREGATABLE(ProgressWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ProgressWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IProgress)
        COM_INTERFACE_ENTRY2(IDispatch, IProgress)
        COM_INTERFACE_ENTRY(IInternalProgressControl)
        VBOX_TWEAK_INTERFACE_ENTRY(IProgress)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ProgressWrap)

    /** @name Public IProgress properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Initiator))(IUnknown **aInitiator) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Cancelable))(BOOL *aCancelable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Percent))(ULONG *aPercent) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TimeRemaining))(LONG *aTimeRemaining) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Completed))(BOOL *aCompleted) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Canceled))(BOOL *aCanceled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ResultCode))(LONG *aResultCode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ErrorInfo))(IVirtualBoxErrorInfo **aErrorInfo) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OperationCount))(ULONG *aOperationCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Operation))(ULONG *aOperation) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OperationDescription))(BSTR *aOperationDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OperationPercent))(ULONG *aOperationPercent) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OperationWeight))(ULONG *aOperationWeight) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Timeout))(ULONG *aTimeout) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Timeout))(ULONG aTimeout) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IProgress))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IProgress))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IProgress methods
     * @{ */
    STDMETHOD(WaitForCompletion)(LONG aTimeout) RT_OVERRIDE;
    STDMETHOD(WaitForOperationCompletion)(ULONG aOperation,
                                          LONG aTimeout) RT_OVERRIDE;
    STDMETHOD(Cancel)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IProgress)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IProgress)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IProgress)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IProgress)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IProgress)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IProgress)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IProgress)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IProgress)() RT_OVERRIDE;
    /** @} */

    /** @name Public IInternalProgressControl properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IInternalProgressControl))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IInternalProgressControl methods
     * @{ */
    STDMETHOD(SetCurrentOperationProgress)(ULONG aPercent) RT_OVERRIDE;
    STDMETHOD(WaitForOtherProgressCompletion)(IProgress *aProgressOther,
                                              ULONG aTimeoutMS) RT_OVERRIDE;
    STDMETHOD(SetNextOperation)(IN_BSTR aNextOperationDescription,
                                ULONG aNextOperationsWeight) RT_OVERRIDE;
    STDMETHOD(NotifyPointOfNoReturn)() RT_OVERRIDE;
    STDMETHOD(NotifyComplete)(LONG aResultCode,
                              IVirtualBoxErrorInfo *aErrorInfo) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IInternalProgressControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IInternalProgressControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IInternalProgressControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IInternalProgressControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IInternalProgressControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IInternalProgressControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IInternalProgressControl)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IInternalProgressControl)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IProgress properties
     * @{ */
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getInitiator(ComPtr<IUnknown> &aInitiator) = 0;
    virtual HRESULT getCancelable(BOOL *aCancelable) = 0;
    virtual HRESULT getPercent(ULONG *aPercent) = 0;
    virtual HRESULT getTimeRemaining(LONG *aTimeRemaining) = 0;
    virtual HRESULT getCompleted(BOOL *aCompleted) = 0;
    virtual HRESULT getCanceled(BOOL *aCanceled) = 0;
    virtual HRESULT getResultCode(LONG *aResultCode) = 0;
    virtual HRESULT getErrorInfo(ComPtr<IVirtualBoxErrorInfo> &aErrorInfo) = 0;
    virtual HRESULT getOperationCount(ULONG *aOperationCount) = 0;
    virtual HRESULT getOperation(ULONG *aOperation) = 0;
    virtual HRESULT getOperationDescription(com::Utf8Str &aOperationDescription) = 0;
    virtual HRESULT getOperationPercent(ULONG *aOperationPercent) = 0;
    virtual HRESULT getOperationWeight(ULONG *aOperationWeight) = 0;
    virtual HRESULT getTimeout(ULONG *aTimeout) = 0;
    virtual HRESULT setTimeout(ULONG aTimeout) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    /** @} */

    /** @name Wrapped IProgress methods
     * @{ */
    virtual HRESULT waitForCompletion(LONG aTimeout) = 0;
    virtual HRESULT waitForOperationCompletion(ULONG aOperation,
                                               LONG aTimeout) = 0;
    virtual HRESULT cancel() = 0;
    /** @} */

    /** @name Wrapped IInternalProgressControl properties
     * @{ */
    /** @} */

    /** @name Wrapped IInternalProgressControl methods
     * @{ */
    virtual HRESULT setCurrentOperationProgress(ULONG aPercent) = 0;
    virtual HRESULT waitForOtherProgressCompletion(const ComPtr<IProgress> &aProgressOther,
                                                   ULONG aTimeoutMS) = 0;
    virtual HRESULT setNextOperation(const com::Utf8Str &aNextOperationDescription,
                                     ULONG aNextOperationsWeight) = 0;
    virtual HRESULT notifyPointOfNoReturn() = 0;
    virtual HRESULT notifyComplete(LONG aResultCode,
                                   const ComPtr<IVirtualBoxErrorInfo> &aErrorInfo) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ProgressWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ProgressWrap_H_
