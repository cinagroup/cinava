/** @file
 * VirtualBox API class wrapper header for IMedium.
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

#ifndef MediumWrap_H_
#define MediumWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MediumWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMedium)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumWrap, IMedium)
    DECLARE_NOT_AGGREGATABLE(MediumWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MediumWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMedium)
        COM_INTERFACE_ENTRY2(IDispatch, IMedium)
        VBOX_TWEAK_INTERFACE_ENTRY(IMedium)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MediumWrap)

    /** @name Public IMedium properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Description))(IN_BSTR aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(State))(MediumState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Variant))(ComSafeArrayOut(MediumVariant_T, aVariant)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Location))(BSTR *aLocation) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Location))(IN_BSTR aLocation) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DeviceType))(DeviceType_T *aDeviceType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostDrive))(BOOL *aHostDrive) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Size))(LONG64 *aSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Format))(BSTR *aFormat) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MediumFormat))(IMediumFormat **aMediumFormat) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(MediumType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Type))(MediumType_T aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AllowedTypes))(ComSafeArrayOut(MediumType_T, aAllowedTypes)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Parent))(IMedium **aParent) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Children))(ComSafeArrayOut(IMedium *, aChildren)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Base))(IMedium **aBase) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ReadOnly))(BOOL *aReadOnly) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogicalSize))(LONG64 *aLogicalSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AutoReset))(BOOL *aAutoReset) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AutoReset))(BOOL aAutoReset) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LastAccessError))(BSTR *aLastAccessError) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MachineIds))(ComSafeArrayOut(BSTR, aMachineIds)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IMedium))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IMedium))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMedium methods
     * @{ */
    STDMETHOD(SetIds)(BOOL aSetImageId,
                      IN_BSTR aImageId,
                      BOOL aSetParentId,
                      IN_BSTR aParentId) RT_OVERRIDE;
    STDMETHOD(RefreshState)(MediumState_T *aState) RT_OVERRIDE;
    STDMETHOD(GetSnapshotIds)(IN_BSTR aMachineId,
                              ComSafeArrayOut(BSTR, aSnapshotIds)) RT_OVERRIDE;
    STDMETHOD(LockRead)(IToken **aToken) RT_OVERRIDE;
    STDMETHOD(LockWrite)(IToken **aToken) RT_OVERRIDE;
    STDMETHOD(Close)() RT_OVERRIDE;
    STDMETHOD(GetProperty)(IN_BSTR aName,
                           BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(SetProperty)(IN_BSTR aName,
                           IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(GetProperties)(IN_BSTR aNames,
                             ComSafeArrayOut(BSTR, aReturnNames),
                             ComSafeArrayOut(BSTR, aReturnValues)) RT_OVERRIDE;
    STDMETHOD(SetProperties)(ComSafeArrayIn(IN_BSTR, aNames),
                             ComSafeArrayIn(IN_BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(CreateBaseStorage)(LONG64 aLogicalSize,
                                 ComSafeArrayIn(MediumVariant_T, aVariant),
                                 IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DeleteStorage)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CreateDiffStorage)(IMedium *aTarget,
                                 ComSafeArrayIn(MediumVariant_T, aVariant),
                                 IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(MergeTo)(IMedium *aTarget,
                       IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CloneTo)(IMedium *aTarget,
                       ComSafeArrayIn(MediumVariant_T, aVariant),
                       IMedium *aParent,
                       IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CloneToBase)(IMedium *aTarget,
                           ComSafeArrayIn(MediumVariant_T, aVariant),
                           IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(MoveTo)(IN_BSTR aLocation,
                      IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Compact)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Resize)(LONG64 aLogicalSize,
                      IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Reset)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ChangeEncryption)(IN_BSTR aCurrentPassword,
                                IN_BSTR aCipher,
                                IN_BSTR aNewPassword,
                                IN_BSTR aNewPasswordId,
                                IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetEncryptionSettings)(BSTR *aCipher,
                                     BSTR *aPasswordId) RT_OVERRIDE;
    STDMETHOD(CheckEncryptionPassword)(IN_BSTR aPassword) RT_OVERRIDE;
    STDMETHOD(OpenForIO)(BOOL aWritable,
                         IN_BSTR aPassword,
                         IMediumIO **aMediumIO) RT_OVERRIDE;
    STDMETHOD(ResizeAndCloneTo)(IMedium *aTarget,
                                LONG64 aLogicalSize,
                                ComSafeArrayIn(MediumVariant_T, aVariant),
                                IMedium *aParent,
                                IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IMedium)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IMedium)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IMedium)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IMedium)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IMedium)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IMedium)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IMedium)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IMedium properties
     * @{ */
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getDescription(AutoCaller &aAutoCaller, com::Utf8Str &aDescription) = 0;
    virtual HRESULT setDescription(AutoCaller &aAutoCaller, const com::Utf8Str &aDescription) = 0;
    virtual HRESULT getState(MediumState_T *aState) = 0;
    virtual HRESULT getVariant(std::vector<MediumVariant_T> &aVariant) = 0;
    virtual HRESULT getLocation(com::Utf8Str &aLocation) = 0;
    virtual HRESULT setLocation(const com::Utf8Str &aLocation) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getDeviceType(DeviceType_T *aDeviceType) = 0;
    virtual HRESULT getHostDrive(BOOL *aHostDrive) = 0;
    virtual HRESULT getSize(LONG64 *aSize) = 0;
    virtual HRESULT getFormat(com::Utf8Str &aFormat) = 0;
    virtual HRESULT getMediumFormat(ComPtr<IMediumFormat> &aMediumFormat) = 0;
    virtual HRESULT getType(AutoCaller &aAutoCaller, MediumType_T *aType) = 0;
    virtual HRESULT setType(AutoCaller &aAutoCaller, MediumType_T aType) = 0;
    virtual HRESULT getAllowedTypes(std::vector<MediumType_T> &aAllowedTypes) = 0;
    virtual HRESULT getParent(AutoCaller &aAutoCaller, ComPtr<IMedium> &aParent) = 0;
    virtual HRESULT getChildren(AutoCaller &aAutoCaller, std::vector<ComPtr<IMedium> > &aChildren) = 0;
    virtual HRESULT getBase(AutoCaller &aAutoCaller, ComPtr<IMedium> &aBase) = 0;
    virtual HRESULT getReadOnly(AutoCaller &aAutoCaller, BOOL *aReadOnly) = 0;
    virtual HRESULT getLogicalSize(LONG64 *aLogicalSize) = 0;
    virtual HRESULT getAutoReset(BOOL *aAutoReset) = 0;
    virtual HRESULT setAutoReset(BOOL aAutoReset) = 0;
    virtual HRESULT getLastAccessError(com::Utf8Str &aLastAccessError) = 0;
    virtual HRESULT getMachineIds(std::vector<com::Guid> &aMachineIds) = 0;
    /** @} */

    /** @name Wrapped IMedium methods
     * @{ */
    virtual HRESULT setIds(AutoCaller &aAutoCaller,
                           BOOL aSetImageId,
                           const com::Guid &aImageId,
                           BOOL aSetParentId,
                           const com::Guid &aParentId) = 0;
    virtual HRESULT refreshState(AutoCaller &aAutoCaller,
                                 MediumState_T *aState) = 0;
    virtual HRESULT getSnapshotIds(const com::Guid &aMachineId,
                                   std::vector<com::Guid> &aSnapshotIds) = 0;
    virtual HRESULT lockRead(ComPtr<IToken> &aToken) = 0;
    virtual HRESULT lockWrite(ComPtr<IToken> &aToken) = 0;
    virtual HRESULT close(AutoCaller &aAutoCaller) = 0;
    virtual HRESULT getProperty(const com::Utf8Str &aName,
                                com::Utf8Str &aValue) = 0;
    virtual HRESULT setProperty(const com::Utf8Str &aName,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT getProperties(const com::Utf8Str &aNames,
                                  std::vector<com::Utf8Str> &aReturnNames,
                                  std::vector<com::Utf8Str> &aReturnValues) = 0;
    virtual HRESULT setProperties(const std::vector<com::Utf8Str> &aNames,
                                  const std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT createBaseStorage(LONG64 aLogicalSize,
                                      const std::vector<MediumVariant_T> &aVariant,
                                      ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteStorage(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createDiffStorage(AutoCaller &aAutoCaller,
                                      const ComPtr<IMedium> &aTarget,
                                      const std::vector<MediumVariant_T> &aVariant,
                                      ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT mergeTo(const ComPtr<IMedium> &aTarget,
                            ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cloneTo(const ComPtr<IMedium> &aTarget,
                            const std::vector<MediumVariant_T> &aVariant,
                            const ComPtr<IMedium> &aParent,
                            ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cloneToBase(const ComPtr<IMedium> &aTarget,
                                const std::vector<MediumVariant_T> &aVariant,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT moveTo(AutoCaller &aAutoCaller,
                           const com::Utf8Str &aLocation,
                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT compact(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT resize(LONG64 aLogicalSize,
                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT reset(AutoCaller &aAutoCaller,
                          ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT changeEncryption(const com::Utf8Str &aCurrentPassword,
                                     const com::Utf8Str &aCipher,
                                     const com::Utf8Str &aNewPassword,
                                     const com::Utf8Str &aNewPasswordId,
                                     ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getEncryptionSettings(AutoCaller &aAutoCaller,
                                          com::Utf8Str &aCipher,
                                          com::Utf8Str &aPasswordId) = 0;
    virtual HRESULT checkEncryptionPassword(const com::Utf8Str &aPassword) = 0;
    virtual HRESULT openForIO(BOOL aWritable,
                              const com::Utf8Str &aPassword,
                              ComPtr<IMediumIO> &aMediumIO) = 0;
    virtual HRESULT resizeAndCloneTo(const ComPtr<IMedium> &aTarget,
                                     LONG64 aLogicalSize,
                                     const std::vector<MediumVariant_T> &aVariant,
                                     const ComPtr<IMedium> &aParent,
                                     ComPtr<IProgress> &aProgress) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MediumWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MediumWrap_H_
