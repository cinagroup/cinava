/** @file
 * VirtualBox API class wrapper header for IDisplay.
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

#ifndef DisplayWrap_H_
#define DisplayWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE DisplayWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IDisplay)
    , VBOX_SCRIPTABLE_IMPL(IEventListener)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DisplayWrap, IDisplay)
    DECLARE_NOT_AGGREGATABLE(DisplayWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(DisplayWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IDisplay)
        COM_INTERFACE_ENTRY2(IDispatch, IDisplay)
        COM_INTERFACE_ENTRY(IEventListener)
        VBOX_TWEAK_INTERFACE_ENTRY(IDisplay)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(DisplayWrap)

    /** @name Public IDisplay properties
     * @{ */
    STDMETHOD(COMGETTER(GuestScreenLayout))(ComSafeArrayOut(IGuestScreenInfo *, aGuestScreenLayout)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute13IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute14IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute15IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute16IDisplay))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IDisplay methods
     * @{ */
    STDMETHOD(GetScreenResolution)(ULONG aScreenId,
                                   ULONG *aWidth,
                                   ULONG *aHeight,
                                   ULONG *aBitsPerPixel,
                                   LONG *aXOrigin,
                                   LONG *aYOrigin,
                                   GuestMonitorStatus_T *aGuestMonitorStatus) RT_OVERRIDE;
    STDMETHOD(AttachFramebuffer)(ULONG aScreenId,
                                 IFramebuffer *aFramebuffer,
                                 BSTR *aId) RT_OVERRIDE;
    STDMETHOD(DetachFramebuffer)(ULONG aScreenId,
                                 IN_BSTR aId) RT_OVERRIDE;
    STDMETHOD(QueryFramebuffer)(ULONG aScreenId,
                                IFramebuffer **aFramebuffer) RT_OVERRIDE;
    STDMETHOD(SetVideoModeHint)(ULONG aDisplay,
                                BOOL aEnabled,
                                BOOL aChangeOrigin,
                                LONG aOriginX,
                                LONG aOriginY,
                                ULONG aWidth,
                                ULONG aHeight,
                                ULONG aBitsPerPixel,
                                BOOL aNotify) RT_OVERRIDE;
    STDMETHOD(GetVideoModeHint)(ULONG aDisplay,
                                BOOL *aEnabled,
                                BOOL *aChangeOrigin,
                                LONG *aOriginX,
                                LONG *aOriginY,
                                ULONG *aWidth,
                                ULONG *aHeight,
                                ULONG *aBitsPerPixel) RT_OVERRIDE;
    STDMETHOD(SetSeamlessMode)(BOOL aEnabled) RT_OVERRIDE;
    STDMETHOD(TakeScreenShot)(ULONG aScreenId,
                              BYTE *aAddress,
                              ULONG aWidth,
                              ULONG aHeight,
                              BitmapFormat_T aBitmapFormat) RT_OVERRIDE;
    STDMETHOD(TakeScreenShotToArray)(ULONG aScreenId,
                                     ULONG aWidth,
                                     ULONG aHeight,
                                     BitmapFormat_T aBitmapFormat,
                                     ComSafeArrayOut(BYTE, aScreenData)) RT_OVERRIDE;
    STDMETHOD(DrawToScreen)(ULONG aScreenId,
                            BYTE *aAddress,
                            ULONG aX,
                            ULONG aY,
                            ULONG aWidth,
                            ULONG aHeight) RT_OVERRIDE;
    STDMETHOD(InvalidateAndUpdate)() RT_OVERRIDE;
    STDMETHOD(InvalidateAndUpdateScreen)(ULONG aScreenId) RT_OVERRIDE;
    STDMETHOD(ViewportChanged)(ULONG aScreenId,
                               ULONG aX,
                               ULONG aY,
                               ULONG aWidth,
                               ULONG aHeight) RT_OVERRIDE;
    STDMETHOD(QuerySourceBitmap)(ULONG aScreenId,
                                 IDisplaySourceBitmap **aDisplaySourceBitmap) RT_OVERRIDE;
    STDMETHOD(NotifyScaleFactorChange)(ULONG aScreenId,
                                       ULONG aU32ScaleFactorWMultiplied,
                                       ULONG aU32ScaleFactorHMultiplied) RT_OVERRIDE;
    STDMETHOD(NotifyHiDPIOutputPolicyChange)(BOOL aFUnscaledHiDPI) RT_OVERRIDE;
    STDMETHOD(SetScreenLayout)(ScreenLayoutMode_T aScreenLayoutMode,
                               ComSafeArrayIn(IGuestScreenInfo *, aGuestScreenInfo)) RT_OVERRIDE;
    STDMETHOD(DetachScreens)(ComSafeArrayIn(LONG, aScreenIds)) RT_OVERRIDE;
    STDMETHOD(CreateGuestScreenInfo)(ULONG aDisplay,
                                     GuestMonitorStatus_T aStatus,
                                     BOOL aPrimary,
                                     BOOL aChangeOrigin,
                                     LONG aOriginX,
                                     LONG aOriginY,
                                     ULONG aWidth,
                                     ULONG aHeight,
                                     ULONG aBitsPerPixel,
                                     IGuestScreenInfo **aGuestScreenInfo) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IDisplay)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IDisplay)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IDisplay)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IDisplay)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IDisplay)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IDisplay)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IDisplay)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IDisplay)() RT_OVERRIDE;
    /** @} */

    /** @name Public IEventListener properties
     * @{ */
    /** @} */

    /** @name Public IEventListener methods
     * @{ */
    STDMETHOD(HandleEvent)(IEvent *aEvent) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IDisplay properties
     * @{ */
    virtual HRESULT getGuestScreenLayout(std::vector<ComPtr<IGuestScreenInfo> > &aGuestScreenLayout) = 0;
    /** @} */

    /** @name Wrapped IDisplay methods
     * @{ */
    virtual HRESULT getScreenResolution(ULONG aScreenId,
                                        ULONG *aWidth,
                                        ULONG *aHeight,
                                        ULONG *aBitsPerPixel,
                                        LONG *aXOrigin,
                                        LONG *aYOrigin,
                                        GuestMonitorStatus_T *aGuestMonitorStatus) = 0;
    virtual HRESULT attachFramebuffer(ULONG aScreenId,
                                      const ComPtr<IFramebuffer> &aFramebuffer,
                                      com::Guid &aId) = 0;
    virtual HRESULT detachFramebuffer(ULONG aScreenId,
                                      const com::Guid &aId) = 0;
    virtual HRESULT queryFramebuffer(ULONG aScreenId,
                                     ComPtr<IFramebuffer> &aFramebuffer) = 0;
    virtual HRESULT setVideoModeHint(ULONG aDisplay,
                                     BOOL aEnabled,
                                     BOOL aChangeOrigin,
                                     LONG aOriginX,
                                     LONG aOriginY,
                                     ULONG aWidth,
                                     ULONG aHeight,
                                     ULONG aBitsPerPixel,
                                     BOOL aNotify) = 0;
    virtual HRESULT getVideoModeHint(ULONG aDisplay,
                                     BOOL *aEnabled,
                                     BOOL *aChangeOrigin,
                                     LONG *aOriginX,
                                     LONG *aOriginY,
                                     ULONG *aWidth,
                                     ULONG *aHeight,
                                     ULONG *aBitsPerPixel) = 0;
    virtual HRESULT setSeamlessMode(BOOL aEnabled) = 0;
    virtual HRESULT takeScreenShot(ULONG aScreenId,
                                   BYTE *aAddress,
                                   ULONG aWidth,
                                   ULONG aHeight,
                                   BitmapFormat_T aBitmapFormat) = 0;
    virtual HRESULT takeScreenShotToArray(ULONG aScreenId,
                                          ULONG aWidth,
                                          ULONG aHeight,
                                          BitmapFormat_T aBitmapFormat,
                                          std::vector<BYTE> &aScreenData) = 0;
    virtual HRESULT drawToScreen(ULONG aScreenId,
                                 BYTE *aAddress,
                                 ULONG aX,
                                 ULONG aY,
                                 ULONG aWidth,
                                 ULONG aHeight) = 0;
    virtual HRESULT invalidateAndUpdate() = 0;
    virtual HRESULT invalidateAndUpdateScreen(ULONG aScreenId) = 0;
    virtual HRESULT viewportChanged(ULONG aScreenId,
                                    ULONG aX,
                                    ULONG aY,
                                    ULONG aWidth,
                                    ULONG aHeight) = 0;
    virtual HRESULT querySourceBitmap(ULONG aScreenId,
                                      ComPtr<IDisplaySourceBitmap> &aDisplaySourceBitmap) = 0;
    virtual HRESULT notifyScaleFactorChange(ULONG aScreenId,
                                            ULONG aU32ScaleFactorWMultiplied,
                                            ULONG aU32ScaleFactorHMultiplied) = 0;
    virtual HRESULT notifyHiDPIOutputPolicyChange(BOOL aFUnscaledHiDPI) = 0;
    virtual HRESULT setScreenLayout(ScreenLayoutMode_T aScreenLayoutMode,
                                    const std::vector<ComPtr<IGuestScreenInfo> > &aGuestScreenInfo) = 0;
    virtual HRESULT detachScreens(const std::vector<LONG> &aScreenIds) = 0;
    virtual HRESULT createGuestScreenInfo(ULONG aDisplay,
                                          GuestMonitorStatus_T aStatus,
                                          BOOL aPrimary,
                                          BOOL aChangeOrigin,
                                          LONG aOriginX,
                                          LONG aOriginY,
                                          ULONG aWidth,
                                          ULONG aHeight,
                                          ULONG aBitsPerPixel,
                                          ComPtr<IGuestScreenInfo> &aGuestScreenInfo) = 0;
    /** @} */

    /** @name Wrapped IEventListener properties
     * @{ */
    /** @} */

    /** @name Wrapped IEventListener methods
     * @{ */
    virtual HRESULT handleEvent(const ComPtr<IEvent> &aEvent) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(DisplayWrap); /* Shuts up MSC warning C4625. */

};

#endif // !DisplayWrap_H_
