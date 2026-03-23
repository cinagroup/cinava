/** @file
 * VirtualBox API class wrapper header for ICloudMachine.
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

#ifndef CloudMachineWrap_H_
#define CloudMachineWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudMachineWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudMachine)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudMachineWrap, ICloudMachine)
    DECLARE_NOT_AGGREGATABLE(CloudMachineWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudMachineWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudMachine)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudMachine)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudMachine)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudMachineWrap)

    /** @name Public ICloudMachine properties
     * @{ */
    STDMETHOD(COMGETTER(Id))(BSTR *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CloudId))(BSTR *aCloudId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Accessible))(BOOL *aAccessible) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AccessError))(IVirtualBoxErrorInfo **aAccessError) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OSTypeId))(BSTR *aOSTypeId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(State))(CloudMachineState_T *aState) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ConsoleConnectionFingerprint))(BSTR *aConsoleConnectionFingerprint) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SerialConsoleCommand))(BSTR *aSerialConsoleCommand) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SerialConsoleCommandWindows))(BSTR *aSerialConsoleCommandWindows) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VNCConsoleCommand))(BSTR *aVNCConsoleCommand) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VNCConsoleCommandWindows))(BSTR *aVNCConsoleCommandWindows) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICloudMachine))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICloudMachine))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudMachine methods
     * @{ */
    STDMETHOD(Refresh)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetDetailsForm)(IForm **aForm) RT_OVERRIDE;
    STDMETHOD(GetSettingsForm)(IForm **aForm,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(PowerUp)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Reboot)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Reset)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Shutdown)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(PowerDown)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Terminate)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Unregister)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Remove)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetConsoleHistory)(IDataStream **aStream,
                                 IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CreateConsoleConnection)(IN_BSTR aSshPublicKey,
                                       IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DeleteConsoleConnection)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ListMetricNames)(IStringArray **aMetricNames,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(EnumerateMetricData)(MetricType_T aMetricType,
                                   ULONG aPointsNumber,
                                   IStringArray **aValues,
                                   IStringArray **aTimestamps,
                                   IStringArray **aUnit,
                                   IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod9ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod10ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod11ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod12ICloudMachine)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod13ICloudMachine)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICloudMachine properties
     * @{ */
    virtual HRESULT getId(com::Guid &aId) = 0;
    virtual HRESULT getCloudId(com::Utf8Str &aCloudId) = 0;
    virtual HRESULT getAccessible(BOOL *aAccessible) = 0;
    virtual HRESULT getAccessError(ComPtr<IVirtualBoxErrorInfo> &aAccessError) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getOSTypeId(com::Utf8Str &aOSTypeId) = 0;
    virtual HRESULT getState(CloudMachineState_T *aState) = 0;
    virtual HRESULT getConsoleConnectionFingerprint(com::Utf8Str &aConsoleConnectionFingerprint) = 0;
    virtual HRESULT getSerialConsoleCommand(com::Utf8Str &aSerialConsoleCommand) = 0;
    virtual HRESULT getSerialConsoleCommandWindows(com::Utf8Str &aSerialConsoleCommandWindows) = 0;
    virtual HRESULT getVNCConsoleCommand(com::Utf8Str &aVNCConsoleCommand) = 0;
    virtual HRESULT getVNCConsoleCommandWindows(com::Utf8Str &aVNCConsoleCommandWindows) = 0;
    /** @} */

    /** @name Wrapped ICloudMachine methods
     * @{ */
    virtual HRESULT refresh(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getDetailsForm(ComPtr<IForm> &aForm) = 0;
    virtual HRESULT getSettingsForm(ComPtr<IForm> &aForm,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT powerUp(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT reboot(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT reset(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT shutdown(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT powerDown(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT terminate(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT unregister(AutoCaller &aAutoCaller,
                               ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT remove(AutoCaller &aAutoCaller,
                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getConsoleHistory(ComPtr<IDataStream> &aStream,
                                      ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createConsoleConnection(const com::Utf8Str &aSshPublicKey,
                                            ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteConsoleConnection(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT listMetricNames(ComPtr<IStringArray> &aMetricNames,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT enumerateMetricData(MetricType_T aMetricType,
                                        ULONG aPointsNumber,
                                        ComPtr<IStringArray> &aValues,
                                        ComPtr<IStringArray> &aTimestamps,
                                        ComPtr<IStringArray> &aUnit,
                                        ComPtr<IProgress> &aProgress) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudMachineWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudMachineWrap_H_
