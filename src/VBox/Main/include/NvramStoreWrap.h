/** @file
 * VirtualBox API class wrapper header for INvramStore.
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

#ifndef NvramStoreWrap_H_
#define NvramStoreWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE NvramStoreWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(INvramStore)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NvramStoreWrap, INvramStore)
    DECLARE_NOT_AGGREGATABLE(NvramStoreWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(NvramStoreWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(INvramStore)
        COM_INTERFACE_ENTRY2(IDispatch, INvramStore)
        VBOX_TWEAK_INTERFACE_ENTRY(INvramStore)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(NvramStoreWrap)

    /** @name Public INvramStore properties
     * @{ */
    STDMETHOD(COMGETTER(NonVolatileStorageFile))(BSTR *aNonVolatileStorageFile) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UefiVariableStore))(IUefiVariableStore **aUefiVariableStore) RT_OVERRIDE;
    STDMETHOD(COMGETTER(KeyId))(BSTR *aKeyId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(KeyStore))(BSTR *aKeyStore) RT_OVERRIDE;
    /** @} */

    /** @name Public INvramStore methods
     * @{ */
    STDMETHOD(InitUefiVariableStore)(ULONG aSize) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped INvramStore properties
     * @{ */
    virtual HRESULT getNonVolatileStorageFile(com::Utf8Str &aNonVolatileStorageFile) = 0;
    virtual HRESULT getUefiVariableStore(ComPtr<IUefiVariableStore> &aUefiVariableStore) = 0;
    virtual HRESULT getKeyId(com::Utf8Str &aKeyId) = 0;
    virtual HRESULT getKeyStore(com::Utf8Str &aKeyStore) = 0;
    /** @} */

    /** @name Wrapped INvramStore methods
     * @{ */
    virtual HRESULT initUefiVariableStore(ULONG aSize) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(NvramStoreWrap); /* Shuts up MSC warning C4625. */

};

#endif // !NvramStoreWrap_H_
