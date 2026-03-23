/** @file
 * VirtualBox API class wrapper header for IHostX86.
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

#ifndef HostX86Wrap_H_
#define HostX86Wrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE HostX86Wrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IHostX86)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostX86Wrap, IHostX86)
    DECLARE_NOT_AGGREGATABLE(HostX86Wrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(HostX86Wrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IHostX86)
        COM_INTERFACE_ENTRY2(IDispatch, IHostX86)
        VBOX_TWEAK_INTERFACE_ENTRY(IHostX86)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(HostX86Wrap)

    /** @name Public IHostX86 properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IHostX86))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IHostX86 methods
     * @{ */
    STDMETHOD(GetProcessorCPUIDLeaf)(ULONG aCpuId,
                                     ULONG aLeaf,
                                     ULONG aSubLeaf,
                                     ULONG *aValEax,
                                     ULONG *aValEbx,
                                     ULONG *aValEcx,
                                     ULONG *aValEdx) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IHostX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IHostX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IHostX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IHostX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IHostX86)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IHostX86)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IHostX86 properties
     * @{ */
    /** @} */

    /** @name Wrapped IHostX86 methods
     * @{ */
    virtual HRESULT getProcessorCPUIDLeaf(ULONG aCpuId,
                                          ULONG aLeaf,
                                          ULONG aSubLeaf,
                                          ULONG *aValEax,
                                          ULONG *aValEbx,
                                          ULONG *aValEcx,
                                          ULONG *aValEdx) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(HostX86Wrap); /* Shuts up MSC warning C4625. */

};

#endif // !HostX86Wrap_H_
