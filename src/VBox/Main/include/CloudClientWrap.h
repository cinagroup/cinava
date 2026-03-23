/** @file
 * VirtualBox API class wrapper header for ICloudClient.
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

#ifndef CloudClientWrap_H_
#define CloudClientWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CloudClientWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICloudClient)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CloudClientWrap, ICloudClient)
    DECLARE_NOT_AGGREGATABLE(CloudClientWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CloudClientWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICloudClient)
        COM_INTERFACE_ENTRY2(IDispatch, ICloudClient)
        VBOX_TWEAK_INTERFACE_ENTRY(ICloudClient)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CloudClientWrap)

    /** @name Public ICloudClient properties
     * @{ */
    STDMETHOD(COMGETTER(CloudMachineList))(ComSafeArrayOut(ICloudMachine *, aCloudMachineList)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CloudMachineStubList))(ComSafeArrayOut(ICloudMachine *, aCloudMachineStubList)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ICloudClient))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICloudClient methods
     * @{ */
    STDMETHOD(GetExportDescriptionForm)(IVirtualSystemDescription *aDescription,
                                        IVirtualSystemDescriptionForm **aForm,
                                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ExportVM)(IVirtualSystemDescription *aDescription,
                        IProgress *aProgress) RT_OVERRIDE;
    STDMETHOD(GetLaunchDescriptionForm)(IVirtualSystemDescription *aDescription,
                                        IVirtualSystemDescriptionForm **aForm,
                                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(LaunchVM)(IVirtualSystemDescription *aDescription,
                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetImportDescriptionForm)(IVirtualSystemDescription *aDescription,
                                        IVirtualSystemDescriptionForm **aForm,
                                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ImportInstance)(IVirtualSystemDescription *aDescription,
                              IProgress *aProgress) RT_OVERRIDE;
    STDMETHOD(GetCloudMachine)(IN_BSTR aId,
                               ICloudMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(ReadCloudMachineList)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ReadCloudMachineStubList)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(AddCloudMachine)(IN_BSTR aInstanceId,
                               ICloudMachine **aMachine,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CreateCloudMachine)(IVirtualSystemDescription *aDescription,
                                  ICloudMachine **aMachine,
                                  IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ListInstances)(ComSafeArrayIn(CloudMachineState_T, aMachineState),
                             IStringArray **aReturnNames,
                             IStringArray **aReturnIds,
                             IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ListSourceInstances)(IStringArray **aReturnNames,
                                   IStringArray **aReturnIds,
                                   IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ListImages)(ComSafeArrayIn(CloudImageState_T, aImageState),
                          IStringArray **aReturnNames,
                          IStringArray **aReturnIds,
                          IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ListBootVolumes)(IStringArray **aReturnNames,
                               IStringArray **aReturnIds,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ListSourceBootVolumes)(IStringArray **aReturnNames,
                                     IStringArray **aReturnIds,
                                     IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ListVnicAttachments)(ComSafeArrayIn(IN_BSTR, aParameters),
                                   IStringArray **aReturnVnicAttachmentIds,
                                   IStringArray **aReturnVnicIds,
                                   IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetInstanceInfo)(IN_BSTR aUid,
                               IVirtualSystemDescription *aDescription,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(StartInstance)(IN_BSTR aUid,
                             IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(PauseInstance)(IN_BSTR aUid,
                             IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(TerminateInstance)(IN_BSTR aUid,
                                 IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ResetInstance)(IN_BSTR aUid,
                             IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CloneInstance)(IN_BSTR aUid,
                             IN_BSTR aNewName,
                             ICloudMachine **aClone,
                             IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CreateImage)(ComSafeArrayIn(IN_BSTR, aParameters),
                           IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ExportImage)(IMedium *aImage,
                           ComSafeArrayIn(IN_BSTR, aParameters),
                           IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ImportImage)(IN_BSTR aUid,
                           ComSafeArrayIn(IN_BSTR, aParameters),
                           IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DeleteImage)(IN_BSTR aUid,
                           IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetImageInfo)(IN_BSTR aUid,
                            IStringArray **aInfoArray,
                            IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(StartCloudNetworkGateway)(ICloudNetwork *aNetwork,
                                        IN_BSTR aSshPublicKey,
                                        ICloudNetworkGatewayInfo **aGatewayInfo,
                                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(SetupCloudNetworkEnvironment)(IN_BSTR aTunnelNetworkName,
                                            IN_BSTR aTunnelNetworkRange,
                                            IN_BSTR aGatewayOsName,
                                            IN_BSTR aGatewayOsVersion,
                                            IN_BSTR aGatewayShape,
                                            ICloudNetworkEnvironmentInfo **aNetworkEnvironmentInfo,
                                            IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetVnicInfo)(IN_BSTR aUid,
                           IStringArray **aInfoArray,
                           IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetSubnetSelectionForm)(IVirtualSystemDescription *aDescription,
                                      IVirtualSystemDescriptionForm **aForm,
                                      IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetMetricTypeByName)(IN_BSTR aMetricName,
                                   MetricType_T *aMetricType) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod9ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod10ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod11ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod12ICloudClient)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod13ICloudClient)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICloudClient properties
     * @{ */
    virtual HRESULT getCloudMachineList(std::vector<ComPtr<ICloudMachine> > &aCloudMachineList) = 0;
    virtual HRESULT getCloudMachineStubList(std::vector<ComPtr<ICloudMachine> > &aCloudMachineStubList) = 0;
    /** @} */

    /** @name Wrapped ICloudClient methods
     * @{ */
    virtual HRESULT getExportDescriptionForm(const ComPtr<IVirtualSystemDescription> &aDescription,
                                             ComPtr<IVirtualSystemDescriptionForm> &aForm,
                                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT exportVM(const ComPtr<IVirtualSystemDescription> &aDescription,
                             const ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getLaunchDescriptionForm(const ComPtr<IVirtualSystemDescription> &aDescription,
                                             ComPtr<IVirtualSystemDescriptionForm> &aForm,
                                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT launchVM(const ComPtr<IVirtualSystemDescription> &aDescription,
                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getImportDescriptionForm(const ComPtr<IVirtualSystemDescription> &aDescription,
                                             ComPtr<IVirtualSystemDescriptionForm> &aForm,
                                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT importInstance(const ComPtr<IVirtualSystemDescription> &aDescription,
                                   const ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getCloudMachine(const com::Guid &aId,
                                    ComPtr<ICloudMachine> &aMachine) = 0;
    virtual HRESULT readCloudMachineList(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT readCloudMachineStubList(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT addCloudMachine(const com::Utf8Str &aInstanceId,
                                    ComPtr<ICloudMachine> &aMachine,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createCloudMachine(const ComPtr<IVirtualSystemDescription> &aDescription,
                                       ComPtr<ICloudMachine> &aMachine,
                                       ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT listInstances(const std::vector<CloudMachineState_T> &aMachineState,
                                  ComPtr<IStringArray> &aReturnNames,
                                  ComPtr<IStringArray> &aReturnIds,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT listSourceInstances(ComPtr<IStringArray> &aReturnNames,
                                        ComPtr<IStringArray> &aReturnIds,
                                        ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT listImages(const std::vector<CloudImageState_T> &aImageState,
                               ComPtr<IStringArray> &aReturnNames,
                               ComPtr<IStringArray> &aReturnIds,
                               ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT listBootVolumes(ComPtr<IStringArray> &aReturnNames,
                                    ComPtr<IStringArray> &aReturnIds,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT listSourceBootVolumes(ComPtr<IStringArray> &aReturnNames,
                                          ComPtr<IStringArray> &aReturnIds,
                                          ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT listVnicAttachments(const std::vector<com::Utf8Str> &aParameters,
                                        ComPtr<IStringArray> &aReturnVnicAttachmentIds,
                                        ComPtr<IStringArray> &aReturnVnicIds,
                                        ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getInstanceInfo(const com::Utf8Str &aUid,
                                    const ComPtr<IVirtualSystemDescription> &aDescription,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT startInstance(const com::Utf8Str &aUid,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT pauseInstance(const com::Utf8Str &aUid,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT terminateInstance(const com::Utf8Str &aUid,
                                      ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT resetInstance(const com::Utf8Str &aUid,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cloneInstance(const com::Utf8Str &aUid,
                                  const com::Utf8Str &aNewName,
                                  ComPtr<ICloudMachine> &aClone,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createImage(const std::vector<com::Utf8Str> &aParameters,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT exportImage(const ComPtr<IMedium> &aImage,
                                const std::vector<com::Utf8Str> &aParameters,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT importImage(const com::Utf8Str &aUid,
                                const std::vector<com::Utf8Str> &aParameters,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT deleteImage(const com::Utf8Str &aUid,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getImageInfo(const com::Utf8Str &aUid,
                                 ComPtr<IStringArray> &aInfoArray,
                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT startCloudNetworkGateway(const ComPtr<ICloudNetwork> &aNetwork,
                                             const com::Utf8Str &aSshPublicKey,
                                             ComPtr<ICloudNetworkGatewayInfo> &aGatewayInfo,
                                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT setupCloudNetworkEnvironment(const com::Utf8Str &aTunnelNetworkName,
                                                 const com::Utf8Str &aTunnelNetworkRange,
                                                 const com::Utf8Str &aGatewayOsName,
                                                 const com::Utf8Str &aGatewayOsVersion,
                                                 const com::Utf8Str &aGatewayShape,
                                                 ComPtr<ICloudNetworkEnvironmentInfo> &aNetworkEnvironmentInfo,
                                                 ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getVnicInfo(const com::Utf8Str &aUid,
                                ComPtr<IStringArray> &aInfoArray,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getSubnetSelectionForm(const ComPtr<IVirtualSystemDescription> &aDescription,
                                           ComPtr<IVirtualSystemDescriptionForm> &aForm,
                                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getMetricTypeByName(const com::Utf8Str &aMetricName,
                                        MetricType_T *aMetricType) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CloudClientWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CloudClientWrap_H_
