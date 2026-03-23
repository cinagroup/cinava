/** @file
 * VirtualBox API class wrapper header for IRecordingSettings.
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

#ifndef RecordingSettingsWrap_H_
#define RecordingSettingsWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE RecordingSettingsWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IRecordingSettings)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(RecordingSettingsWrap, IRecordingSettings)
    DECLARE_NOT_AGGREGATABLE(RecordingSettingsWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(RecordingSettingsWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IRecordingSettings)
        COM_INTERFACE_ENTRY2(IDispatch, IRecordingSettings)
        VBOX_TWEAK_INTERFACE_ENTRY(IRecordingSettings)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(RecordingSettingsWrap)

    /** @name Public IRecordingSettings properties
     * @{ */
    STDMETHOD(COMGETTER(Paused))(BOOL *aPaused) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Paused))(BOOL aPaused) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Screens))(ComSafeArrayOut(IRecordingScreenSettings *, aScreens)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Progress))(IProgress **aProgress) RT_OVERRIDE;
    /** @} */

    /** @name Public IRecordingSettings methods
     * @{ */
    STDMETHOD(GetScreenSettings)(ULONG aScreenId,
                                 IRecordingScreenSettings **aRecordScreenSettings) RT_OVERRIDE;
    STDMETHOD(Start)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Stop)() RT_OVERRIDE;
    STDMETHOD(Resume)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IRecordingSettings properties
     * @{ */
    virtual HRESULT getPaused(BOOL *aPaused) = 0;
    virtual HRESULT setPaused(BOOL aPaused) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getScreens(std::vector<ComPtr<IRecordingScreenSettings> > &aScreens) = 0;
    virtual HRESULT getProgress(ComPtr<IProgress> &aProgress) = 0;
    /** @} */

    /** @name Wrapped IRecordingSettings methods
     * @{ */
    virtual HRESULT getScreenSettings(ULONG aScreenId,
                                      ComPtr<IRecordingScreenSettings> &aRecordScreenSettings) = 0;
    virtual HRESULT start(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT stop() = 0;
    virtual HRESULT resume() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(RecordingSettingsWrap); /* Shuts up MSC warning C4625. */

};

#endif // !RecordingSettingsWrap_H_
