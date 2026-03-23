/** @file
 * VirtualBox API class wrapper header for IFramebufferOverlay.
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

#ifndef FramebufferOverlayWrap_H_
#define FramebufferOverlayWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE FramebufferOverlayWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IFramebufferOverlay)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(FramebufferOverlayWrap, IFramebufferOverlay)
    DECLARE_NOT_AGGREGATABLE(FramebufferOverlayWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(FramebufferOverlayWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IFramebufferOverlay)
        COM_INTERFACE_ENTRY(IFramebuffer)
        COM_INTERFACE_ENTRY2(IDispatch, IFramebufferOverlay)
        VBOX_TWEAK_INTERFACE_ENTRY(IFramebufferOverlay)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(FramebufferOverlayWrap)

    /** @name Public IFramebuffer properties
     * @{ */
    STDMETHOD(COMGETTER(Width))(ULONG *aWidth) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Height))(ULONG *aHeight) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BitsPerPixel))(ULONG *aBitsPerPixel) RT_OVERRIDE;
    STDMETHOD(COMGETTER(BytesPerLine))(ULONG *aBytesPerLine) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PixelFormat))(BitmapFormat_T *aPixelFormat) RT_OVERRIDE;
    STDMETHOD(COMGETTER(HeightReduction))(ULONG *aHeightReduction) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Overlay))(IFramebufferOverlay **aOverlay) RT_OVERRIDE;
    STDMETHOD(COMGETTER(WinId))(LONG64 *aWinId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Capabilities))(ComSafeArrayOut(FramebufferCapabilities_T, aCapabilities)) RT_OVERRIDE;
    /** @} */

    /** @name Public IFramebufferOverlay properties
     * @{ */
    STDMETHOD(COMGETTER(X))(ULONG *aX) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Y))(ULONG *aY) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Visible))(BOOL *aVisible) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Visible))(BOOL aVisible) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Alpha))(ULONG *aAlpha) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Alpha))(ULONG aAlpha) RT_OVERRIDE;
    /** @} */

    /** @name Public IFramebuffer methods
     * @{ */
    STDMETHOD(NotifyUpdate)(ULONG aX,
                            ULONG aY,
                            ULONG aWidth,
                            ULONG aHeight) RT_OVERRIDE;
    STDMETHOD(NotifyUpdateImage)(ULONG aX,
                                 ULONG aY,
                                 ULONG aWidth,
                                 ULONG aHeight,
                                 ComSafeArrayIn(BYTE, aImage)) RT_OVERRIDE;
    STDMETHOD(NotifyChange)(ULONG aScreenId,
                            ULONG aXOrigin,
                            ULONG aYOrigin,
                            ULONG aWidth,
                            ULONG aHeight) RT_OVERRIDE;
    STDMETHOD(VideoModeSupported)(ULONG aWidth,
                                  ULONG aHeight,
                                  ULONG aBpp,
                                  BOOL *aSupported) RT_OVERRIDE;
    STDMETHOD(GetVisibleRegion)(BYTE *aRectangles,
                                ULONG aCount,
                                ULONG *aCountCopied) RT_OVERRIDE;
    STDMETHOD(SetVisibleRegion)(BYTE *aRectangles,
                                ULONG aCount) RT_OVERRIDE;
    STDMETHOD(ProcessVHWACommand)(BYTE *aCommand,
                                  LONG aEnmCmd,
                                  BOOL aFromGuest) RT_OVERRIDE;
    STDMETHOD(Notify3DEvent)(ULONG aType,
                             ComSafeArrayIn(BYTE, aData)) RT_OVERRIDE;
    /** @} */

    /** @name Public IFramebufferOverlay methods
     * @{ */
    STDMETHOD(Move)(ULONG aX,
                    ULONG aY) RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IFramebuffer properties
     * @{ */
    virtual HRESULT getWidth(ULONG *aWidth) = 0;
    virtual HRESULT getHeight(ULONG *aHeight) = 0;
    virtual HRESULT getBitsPerPixel(ULONG *aBitsPerPixel) = 0;
    virtual HRESULT getBytesPerLine(ULONG *aBytesPerLine) = 0;
    virtual HRESULT getPixelFormat(BitmapFormat_T *aPixelFormat) = 0;
    virtual HRESULT getHeightReduction(ULONG *aHeightReduction) = 0;
    virtual HRESULT getOverlay(ComPtr<IFramebufferOverlay> &aOverlay) = 0;
    virtual HRESULT getWinId(LONG64 *aWinId) = 0;
    virtual HRESULT getCapabilities(std::vector<FramebufferCapabilities_T> &aCapabilities) = 0;
    /** @} */

    /** @name Wrapped IFramebufferOverlay properties
     * @{ */
    virtual HRESULT getX(ULONG *aX) = 0;
    virtual HRESULT getY(ULONG *aY) = 0;
    virtual HRESULT getVisible(BOOL *aVisible) = 0;
    virtual HRESULT setVisible(BOOL aVisible) = 0;
    virtual HRESULT getAlpha(ULONG *aAlpha) = 0;
    virtual HRESULT setAlpha(ULONG aAlpha) = 0;
    /** @} */

    /** @name Wrapped IFramebuffer methods
     * @{ */
    virtual HRESULT notifyUpdate(ULONG aX,
                                 ULONG aY,
                                 ULONG aWidth,
                                 ULONG aHeight) = 0;
    virtual HRESULT notifyUpdateImage(ULONG aX,
                                      ULONG aY,
                                      ULONG aWidth,
                                      ULONG aHeight,
                                      const std::vector<BYTE> &aImage) = 0;
    virtual HRESULT notifyChange(ULONG aScreenId,
                                 ULONG aXOrigin,
                                 ULONG aYOrigin,
                                 ULONG aWidth,
                                 ULONG aHeight) = 0;
    virtual HRESULT videoModeSupported(ULONG aWidth,
                                       ULONG aHeight,
                                       ULONG aBpp,
                                       BOOL *aSupported) = 0;
    virtual HRESULT getVisibleRegion(BYTE *aRectangles,
                                     ULONG aCount,
                                     ULONG *aCountCopied) = 0;
    virtual HRESULT setVisibleRegion(BYTE *aRectangles,
                                     ULONG aCount) = 0;
    virtual HRESULT processVHWACommand(BYTE *aCommand,
                                       LONG aEnmCmd,
                                       BOOL aFromGuest) = 0;
    virtual HRESULT notify3DEvent(ULONG aType,
                                  const std::vector<BYTE> &aData) = 0;
    /** @} */

    /** @name Wrapped IFramebufferOverlay methods
     * @{ */
    virtual HRESULT move(ULONG aX,
                         ULONG aY) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(FramebufferOverlayWrap); /* Shuts up MSC warning C4625. */

};

#endif // !FramebufferOverlayWrap_H_
