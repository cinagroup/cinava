/** @file
 * VirtualBox API class wrapper header for IGuestFsObjInfo.
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

#ifndef GuestFsObjInfoWrap_H_
#define GuestFsObjInfoWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestFsObjInfoWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestFsObjInfo)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestFsObjInfoWrap, IGuestFsObjInfo)
    DECLARE_NOT_AGGREGATABLE(GuestFsObjInfoWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestFsObjInfoWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestFsObjInfo)
        COM_INTERFACE_ENTRY(IFsObjInfo)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestFsObjInfo)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestFsObjInfo)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestFsObjInfoWrap)

    /** @name Public IFsObjInfo properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(FsObjType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FileAttributes))(BSTR *aFileAttributes) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ObjectSize))(LONG64 *aObjectSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AllocatedSize))(LONG64 *aAllocatedSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AccessTime))(LONG64 *aAccessTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BirthTime))(LONG64 *aBirthTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ChangeTime))(LONG64 *aChangeTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ModificationTime))(LONG64 *aModificationTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UID))(LONG *aUID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UserName))(BSTR *aUserName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GID))(LONG *aGID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GroupName))(BSTR *aGroupName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NodeId))(LONG64 *aNodeId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NodeIdDevice))(ULONG *aNodeIdDevice) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HardLinks))(ULONG *aHardLinks) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DeviceNumber))(ULONG *aDeviceNumber) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GenerationId))(ULONG *aGenerationId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UserFlags))(ULONG *aUserFlags) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IFsObjInfo))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestFsObjInfo properties
     * @{ */
    STDMETHOD(COMGETTER(MidlDoesNotLikeEmptyInterfaces))(BOOL *aMidlDoesNotLikeEmptyInterfaces) RT_OVERRIDE;
    /** @} */

    /** @name Public IFsObjInfo methods
     * @{ */
    /** @} */

    /** @name Public IGuestFsObjInfo methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IFsObjInfo properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getType(FsObjType_T *aType) = 0;
    virtual HRESULT getFileAttributes(com::Utf8Str &aFileAttributes) = 0;
    virtual HRESULT getObjectSize(LONG64 *aObjectSize) = 0;
    virtual HRESULT getAllocatedSize(LONG64 *aAllocatedSize) = 0;
    virtual HRESULT getAccessTime(LONG64 *aAccessTime) = 0;
    virtual HRESULT getBirthTime(LONG64 *aBirthTime) = 0;
    virtual HRESULT getChangeTime(LONG64 *aChangeTime) = 0;
    virtual HRESULT getModificationTime(LONG64 *aModificationTime) = 0;
    virtual HRESULT getUID(LONG *aUID) = 0;
    virtual HRESULT getUserName(com::Utf8Str &aUserName) = 0;
    virtual HRESULT getGID(LONG *aGID) = 0;
    virtual HRESULT getGroupName(com::Utf8Str &aGroupName) = 0;
    virtual HRESULT getNodeId(LONG64 *aNodeId) = 0;
    virtual HRESULT getNodeIdDevice(ULONG *aNodeIdDevice) = 0;
    virtual HRESULT getHardLinks(ULONG *aHardLinks) = 0;
    virtual HRESULT getDeviceNumber(ULONG *aDeviceNumber) = 0;
    virtual HRESULT getGenerationId(ULONG *aGenerationId) = 0;
    virtual HRESULT getUserFlags(ULONG *aUserFlags) = 0;
    /** @} */

    /** @name Wrapped IGuestFsObjInfo properties
     * @{ */
    //    virtual HRESULT getMidlDoesNotLikeEmptyInterfaces(BOOL *aMidlDoesNotLikeEmptyInterfaces) = 0;
    /** @} */

    /** @name Wrapped IFsObjInfo methods
     * @{ */
    /** @} */

    /** @name Wrapped IGuestFsObjInfo methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestFsObjInfoWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestFsObjInfoWrap_H_
