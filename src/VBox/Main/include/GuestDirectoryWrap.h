/** @file
 * VirtualBox API class wrapper header for IGuestDirectory.
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

#ifndef GuestDirectoryWrap_H_
#define GuestDirectoryWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestDirectoryWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestDirectory)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestDirectoryWrap, IGuestDirectory)
    DECLARE_NOT_AGGREGATABLE(GuestDirectoryWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestDirectoryWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestDirectory)
        COM_INTERFACE_ENTRY(IDirectory)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestDirectory)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestDirectory)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestDirectoryWrap)

    /** @name Public IDirectory properties
     * @{ */
    STDMETHOD(COMGETTER(DirectoryName))(BSTR *aDirectoryName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Filter))(BSTR *aFilter) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(ULONG *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Status))(DirectoryStatus_T *aStatus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IDirectory))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestDirectory properties
     * @{ */
    STDMETHOD(COMGETTER(MidlDoesNotLikeEmptyInterfaces))(BOOL *aMidlDoesNotLikeEmptyInterfaces) RT_OVERRIDE;
    /** @} */

    /** @name Public IDirectory methods
     * @{ */
    STDMETHOD(Close)() RT_OVERRIDE;
    STDMETHOD(List)(ULONG aMaxEntries,
                    ComSafeArrayOut(IFsObjInfo *, aObjInfo)) RT_OVERRIDE;
    STDMETHOD(Read)(IFsObjInfo **aObjInfo) RT_OVERRIDE;
    STDMETHOD(Rewind)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDirectory)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IDirectory)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IDirectory)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IDirectory)() RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestDirectory methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IDirectory properties
     * @{ */
    virtual HRESULT getDirectoryName(com::Utf8Str &aDirectoryName) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getFilter(com::Utf8Str &aFilter) = 0;
    virtual HRESULT getId(ULONG *aId) = 0;
    virtual HRESULT getStatus(DirectoryStatus_T *aStatus) = 0;
    /** @} */

    /** @name Wrapped IGuestDirectory properties
     * @{ */
    //    virtual HRESULT getMidlDoesNotLikeEmptyInterfaces(BOOL *aMidlDoesNotLikeEmptyInterfaces) = 0;
    /** @} */

    /** @name Wrapped IDirectory methods
     * @{ */
    virtual HRESULT close() = 0;
    virtual HRESULT list(ULONG aMaxEntries,
                         std::vector<ComPtr<IFsObjInfo> > &aObjInfo) = 0;
    virtual HRESULT read(ComPtr<IFsObjInfo> &aObjInfo) = 0;
    virtual HRESULT rewind() = 0;
    /** @} */

    /** @name Wrapped IGuestDirectory methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestDirectoryWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestDirectoryWrap_H_
