/** @file
 * VirtualBox API class wrapper header for IDnDBase.
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

#ifndef DnDBaseWrap_H_
#define DnDBaseWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DnDBaseWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDnDBase)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DnDBaseWrap, IDnDBase)
    DECLARE_NOT_AGGREGATABLE(DnDBaseWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DnDBaseWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDnDBase)
        COM_INTERFACE_ENTRY2(IDispatch, IDnDBase)
        VBOX_TWEAK_INTERFACE_ENTRY(IDnDBase)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DnDBaseWrap)

    /** @name Public IDnDBase properties
     * @{ */
    STDMETHOD(COMGETTER(Formats))(ComSafeArrayOut(BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDnDBase))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDnDBase))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDnDBase methods
     * @{ */
    STDMETHOD(IsFormatSupported)(IN_BSTR aFormat,
                                 BOOL *aSupported) RT_OVERRIDE;
    STDMETHOD(AddFormats)(ComSafeArrayIn(IN_BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(RemoveFormats)(ComSafeArrayIn(IN_BSTR, aFormats)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDnDBase)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDnDBase properties
     * @{ */
    virtual HRESULT getFormats(std::vector<com::Utf8Str> &aFormats) = 0;
    /** @} */

    /** @name Wrapped IDnDBase methods
     * @{ */
    virtual HRESULT isFormatSupported(const com::Utf8Str &aFormat,
                                      BOOL *aSupported) = 0;
    virtual HRESULT addFormats(const std::vector<com::Utf8Str> &aFormats) = 0;
    virtual HRESULT removeFormats(const std::vector<com::Utf8Str> &aFormats) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DnDBaseWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DnDBaseWrap_H_
