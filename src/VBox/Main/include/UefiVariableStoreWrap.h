/** @file
 * VirtualBox API class wrapper header for IUefiVariableStore.
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

#ifndef UefiVariableStoreWrap_H_
#define UefiVariableStoreWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE UefiVariableStoreWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IUefiVariableStore)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(UefiVariableStoreWrap, IUefiVariableStore)
    DECLARE_NOT_AGGREGATABLE(UefiVariableStoreWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(UefiVariableStoreWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IUefiVariableStore)
        COM_INTERFACE_ENTRY2(IDispatch, IUefiVariableStore)
        VBOX_TWEAK_INTERFACE_ENTRY(IUefiVariableStore)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(UefiVariableStoreWrap)

    /** @name Public IUefiVariableStore properties
     * @{ */
    STDMETHOD(COMGETTER(SecureBootEnabled))(BOOL *aSecureBootEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(SecureBootEnabled))(BOOL aSecureBootEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IUefiVariableStore))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IUefiVariableStore))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IUefiVariableStore))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IUefiVariableStore))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IUefiVariableStore))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IUefiVariableStore methods
     * @{ */
    STDMETHOD(AddVariable)(IN_BSTR aName,
                           IN_BSTR aOwner,
                           ComSafeArrayIn(UefiVariableAttributes_T, aAttributes),
                           ComSafeArrayIn(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(DeleteVariable)(IN_BSTR aName,
                              IN_BSTR aOwner) RT_OVERRIDE;
    STDMETHOD(ChangeVariable)(IN_BSTR aName,
                              ComSafeArrayIn(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(QueryVariableByName)(IN_BSTR aName,
                                   BSTR *aOwner,
                                   ComSafeArrayOut(UefiVariableAttributes_T, aAttributes),
                                   ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(QueryVariables)(ComSafeArrayOut(BSTR, aNames),
                              ComSafeArrayOut(BSTR, aOwners)) RT_OVERRIDE;
    STDMETHOD(EnrollOraclePlatformKey)() RT_OVERRIDE;
    STDMETHOD(EnrollPlatformKey)(ComSafeArrayIn(BYTE, aPlatformKey),
                                 IN_BSTR aOwner) RT_OVERRIDE;
    STDMETHOD(AddKek)(ComSafeArrayIn(BYTE, aKeyEncryptionKey),
                      IN_BSTR aOwner,
                      SignatureType_T aSignatureType) RT_OVERRIDE;
    STDMETHOD(AddSignatureToDb)(ComSafeArrayIn(BYTE, aSignature),
                                IN_BSTR aOwner,
                                SignatureType_T aSignatureType) RT_OVERRIDE;
    STDMETHOD(AddSignatureToDbx)(ComSafeArrayIn(BYTE, aSignature),
                                 IN_BSTR aOwner,
                                 SignatureType_T aSignatureType) RT_OVERRIDE;
    STDMETHOD(EnrollDefaultMsSignatures)() RT_OVERRIDE;
    STDMETHOD(AddSignatureToMok)(ComSafeArrayIn(BYTE, aSignature),
                                 IN_BSTR aOwner,
                                 SignatureType_T aSignatureType) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IUefiVariableStore)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod9IUefiVariableStore)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IUefiVariableStore properties
     * @{ */
    virtual HRESULT getSecureBootEnabled(BOOL *aSecureBootEnabled) = 0;
    virtual HRESULT setSecureBootEnabled(BOOL aSecureBootEnabled) = 0;
    /** @} */

    /** @name Wrapped IUefiVariableStore methods
     * @{ */
    virtual HRESULT addVariable(const com::Utf8Str &aName,
                                const com::Guid &aOwner,
                                const std::vector<UefiVariableAttributes_T> &aAttributes,
                                const std::vector<BYTE> &aData) = 0;
    virtual HRESULT deleteVariable(const com::Utf8Str &aName,
                                   const com::Guid &aOwner) = 0;
    virtual HRESULT changeVariable(const com::Utf8Str &aName,
                                   const std::vector<BYTE> &aData) = 0;
    virtual HRESULT queryVariableByName(const com::Utf8Str &aName,
                                        com::Guid &aOwner,
                                        std::vector<UefiVariableAttributes_T> &aAttributes,
                                        std::vector<BYTE> &aData) = 0;
    virtual HRESULT queryVariables(std::vector<com::Utf8Str> &aNames,
                                   std::vector<com::Guid> &aOwners) = 0;
    virtual HRESULT enrollOraclePlatformKey() = 0;
    virtual HRESULT enrollPlatformKey(const std::vector<BYTE> &aPlatformKey,
                                      const com::Guid &aOwner) = 0;
    virtual HRESULT addKek(const std::vector<BYTE> &aKeyEncryptionKey,
                           const com::Guid &aOwner,
                           SignatureType_T aSignatureType) = 0;
    virtual HRESULT addSignatureToDb(const std::vector<BYTE> &aSignature,
                                     const com::Guid &aOwner,
                                     SignatureType_T aSignatureType) = 0;
    virtual HRESULT addSignatureToDbx(const std::vector<BYTE> &aSignature,
                                      const com::Guid &aOwner,
                                      SignatureType_T aSignatureType) = 0;
    virtual HRESULT enrollDefaultMsSignatures() = 0;
    virtual HRESULT addSignatureToMok(const std::vector<BYTE> &aSignature,
                                      const com::Guid &aOwner,
                                      SignatureType_T aSignatureType) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(UefiVariableStoreWrap); /* Shuts up MSC warning C4625. */

};

#endif // !UefiVariableStoreWrap_H_
