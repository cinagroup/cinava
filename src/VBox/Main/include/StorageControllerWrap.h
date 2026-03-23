/** @file
 * VirtualBox API class wrapper header for IStorageController.
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

#ifndef StorageControllerWrap_H_
#define StorageControllerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE StorageControllerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IStorageController)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(StorageControllerWrap, IStorageController)
    DECLARE_NOT_AGGREGATABLE(StorageControllerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(StorageControllerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IStorageController)
        COM_INTERFACE_ENTRY2(IDispatch, IStorageController)
        VBOX_TWEAK_INTERFACE_ENTRY(IStorageController)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(StorageControllerWrap)

    /** @name Public IStorageController properties
     * @{ */
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Name))(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxDevicesPerPortCount))(ULONG *aMaxDevicesPerPortCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MinPortCount))(ULONG *aMinPortCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MaxPortCount))(ULONG *aMaxPortCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Instance))(ULONG *aInstance) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Instance))(ULONG aInstance) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PortCount))(ULONG *aPortCount) RT_OVERRIDE;
    STDMETHOD(COMSETTER(PortCount))(ULONG aPortCount) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Bus))(StorageBus_T *aBus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ControllerType))(StorageControllerType_T *aControllerType) RT_OVERRIDE;
    STDMETHOD(COMSETTER(ControllerType))(StorageControllerType_T aControllerType) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UseHostIOCache))(BOOL *aUseHostIOCache) RT_OVERRIDE;
    STDMETHOD(COMSETTER(UseHostIOCache))(BOOL aUseHostIOCache) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Bootable))(BOOL *aBootable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IStorageController))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IStorageController methods
     * @{ */
    STDMETHOD(InternalAndReservedMethod1IStorageController)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IStorageController)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IStorageController)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IStorageController)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IStorageController properties
     * @{ */
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT setName(const com::Utf8Str &aName) = 0;
    virtual HRESULT getMaxDevicesPerPortCount(ULONG *aMaxDevicesPerPortCount) = 0;
    virtual HRESULT getMinPortCount(ULONG *aMinPortCount) = 0;
    virtual HRESULT getMaxPortCount(ULONG *aMaxPortCount) = 0;
    virtual HRESULT getInstance(ULONG *aInstance) = 0;
    virtual HRESULT setInstance(ULONG aInstance) = 0;
    virtual HRESULT getPortCount(ULONG *aPortCount) = 0;
    virtual HRESULT setPortCount(ULONG aPortCount) = 0;
    virtual HRESULT getBus(StorageBus_T *aBus) = 0;
    virtual HRESULT getControllerType(StorageControllerType_T *aControllerType) = 0;
    virtual HRESULT setControllerType(StorageControllerType_T aControllerType) = 0;
    virtual HRESULT getUseHostIOCache(BOOL *aUseHostIOCache) = 0;
    virtual HRESULT setUseHostIOCache(BOOL aUseHostIOCache) = 0;
    virtual HRESULT getBootable(BOOL *aBootable) = 0;
    /** @} */

    /** @name Wrapped IStorageController methods
     * @{ */
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(StorageControllerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !StorageControllerWrap_H_
