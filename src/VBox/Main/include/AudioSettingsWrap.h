/** @file
 * VirtualBox API class wrapper header for IAudioSettings.
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

#ifndef AudioSettingsWrap_H_
#define AudioSettingsWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE AudioSettingsWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IAudioSettings)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(AudioSettingsWrap, IAudioSettings)
    DECLARE_NOT_AGGREGATABLE(AudioSettingsWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(AudioSettingsWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IAudioSettings)
        COM_INTERFACE_ENTRY2(IDispatch, IAudioSettings)
        VBOX_TWEAK_INTERFACE_ENTRY(IAudioSettings)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(AudioSettingsWrap)

    /** @name Public IAudioSettings properties
     * @{ */
    STDMETHOD(COMGETTER(Adapter))(IAudioAdapter **aAdapter) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IAudioSettings))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IAudioSettings methods
     * @{ */
    STDMETHOD(GetHostAudioDevice)(AudioDirection_T aUsage,
                                  IHostAudioDevice **aDevice) RT_OVERRIDE;
    STDMETHOD(SetHostAudioDevice)(IHostAudioDevice *aDevice,
                                  AudioDirection_T aUsage) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IAudioSettings)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IAudioSettings)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IAudioSettings)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IAudioSettings)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IAudioSettings properties
     * @{ */
    virtual HRESULT getAdapter(ComPtr<IAudioAdapter> &aAdapter) = 0;
    /** @} */

    /** @name Wrapped IAudioSettings methods
     * @{ */
    virtual HRESULT getHostAudioDevice(AudioDirection_T aUsage,
                                       ComPtr<IHostAudioDevice> &aDevice) = 0;
    virtual HRESULT setHostAudioDevice(const ComPtr<IHostAudioDevice> &aDevice,
                                       AudioDirection_T aUsage) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(AudioSettingsWrap); /* Shuts up MSC warning C4625. */

};

#endif // !AudioSettingsWrap_H_
