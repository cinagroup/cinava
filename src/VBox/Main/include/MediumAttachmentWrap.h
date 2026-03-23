/** @file
 * VirtualBox API class wrapper header for IMediumAttachment.
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

#ifndef MediumAttachmentWrap_H_
#define MediumAttachmentWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MediumAttachmentWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMediumAttachment)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumAttachmentWrap, IMediumAttachment)
    DECLARE_NOT_AGGREGATABLE(MediumAttachmentWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MediumAttachmentWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMediumAttachment)
        COM_INTERFACE_ENTRY2(IDispatch, IMediumAttachment)
        VBOX_TWEAK_INTERFACE_ENTRY(IMediumAttachment)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MediumAttachmentWrap)

    /** @name Public IMediumAttachment properties
     * @{ */
    STDMETHOD(COMGETTER(Machine))(IMachine **aMachine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Medium))(IMedium **aMedium) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Controller))(BSTR *aController) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Port))(LONG *aPort) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Device))(LONG *aDevice) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(DeviceType_T *aType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Passthrough))(BOOL *aPassthrough) RT_OVERRIDE;
    STDMETHOD(COMGETTER(TemporaryEject))(BOOL *aTemporaryEject) RT_OVERRIDE;
    STDMETHOD(COMGETTER(IsEjected))(BOOL *aIsEjected) RT_OVERRIDE;
    STDMETHOD(COMGETTER(NonRotational))(BOOL *aNonRotational) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Discard))(BOOL *aDiscard) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HotPluggable))(BOOL *aHotPluggable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BandwidthGroup))(IBandwidthGroup **aBandwidthGroup) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IMediumAttachment))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMediumAttachment methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IMediumAttachment properties
     * @{ */
    virtual HRESULT getMachine(ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getMedium(ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT getController(com::Utf8Str &aController) = 0;
    virtual HRESULT getPort(LONG *aPort) = 0;
    virtual HRESULT getDevice(LONG *aDevice) = 0;
    virtual HRESULT getType(DeviceType_T *aType) = 0;
    virtual HRESULT getPassthrough(BOOL *aPassthrough) = 0;
    virtual HRESULT getTemporaryEject(BOOL *aTemporaryEject) = 0;
    virtual HRESULT getIsEjected(BOOL *aIsEjected) = 0;
    virtual HRESULT getNonRotational(BOOL *aNonRotational) = 0;
    virtual HRESULT getDiscard(BOOL *aDiscard) = 0;
    virtual HRESULT getHotPluggable(BOOL *aHotPluggable) = 0;
    virtual HRESULT getBandwidthGroup(ComPtr<IBandwidthGroup> &aBandwidthGroup) = 0;
    /** @} */

    /** @name Wrapped IMediumAttachment methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MediumAttachmentWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MediumAttachmentWrap_H_
