/** @file
 * VirtualBox API class wrapper header for IGuest.
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

#ifndef GuestWrap_H_
#define GuestWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuest)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestWrap, IGuest)
    DECLARE_NOT_AGGREGATABLE(GuestWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuest)
        COM_INTERFACE_ENTRY2(IDispatch, IGuest)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuest)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestWrap)

    /** @name Public IGuest properties
     * @{ */
    STDMETHOD(COMGETTER(OSTypeId))(BSTR *aOSTypeId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AdditionsRunLevel))(AdditionsRunLevelType_T *aAdditionsRunLevel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AdditionsVersion))(BSTR *aAdditionsVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(AdditionsRevision))(ULONG *aAdditionsRevision) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DnDSource))(IGuestDnDSource **aDnDSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(DnDTarget))(IGuestDnDTarget **aDnDTarget) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Facilities))(ComSafeArrayOut(IAdditionsFacility *, aFacilities)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Sessions))(ComSafeArrayOut(IGuestSession *, aSessions)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MemoryBalloonSize))(ULONG *aMemoryBalloonSize) RT_OVERRIDE;
    STDMETHOD(COMSETTER(MemoryBalloonSize))(ULONG aMemoryBalloonSize) RT_OVERRIDE;
    STDMETHOD(COMGETTER(StatisticsUpdateInterval))(ULONG *aStatisticsUpdateInterval) RT_OVERRIDE;
    STDMETHOD(COMSETTER(StatisticsUpdateInterval))(ULONG aStatisticsUpdateInterval) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IGuest))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IGuest))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuest methods
     * @{ */
    STDMETHOD(InternalGetStatistics)(ULONG *aCpuUser,
                                     ULONG *aCpuKernel,
                                     ULONG *aCpuIdle,
                                     ULONG *aMemTotal,
                                     ULONG *aMemFree,
                                     ULONG *aMemBalloon,
                                     ULONG *aMemShared,
                                     ULONG *aMemCache,
                                     ULONG *aPagedTotal,
                                     ULONG *aMemAllocTotal,
                                     ULONG *aMemFreeTotal,
                                     ULONG *aMemBalloonTotal,
                                     ULONG *aMemSharedTotal) RT_OVERRIDE;
    STDMETHOD(GetFacilityStatus)(AdditionsFacilityType_T aFacility,
                                 LONG64 *aTimestamp,
                                 AdditionsFacilityStatus_T *aStatus) RT_OVERRIDE;
    STDMETHOD(GetAdditionsStatus)(AdditionsRunLevelType_T aLevel,
                                  BOOL *aActive) RT_OVERRIDE;
    STDMETHOD(SetCredentials)(IN_BSTR aUserName,
                              IN_BSTR aPassword,
                              IN_BSTR aDomain,
                              BOOL aAllowInteractiveLogon) RT_OVERRIDE;
    STDMETHOD(CreateSession)(IN_BSTR aUser,
                             IN_BSTR aPassword,
                             IN_BSTR aDomain,
                             IN_BSTR aSessionName,
                             IGuestSession **aGuestSession) RT_OVERRIDE;
    STDMETHOD(FindSession)(IN_BSTR aSessionName,
                           ComSafeArrayOut(IGuestSession *, aSessions)) RT_OVERRIDE;
    STDMETHOD(Shutdown)(ComSafeArrayIn(GuestShutdownFlag_T, aFlags)) RT_OVERRIDE;
    STDMETHOD(UpdateGuestAdditions)(IN_BSTR aSource,
                                    ComSafeArrayIn(IN_BSTR, aArguments),
                                    ComSafeArrayIn(AdditionsUpdateFlag_T, aFlags),
                                    IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IGuest)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IGuest)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IGuest)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IGuest)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IGuest)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IGuest)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IGuest)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IGuest)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IGuest properties
     * @{ */
    virtual HRESULT getOSTypeId(com::Utf8Str &aOSTypeId) = 0;
    virtual HRESULT getAdditionsRunLevel(AdditionsRunLevelType_T *aAdditionsRunLevel) = 0;
    virtual HRESULT getAdditionsVersion(com::Utf8Str &aAdditionsVersion) = 0;
    virtual HRESULT getAdditionsRevision(ULONG *aAdditionsRevision) = 0;
    virtual HRESULT getDnDSource(ComPtr<IGuestDnDSource> &aDnDSource) = 0;
    virtual HRESULT getDnDTarget(ComPtr<IGuestDnDTarget> &aDnDTarget) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getFacilities(std::vector<ComPtr<IAdditionsFacility> > &aFacilities) = 0;
    virtual HRESULT getSessions(std::vector<ComPtr<IGuestSession> > &aSessions) = 0;
    virtual HRESULT getMemoryBalloonSize(ULONG *aMemoryBalloonSize) = 0;
    virtual HRESULT setMemoryBalloonSize(ULONG aMemoryBalloonSize) = 0;
    virtual HRESULT getStatisticsUpdateInterval(ULONG *aStatisticsUpdateInterval) = 0;
    virtual HRESULT setStatisticsUpdateInterval(ULONG aStatisticsUpdateInterval) = 0;
    /** @} */

    /** @name Wrapped IGuest methods
     * @{ */
    virtual HRESULT internalGetStatistics(ULONG *aCpuUser,
                                          ULONG *aCpuKernel,
                                          ULONG *aCpuIdle,
                                          ULONG *aMemTotal,
                                          ULONG *aMemFree,
                                          ULONG *aMemBalloon,
                                          ULONG *aMemShared,
                                          ULONG *aMemCache,
                                          ULONG *aPagedTotal,
                                          ULONG *aMemAllocTotal,
                                          ULONG *aMemFreeTotal,
                                          ULONG *aMemBalloonTotal,
                                          ULONG *aMemSharedTotal) = 0;
    virtual HRESULT getFacilityStatus(AdditionsFacilityType_T aFacility,
                                      LONG64 *aTimestamp,
                                      AdditionsFacilityStatus_T *aStatus) = 0;
    virtual HRESULT getAdditionsStatus(AdditionsRunLevelType_T aLevel,
                                       BOOL *aActive) = 0;
    virtual HRESULT setCredentials(const com::Utf8Str &aUserName,
                                   const com::Utf8Str &aPassword,
                                   const com::Utf8Str &aDomain,
                                   BOOL aAllowInteractiveLogon) = 0;
    virtual HRESULT createSession(const com::Utf8Str &aUser,
                                  const com::Utf8Str &aPassword,
                                  const com::Utf8Str &aDomain,
                                  const com::Utf8Str &aSessionName,
                                  ComPtr<IGuestSession> &aGuestSession) = 0;
    virtual HRESULT findSession(const com::Utf8Str &aSessionName,
                                std::vector<ComPtr<IGuestSession> > &aSessions) = 0;
    virtual HRESULT shutdown(const std::vector<GuestShutdownFlag_T> &aFlags) = 0;
    virtual HRESULT updateGuestAdditions(const com::Utf8Str &aSource,
                                         const std::vector<com::Utf8Str> &aArguments,
                                         const std::vector<AdditionsUpdateFlag_T> &aFlags,
                                         ComPtr<IProgress> &aProgress) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestWrap_H_
