/** @file
 * VirtualBox API class wrapper header for IFile.
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

#ifndef FileWrap_H_
#define FileWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE FileWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IFile)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(FileWrap, IFile)
    DECLARE_NOT_AGGREGATABLE(FileWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(FileWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IFile)
        COM_INTERFACE_ENTRY2(IDispatch, IFile)
        VBOX_TWEAK_INTERFACE_ENTRY(IFile)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(FileWrap)

    /** @name Public IFile properties
     * @{ */
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(ULONG *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InitialSize))(LONG64 *aInitialSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Offset))(LONG64 *aOffset) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Status))(FileStatus_T *aStatus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Filename))(BSTR *aFilename) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CreationMode))(ULONG *aCreationMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OpenAction))(FileOpenAction_T *aOpenAction) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AccessMode))(FileAccessMode_T *aAccessMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IFile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IFile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IFile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IFile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IFile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IFile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IFile))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IFile))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IFile methods
     * @{ */
    STDMETHOD(Close)() RT_OVERRIDE;
    STDMETHOD(QueryInfo)(IFsObjInfo **aObjInfo) RT_OVERRIDE;
    STDMETHOD(QuerySize)(LONG64 *aSize) RT_OVERRIDE;
    STDMETHOD(Read)(ULONG aToRead,
                    ULONG aTimeoutMS,
                    ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(ReadAt)(LONG64 aOffset,
                      ULONG aToRead,
                      ULONG aTimeoutMS,
                      ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(Seek)(LONG64 aOffset,
                    FileSeekOrigin_T aWhence,
                    LONG64 *aNewOffset) RT_OVERRIDE;
    STDMETHOD(SetACL)(IN_BSTR aAcl,
                      ULONG aMode) RT_OVERRIDE;
    STDMETHOD(SetSize)(LONG64 aSize) RT_OVERRIDE;
    STDMETHOD(Write)(ComSafeArrayIn(BYTE, aData),
                     ULONG aTimeoutMS,
                     ULONG *aWritten) RT_OVERRIDE;
    STDMETHOD(WriteAt)(LONG64 aOffset,
                       ComSafeArrayIn(BYTE, aData),
                       ULONG aTimeoutMS,
                       ULONG *aWritten) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IFile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IFile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IFile)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IFile)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IFile properties
     * @{ */
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getId(ULONG *aId) = 0;
    virtual HRESULT getInitialSize(LONG64 *aInitialSize) = 0;
    virtual HRESULT getOffset(LONG64 *aOffset) = 0;
    virtual HRESULT getStatus(FileStatus_T *aStatus) = 0;
    virtual HRESULT getFilename(com::Utf8Str &aFilename) = 0;
    virtual HRESULT getCreationMode(ULONG *aCreationMode) = 0;
    virtual HRESULT getOpenAction(FileOpenAction_T *aOpenAction) = 0;
    virtual HRESULT getAccessMode(FileAccessMode_T *aAccessMode) = 0;
    /** @} */

    /** @name Wrapped IFile methods
     * @{ */
    virtual HRESULT close() = 0;
    virtual HRESULT queryInfo(ComPtr<IFsObjInfo> &aObjInfo) = 0;
    virtual HRESULT querySize(LONG64 *aSize) = 0;
    virtual HRESULT read(ULONG aToRead,
                         ULONG aTimeoutMS,
                         std::vector<BYTE> &aData) = 0;
    virtual HRESULT readAt(LONG64 aOffset,
                           ULONG aToRead,
                           ULONG aTimeoutMS,
                           std::vector<BYTE> &aData) = 0;
    virtual HRESULT seek(LONG64 aOffset,
                         FileSeekOrigin_T aWhence,
                         LONG64 *aNewOffset) = 0;
    virtual HRESULT setACL(const com::Utf8Str &aAcl,
                           ULONG aMode) = 0;
    virtual HRESULT setSize(LONG64 aSize) = 0;
    virtual HRESULT write(const std::vector<BYTE> &aData,
                          ULONG aTimeoutMS,
                          ULONG *aWritten) = 0;
    virtual HRESULT writeAt(LONG64 aOffset,
                            const std::vector<BYTE> &aData,
                            ULONG aTimeoutMS,
                            ULONG *aWritten) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(FileWrap); /* Shuts up MSC warning C4625. */

};

#endif // !FileWrap_H_
