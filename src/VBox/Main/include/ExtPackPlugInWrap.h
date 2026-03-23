/** @file
 * VirtualBox API class wrapper header for IExtPackPlugIn.
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

#ifndef ExtPackPlugInWrap_H_
#define ExtPackPlugInWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ExtPackPlugInWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IExtPackPlugIn)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtPackPlugInWrap, IExtPackPlugIn)
    DECLARE_NOT_AGGREGATABLE(ExtPackPlugInWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ExtPackPlugInWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IExtPackPlugIn)
        COM_INTERFACE_ENTRY2(IDispatch, IExtPackPlugIn)
        VBOX_TWEAK_INTERFACE_ENTRY(IExtPackPlugIn)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ExtPackPlugInWrap)

    /** @name Public IExtPackPlugIn properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Description))(BSTR *aDescription) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Frontend))(BSTR *aFrontend) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ModulePath))(BSTR *aModulePath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IExtPackPlugIn))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IExtPackPlugIn))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IExtPackPlugIn))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IExtPackPlugIn))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IExtPackPlugIn methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IExtPackPlugIn properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getDescription(com::Utf8Str &aDescription) = 0;
    virtual HRESULT getFrontend(com::Utf8Str &aFrontend) = 0;
    virtual HRESULT getModulePath(com::Utf8Str &aModulePath) = 0;
    /** @} */

    /** @name Wrapped IExtPackPlugIn methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ExtPackPlugInWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ExtPackPlugInWrap_H_
