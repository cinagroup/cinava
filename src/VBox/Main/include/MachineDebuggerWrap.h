/** @file
 * VirtualBox API class wrapper header for IMachineDebugger.
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

#ifndef MachineDebuggerWrap_H_
#define MachineDebuggerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MachineDebuggerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMachineDebugger)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineDebuggerWrap, IMachineDebugger)
    DECLARE_NOT_AGGREGATABLE(MachineDebuggerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MachineDebuggerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMachineDebugger)
        COM_INTERFACE_ENTRY2(IDispatch, IMachineDebugger)
        VBOX_TWEAK_INTERFACE_ENTRY(IMachineDebugger)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MachineDebuggerWrap)

    /** @name Public IMachineDebugger properties
     * @{ */
    STDMETHOD(COMGETTER(SingleStep))(BOOL *aSingleStep) RT_OVERRIDE;
    STDMETHOD(COMSETTER(SingleStep))(BOOL aSingleStep) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExecuteAllInIEM))(BOOL *aExecuteAllInIEM) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ExecuteAllInIEM))(BOOL aExecuteAllInIEM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogEnabled))(BOOL *aLogEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(LogEnabled))(BOOL aLogEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogDbgFlags))(BSTR *aLogDbgFlags) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogDbgGroups))(BSTR *aLogDbgGroups) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogDbgDestinations))(BSTR *aLogDbgDestinations) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogRelFlags))(BSTR *aLogRelFlags) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogRelGroups))(BSTR *aLogRelGroups) RT_OVERRIDE;
    STDMETHOD(COMGETTER(LogRelDestinations))(BSTR *aLogRelDestinations) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExecutionEngine))(VMExecutionEngine_T *aExecutionEngine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HWVirtExNestedPagingEnabled))(BOOL *aHWVirtExNestedPagingEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HWVirtExVPIDEnabled))(BOOL *aHWVirtExVPIDEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HWVirtExUXEnabled))(BOOL *aHWVirtExUXEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OSName))(BSTR *aOSName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(OSVersion))(BSTR *aOSVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PAEEnabled))(BOOL *aPAEEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VirtualTimeRate))(ULONG *aVirtualTimeRate) RT_OVERRIDE;
    STDMETHOD(COMSETTER(VirtualTimeRate))(ULONG aVirtualTimeRate) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Uptime))(LONG64 *aUptime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RecompiledIEMExecution))(BOOL *aRecompiledIEMExecution) RT_OVERRIDE;
    STDMETHOD(COMSETTER(RecompiledIEMExecution))(BOOL aRecompiledIEMExecution) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IMachineDebugger))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMachineDebugger methods
     * @{ */
    STDMETHOD(DumpGuestCore)(IN_BSTR aFilename,
                             IN_BSTR aCompression) RT_OVERRIDE;
    STDMETHOD(DumpHostProcessCore)(IN_BSTR aFilename,
                                   IN_BSTR aCompression) RT_OVERRIDE;
    STDMETHOD(Info)(IN_BSTR aName,
                    IN_BSTR aArgs,
                    BSTR *aInfo) RT_OVERRIDE;
    STDMETHOD(InjectNMI)() RT_OVERRIDE;
    STDMETHOD(ModifyLogGroups)(IN_BSTR aSettings) RT_OVERRIDE;
    STDMETHOD(ModifyLogFlags)(IN_BSTR aSettings) RT_OVERRIDE;
    STDMETHOD(ModifyLogDestinations)(IN_BSTR aSettings) RT_OVERRIDE;
    STDMETHOD(ReadPhysicalMemory)(LONG64 aAddress,
                                  ULONG aSize,
                                  ComSafeArrayOut(BYTE, aBytes)) RT_OVERRIDE;
    STDMETHOD(WritePhysicalMemory)(LONG64 aAddress,
                                   ULONG aSize,
                                   ComSafeArrayIn(BYTE, aBytes)) RT_OVERRIDE;
    STDMETHOD(ReadVirtualMemory)(ULONG aCpuId,
                                 LONG64 aAddress,
                                 ULONG aSize,
                                 ComSafeArrayOut(BYTE, aBytes)) RT_OVERRIDE;
    STDMETHOD(WriteVirtualMemory)(ULONG aCpuId,
                                  LONG64 aAddress,
                                  ULONG aSize,
                                  ComSafeArrayIn(BYTE, aBytes)) RT_OVERRIDE;
    STDMETHOD(LoadPlugIn)(IN_BSTR aName,
                          BSTR *aPlugInName) RT_OVERRIDE;
    STDMETHOD(UnloadPlugIn)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(DetectOS)(BSTR *aOs) RT_OVERRIDE;
    STDMETHOD(QueryOSKernelLog)(ULONG aMaxMessages,
                                BSTR *aDmesg) RT_OVERRIDE;
    STDMETHOD(GetRegister)(ULONG aCpuId,
                           IN_BSTR aName,
                           BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(GetRegisters)(ULONG aCpuId,
                            ComSafeArrayOut(BSTR, aNames),
                            ComSafeArrayOut(BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(SetRegister)(ULONG aCpuId,
                           IN_BSTR aName,
                           IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(SetRegisters)(ULONG aCpuId,
                            ComSafeArrayIn(IN_BSTR, aNames),
                            ComSafeArrayIn(IN_BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(DumpGuestStack)(ULONG aCpuId,
                              BSTR *aStack) RT_OVERRIDE;
    STDMETHOD(ResetStats)(IN_BSTR aPattern) RT_OVERRIDE;
    STDMETHOD(DumpStats)(IN_BSTR aPattern) RT_OVERRIDE;
    STDMETHOD(GetStats)(IN_BSTR aPattern,
                        BOOL aWithDescriptions,
                        BSTR *aStats) RT_OVERRIDE;
    STDMETHOD(GetCPULoad)(ULONG aCpuId,
                          ULONG *aPctExecuting,
                          ULONG *aPctHalted,
                          ULONG *aPctOther,
                          LONG64 *aMsInterval) RT_OVERRIDE;
    STDMETHOD(TakeGuestSample)(IN_BSTR aFilename,
                               ULONG aUsInterval,
                               LONG64 aUsSampleTime,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetUVMAndVMMFunctionTable)(LONG64 aMagicVersion,
                                         LONG64 *aVMMFunctionTable,
                                         LONG64 *aUVM) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod9IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod10IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod11IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod12IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod13IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod14IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod15IMachineDebugger)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod16IMachineDebugger)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IMachineDebugger properties
     * @{ */
    virtual HRESULT getSingleStep(BOOL *aSingleStep) = 0;
    virtual HRESULT setSingleStep(BOOL aSingleStep) = 0;
    virtual HRESULT getExecuteAllInIEM(BOOL *aExecuteAllInIEM) = 0;
    virtual HRESULT setExecuteAllInIEM(BOOL aExecuteAllInIEM) = 0;
    virtual HRESULT getLogEnabled(BOOL *aLogEnabled) = 0;
    virtual HRESULT setLogEnabled(BOOL aLogEnabled) = 0;
    virtual HRESULT getLogDbgFlags(com::Utf8Str &aLogDbgFlags) = 0;
    virtual HRESULT getLogDbgGroups(com::Utf8Str &aLogDbgGroups) = 0;
    virtual HRESULT getLogDbgDestinations(com::Utf8Str &aLogDbgDestinations) = 0;
    virtual HRESULT getLogRelFlags(com::Utf8Str &aLogRelFlags) = 0;
    virtual HRESULT getLogRelGroups(com::Utf8Str &aLogRelGroups) = 0;
    virtual HRESULT getLogRelDestinations(com::Utf8Str &aLogRelDestinations) = 0;
    virtual HRESULT getExecutionEngine(VMExecutionEngine_T *aExecutionEngine) = 0;
    virtual HRESULT getHWVirtExNestedPagingEnabled(BOOL *aHWVirtExNestedPagingEnabled) = 0;
    virtual HRESULT getHWVirtExVPIDEnabled(BOOL *aHWVirtExVPIDEnabled) = 0;
    virtual HRESULT getHWVirtExUXEnabled(BOOL *aHWVirtExUXEnabled) = 0;
    virtual HRESULT getOSName(com::Utf8Str &aOSName) = 0;
    virtual HRESULT getOSVersion(com::Utf8Str &aOSVersion) = 0;
    virtual HRESULT getPAEEnabled(BOOL *aPAEEnabled) = 0;
    virtual HRESULT getVirtualTimeRate(ULONG *aVirtualTimeRate) = 0;
    virtual HRESULT setVirtualTimeRate(ULONG aVirtualTimeRate) = 0;
    virtual HRESULT getUptime(LONG64 *aUptime) = 0;
    virtual HRESULT getRecompiledIEMExecution(BOOL *aRecompiledIEMExecution) = 0;
    virtual HRESULT setRecompiledIEMExecution(BOOL aRecompiledIEMExecution) = 0;
    /** @} */

    /** @name Wrapped IMachineDebugger methods
     * @{ */
    virtual HRESULT dumpGuestCore(const com::Utf8Str &aFilename,
                                  const com::Utf8Str &aCompression) = 0;
    virtual HRESULT dumpHostProcessCore(const com::Utf8Str &aFilename,
                                        const com::Utf8Str &aCompression) = 0;
    virtual HRESULT info(const com::Utf8Str &aName,
                         const com::Utf8Str &aArgs,
                         com::Utf8Str &aInfo) = 0;
    virtual HRESULT injectNMI() = 0;
    virtual HRESULT modifyLogGroups(const com::Utf8Str &aSettings) = 0;
    virtual HRESULT modifyLogFlags(const com::Utf8Str &aSettings) = 0;
    virtual HRESULT modifyLogDestinations(const com::Utf8Str &aSettings) = 0;
    virtual HRESULT readPhysicalMemory(LONG64 aAddress,
                                       ULONG aSize,
                                       std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT writePhysicalMemory(LONG64 aAddress,
                                        ULONG aSize,
                                        const std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT readVirtualMemory(ULONG aCpuId,
                                      LONG64 aAddress,
                                      ULONG aSize,
                                      std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT writeVirtualMemory(ULONG aCpuId,
                                       LONG64 aAddress,
                                       ULONG aSize,
                                       const std::vector<BYTE> &aBytes) = 0;
    virtual HRESULT loadPlugIn(const com::Utf8Str &aName,
                               com::Utf8Str &aPlugInName) = 0;
    virtual HRESULT unloadPlugIn(const com::Utf8Str &aName) = 0;
    virtual HRESULT detectOS(com::Utf8Str &aOs) = 0;
    virtual HRESULT queryOSKernelLog(ULONG aMaxMessages,
                                     com::Utf8Str &aDmesg) = 0;
    virtual HRESULT getRegister(ULONG aCpuId,
                                const com::Utf8Str &aName,
                                com::Utf8Str &aValue) = 0;
    virtual HRESULT getRegisters(ULONG aCpuId,
                                 std::vector<com::Utf8Str> &aNames,
                                 std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT setRegister(ULONG aCpuId,
                                const com::Utf8Str &aName,
                                const com::Utf8Str &aValue) = 0;
    virtual HRESULT setRegisters(ULONG aCpuId,
                                 const std::vector<com::Utf8Str> &aNames,
                                 const std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT dumpGuestStack(ULONG aCpuId,
                                   com::Utf8Str &aStack) = 0;
    virtual HRESULT resetStats(const com::Utf8Str &aPattern) = 0;
    virtual HRESULT dumpStats(const com::Utf8Str &aPattern) = 0;
    virtual HRESULT getStats(const com::Utf8Str &aPattern,
                             BOOL aWithDescriptions,
                             com::Utf8Str &aStats) = 0;
    virtual HRESULT getCPULoad(ULONG aCpuId,
                               ULONG *aPctExecuting,
                               ULONG *aPctHalted,
                               ULONG *aPctOther,
                               LONG64 *aMsInterval) = 0;
    virtual HRESULT takeGuestSample(const com::Utf8Str &aFilename,
                                    ULONG aUsInterval,
                                    LONG64 aUsSampleTime,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getUVMAndVMMFunctionTable(LONG64 aMagicVersion,
                                              LONG64 *aVMMFunctionTable,
                                              LONG64 *aUVM) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MachineDebuggerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MachineDebuggerWrap_H_
