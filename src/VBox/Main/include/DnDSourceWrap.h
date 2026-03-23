/** @file
 * VirtualBox API class wrapper header for IDnDSource.
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

#ifndef DnDSourceWrap_H_
#define DnDSourceWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DnDSourceWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDnDSource)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DnDSourceWrap, IDnDSource)
    DECLARE_NOT_AGGREGATABLE(DnDSourceWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DnDSourceWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDnDSource)
        COM_INTERFACE_ENTRY(IDnDBase)
        COM_INTERFACE_ENTRY2(IDispatch, IDnDSource)
        VBOX_TWEAK_INTERFACE_ENTRY(IDnDSource)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DnDSourceWrap)

    /** @name Public IDnDBase properties
     * @{ */
    STDMETHOD(COMGETTER(Formats))(ComSafeArrayOut(BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDnDBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDnDBase))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDnDSource properties
     * @{ */
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDnDSource))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDnDSource))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDnDBase methods
     * @{ */
    STDMETHOD(IsFormatSupported)(IN_BSTR aFormat,
                                 BOOL *aSupported) RT_OVERRIDE;
    STDMETHOD(AddFormats)(ComSafeArrayIn(IN_BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(RemoveFormats)(ComSafeArrayIn(IN_BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDnDBase)() RT_OVERRIDE;
    /** @} */

    /** @name Public IDnDSource methods
     * @{ */
    STDMETHOD(DragIsPending)(ULONG aScreenId,
                             ComSafeArrayOut(BSTR, aFormats),
                             ComSafeArrayOut(DnDAction_T, aAllowedActions),
                             DnDAction_T *aDefaultAction) RT_OVERRIDE;
    STDMETHOD(Drop)(IN_BSTR aFormat,
                    DnDAction_T aAction,
                    IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(ReceiveData)(ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDnDSource)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDnDBase properties
     * @{ */
    virtual HRESULT getFormats(std::vector<com::Utf8Str> &aFormats) = 0;
    /** @} */

    /** @name Wrapped IDnDSource properties
     * @{ */
    /** @} */

    /** @name Wrapped IDnDBase methods
     * @{ */
    virtual HRESULT isFormatSupported(const com::Utf8Str &aFormat,
                                      BOOL *aSupported) = 0;
    virtual HRESULT addFormats(const std::vector<com::Utf8Str> &aFormats) = 0;
    virtual HRESULT removeFormats(const std::vector<com::Utf8Str> &aFormats) = 0;
    /** @} */

    /** @name Wrapped IDnDSource methods
     * @{ */
    virtual HRESULT dragIsPending(ULONG aScreenId,
                                  std::vector<com::Utf8Str> &aFormats,
                                  std::vector<DnDAction_T> &aAllowedActions,
                                  DnDAction_T *aDefaultAction) = 0;
    virtual HRESULT drop(const com::Utf8Str &aFormat,
                         DnDAction_T aAction,
                         ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT receiveData(std::vector<BYTE> &aData) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DnDSourceWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DnDSourceWrap_H_
