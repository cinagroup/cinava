/** @file
 * VirtualBox API class wrapper header for IRecordingScreenSettings.
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

#ifndef RecordingScreenSettingsWrap_H_
#define RecordingScreenSettingsWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE RecordingScreenSettingsWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IRecordingScreenSettings)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(RecordingScreenSettingsWrap, IRecordingScreenSettings)
    DECLARE_NOT_AGGREGATABLE(RecordingScreenSettingsWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(RecordingScreenSettingsWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IRecordingScreenSettings)
        COM_INTERFACE_ENTRY2(IDispatch, IRecordingScreenSettings)
        VBOX_TWEAK_INTERFACE_ENTRY(IRecordingScreenSettings)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(RecordingScreenSettingsWrap)

    /** @name Public IRecordingScreenSettings properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(ULONG *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Features))(ComSafeArrayOut(RecordingFeature_T, aFeatures)) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Features))(ComSafeArrayIn(RecordingFeature_T, aFeatures)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Destination))(RecordingDestination_T *aDestination) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Destination))(RecordingDestination_T aDestination) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Filename))(BSTR *aFilename) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Filename))(IN_BSTR aFilename) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxTime))(ULONG *aMaxTime) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MaxTime))(ULONG aMaxTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxFileSize))(ULONG *aMaxFileSize) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MaxFileSize))(ULONG aMaxFileSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Options))(BSTR *aOptions) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Options))(IN_BSTR aOptions) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioCodec))(RecordingAudioCodec_T *aAudioCodec) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioCodec))(RecordingAudioCodec_T aAudioCodec) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioRateControlMode))(RecordingRateControlMode_T *aAudioRateControlMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioRateControlMode))(RecordingRateControlMode_T aAudioRateControlMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioDeadline))(RecordingCodecDeadline_T *aAudioDeadline) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioDeadline))(RecordingCodecDeadline_T aAudioDeadline) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioHz))(ULONG *aAudioHz) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioHz))(ULONG aAudioHz) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioBits))(ULONG *aAudioBits) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioBits))(ULONG aAudioBits) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AudioChannels))(ULONG *aAudioChannels) RT_OVERRIDE;
    STDMETHOD(COMSETTER(AudioChannels))(ULONG aAudioChannels) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoCodec))(RecordingVideoCodec_T *aVideoCodec) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoCodec))(RecordingVideoCodec_T aVideoCodec) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoDeadline))(RecordingCodecDeadline_T *aVideoDeadline) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoDeadline))(RecordingCodecDeadline_T aVideoDeadline) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoWidth))(ULONG *aVideoWidth) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoWidth))(ULONG aVideoWidth) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoHeight))(ULONG *aVideoHeight) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoHeight))(ULONG aVideoHeight) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoRate))(ULONG *aVideoRate) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoRate))(ULONG aVideoRate) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoRateControlMode))(RecordingRateControlMode_T *aVideoRateControlMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoRateControlMode))(RecordingRateControlMode_T aVideoRateControlMode) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoFPS))(ULONG *aVideoFPS) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoFPS))(ULONG aVideoFPS) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VideoScalingMode))(RecordingVideoScalingMode_T *aVideoScalingMode) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VideoScalingMode))(RecordingVideoScalingMode_T aVideoScalingMode) RT_OVERRIDE;
    /** @} */

    /** @name Public IRecordingScreenSettings methods
     * @{ */
    STDMETHOD(IsFeatureEnabled)(RecordingFeature_T aFeature,
                                BOOL *aEnabled) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IRecordingScreenSettings properties
     * @{ */
    virtual HRESULT getId(ULONG *aId) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getFeatures(std::vector<RecordingFeature_T> &aFeatures) = 0;
    virtual HRESULT setFeatures(const std::vector<RecordingFeature_T> &aFeatures) = 0;
    virtual HRESULT getDestination(RecordingDestination_T *aDestination) = 0;
    virtual HRESULT setDestination(RecordingDestination_T aDestination) = 0;
    virtual HRESULT getFilename(com::Utf8Str &aFilename) = 0;
    virtual HRESULT setFilename(const com::Utf8Str &aFilename) = 0;
    virtual HRESULT getMaxTime(ULONG *aMaxTime) = 0;
    virtual HRESULT setMaxTime(ULONG aMaxTime) = 0;
    virtual HRESULT getMaxFileSize(ULONG *aMaxFileSize) = 0;
    virtual HRESULT setMaxFileSize(ULONG aMaxFileSize) = 0;
    virtual HRESULT getOptions(com::Utf8Str &aOptions) = 0;
    virtual HRESULT setOptions(const com::Utf8Str &aOptions) = 0;
    virtual HRESULT getAudioCodec(RecordingAudioCodec_T *aAudioCodec) = 0;
    virtual HRESULT setAudioCodec(RecordingAudioCodec_T aAudioCodec) = 0;
    virtual HRESULT getAudioRateControlMode(RecordingRateControlMode_T *aAudioRateControlMode) = 0;
    virtual HRESULT setAudioRateControlMode(RecordingRateControlMode_T aAudioRateControlMode) = 0;
    virtual HRESULT getAudioDeadline(RecordingCodecDeadline_T *aAudioDeadline) = 0;
    virtual HRESULT setAudioDeadline(RecordingCodecDeadline_T aAudioDeadline) = 0;
    virtual HRESULT getAudioHz(ULONG *aAudioHz) = 0;
    virtual HRESULT setAudioHz(ULONG aAudioHz) = 0;
    virtual HRESULT getAudioBits(ULONG *aAudioBits) = 0;
    virtual HRESULT setAudioBits(ULONG aAudioBits) = 0;
    virtual HRESULT getAudioChannels(ULONG *aAudioChannels) = 0;
    virtual HRESULT setAudioChannels(ULONG aAudioChannels) = 0;
    virtual HRESULT getVideoCodec(RecordingVideoCodec_T *aVideoCodec) = 0;
    virtual HRESULT setVideoCodec(RecordingVideoCodec_T aVideoCodec) = 0;
    virtual HRESULT getVideoDeadline(RecordingCodecDeadline_T *aVideoDeadline) = 0;
    virtual HRESULT setVideoDeadline(RecordingCodecDeadline_T aVideoDeadline) = 0;
    virtual HRESULT getVideoWidth(ULONG *aVideoWidth) = 0;
    virtual HRESULT setVideoWidth(ULONG aVideoWidth) = 0;
    virtual HRESULT getVideoHeight(ULONG *aVideoHeight) = 0;
    virtual HRESULT setVideoHeight(ULONG aVideoHeight) = 0;
    virtual HRESULT getVideoRate(ULONG *aVideoRate) = 0;
    virtual HRESULT setVideoRate(ULONG aVideoRate) = 0;
    virtual HRESULT getVideoRateControlMode(RecordingRateControlMode_T *aVideoRateControlMode) = 0;
    virtual HRESULT setVideoRateControlMode(RecordingRateControlMode_T aVideoRateControlMode) = 0;
    virtual HRESULT getVideoFPS(ULONG *aVideoFPS) = 0;
    virtual HRESULT setVideoFPS(ULONG aVideoFPS) = 0;
    virtual HRESULT getVideoScalingMode(RecordingVideoScalingMode_T *aVideoScalingMode) = 0;
    virtual HRESULT setVideoScalingMode(RecordingVideoScalingMode_T aVideoScalingMode) = 0;
    /** @} */

    /** @name Wrapped IRecordingScreenSettings methods
     * @{ */
    virtual HRESULT isFeatureEnabled(RecordingFeature_T aFeature,
                                     BOOL *aEnabled) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(RecordingScreenSettingsWrap); /* Shuts up MSC warning C4625. */

};

#endif // !RecordingScreenSettingsWrap_H_
