/** @file
 * VirtualBox API class wrapper header for IGuestProcess.
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

#ifndef GuestProcessWrap_H_
#define GuestProcessWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestProcessWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestProcess)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestProcessWrap, IGuestProcess)
    DECLARE_NOT_AGGREGATABLE(GuestProcessWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestProcessWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestProcess)
        COM_INTERFACE_ENTRY(IProcess)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestProcess)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestProcess)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestProcessWrap)

    /** @name Public IProcess properties
     * @{ */
    STDMETHOD(COMGETTER(Arguments))(ComSafeArrayOut(BSTR, aArguments)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Environment))(ComSafeArrayOut(BSTR, aEnvironment)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExecutablePath))(BSTR *aExecutablePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExitCode))(LONG *aExitCode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PID))(ULONG *aPID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Status))(ProcessStatus_T *aStatus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IProcess))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IProcess))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IProcess))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IProcess))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IProcess))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IProcess))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IProcess))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IProcess))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestProcess properties
     * @{ */
    STDMETHOD(COMGETTER(MidlDoesNotLikeEmptyInterfaces))(BOOL *aMidlDoesNotLikeEmptyInterfaces) RT_OVERRIDE;
    /** @} */

    /** @name Public IProcess methods
     * @{ */
    STDMETHOD(WaitFor)(ULONG aWaitFor,
                       ULONG aTimeoutMS,
                       ProcessWaitResult_T *aReason) RT_OVERRIDE;
    STDMETHOD(WaitForArray)(ComSafeArrayIn(ProcessWaitForFlag_T, aWaitFor),
                            ULONG aTimeoutMS,
                            ProcessWaitResult_T *aReason) RT_OVERRIDE;
    STDMETHOD(Read)(ULONG aHandle,
                    ULONG aToRead,
                    ULONG aTimeoutMS,
                    ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(Write)(ULONG aHandle,
                     ULONG aFlags,
                     ComSafeArrayIn(BYTE, aData),
                     ULONG aTimeoutMS,
                     ULONG *aWritten) RT_OVERRIDE;
    STDMETHOD(WriteArray)(ULONG aHandle,
                          ComSafeArrayIn(ProcessInputFlag_T, aFlags),
                          ComSafeArrayIn(BYTE, aData),
                          ULONG aTimeoutMS,
                          ULONG *aWritten) RT_OVERRIDE;
    STDMETHOD(Terminate)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IProcess)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IProcess)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IProcess)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IProcess)() RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestProcess methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IProcess properties
     * @{ */
    virtual HRESULT getArguments(std::vector<com::Utf8Str> &aArguments) = 0;
    virtual HRESULT getEnvironment(std::vector<com::Utf8Str> &aEnvironment) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getExecutablePath(com::Utf8Str &aExecutablePath) = 0;
    virtual HRESULT getExitCode(LONG *aExitCode) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getPID(ULONG *aPID) = 0;
    virtual HRESULT getStatus(ProcessStatus_T *aStatus) = 0;
    /** @} */

    /** @name Wrapped IGuestProcess properties
     * @{ */
    //    virtual HRESULT getMidlDoesNotLikeEmptyInterfaces(BOOL *aMidlDoesNotLikeEmptyInterfaces) = 0;
    /** @} */

    /** @name Wrapped IProcess methods
     * @{ */
    virtual HRESULT waitFor(ULONG aWaitFor,
                            ULONG aTimeoutMS,
                            ProcessWaitResult_T *aReason) = 0;
    virtual HRESULT waitForArray(const std::vector<ProcessWaitForFlag_T> &aWaitFor,
                                 ULONG aTimeoutMS,
                                 ProcessWaitResult_T *aReason) = 0;
    virtual HRESULT read(ULONG aHandle,
                         ULONG aToRead,
                         ULONG aTimeoutMS,
                         std::vector<BYTE> &aData) = 0;
    virtual HRESULT write(ULONG aHandle,
                          ULONG aFlags,
                          const std::vector<BYTE> &aData,
                          ULONG aTimeoutMS,
                          ULONG *aWritten) = 0;
    virtual HRESULT writeArray(ULONG aHandle,
                               const std::vector<ProcessInputFlag_T> &aFlags,
                               const std::vector<BYTE> &aData,
                               ULONG aTimeoutMS,
                               ULONG *aWritten) = 0;
    virtual HRESULT terminate() = 0;
    /** @} */

    /** @name Wrapped IGuestProcess methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestProcessWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestProcessWrap_H_
