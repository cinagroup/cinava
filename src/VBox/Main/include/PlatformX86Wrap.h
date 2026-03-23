/** @file
 * VirtualBox API class wrapper header for IPlatformX86.
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

#ifndef PlatformX86Wrap_H_
#define PlatformX86Wrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PlatformX86Wrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPlatformX86)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PlatformX86Wrap, IPlatformX86)
    DECLARE_NOT_AGGREGATABLE(PlatformX86Wrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PlatformX86Wrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPlatformX86)
        COM_INTERFACE_ENTRY2(IDispatch, IPlatformX86)
        VBOX_TWEAK_INTERFACE_ENTRY(IPlatformX86)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PlatformX86Wrap)

    /** @name Public IPlatformX86 properties
     * @{ */
    STDMETHOD(COMGETTER(HPETEnabled))(BOOL *aHPETEnabled) RT_OVERRIDE;
    STDMETHOD(COMSETTER(HPETEnabled))(BOOL aHPETEnabled) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IPlatformX86))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IPlatformX86 methods
     * @{ */
    STDMETHOD(GetCPUProperty)(CPUPropertyTypeX86_T aProperty,
                              BOOL *aValue) RT_OVERRIDE;
    STDMETHOD(SetCPUProperty)(CPUPropertyTypeX86_T aProperty,
                              BOOL aValue) RT_OVERRIDE;
    STDMETHOD(GetCPUIDLeafByOrdinal)(ULONG aOrdinal,
                                     ULONG *aIdx,
                                     ULONG *aIdxSub,
                                     ULONG *aValEax,
                                     ULONG *aValEbx,
                                     ULONG *aValEcx,
                                     ULONG *aValEdx) RT_OVERRIDE;
    STDMETHOD(GetCPUIDLeaf)(ULONG aIdx,
                            ULONG aIdxSub,
                            ULONG *aValEax,
                            ULONG *aValEbx,
                            ULONG *aValEcx,
                            ULONG *aValEdx) RT_OVERRIDE;
    STDMETHOD(SetCPUIDLeaf)(ULONG aIdx,
                            ULONG aIdxSub,
                            ULONG aValEax,
                            ULONG aValEbx,
                            ULONG aValEcx,
                            ULONG aValEdx) RT_OVERRIDE;
    STDMETHOD(RemoveCPUIDLeaf)(ULONG aIdx,
                               ULONG aIdxSub) RT_OVERRIDE;
    STDMETHOD(RemoveAllCPUIDLeaves)() RT_OVERRIDE;
    STDMETHOD(GetHWVirtExProperty)(HWVirtExPropertyType_T aProperty,
                                   BOOL *aValue) RT_OVERRIDE;
    STDMETHOD(SetHWVirtExProperty)(HWVirtExPropertyType_T aProperty,
                                   BOOL aValue) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IPlatformX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IPlatformX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IPlatformX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IPlatformX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IPlatformX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IPlatformX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IPlatformX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IPlatformX86)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IPlatformX86 properties
     * @{ */
    virtual HRESULT getHPETEnabled(BOOL *aHPETEnabled) = 0;
    virtual HRESULT setHPETEnabled(BOOL aHPETEnabled) = 0;
    /** @} */

    /** @name Wrapped IPlatformX86 methods
     * @{ */
    virtual HRESULT getCPUProperty(CPUPropertyTypeX86_T aProperty,
                                   BOOL *aValue) = 0;
    virtual HRESULT setCPUProperty(CPUPropertyTypeX86_T aProperty,
                                   BOOL aValue) = 0;
    virtual HRESULT getCPUIDLeafByOrdinal(ULONG aOrdinal,
                                          ULONG *aIdx,
                                          ULONG *aIdxSub,
                                          ULONG *aValEax,
                                          ULONG *aValEbx,
                                          ULONG *aValEcx,
                                          ULONG *aValEdx) = 0;
    virtual HRESULT getCPUIDLeaf(ULONG aIdx,
                                 ULONG aIdxSub,
                                 ULONG *aValEax,
                                 ULONG *aValEbx,
                                 ULONG *aValEcx,
                                 ULONG *aValEdx) = 0;
    virtual HRESULT setCPUIDLeaf(ULONG aIdx,
                                 ULONG aIdxSub,
                                 ULONG aValEax,
                                 ULONG aValEbx,
                                 ULONG aValEcx,
                                 ULONG aValEdx) = 0;
    virtual HRESULT removeCPUIDLeaf(ULONG aIdx,
                                    ULONG aIdxSub) = 0;
    virtual HRESULT removeAllCPUIDLeaves() = 0;
    virtual HRESULT getHWVirtExProperty(HWVirtExPropertyType_T aProperty,
                                        BOOL *aValue) = 0;
    virtual HRESULT setHWVirtExProperty(HWVirtExPropertyType_T aProperty,
                                        BOOL aValue) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PlatformX86Wrap); /* Shuts up MSC warning C4625. */

};

#endif // !PlatformX86Wrap_H_
