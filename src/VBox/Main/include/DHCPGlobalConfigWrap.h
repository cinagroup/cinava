/** @file
 * VirtualBox API class wrapper header for IDHCPGlobalConfig.
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

#ifndef DHCPGlobalConfigWrap_H_
#define DHCPGlobalConfigWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DHCPGlobalConfigWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDHCPGlobalConfig)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DHCPGlobalConfigWrap, IDHCPGlobalConfig)
    DECLARE_NOT_AGGREGATABLE(DHCPGlobalConfigWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DHCPGlobalConfigWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDHCPGlobalConfig)
        COM_INTERFACE_ENTRY(IDHCPConfig)
        COM_INTERFACE_ENTRY2(IDispatch, IDHCPGlobalConfig)
        VBOX_TWEAK_INTERFACE_ENTRY(IDHCPGlobalConfig)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DHCPGlobalConfigWrap)

    /** @name Public IDHCPConfig properties
     * @{ */
    STDMETHOD(COMGETTER(Scope))(DHCPConfigScope_T *aScope) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MinLeaseTime))(ULONG *aMinLeaseTime) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MinLeaseTime))(ULONG aMinLeaseTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DefaultLeaseTime))(ULONG *aDefaultLeaseTime) RT_OVERRIDE;
    STDMETHOD(COMSETTER(DefaultLeaseTime))(ULONG aDefaultLeaseTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxLeaseTime))(ULONG *aMaxLeaseTime) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MaxLeaseTime))(ULONG aMaxLeaseTime) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ForcedOptions))(ComSafeArrayOut(DHCPOption_T, aForcedOptions)) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ForcedOptions))(ComSafeArrayIn(DHCPOption_T, aForcedOptions)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(SuppressedOptions))(ComSafeArrayOut(DHCPOption_T, aSuppressedOptions)) RT_OVERRIDE;
    STDMETHOD(COMSETTER(SuppressedOptions))(ComSafeArrayIn(DHCPOption_T, aSuppressedOptions)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IDHCPConfig))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDHCPGlobalConfig properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDHCPGlobalConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDHCPGlobalConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IDHCPGlobalConfig))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IDHCPGlobalConfig))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDHCPConfig methods
     * @{ */
    STDMETHOD(SetOption)(DHCPOption_T aOption,
                         DHCPOptionEncoding_T aEncoding,
                         IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(RemoveOption)(DHCPOption_T aOption) RT_OVERRIDE;
    STDMETHOD(RemoveAllOptions)() RT_OVERRIDE;
    STDMETHOD(GetOption)(DHCPOption_T aOption,
                         DHCPOptionEncoding_T *aEncoding,
                         BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(GetAllOptions)(ComSafeArrayOut(DHCPOption_T, aOptions),
                             ComSafeArrayOut(DHCPOptionEncoding_T, aEncodings),
                             ComSafeArrayOut(BSTR, aValues)) RT_OVERRIDE;
    STDMETHOD(Remove)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDHCPConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IDHCPConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IDHCPConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IDHCPConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IDHCPConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IDHCPConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IDHCPConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IDHCPConfig)() RT_OVERRIDE;
    /** @} */

    /** @name Public IDHCPGlobalConfig methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IDHCPGlobalConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IDHCPGlobalConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IDHCPGlobalConfig)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IDHCPGlobalConfig)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDHCPConfig properties
     * @{ */
    virtual HRESULT getScope(DHCPConfigScope_T *aScope) = 0;
    virtual HRESULT getMinLeaseTime(ULONG *aMinLeaseTime) = 0;
    virtual HRESULT setMinLeaseTime(ULONG aMinLeaseTime) = 0;
    virtual HRESULT getDefaultLeaseTime(ULONG *aDefaultLeaseTime) = 0;
    virtual HRESULT setDefaultLeaseTime(ULONG aDefaultLeaseTime) = 0;
    virtual HRESULT getMaxLeaseTime(ULONG *aMaxLeaseTime) = 0;
    virtual HRESULT setMaxLeaseTime(ULONG aMaxLeaseTime) = 0;
    virtual HRESULT getForcedOptions(std::vector<DHCPOption_T> &aForcedOptions) = 0;
    virtual HRESULT setForcedOptions(const std::vector<DHCPOption_T> &aForcedOptions) = 0;
    virtual HRESULT getSuppressedOptions(std::vector<DHCPOption_T> &aSuppressedOptions) = 0;
    virtual HRESULT setSuppressedOptions(const std::vector<DHCPOption_T> &aSuppressedOptions) = 0;
    /** @} */

    /** @name Wrapped IDHCPGlobalConfig properties
     * @{ */
    /** @} */

    /** @name Wrapped IDHCPConfig methods
     * @{ */
    virtual HRESULT setOption(DHCPOption_T aOption,
                              DHCPOptionEncoding_T aEncoding,
                              const com::Utf8Str &aValue) = 0;
    virtual HRESULT removeOption(DHCPOption_T aOption) = 0;
    virtual HRESULT removeAllOptions() = 0;
    virtual HRESULT getOption(DHCPOption_T aOption,
                              DHCPOptionEncoding_T *aEncoding,
                              com::Utf8Str &aValue) = 0;
    virtual HRESULT getAllOptions(std::vector<DHCPOption_T> &aOptions,
                                  std::vector<DHCPOptionEncoding_T> &aEncodings,
                                  std::vector<com::Utf8Str> &aValues) = 0;
    virtual HRESULT remove() = 0;
    /** @} */

    /** @name Wrapped IDHCPGlobalConfig methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DHCPGlobalConfigWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DHCPGlobalConfigWrap_H_
