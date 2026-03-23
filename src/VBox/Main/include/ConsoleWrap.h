/** @file
 * VirtualBox API class wrapper header for IConsole.
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

#ifndef ConsoleWrap_H_
#define ConsoleWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ConsoleWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IConsole)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ConsoleWrap, IConsole)
    DECLARE_NOT_AGGREGATABLE(ConsoleWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ConsoleWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IConsole)
        COM_INTERFACE_ENTRY2(IDispatch, IConsole)
        VBOX_TWEAK_INTERFACE_ENTRY(IConsole)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ConsoleWrap)

    /** @name Public IConsole properties
     * @{ */
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(State))(MachineState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Guest))(IGuest **aGuest) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Keyboard))(IKeyboard **aKeyboard) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Mouse))(IMouse **aMouse) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Display))(IDisplay **aDisplay) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Debugger))(IMachineDebugger **aDebugger) RT_OVERRIDE;
    STDMETHOD(COMGETTER(USBDevices))(ComSafeArrayOut(IUSBDevice *, aUSBDevices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RemoteUSBDevices))(ComSafeArrayOut(IHostUSBDevice *, aRemoteUSBDevices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SharedFolders))(ComSafeArrayOut(ISharedFolder *, aSharedFolders)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VRDEServerInfo))(IVRDEServerInfo **aVRDEServerInfo) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AttachedPCIDevices))(ComSafeArrayOut(IPCIDeviceAttachment *, aAttachedPCIDevices)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UseHostClipboard))(BOOL *aUseHostClipboard) RT_OVERRIDE;
    STDMETHOD(COMSETTER(UseHostClipboard))(BOOL aUseHostClipboard) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EmulatedUSB))(IEmulatedUSB **aEmulatedUSB) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IConsole))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IConsole))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IConsole))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IConsole))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IConsole))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IConsole))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IConsole))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IConsole))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IConsole methods
     * @{ */
    STDMETHOD(PowerUp)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(PowerUpPaused)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(PowerDown)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Reset)() RT_OVERRIDE;
    STDMETHOD(Pause)() RT_OVERRIDE;
    STDMETHOD(Resume)() RT_OVERRIDE;
    STDMETHOD(PowerButton)() RT_OVERRIDE;
    STDMETHOD(SleepButton)() RT_OVERRIDE;
    STDMETHOD(GetPowerButtonHandled)(BOOL *aHandled) RT_OVERRIDE;
    STDMETHOD(GetGuestEnteredACPIMode)(BOOL *aEntered) RT_OVERRIDE;
    STDMETHOD(GetDeviceActivity)(ComSafeArrayIn(DeviceType_T, aType),
                                 ComSafeArrayOut(DeviceActivity_T, aActivity)) RT_OVERRIDE;
    STDMETHOD(AttachUSBDevice)(IN_BSTR aId,
                               IN_BSTR aCaptureFilename) RT_OVERRIDE;
    STDMETHOD(DetachUSBDevice)(IN_BSTR aId,
                               IUSBDevice **aDevice) RT_OVERRIDE;
    STDMETHOD(FindUSBDeviceByAddress)(IN_BSTR aName,
                                      IUSBDevice **aDevice) RT_OVERRIDE;
    STDMETHOD(FindUSBDeviceById)(IN_BSTR aId,
                                 IUSBDevice **aDevice) RT_OVERRIDE;
    STDMETHOD(CreateSharedFolder)(IN_BSTR aName,
                                  IN_BSTR aHostPath,
                                  BOOL aWritable,
                                  BOOL aAutomount,
                                  IN_BSTR aAutoMountPoint) RT_OVERRIDE;
    STDMETHOD(RemoveSharedFolder)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(Teleport)(IN_BSTR aHostname,
                        ULONG aTcpport,
                        IN_BSTR aPassword,
                        ULONG aMaxDowntime,
                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(AddEncryptionPassword)(IN_BSTR aId,
                                     IN_BSTR aPassword,
                                     BOOL aClearOnSuspend) RT_OVERRIDE;
    STDMETHOD(AddEncryptionPasswords)(ComSafeArrayIn(IN_BSTR, aIds),
                                      ComSafeArrayIn(IN_BSTR, aPasswords),
                                      BOOL aClearOnSuspend) RT_OVERRIDE;
    STDMETHOD(RemoveEncryptionPassword)(IN_BSTR aId) RT_OVERRIDE;
    STDMETHOD(ClearAllEncryptionPasswords)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IConsole)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IConsole)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IConsole)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IConsole)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IConsole)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IConsole)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IConsole)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IConsole)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IConsole properties
     * @{ */
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getState(MachineState_T *aState) = 0;
    virtual HRESULT getGuest(ComPtr<IGuest> &aGuest) = 0;
    virtual HRESULT getKeyboard(ComPtr<IKeyboard> &aKeyboard) = 0;
    virtual HRESULT getMouse(ComPtr<IMouse> &aMouse) = 0;
    virtual HRESULT getDisplay(ComPtr<IDisplay> &aDisplay) = 0;
    virtual HRESULT getDebugger(ComPtr<IMachineDebugger> &aDebugger) = 0;
    virtual HRESULT getUSBDevices(std::vector<ComPtr<IUSBDevice> > &aUSBDevices) = 0;
    virtual HRESULT getRemoteUSBDevices(std::vector<ComPtr<IHostUSBDevice> > &aRemoteUSBDevices) = 0;
    virtual HRESULT getSharedFolders(std::vector<ComPtr<ISharedFolder> > &aSharedFolders) = 0;
    virtual HRESULT getVRDEServerInfo(ComPtr<IVRDEServerInfo> &aVRDEServerInfo) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getAttachedPCIDevices(std::vector<ComPtr<IPCIDeviceAttachment> > &aAttachedPCIDevices) = 0;
    virtual HRESULT getUseHostClipboard(BOOL *aUseHostClipboard) = 0;
    virtual HRESULT setUseHostClipboard(BOOL aUseHostClipboard) = 0;
    virtual HRESULT getEmulatedUSB(ComPtr<IEmulatedUSB> &aEmulatedUSB) = 0;
    /** @} */

    /** @name Wrapped IConsole methods
     * @{ */
    virtual HRESULT powerUp(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT powerUpPaused(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT powerDown(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT reset() = 0;
    virtual HRESULT pause() = 0;
    virtual HRESULT resume() = 0;
    virtual HRESULT powerButton() = 0;
    virtual HRESULT sleepButton() = 0;
    virtual HRESULT getPowerButtonHandled(BOOL *aHandled) = 0;
    virtual HRESULT getGuestEnteredACPIMode(BOOL *aEntered) = 0;
    virtual HRESULT getDeviceActivity(const std::vector<DeviceType_T> &aType,
                                      std::vector<DeviceActivity_T> &aActivity) = 0;
    virtual HRESULT attachUSBDevice(const com::Guid &aId,
                                    const com::Utf8Str &aCaptureFilename) = 0;
    virtual HRESULT detachUSBDevice(const com::Guid &aId,
                                    ComPtr<IUSBDevice> &aDevice) = 0;
    virtual HRESULT findUSBDeviceByAddress(const com::Utf8Str &aName,
                                           ComPtr<IUSBDevice> &aDevice) = 0;
    virtual HRESULT findUSBDeviceById(const com::Guid &aId,
                                      ComPtr<IUSBDevice> &aDevice) = 0;
    virtual HRESULT createSharedFolder(const com::Utf8Str &aName,
                                       const com::Utf8Str &aHostPath,
                                       BOOL aWritable,
                                       BOOL aAutomount,
                                       const com::Utf8Str &aAutoMountPoint) = 0;
    virtual HRESULT removeSharedFolder(const com::Utf8Str &aName) = 0;
    virtual HRESULT teleport(const com::Utf8Str &aHostname,
                             ULONG aTcpport,
                             const com::Utf8Str &aPassword,
                             ULONG aMaxDowntime,
                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT addEncryptionPassword(const com::Utf8Str &aId,
                                          const com::Utf8Str &aPassword,
                                          BOOL aClearOnSuspend) = 0;
    virtual HRESULT addEncryptionPasswords(const std::vector<com::Utf8Str> &aIds,
                                           const std::vector<com::Utf8Str> &aPasswords,
                                           BOOL aClearOnSuspend) = 0;
    virtual HRESULT removeEncryptionPassword(const com::Utf8Str &aId) = 0;
    virtual HRESULT clearAllEncryptionPasswords() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ConsoleWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ConsoleWrap_H_
