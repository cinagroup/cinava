/** @file
 * VirtualBox API class wrapper header for IAppliance.
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

#ifndef ApplianceWrap_H_
#define ApplianceWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ApplianceWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IAppliance)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ApplianceWrap, IAppliance)
    DECLARE_NOT_AGGREGATABLE(ApplianceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ApplianceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IAppliance)
        COM_INTERFACE_ENTRY2(IDispatch, IAppliance)
        VBOX_TWEAK_INTERFACE_ENTRY(IAppliance)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ApplianceWrap)

    /** @name Public IAppliance properties
     * @{ */
    STDMETHOD(COMGETTER(Path))(BSTR *aPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Disks))(ComSafeArrayOut(BSTR, aDisks)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(VirtualSystemDescriptions))(ComSafeArrayOut(IVirtualSystemDescription *, aVirtualSystemDescriptions)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Machines))(ComSafeArrayOut(BSTR, aMachines)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Certificate))(ICertificate **aCertificate) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IAppliance))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IAppliance methods
     * @{ */
    STDMETHOD(Read)(IN_BSTR aFile,
                    IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Interpret)() RT_OVERRIDE;
    STDMETHOD(ImportMachines)(ComSafeArrayIn(ImportOptions_T, aOptions),
                              IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CreateVFSExplorer)(IN_BSTR aURI,
                                 IVFSExplorer **aExplorer) RT_OVERRIDE;
    STDMETHOD(Write)(IN_BSTR aFormat,
                     ComSafeArrayIn(ExportOptions_T, aOptions),
                     IN_BSTR aPath,
                     IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(GetWarnings)(ComSafeArrayOut(BSTR, aWarnings)) RT_OVERRIDE;
    STDMETHOD(GetPasswordIds)(ComSafeArrayOut(BSTR, aIdentifiers)) RT_OVERRIDE;
    STDMETHOD(GetMediumIdsForPasswordId)(IN_BSTR aPasswordId,
                                         ComSafeArrayOut(BSTR, aIdentifiers)) RT_OVERRIDE;
    STDMETHOD(AddPasswords)(ComSafeArrayIn(IN_BSTR, aIdentifiers),
                            ComSafeArrayIn(IN_BSTR, aPasswords)) RT_OVERRIDE;
    STDMETHOD(CreateVirtualSystemDescriptions)(ULONG aRequested,
                                               ULONG *aCreated) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IAppliance)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IAppliance)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IAppliance)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IAppliance)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IAppliance)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IAppliance)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IAppliance)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IAppliance properties
     * @{ */
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT getDisks(std::vector<com::Utf8Str> &aDisks) = 0;
    virtual HRESULT getVirtualSystemDescriptions(std::vector<ComPtr<IVirtualSystemDescription> > &aVirtualSystemDescriptions) = 0;
    virtual HRESULT getMachines(std::vector<com::Utf8Str> &aMachines) = 0;
    virtual HRESULT getCertificate(ComPtr<ICertificate> &aCertificate) = 0;
    /** @} */

    /** @name Wrapped IAppliance methods
     * @{ */
    virtual HRESULT read(const com::Utf8Str &aFile,
                         ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT interpret() = 0;
    virtual HRESULT importMachines(const std::vector<ImportOptions_T> &aOptions,
                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT createVFSExplorer(const com::Utf8Str &aURI,
                                      ComPtr<IVFSExplorer> &aExplorer) = 0;
    virtual HRESULT write(const com::Utf8Str &aFormat,
                          const std::vector<ExportOptions_T> &aOptions,
                          const com::Utf8Str &aPath,
                          ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT getWarnings(std::vector<com::Utf8Str> &aWarnings) = 0;
    virtual HRESULT getPasswordIds(std::vector<com::Utf8Str> &aIdentifiers) = 0;
    virtual HRESULT getMediumIdsForPasswordId(const com::Utf8Str &aPasswordId,
                                              std::vector<com::Guid> &aIdentifiers) = 0;
    virtual HRESULT addPasswords(const std::vector<com::Utf8Str> &aIdentifiers,
                                 const std::vector<com::Utf8Str> &aPasswords) = 0;
    virtual HRESULT createVirtualSystemDescriptions(ULONG aRequested,
                                                    ULONG *aCreated) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ApplianceWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ApplianceWrap_H_
