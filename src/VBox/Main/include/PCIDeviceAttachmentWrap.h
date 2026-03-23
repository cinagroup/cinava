/** @file
 * VirtualBox API class wrapper header for IPCIDeviceAttachment.
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

#ifndef PCIDeviceAttachmentWrap_H_
#define PCIDeviceAttachmentWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE PCIDeviceAttachmentWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IPCIDeviceAttachment)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(PCIDeviceAttachmentWrap, IPCIDeviceAttachment)
    DECLARE_NOT_AGGREGATABLE(PCIDeviceAttachmentWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(PCIDeviceAttachmentWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IPCIDeviceAttachment)
        COM_INTERFACE_ENTRY2(IDispatch, IPCIDeviceAttachment)
        VBOX_TWEAK_INTERFACE_ENTRY(IPCIDeviceAttachment)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(PCIDeviceAttachmentWrap)

    /** @name Public IPCIDeviceAttachment properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsPhysicalDevice))(BOOL *aIsPhysicalDevice) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HostAddress))(LONG *aHostAddress) RT_OVERRIDE;
    STDMETHOD(COMGETTER(GuestAddress))(LONG *aGuestAddress) RT_OVERRIDE;
    /** @} */

    /** @name Public IPCIDeviceAttachment methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IPCIDeviceAttachment properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getIsPhysicalDevice(BOOL *aIsPhysicalDevice) = 0;
    virtual HRESULT getHostAddress(LONG *aHostAddress) = 0;
    virtual HRESULT getGuestAddress(LONG *aGuestAddress) = 0;
    /** @} */

    /** @name Wrapped IPCIDeviceAttachment methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(PCIDeviceAttachmentWrap); /* Shuts up MSC warning C4625. */

};

#endif // !PCIDeviceAttachmentWrap_H_
