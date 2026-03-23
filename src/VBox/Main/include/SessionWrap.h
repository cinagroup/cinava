/** @file
 * VirtualBox API class wrapper header for ISession.
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

#ifndef SessionWrap_H_
#define SessionWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE SessionWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ISession)
    , VBOX_SCRIPTABLE_IMPL(IInternalSessionControl)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SessionWrap, ISession)
    DECLARE_NOT_AGGREGATABLE(SessionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(SessionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ISession)
        COM_INTERFACE_ENTRY2(IDispatch, ISession)
        COM_INTERFACE_ENTRY(IInternalSessionControl)
        VBOX_TWEAK_INTERFACE_ENTRY(ISession)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(SessionWrap)

    /** @name Public ISession properties
     * @{ */
    STDMETHOD(COMGETTER(State))(SessionState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(SessionType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Console))(IConsole **aConsole) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ISession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ISession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ISession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ISession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ISession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ISession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ISession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ISession))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ISession methods
     * @{ */
    STDMETHOD(UnlockMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ISession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ISession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ISession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ISession)() RT_OVERRIDE;
    /** @} */

    /** @name Public IInternalSessionControl properties
     * @{ */
    STDMETHOD(COMGETTER(PID))(ULONG *aPID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RemoteConsole))(IConsole **aRemoteConsole) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NominalState))(MachineState_T *aNominalState) RT_OVERRIDE;
    /** @} */

    /** @name Public IInternalSessionControl methods
     * @{ */
#ifndef VBOX_WITH_XPCOM
    STDMETHOD(AssignMachine)(IMachine *aMachine,
                             LockType_T aLockType,
                             IN_BSTR aTokenId) RT_OVERRIDE;
#endif /* !VBOX_WITH_XPCOM */
#ifdef VBOX_WITH_XPCOM
    STDMETHOD(AssignMachine)(IMachine *aMachine,
                             LockType_T aLockType,
                             IToken *aToken) RT_OVERRIDE;
