/** @file
 * VirtualBox API class wrapper header for IAudioAdapter.
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

#ifndef AudioAdapterWrap_H_
#define AudioAdapterWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE AudioAdapterWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IAudioAdapter)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(AudioAdapterWrap, IAudioAdapter)
    DECLARE_NOT_AGGREGATABLE(AudioAdapterWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(AudioAdapterWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IAudioAdapter)
        COM_INTERFACE_ENTRY2(IDispatch, IAudioAdapter)
        VBOX_TWEAK_INTERFACE_ENTRY(IAudioAdapter)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(AudioAdapterWrap)

    /** @name Public IAudioAdapter properties
     * @{ */
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EnabledIn))(BOOL *aEnabledIn) RT_OVERRIDE;
    STDMETHOD(COMSETTER(EnabledIn))(BOOL aEnabledIn) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EnabledOut))(BOOL *aEnabledOut) RT_OVERRIDE;
    STDMETHOD(COMSETTER(EnabledOut))(BOOL aEnabledOut) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioController))(AudioControllerType_T *aAudioController) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioController))(AudioControllerType_T aAudioController) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioCodec))(AudioCodecType_T *aAudioCodec) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioCodec))(AudioCodecType_T aAudioCodec) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioDriver))(AudioDriverType_T *aAudioDriver) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioDriver))(AudioDriverType_T aAudioDriver) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PropertiesList))(ComSafeArrayOut(BSTR, aPropertiesList)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IAudioAdapter))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IAudioAdapter methods
     * @{ */
    STDMETHOD(SetProperty)(IN_BSTR aKey,
                           IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(GetProperty)(IN_BSTR aKey,
                           BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IAudioAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IAudioAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IAudioAdapter)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IAudioAdapter)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IAudioAdapter properties
     * @{ */
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getEnabledIn(BOOL *aEnabledIn) = 0;
    virtual HRESULT setEnabledIn(BOOL aEnabledIn) = 0;
    virtual HRESULT getEnabledOut(BOOL *aEnabledOut) = 0;
    virtual HRESULT setEnabledOut(BOOL aEnabledOut) = 0;
    virtual HRESULT getAudioController(AudioControllerType_T *aAudioController) = 0;
    virtual HRESULT setAudioController(AudioControllerType_T aAudioController) = 0;
    virtual HRESULT getAudioCodec(AudioCodecType_T *aAudioCodec) = 0;
    virtual HRESULT setAudioCodec(AudioCodecType_T aAudioCodec) = 0;
    virtual HRESULT getAudioDriver(AudioDriverType_T *aAudioDriver) = 0;
    virtual HRESULT setAudioDriver(AudioDriverType_T aAudioDriver) = 0;
    virtual HRESULT getPropertiesList(std::vector<com::Utf8Str> &aPropertiesList) = 0;
    /** @} */

    /** @name Wrapped IAudioAdapter methods
     * @{ */
    virtual HRESULT setProperty(const com::Utf8Str &aKey,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT getProperty(const com::Utf8Str &aKey,
                                com::Utf8Str &aValue) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(AudioAdapterWrap); /* Shuts up MSC warning C4625. */

};

#endif // !AudioAdapterWrap_H_
