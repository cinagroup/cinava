/** @file
 * VirtualBox API class wrapper header for IGuestDnDTarget.
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

#ifndef GuestDnDTargetWrap_H_
#define GuestDnDTargetWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestDnDTargetWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestDnDTarget)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestDnDTargetWrap, IGuestDnDTarget)
    DECLARE_NOT_AGGREGATABLE(GuestDnDTargetWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestDnDTargetWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestDnDTarget)
        COM_INTERFACE_ENTRY(IDnDTarget)
        COM_INTERFACE_ENTRY(IDnDBase)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestDnDTarget)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestDnDTarget)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestDnDTargetWrap)

    /** @name Public IDnDBase properties
     * @{ */
    STDMETHOD(COMGETTER(Formats))(ComSafeArrayOut(BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDnDBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDnDBase))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDnDTarget properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDnDTarget))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDnDTarget))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestDnDTarget properties
     * @{ */
    STDMETHOD(COMGETTER(MidlDoesNotLikeEmptyInterfaces))(BOOL *aMidlDoesNotLikeEmptyInterfaces) RT_OVERRIDE;
    /** @} */

    /** @name Public IDnDBase methods
     * @{ */
    STDMETHOD(IsFormatSupported)(IN_BSTR aFormat,
                                 BOOL *aSupported) RT_OVERRIDE;
    STDMETHOD(AddFormats)(ComSafeArrayIn(IN_BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(RemoveFormats)(ComSafeArrayIn(IN_BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDnDBase)() RT_OVERRIDE;
    /** @} */

    /** @name Public IDnDTarget methods
     * @{ */
    STDMETHOD(Enter)(ULONG aScreenId,
                     ULONG aY,
                     ULONG aX,
                     DnDAction_T aDefaultAction,
                     ComSafeArrayIn(DnDAction_T, aAllowedActions),
                     ComSafeArrayIn(IN_BSTR, aFormats),
                     DnDAction_T *aResultAction) RT_OVERRIDE;
    STDMETHOD(Move)(ULONG aScreenId,
                    ULONG aX,
                    ULONG aY,
                    DnDAction_T aDefaultAction,
                    ComSafeArrayIn(DnDAction_T, aAllowedActions),
                    ComSafeArrayIn(IN_BSTR, aFormats),
                    DnDAction_T *aResultAction) RT_OVERRIDE;
    STDMETHOD(Leave)(ULONG aScreenId) RT_OVERRIDE;
    STDMETHOD(Drop)(ULONG aScreenId,
                    ULONG aX,
                    ULONG aY,
                    DnDAction_T aDefaultAction,
                    ComSafeArrayIn(DnDAction_T, aAllowedActions),
                    ComSafeArrayIn(IN_BSTR, aFormats),
                    BSTR *aFormat,
                    DnDAction_T *aResultAction) RT_OVERRIDE;
    STDMETHOD(SendData)(ULONG aScreenId,
                        IN_BSTR aFormat,
                        ComSafeArrayIn(BYTE, aData),
                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Cancel)(BOOL *aVeto) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDnDTarget)() RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestDnDTarget methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IDnDBase properties
     * @{ */
    virtual HRESULT getFormats(std::vector<com::Utf8Str> &aFormats) = 0;
    /** @} */

    /** @name Wrapped IDnDTarget properties
     * @{ */
    /** @} */

    /** @name Wrapped IGuestDnDTarget properties
     * @{ */
    //    virtual HRESULT getMidlDoesNotLikeEmptyInterfaces(BOOL *aMidlDoesNotLikeEmptyInterfaces) = 0;
    /** @} */

    /** @name Wrapped IDnDBase methods
     * @{ */
    virtual HRESULT isFormatSupported(const com::Utf8Str &aFormat,
                                      BOOL *aSupported) = 0;
    virtual HRESULT addFormats(const std::vector<com::Utf8Str> &aFormats) = 0;
    virtual HRESULT removeFormats(const std::vector<com::Utf8Str> &aFormats) = 0;
    /** @} */

    /** @name Wrapped IDnDTarget methods
     * @{ */
    virtual HRESULT enter(ULONG aScreenId,
                          ULONG aY,
                          ULONG aX,
                          DnDAction_T aDefaultAction,
                          const std::vector<DnDAction_T> &aAllowedActions,
                          const std::vector<com::Utf8Str> &aFormats,
                          DnDAction_T *aResultAction) = 0;
    virtual HRESULT move(ULONG aScreenId,
                         ULONG aX,
                         ULONG aY,
                         DnDAction_T aDefaultAction,
                         const std::vector<DnDAction_T> &aAllowedActions,
                         const std::vector<com::Utf8Str> &aFormats,
                         DnDAction_T *aResultAction) = 0;
    virtual HRESULT leave(ULONG aScreenId) = 0;
    virtual HRESULT drop(ULONG aScreenId,
                         ULONG aX,
                         ULONG aY,
                         DnDAction_T aDefaultAction,
                         const std::vector<DnDAction_T> &aAllowedActions,
                         const std::vector<com::Utf8Str> &aFormats,
                         com::Utf8Str &aFormat,
                         DnDAction_T *aResultAction) = 0;
    virtual HRESULT sendData(ULONG aScreenId,
                             const com::Utf8Str &aFormat,
                             const std::vector<BYTE> &aData,
                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cancel(BOOL *aVeto) = 0;
    /** @} */

    /** @name Wrapped IGuestDnDTarget methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestDnDTargetWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestDnDTargetWrap_H_