#endif /* VBOX_WITH_XPCOM */
    STDMETHOD(AssignRemoteMachine)(IMachine *aMachine,
                                   IConsole *aConsole) RT_OVERRIDE;
    STDMETHOD(UpdateMachineState)(MachineState_T aMachineState) RT_OVERRIDE;
    STDMETHOD(Uninitialize)() RT_OVERRIDE;
    STDMETHOD(OnNetworkAdapterChange)(INetworkAdapter *aNetworkAdapter,
                                      BOOL aChangeAdapter) RT_OVERRIDE;
    STDMETHOD(OnAudioAdapterChange)(IAudioAdapter *aAudioAdapter) RT_OVERRIDE;
    STDMETHOD(OnHostAudioDeviceChange)(IHostAudioDevice *aDevice,
                                       BOOL aIsNew,
                                       AudioDeviceState_T aState,
                                       IVirtualBoxErrorInfo *aErrorInfo) RT_OVERRIDE;
    STDMETHOD(OnSerialPortChange)(ISerialPort *aSerialPort) RT_OVERRIDE;
    STDMETHOD(OnParallelPortChange)(IParallelPort *aParallelPort) RT_OVERRIDE;
    STDMETHOD(OnStorageControllerChange)(IN_BSTR aMachineId,
                                         IN_BSTR aControllerName) RT_OVERRIDE;
    STDMETHOD(OnMediumChange)(IMediumAttachment *aMediumAttachment,
                              BOOL aForce) RT_OVERRIDE;
    STDMETHOD(OnStorageDeviceChange)(IMediumAttachment *aMediumAttachment,
                                     BOOL aRemove,
                                     BOOL aSilent) RT_OVERRIDE;
    STDMETHOD(OnVMProcessPriorityChange)(VMProcPriority_T aPriority) RT_OVERRIDE;
    STDMETHOD(OnClipboardModeChange)(ClipboardMode_T aClipboardMode) RT_OVERRIDE;
    STDMETHOD(OnClipboardFileTransferModeChange)(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(OnDnDModeChange)(DnDMode_T aDndMode) RT_OVERRIDE;
    STDMETHOD(OnCPUChange)(ULONG aCpu,
                           BOOL aAdd) RT_OVERRIDE;
    STDMETHOD(OnCPUExecutionCapChange)(ULONG aExecutionCap) RT_OVERRIDE;
    STDMETHOD(OnVRDEServerChange)(BOOL aRestart) RT_OVERRIDE;
    STDMETHOD(OnRecordingStateChange)(RecordingState_T aState,
                                      IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(OnRecordingScreenStateChange)(RecordingState_T aState,
                                            ULONG aScreen) RT_OVERRIDE;
    STDMETHOD(OnUSBControllerChange)() RT_OVERRIDE;
    STDMETHOD(OnSharedFolderChange)(BOOL aGlobal) RT_OVERRIDE;
    STDMETHOD(OnGuestDebugControlChange)(IGuestDebugControl *aGuestDebugControl) RT_OVERRIDE;
    STDMETHOD(OnUSBDeviceAttach)(IUSBDevice *aDevice,
                                 IVirtualBoxErrorInfo *aError,
                                 ULONG aMaskedInterfaces,
                                 IN_BSTR aCaptureFilename) RT_OVERRIDE;
    STDMETHOD(OnUSBDeviceDetach)(IN_BSTR aId,
                                 IVirtualBoxErrorInfo *aError) RT_OVERRIDE;
    STDMETHOD(OnShowWindow)(BOOL aCheck,
                            BOOL *aCanShow,
                            LONG64 *aWinId) RT_OVERRIDE;
    STDMETHOD(OnBandwidthGroupChange)(IBandwidthGroup *aBandwidthGroup) RT_OVERRIDE;
    STDMETHOD(AccessGuestProperty)(IN_BSTR aName,
                                   IN_BSTR aValue,
                                   IN_BSTR aFlags,
                                   ULONG aAccessMode,
                                   BSTR *aRetValue,
                                   LONG64 *aRetTimestamp,
                                   BSTR *aRetFlags) RT_OVERRIDE;
    STDMETHOD(EnumerateGuestProperties)(IN_BSTR aPatterns,
                                        ComSafeArrayOut(BSTR, aKeys),
                                        ComSafeArrayOut(BSTR, aValues),
                                        ComSafeArrayOut(LONG64, aTimestamps),
                                        ComSafeArrayOut(BSTR, aFlags)) RT_OVERRIDE;
    STDMETHOD(OnlineMergeMedium)(IMediumAttachment *aMediumAttachment,
                                 ULONG aSourceIdx,
                                 ULONG aTargetIdx,
                                 IProgress *aProgress) RT_OVERRIDE;
    STDMETHOD(ReconfigureMediumAttachments)(ComSafeArrayIn(IMediumAttachment *, aAttachments)) RT_OVERRIDE;
    STDMETHOD(EnableVMMStatistics)(BOOL aEnable) RT_OVERRIDE;
    STDMETHOD(PauseWithReason)(Reason_T aReason) RT_OVERRIDE;
    STDMETHOD(ResumeWithReason)(Reason_T aReason) RT_OVERRIDE;
    STDMETHOD(SaveStateWithReason)(Reason_T aReason,
                                   IProgress *aProgress,
                                   ISnapshot *aSnapshot,
                                   IN_BSTR aStateFilePath,
                                   BOOL aPauseVM,
                                   BOOL *aLeftPaused) RT_OVERRIDE;
    STDMETHOD(CancelSaveStateWithReason)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ISession properties
     * @{ */
    virtual HRESULT getState(SessionState_T *aState) = 0;
    virtual HRESULT getType(SessionType_T *aType) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getConsole(ComPtr<IConsole> &aConsole) = 0;
    /** @} */

    /** @name Wrapped ISession methods
     * @{ */
    virtual HRESULT unlockMachine() = 0;
    /** @} */

    /** @name Wrapped IInternalSessionControl properties
     * @{ */
    virtual HRESULT getPID(ULONG *aPID) = 0;
    virtual HRESULT getRemoteConsole(ComPtr<IConsole> &aRemoteConsole) = 0;
    virtual HRESULT getNominalState(MachineState_T *aNominalState) = 0;
    /** @} */

    /** @name Wrapped IInternalSessionControl methods
     * @{ */
#ifndef VBOX_WITH_XPCOM
    virtual HRESULT assignMachine(const ComPtr<IMachine> &aMachine,
                                  LockType_T aLockType,
                                  const com::Utf8Str &aTokenId) = 0;
#endif /* !VBOX_WITH_XPCOM */
#ifdef VBOX_WITH_XPCOM
    virtual HRESULT assignMachine(const ComPtr<IMachine> &aMachine,
                                  LockType_T aLockType,
                                  const ComPtr<IToken> &aToken) = 0;
#endif /* VBOX_WITH_XPCOM */
    virtual HRESULT assignRemoteMachine(const ComPtr<IMachine> &aMachine,
                                        const ComPtr<IConsole> &aConsole) = 0;
    virtual HRESULT updateMachineState(MachineState_T aMachineState) = 0;
    virtual HRESULT uninitialize() = 0;
    virtual HRESULT onNetworkAdapterChange(const ComPtr<INetworkAdapter> &aNetworkAdapter,
                                           BOOL aChangeAdapter) = 0;
    virtual HRESULT onAudioAdapterChange(const ComPtr<IAudioAdapter> &aAudioAdapter) = 0;
    virtual HRESULT onHostAudioDeviceChange(const ComPtr<IHostAudioDevice> &aDevice,
                                            BOOL aIsNew,
                                            AudioDeviceState_T aState,
                                            const ComPtr<IVirtualBoxErrorInfo> &aErrorInfo) = 0;
    virtual HRESULT onSerialPortChange(const ComPtr<ISerialPort> &aSerialPort) = 0;
    virtual HRESULT onParallelPortChange(const ComPtr<IParallelPort> &aParallelPort) = 0;
    virtual HRESULT onStorageControllerChange(const com::Guid &aMachineId,
                                              const com::Utf8Str &aControllerName) = 0;
    virtual HRESULT onMediumChange(const ComPtr<IMediumAttachment> &aMediumAttachment,
                                   BOOL aForce) = 0;
    virtual HRESULT onStorageDeviceChange(const ComPtr<IMediumAttachment> &aMediumAttachment,
                                          BOOL aRemove,
                                          BOOL aSilent) = 0;
    virtual HRESULT onVMProcessPriorityChange(VMProcPriority_T aPriority) = 0;
    virtual HRESULT onClipboardModeChange(ClipboardMode_T aClipboardMode) = 0;
    virtual HRESULT onClipboardFileTransferModeChange(BOOL aEnabled) = 0;
    virtual HRESULT onDnDModeChange(DnDMode_T aDndMode) = 0;
    virtual HRESULT onCPUChange(ULONG aCpu,
                                BOOL aAdd) = 0;
    virtual HRESULT onCPUExecutionCapChange(ULONG aExecutionCap) = 0;
    virtual HRESULT onVRDEServerChange(BOOL aRestart) = 0;
    virtual HRESULT onRecordingStateChange(RecordingState_T aState,
                                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT onRecordingScreenStateChange(RecordingState_T aState,
                                                 ULONG aScreen) = 0;
    virtual HRESULT onUSBControllerChange() = 0;
    virtual HRESULT onSharedFolderChange(BOOL aGlobal) = 0;
    virtual HRESULT onGuestDebugControlChange(const ComPtr<IGuestDebugControl> &aGuestDebugControl) = 0;
    virtual HRESULT onUSBDeviceAttach(const ComPtr<IUSBDevice> &aDevice,
                                      const ComPtr<IVirtualBoxErrorInfo> &aError,
                                      ULONG aMaskedInterfaces,
                                      const com::Utf8Str &aCaptureFilename) = 0;
    virtual HRESULT onUSBDeviceDetach(const com::Guid &aId,
                                      const ComPtr<IVirtualBoxErrorInfo> &aError) = 0;
    virtual HRESULT onShowWindow(BOOL aCheck,
                                 BOOL *aCanShow,
                                 LONG64 *aWinId) = 0;
    virtual HRESULT onBandwidthGroupChange(const ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    virtual HRESULT accessGuestProperty(const com::Utf8Str &aName,
                                        const com::Utf8Str &aValue,
                                        const com::Utf8Str &aFlags,
                                        ULONG aAccessMode,
                                        com::Utf8Str &aRetValue,
                                        LONG64 *aRetTimestamp,
                                        com::Utf8Str &aRetFlags) = 0;
    virtual HRESULT enumerateGuestProperties(const com::Utf8Str &aPatterns,
                                             std::vector<com::Utf8Str> &aKeys,
                                             std::vector<com::Utf8Str> &aValues,
                                             std::vector<LONG64> &aTimestamps,
                                             std::vector<com::Utf8Str> &aFlags) = 0;
    virtual HRESULT onlineMergeMedium(const ComPtr<IMediumAttachment> &aMediumAttachment,
                                      ULONG aSourceIdx,
                                      ULONG aTargetIdx,
                                      const ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT reconfigureMediumAttachments(const std::vector<ComPtr<IMediumAttachment> > &aAttachments) = 0;
    virtual HRESULT enableVMMStatistics(BOOL aEnable) = 0;
    virtual HRESULT pauseWithReason(Reason_T aReason) = 0;
    virtual HRESULT resumeWithReason(Reason_T aReason) = 0;
    virtual HRESULT saveStateWithReason(Reason_T aReason,
                                        const ComPtr<IProgress> &aProgress,
                                        const ComPtr<ISnapshot> &aSnapshot,
                                        const com::Utf8Str &aStateFilePath,
                                        BOOL aPauseVM,
                                        BOOL *aLeftPaused) = 0;
    virtual HRESULT cancelSaveStateWithReason() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(SessionWrap); /* Shuts up MSC warning C4625. */

};

#endif // !SessionWrap_H_
