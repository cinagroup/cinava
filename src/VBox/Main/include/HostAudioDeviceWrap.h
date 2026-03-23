/** @file
 * VirtualBox API class wrapper header for IHostAudioDevice.
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

#ifndef HostAudioDeviceWrap_H_
#define HostAudioDeviceWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostAudioDeviceWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostAudioDevice)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostAudioDeviceWrap, IHostAudioDevice)
    DECLARE_NOT_AGGREGATABLE(HostAudioDeviceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostAudioDeviceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostAudioDevice)
        COM_INTERFACE_ENTRY2(IDispatch, IHostAudioDevice)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostAudioDevice)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostAudioDeviceWrap)

    /** @name Public IHostAudioDevice properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(AudioDeviceType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Type))(AudioDeviceType_T aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Usage))(AudioDirection_T *aUsage) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Usage))(AudioDirection_T aUsage) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultIn))(BOOL *aDefaultIn) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultIn))(BOOL aDefaultIn) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultOut))(BOOL *aDefaultOut) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultOut))(BOOL aDefaultOut) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsHotPlug))(BOOL *aIsHotPlug) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IsHotPlug))(BOOL aIsHotPlug) RT_OVERRIDE;
    STDMETHOD(COMGETTER(State))(AudioDeviceState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMSETTER(State))(AudioDeviceState_T aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IHostAudioDevice))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostAudioDevice methods
     * @{ */
    STDMETHOD(GetProperty)(IN_BSTR aKey,
                           BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IHostAudioDevice)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IHostAudioDevice)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IHostAudioDevice)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IHostAudioDevice)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IHostAudioDevice properties
     * @{ */
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getType(AudioDeviceType_T *aType) = 0;
    virtual HRESULT setType(AudioDeviceType_T aType) = 0;
    virtual HRESULT getUsage(AudioDirection_T *aUsage) = 0;
    virtual HRESULT setUsage(AudioDirection_T aUsage) = 0;
    virtual HRESULT getDefaultIn(BOOL *aDefaultIn) = 0;
    virtual HRESULT setDefaultIn(BOOL aDefaultIn) = 0;
    virtual HRESULT getDefaultOut(BOOL *aDefaultOut) = 0;
    virtual HRESULT setDefaultOut(BOOL aDefaultOut) = 0;
    virtual HRESULT getIsHotPlug(BOOL *aIsHotPlug) = 0;
    virtual HRESULT setIsHotPlug(BOOL aIsHotPlug) = 0;
    virtual HRESULT getState(AudioDeviceState_T *aState) = 0;
    virtual HRESULT setState(AudioDeviceState_T aState) = 0;
    /** @} */

    /** @name Wrapped IHostAudioDevice methods
     * @{ */
    virtual HRESULT getProperty(const com::Utf8Str &aKey,
                                com::Utf8Str &aValue) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostAudioDeviceWrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostAudioDeviceWrap_H_
