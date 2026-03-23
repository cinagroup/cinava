/** @file
 * VirtualBox API class wrapper header for IUpdateAgent.
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

#ifndef UpdateAgentWrap_H_
#define UpdateAgentWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE UpdateAgentWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IUpdateAgent)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(UpdateAgentWrap, IUpdateAgent)
    DECLARE_NOT_AGGREGATABLE(UpdateAgentWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(UpdateAgentWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUpdateAgent)
        COM_INTERFACE_ENTRY2(IDispatch, IUpdateAgent)
        VBOX_TWEAK_INTERFACE_ENTRY(IUpdateAgent)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(UpdateAgentWrap)

    /** @name Public IUpdateAgent properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Order))(ULONG *aOrder) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DependsOn))(ComSafeArrayOut(BSTR, aDependsOn)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Version))(BSTR *aVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DownloadUrl))(BSTR *aDownloadUrl) RT_OVERRIDE;
    STDMETHOD(COMGETTER(WebUrl))(BSTR *aWebUrl) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ReleaseNotes))(BSTR *aReleaseNotes) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Enabled))(BOOL *aEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Enabled))(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Hidden))(BOOL *aHidden) RT_OVERRIDE;
    STDMETHOD(COMGETTER(State))(UpdateState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CheckFrequency))(ULONG *aCheckFrequency) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CheckFrequency))(ULONG aCheckFrequency) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Channel))(UpdateChannel_T *aChannel) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Channel))(UpdateChannel_T aChannel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RepositoryURL))(BSTR *aRepositoryURL) RT_OVERRIDE;
    STDMETHOD(COMSETTER(RepositoryURL))(IN_BSTR aRepositoryURL) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LastCheckDate))(BSTR *aLastCheckDate) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CheckCount))(ULONG *aCheckCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsCheckNeeded))(BOOL *aIsCheckNeeded) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SupportedChannels))(ComSafeArrayOut(UpdateChannel_T, aSupportedChannels)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUpdateAgent))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUpdateAgent))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IUpdateAgent))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IUpdateAgent))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUpdateAgent methods
     * @{ */
    STDMETHOD(CheckFor)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Download)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Install)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Rollback)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IUpdateAgent)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IUpdateAgent)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IUpdateAgent properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getOrder(ULONG *aOrder) = 0;
    virtual HRESULT getDependsOn(std::vector<com::Utf8Str> &aDependsOn) = 0;
    virtual HRESULT getVersion(com::Utf8Str &aVersion) = 0;
    virtual HRESULT getDownloadUrl(com::Utf8Str &aDownloadUrl) = 0;
    virtual HRESULT getWebUrl(com::Utf8Str &aWebUrl) = 0;
    virtual HRESULT getReleaseNotes(com::Utf8Str &aReleaseNotes) = 0;
    virtual HRESULT getEnabled(BOOL *aEnabled) = 0;
    virtual HRESULT setEnabled(BOOL aEnabled) = 0;
    virtual HRESULT getHidden(BOOL *aHidden) = 0;
    virtual HRESULT getState(UpdateState_T *aState) = 0;
    virtual HRESULT getCheckFrequency(ULONG *aCheckFrequency) = 0;
    virtual HRESULT setCheckFrequency(ULONG aCheckFrequency) = 0;
    virtual HRESULT getChannel(UpdateChannel_T *aChannel) = 0;
    virtual HRESULT setChannel(UpdateChannel_T aChannel) = 0;
    virtual HRESULT getRepositoryURL(com::Utf8Str &aRepositoryURL) = 0;
    virtual HRESULT setRepositoryURL(const com::Utf8Str &aRepositoryURL) = 0;
    virtual HRESULT getLastCheckDate(com::Utf8Str &aLastCheckDate) = 0;
    virtual HRESULT getCheckCount(ULONG *aCheckCount) = 0;
    virtual HRESULT getIsCheckNeeded(BOOL *aIsCheckNeeded) = 0;
    virtual HRESULT getSupportedChannels(std::vector<UpdateChannel_T> &aSupportedChannels) = 0;
    /** @} */

    /** @name Wrapped IUpdateAgent methods
     * @{ */
    virtual HRESULT checkFor(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT download(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT install(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT rollback() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(UpdateAgentWrap); /* Shuts up MSC warning C4625. */

};

#endif // !UpdateAgentWrap_H_
