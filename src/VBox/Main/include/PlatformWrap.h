/** @file
 * VirtualBox API class wrapper header for IPlatform.
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

#ifndef PlatformWrap_H_
#define PlatformWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PlatformWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPlatform)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PlatformWrap, IPlatform)
    DECLARE_NOT_AGGREGATABLE(PlatformWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PlatformWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPlatform)
        COM_INTERFACE_ENTRY2(IDispatch, IPlatform)
        VBOX_TWEAK_INTERFACE_ENTRY(IPlatform)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PlatformWrap)

    /** @name Public IPlatform properties
     * @{ */
    STDMETHOD(COMGETTER(Architecture))(PlatformArchitecture_T *aArchitecture) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Architecture))(PlatformArchitecture_T aArchitecture) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Properties))(IPlatformProperties **aProperties) RT_OVERRIDE;
    STDMETHOD(COMGETTER(X86))(IPlatformX86 **aX86) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ARM))(IPlatformARM **aARM) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ChipsetType))(ChipsetType_T *aChipsetType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ChipsetType))(ChipsetType_T aChipsetType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IommuType))(IommuType_T *aIommuType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(IommuType))(IommuType_T aIommuType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(RTCUseUTC))(BOOL *aRTCUseUTC) RT_OVERRIDE;
    STDMETHOD(COMSETTER(RTCUseUTC))(BOOL aRTCUseUTC) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IPlatform))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IPlatform methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IPlatform)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IPlatform)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IPlatform)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IPlatform)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IPlatform)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IPlatform)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IPlatform)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IPlatform)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IPlatform properties
     * @{ */
    virtual HRESULT getArchitecture(PlatformArchitecture_T *aArchitecture) = 0;
    virtual HRESULT setArchitecture(PlatformArchitecture_T aArchitecture) = 0;
    virtual HRESULT getProperties(ComPtr<IPlatformProperties> &aProperties) = 0;
    virtual HRESULT getX86(ComPtr<IPlatformX86> &aX86) = 0;
    virtual HRESULT getARM(ComPtr<IPlatformARM> &aARM) = 0;
    virtual HRESULT getChipsetType(ChipsetType_T *aChipsetType) = 0;
    virtual HRESULT setChipsetType(ChipsetType_T aChipsetType) = 0;
    virtual HRESULT getIommuType(IommuType_T *aIommuType) = 0;
    virtual HRESULT setIommuType(IommuType_T aIommuType) = 0;
    virtual HRESULT getRTCUseUTC(BOOL *aRTCUseUTC) = 0;
    virtual HRESULT setRTCUseUTC(BOOL aRTCUseUTC) = 0;
    /** @} */

    /** @name Wrapped IPlatform methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PlatformWrap); /* Shuts up MSC warning C4625. */

};

#endif // !PlatformWrap_H_
