/** @file
 * VirtualBox API class wrapper header for ICertificate.
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

#ifndef CertificateWrap_H_
#define CertificateWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE CertificateWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(ICertificate)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CertificateWrap, ICertificate)
    DECLARE_NOT_AGGREGATABLE(CertificateWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(CertificateWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(ICertificate)
        COM_INTERFACE_ENTRY2(IDispatch, ICertificate)
        VBOX_TWEAK_INTERFACE_ENTRY(ICertificate)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(CertificateWrap)

    /** @name Public ICertificate properties
     * @{ */
    STDMETHOD(COMGETTER(VersionNumber))(CertificateVersion_T *aVersionNumber) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SerialNumber))(BSTR *aSerialNumber) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SignatureAlgorithmOID))(BSTR *aSignatureAlgorithmOID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SignatureAlgorithmName))(BSTR *aSignatureAlgorithmName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IssuerName))(ComSafeArrayOut(BSTR, aIssuerName)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SubjectName))(ComSafeArrayOut(BSTR, aSubjectName)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(FriendlyName))(BSTR *aFriendlyName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ValidityPeriodNotBefore))(BSTR *aValidityPeriodNotBefore) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ValidityPeriodNotAfter))(BSTR *aValidityPeriodNotAfter) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PublicKeyAlgorithmOID))(BSTR *aPublicKeyAlgorithmOID) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PublicKeyAlgorithm))(BSTR *aPublicKeyAlgorithm) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SubjectPublicKey))(ComSafeArrayOut(BYTE, aSubjectPublicKey)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IssuerUniqueIdentifier))(BSTR *aIssuerUniqueIdentifier) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SubjectUniqueIdentifier))(BSTR *aSubjectUniqueIdentifier) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CertificateAuthority))(BOOL *aCertificateAuthority) RT_OVERRIDE;
    STDMETHOD(COMGETTER(KeyUsage))(ULONG *aKeyUsage) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ExtendedKeyUsage))(ComSafeArrayOut(BSTR, aExtendedKeyUsage)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RawCertData))(ComSafeArrayOut(BYTE, aRawCertData)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SelfSigned))(BOOL *aSelfSigned) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Trusted))(BOOL *aTrusted) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Expired))(BOOL *aExpired) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12ICertificate))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public ICertificate methods
     * @{ */
    STDMETHOD(IsCurrentlyExpired)(BOOL *aResult) RT_OVERRIDE;
    STDMETHOD(QueryInfo)(LONG aWhat,
                         BSTR *aResult) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1ICertificate)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2ICertificate)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped ICertificate properties
     * @{ */
    virtual HRESULT getVersionNumber(CertificateVersion_T *aVersionNumber) = 0;
    virtual HRESULT getSerialNumber(com::Utf8Str &aSerialNumber) = 0;
    virtual HRESULT getSignatureAlgorithmOID(com::Utf8Str &aSignatureAlgorithmOID) = 0;
    virtual HRESULT getSignatureAlgorithmName(com::Utf8Str &aSignatureAlgorithmName) = 0;
    virtual HRESULT getIssuerName(std::vector<com::Utf8Str> &aIssuerName) = 0;
    virtual HRESULT getSubjectName(std::vector<com::Utf8Str> &aSubjectName) = 0;
    virtual HRESULT getFriendlyName(com::Utf8Str &aFriendlyName) = 0;
    virtual HRESULT getValidityPeriodNotBefore(com::Utf8Str &aValidityPeriodNotBefore) = 0;
    virtual HRESULT getValidityPeriodNotAfter(com::Utf8Str &aValidityPeriodNotAfter) = 0;
    virtual HRESULT getPublicKeyAlgorithmOID(com::Utf8Str &aPublicKeyAlgorithmOID) = 0;
    virtual HRESULT getPublicKeyAlgorithm(com::Utf8Str &aPublicKeyAlgorithm) = 0;
    virtual HRESULT getSubjectPublicKey(std::vector<BYTE> &aSubjectPublicKey) = 0;
    virtual HRESULT getIssuerUniqueIdentifier(com::Utf8Str &aIssuerUniqueIdentifier) = 0;
    virtual HRESULT getSubjectUniqueIdentifier(com::Utf8Str &aSubjectUniqueIdentifier) = 0;
    virtual HRESULT getCertificateAuthority(BOOL *aCertificateAuthority) = 0;
    virtual HRESULT getKeyUsage(ULONG *aKeyUsage) = 0;
    virtual HRESULT getExtendedKeyUsage(std::vector<com::Utf8Str> &aExtendedKeyUsage) = 0;
    virtual HRESULT getRawCertData(std::vector<BYTE> &aRawCertData) = 0;
    virtual HRESULT getSelfSigned(BOOL *aSelfSigned) = 0;
    virtual HRESULT getTrusted(BOOL *aTrusted) = 0;
    virtual HRESULT getExpired(BOOL *aExpired) = 0;
    /** @} */

    /** @name Wrapped ICertificate methods
     * @{ */
    virtual HRESULT isCurrentlyExpired(BOOL *aResult) = 0;
    virtual HRESULT queryInfo(LONG aWhat,
                              com::Utf8Str &aResult) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(CertificateWrap); /* Shuts up MSC warning C4625. */

};

#endif // !CertificateWrap_H_
