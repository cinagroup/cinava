/** @file
 * VirtualBox API class wrapper header for IMediumIO.
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

#ifndef MediumIOWrap_H_
#define MediumIOWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE MediumIOWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IMediumIO)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumIOWrap, IMediumIO)
    DECLARE_NOT_AGGREGATABLE(MediumIOWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(MediumIOWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IMediumIO)
        COM_INTERFACE_ENTRY2(IDispatch, IMediumIO)
        VBOX_TWEAK_INTERFACE_ENTRY(IMediumIO)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(MediumIOWrap)

    /** @name Public IMediumIO properties
     * @{ */
    STDMETHOD(COMGETTER(Medium))(IMedium **aMedium) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Writable))(BOOL *aWritable) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Explorer))(IVFSExplorer **aExplorer) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IMediumIO))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IMediumIO methods
     * @{ */
    STDMETHOD(Read)(LONG64 aOffset,
                    ULONG aSize,
                    ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(Write)(LONG64 aOffset,
                     ComSafeArrayIn(BYTE, aData),
                     ULONG *aWritten) RT_OVERRIDE;
    STDMETHOD(FormatFAT)(BOOL aQuick) RT_OVERRIDE;
    STDMETHOD(InitializePartitionTable)(PartitionTableType_T aFormat,
                                        BOOL aWholeDiskInOneEntry) RT_OVERRIDE;
    STDMETHOD(ConvertToStream)(IN_BSTR aFormat,
                               ComSafeArrayIn(MediumVariant_T, aVariant),
                               ULONG aBufferSize,
                               IDataStream **aStream,
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(Close)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IMediumIO)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IMediumIO)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IMediumIO)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IMediumIO)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IMediumIO properties
     * @{ */
    virtual HRESULT getMedium(ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT getWritable(BOOL *aWritable) = 0;
    virtual HRESULT getExplorer(ComPtr<IVFSExplorer> &aExplorer) = 0;
    /** @} */

    /** @name Wrapped IMediumIO methods
     * @{ */
    virtual HRESULT read(LONG64 aOffset,
                         ULONG aSize,
                         std::vector<BYTE> &aData) = 0;
    virtual HRESULT write(LONG64 aOffset,
                          const std::vector<BYTE> &aData,
                          ULONG *aWritten) = 0;
    virtual HRESULT formatFAT(BOOL aQuick) = 0;
    virtual HRESULT initializePartitionTable(PartitionTableType_T aFormat,
                                             BOOL aWholeDiskInOneEntry) = 0;
    virtual HRESULT convertToStream(const com::Utf8Str &aFormat,
                                    const std::vector<MediumVariant_T> &aVariant,
                                    ULONG aBufferSize,
                                    ComPtr<IDataStream> &aStream,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT close() = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(MediumIOWrap); /* Shuts up MSC warning C4625. */

};

#endif // !MediumIOWrap_H_
