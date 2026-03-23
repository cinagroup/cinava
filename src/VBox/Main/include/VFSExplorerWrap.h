/** @file
 * VirtualBox API class wrapper header for IVFSExplorer.
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

#ifndef VFSExplorerWrap_H_
#define VFSExplorerWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VFSExplorerWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IVFSExplorer)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VFSExplorerWrap, IVFSExplorer)
    DECLARE_NOT_AGGREGATABLE(VFSExplorerWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VFSExplorerWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVFSExplorer)
        COM_INTERFACE_ENTRY2(IDispatch, IVFSExplorer)
        VBOX_TWEAK_INTERFACE_ENTRY(IVFSExplorer)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(VFSExplorerWrap)

    /** @name Public IVFSExplorer properties
     * @{ */
    STDMETHOD(COMGETTER(Path))(BSTR *aPath) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Type))(VFSType_T *aType) RT_OVERRIDE;
    /** @} */

    /** @name Public IVFSExplorer methods
     * @{ */
    STDMETHOD(Update)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Cd)(IN_BSTR aDir,
                  IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CdUp)(IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(EntryList)(ComSafeArrayOut(BSTR, aNames),
                         ComSafeArrayOut(ULONG, aTypes),
                         ComSafeArrayOut(LONG64, aSizes),
                         ComSafeArrayOut(ULONG, aModes)) RT_OVERRIDE;
    STDMETHOD(Exists)(ComSafeArrayIn(IN_BSTR, aNames),
                      ComSafeArrayOut(BSTR, aExists)) RT_OVERRIDE;
    STDMETHOD(Remove)(ComSafeArrayIn(IN_BSTR, aNames),
                      IProgress **aProgress) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IVFSExplorer properties
     * @{ */
    virtual HRESULT getPath(com::Utf8Str &aPath) = 0;
    virtual HRESULT getType(VFSType_T *aType) = 0;
    /** @} */

    /** @name Wrapped IVFSExplorer methods
     * @{ */
    virtual HRESULT update(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cd(const com::Utf8Str &aDir,
                       ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT cdUp(ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT entryList(std::vector<com::Utf8Str> &aNames,
                              std::vector<ULONG> &aTypes,
                              std::vector<LONG64> &aSizes,
                              std::vector<ULONG> &aModes) = 0;
    virtual HRESULT exists(const std::vector<com::Utf8Str> &aNames,
                           std::vector<com::Utf8Str> &aExists) = 0;
    virtual HRESULT remove(const std::vector<com::Utf8Str> &aNames,
                           ComPtr<IProgress> &aProgress) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(VFSExplorerWrap); /* Shuts up MSC warning C4625. */

};

#endif // !VFSExplorerWrap_H_
