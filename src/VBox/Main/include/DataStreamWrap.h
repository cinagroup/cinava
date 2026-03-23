/** @file
 * VirtualBox API class wrapper header for IDataStream.
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

#ifndef DataStreamWrap_H_
#define DataStreamWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DataStreamWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDataStream)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DataStreamWrap, IDataStream)
    DECLARE_NOT_AGGREGATABLE(DataStreamWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DataStreamWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDataStream)
        COM_INTERFACE_ENTRY2(IDispatch, IDataStream)
        VBOX_TWEAK_INTERFACE_ENTRY(IDataStream)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DataStreamWrap)

    /** @name Public IDataStream properties
     * @{ */
    STDMETHOD(COMGETTER(ReadSize))(ULONG *aReadSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IDataStream))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDataStream methods
     * @{ */
    STDMETHOD(Read)(ULONG aSize,
                    ULONG aTimeoutMS,
                    ComSafeArrayOut(BYTE, aData)) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDataStream)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IDataStream)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IDataStream)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IDataStream)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDataStream properties
     * @{ */
    virtual HRESULT getReadSize(ULONG *aReadSize) = 0;
    /** @} */

    /** @name Wrapped IDataStream methods
     * @{ */
    virtual HRESULT read(ULONG aSize,
                         ULONG aTimeoutMS,
                         std::vector<BYTE> &aData) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DataStreamWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DataStreamWrap_H_
