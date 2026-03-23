/** @file
 * VirtualBox API class wrapper header for ISnapshot.
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

#ifndef SnapshotWrap_H_
#define SnapshotWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SnapshotWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ISnapshot)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SnapshotWrap, ISnapshot)
    DECLARE_NOT_AGGREGATABLE(SnapshotWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SnapshotWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISnapshot)
        COM_INTERFACE_ENTRY2(IDispatch, ISnapshot)
        VBOX_TWEAK_INTERFACE_ENTRY(ISnapshot)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(SnapshotWrap)

    /** @name Public ISnapshot properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Description))(IN_BSTR aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TimeStamp))(LONG64 *aTimeStamp) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Online))(BOOL *aOnline) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Parent))(ISnapshot **aParent) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Children))(ComSafeArrayOut(ISnapshot *, aChildren)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ChildrenCount))(ULONG *aChildrenCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ISnapshot))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ISnapshot methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1ISnapshot)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ISnapshot)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ISnapshot)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ISnapshot)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ISnapshot properties
     * @{ */
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT setDescription(const com::Utf8Str &aDescription) = 0;
    virtual HRESULT getTimeStamp(LONG64 *aTimeStamp) = 0;
    virtual HRESULT getOnline(BOOL *aOnline) = 0;
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getParent(ComPtr<ISnapshot> &aParent) = 0;
    virtual HRESULT getChildren(std::vector<ComPtr<ISnapshot> > &aChildren) = 0;
    virtual HRESULT getChildrenCount(ULONG *aChildrenCount) = 0;
    /** @} */

    /** @name Wrapped ISnapshot methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(SnapshotWrap); /* Shuts up MSC warning C4625. */

};

#endif // !SnapshotWrap_H_
