/** @file
 * VirtualBox API class wrapper header for IResourceStore.
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

#ifndef ResourceStoreWrap_H_
#define ResourceStoreWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE ResourceStoreWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IResourceStore)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ResourceStoreWrap, IResourceStore)
    DECLARE_NOT_AGGREGATABLE(ResourceStoreWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(ResourceStoreWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IResourceStore)
        COM_INTERFACE_ENTRY2(IDispatch, IResourceStore)
        VBOX_TWEAK_INTERFACE_ENTRY(IResourceStore)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(ResourceStoreWrap)

    /** @name Public IResourceStore properties
     * @{ */
    STDMETHOD(COMGETTER(MidlDoesNotLikeEmptyInterfaces))(BOOL *aMidlDoesNotLikeEmptyInterfaces) RT_OVERRIDE;
    /** @} */

    /** @name Public IResourceStore methods
     * @{ */
    /** @} */

private:
    /** @name Wrapped IResourceStore properties
     * @{ */
    //    virtual HRESULT getMidlDoesNotLikeEmptyInterfaces(BOOL *aMidlDoesNotLikeEmptyInterfaces) = 0;
    /** @} */

    /** @name Wrapped IResourceStore methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(ResourceStoreWrap); /* Shuts up MSC warning C4625. */

};

#endif // !ResourceStoreWrap_H_
