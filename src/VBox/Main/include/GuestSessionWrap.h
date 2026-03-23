/** @file
 * VirtualBox API class wrapper header for IGuestSession.
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

#ifndef GuestSessionWrap_H_
#define GuestSessionWrap_H_
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE GuestSessionWrap
    : public VirtualBoxBase
    , VBOX_SCRIPTABLE_IMPL(IGuestSession)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestSessionWrap, IGuestSession)
    DECLARE_NOT_AGGREGATABLE(GuestSessionWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(GuestSessionWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IGuestSession)
        COM_INTERFACE_ENTRY2(IDispatch, IGuestSession)
        VBOX_TWEAK_INTERFACE_ENTRY(IGuestSession)
    END_COM_MAP()

    DECLARE_COMMON_CLASS_METHODS(GuestSessionWrap)

    /** @name Public IGuestSession properties
     * @{ */
    STDMETHOD(COMGETTER(User))(BSTR *aUser) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Domain))(BSTR *aDomain) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Name))(BSTR *aName) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Id))(ULONG *aId) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Timeout))(ULONG *aTimeout) RT_OVERRIDE;
    STDMETHOD(COMSETTER(Timeout))(ULONG aTimeout) RT_OVERRIDE;
    STDMETHOD(COMGETTER(ProtocolVersion))(ULONG *aProtocolVersion) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Status))(GuestSessionStatus_T *aStatus) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EnvironmentChanges))(ComSafeArrayOut(BSTR, aEnvironmentChanges)) RT_OVERRIDE;
    STDMETHOD(COMSETTER(EnvironmentChanges))(ComSafeArrayIn(IN_BSTR, aEnvironmentChanges)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EnvironmentBase))(ComSafeArrayOut(BSTR, aEnvironmentBase)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Processes))(ComSafeArrayOut(IGuestProcess *, aProcesses)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(PathStyle))(PathStyle_T *aPathStyle) RT_OVERRIDE;
    STDMETHOD(COMGETTER(CurrentDirectory))(BSTR *aCurrentDirectory) RT_OVERRIDE;
    STDMETHOD(COMSETTER(CurrentDirectory))(IN_BSTR aCurrentDirectory) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UserHome))(BSTR *aUserHome) RT_OVERRIDE;
    STDMETHOD(COMGETTER(UserDocuments))(BSTR *aUserDocuments) RT_OVERRIDE;
    STDMETHOD(COMGETTER(MountPoints))(ComSafeArrayOut(BSTR, aMountPoints)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Directories))(ComSafeArrayOut(IGuestDirectory *, aDirectories)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(Files))(ComSafeArrayOut(IGuestFile *, aFiles)) RT_OVERRIDE;
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute1IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute2IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute3IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute4IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute5IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute6IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute7IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute8IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute9IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute10IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute11IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    STDMETHOD(COMGETTER(InternalAndReservedAttribute12IGuestSession))(ULONG *aReserved) RT_OVERRIDE;
    /** @} */

    /** @name Public IGuestSession methods
     * @{ */
    STDMETHOD(Close)() RT_OVERRIDE;
    STDMETHOD(CopyFromGuest)(ComSafeArrayIn(IN_BSTR, aSources),
                             ComSafeArrayIn(IN_BSTR, aFilters),
                             ComSafeArrayIn(IN_BSTR, aFlags),
                             IN_BSTR aDestination,
                             IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(CopyToGuest)(ComSafeArrayIn(IN_BSTR, aSources),
                           ComSafeArrayIn(IN_BSTR, aFilters),
                           ComSafeArrayIn(IN_BSTR, aFlags),
                           IN_BSTR aDestination,
                           IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DirectoryCopy)(IN_BSTR aSource,
                             IN_BSTR aDestination,
                             ComSafeArrayIn(DirectoryCopyFlag_T, aFlags),
                             IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DirectoryCopyFromGuest)(IN_BSTR aSource,
                                      IN_BSTR aDestination,
                                      ComSafeArrayIn(DirectoryCopyFlag_T, aFlags),
                                      IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DirectoryCopyToGuest)(IN_BSTR aSource,
                                    IN_BSTR aDestination,
                                    ComSafeArrayIn(DirectoryCopyFlag_T, aFlags),
                                    IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(DirectoryCreate)(IN_BSTR aPath,
                               ULONG aMode,
                               ComSafeArrayIn(DirectoryCreateFlag_T, aFlags)) RT_OVERRIDE;
    STDMETHOD(DirectoryCreateTemp)(IN_BSTR aTemplateName,
                                   ULONG aMode,
                                   IN_BSTR aPath,
                                   BOOL aSecure,
                                   BSTR *aDirectory) RT_OVERRIDE;
    STDMETHOD(DirectoryExists)(IN_BSTR aPath,
                               BOOL aFollowSymlinks,
                               BOOL *aExists) RT_OVERRIDE;
    STDMETHOD(DirectoryOpen)(IN_BSTR aPath,
                             IN_BSTR aFilter,
                             ComSafeArrayIn(DirectoryOpenFlag_T, aFlags),
                             IGuestDirectory **aDirectory) RT_OVERRIDE;
    STDMETHOD(DirectoryRemove)(IN_BSTR aPath) RT_OVERRIDE;
    STDMETHOD(DirectoryRemoveRecursive)(IN_BSTR aPath,
                                        ComSafeArrayIn(DirectoryRemoveRecFlag_T, aFlags),
                                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(EnvironmentScheduleSet)(IN_BSTR aName,
                                      IN_BSTR aValue) RT_OVERRIDE;
    STDMETHOD(EnvironmentScheduleUnset)(IN_BSTR aName) RT_OVERRIDE;
    STDMETHOD(EnvironmentGetBaseVariable)(IN_BSTR aName,
                                          BSTR *aValue) RT_OVERRIDE;
    STDMETHOD(EnvironmentDoesBaseVariableExist)(IN_BSTR aName,
                                                BOOL *aExists) RT_OVERRIDE;
    STDMETHOD(FileCopy)(IN_BSTR aSource,
                        IN_BSTR aDestination,
                        ComSafeArrayIn(FileCopyFlag_T, aFlags),
                        IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FileCopyFromGuest)(IN_BSTR aSource,
                                 IN_BSTR aDestination,
                                 ComSafeArrayIn(FileCopyFlag_T, aFlags),
                                 IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FileCopyToGuest)(IN_BSTR aSource,
                               IN_BSTR aDestination,
                               ComSafeArrayIn(FileCopyFlag_T, aFlags),
                               IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FileCreateTemp)(IN_BSTR aTemplateName,
                              ULONG aMode,
                              IN_BSTR aPath,
                              BOOL aSecure,
                              IGuestFile **aFile) RT_OVERRIDE;
    STDMETHOD(FileExists)(IN_BSTR aPath,
                          BOOL aFollowSymlinks,
                          BOOL *aExists) RT_OVERRIDE;
    STDMETHOD(FileOpen)(IN_BSTR aPath,
                        FileAccessMode_T aAccessMode,
                        FileOpenAction_T aOpenAction,
                        ULONG aCreationMode,
                        IGuestFile **aFile) RT_OVERRIDE;
    STDMETHOD(FileOpenEx)(IN_BSTR aPath,
                          FileAccessMode_T aAccessMode,
                          FileOpenAction_T aOpenAction,
                          FileSharingMode_T aSharingMode,
                          ULONG aCreationMode,
                          ComSafeArrayIn(FileOpenExFlag_T, aFlags),
                          IGuestFile **aFile) RT_OVERRIDE;
    STDMETHOD(FileQuerySize)(IN_BSTR aPath,
                             BOOL aFollowSymlinks,
                             LONG64 *aSize) RT_OVERRIDE;
    STDMETHOD(FsObjExists)(IN_BSTR aPath,
                           BOOL aFollowSymlinks,
                           BOOL *aExists) RT_OVERRIDE;
    STDMETHOD(FsObjQueryInfo)(IN_BSTR aPath,
                              BOOL aFollowSymlinks,
                              IGuestFsObjInfo **aInfo) RT_OVERRIDE;
    STDMETHOD(FsObjRemove)(IN_BSTR aPath) RT_OVERRIDE;
    STDMETHOD(FsObjRemoveArray)(ComSafeArrayIn(IN_BSTR, aPath),
                                IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FsObjRename)(IN_BSTR aOldPath,
                           IN_BSTR aNewPath,
                           ComSafeArrayIn(FsObjRenameFlag_T, aFlags)) RT_OVERRIDE;
    STDMETHOD(FsObjMove)(IN_BSTR aSource,
                         IN_BSTR aDestination,
                         ComSafeArrayIn(FsObjMoveFlag_T, aFlags),
                         IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FsObjMoveArray)(ComSafeArrayIn(IN_BSTR, aSource),
                              IN_BSTR aDestination,
                              ComSafeArrayIn(FsObjMoveFlag_T, aFlags),
                              IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FsObjCopyArray)(ComSafeArrayIn(IN_BSTR, aSource),
                              IN_BSTR aDestination,
                              ComSafeArrayIn(FileCopyFlag_T, aFlags),
                              IProgress **aProgress) RT_OVERRIDE;
    STDMETHOD(FsObjSetACL)(IN_BSTR aPath,
                           BOOL aFollowSymlinks,
                           IN_BSTR aAcl,
                           ULONG aMode) RT_OVERRIDE;
    STDMETHOD(FsQueryFreeSpace)(IN_BSTR aPath,
                                LONG64 *aFreeSpace) RT_OVERRIDE;
    STDMETHOD(FsQueryInfo)(IN_BSTR aPath,
                           IGuestFsInfo **aInfo) RT_OVERRIDE;
    STDMETHOD(ProcessCreate)(IN_BSTR aExecutable,
                             ComSafeArrayIn(IN_BSTR, aArguments),
                             IN_BSTR aCwd,
                             ComSafeArrayIn(IN_BSTR, aEnvironmentChanges),
                             ComSafeArrayIn(ProcessCreateFlag_T, aFlags),
                             ULONG aTimeoutMS,
                             IGuestProcess **aGuestProcess) RT_OVERRIDE;
    STDMETHOD(ProcessCreateEx)(IN_BSTR aExecutable,
                               ComSafeArrayIn(IN_BSTR, aArguments),
                               IN_BSTR aCwd,
                               ComSafeArrayIn(IN_BSTR, aEnvironmentChanges),
                               ComSafeArrayIn(ProcessCreateFlag_T, aFlags),
                               ULONG aTimeoutMS,
                               ProcessPriority_T aPriority,
                               ComSafeArrayIn(LONG, aAffinity),
                               IGuestProcess **aGuestProcess) RT_OVERRIDE;
    STDMETHOD(ProcessGet)(ULONG aPid,
                          IGuestProcess **aGuestProcess) RT_OVERRIDE;
    STDMETHOD(SymlinkCreate)(IN_BSTR aSymlink,
                             IN_BSTR aTarget,
                             SymlinkType_T aType) RT_OVERRIDE;
    STDMETHOD(SymlinkExists)(IN_BSTR aSymlink,
                             BOOL *aExists) RT_OVERRIDE;
    STDMETHOD(SymlinkRead)(IN_BSTR aSymlink,
                           ComSafeArrayIn(SymlinkReadFlag_T, aFlags),
                           BSTR *aTarget) RT_OVERRIDE;
    STDMETHOD(WaitFor)(ULONG aWaitFor,
                       ULONG aTimeoutMS,
                       GuestSessionWaitResult_T *aReason) RT_OVERRIDE;
    STDMETHOD(WaitForArray)(ComSafeArrayIn(GuestSessionWaitForFlag_T, aWaitFor),
                            ULONG aTimeoutMS,
                            GuestSessionWaitResult_T *aReason) RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod1IGuestSession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod2IGuestSession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod3IGuestSession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod4IGuestSession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod5IGuestSession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod6IGuestSession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod7IGuestSession)() RT_OVERRIDE;
    STDMETHOD(InternalAndReservedMethod8IGuestSession)() RT_OVERRIDE;
    /** @} */

private:
    /** @name Wrapped IGuestSession properties
     * @{ */
    virtual HRESULT getUser(com::Utf8Str &aUser) = 0;
    virtual HRESULT getDomain(com::Utf8Str &aDomain) = 0;
    virtual HRESULT getName(com::Utf8Str &aName) = 0;
    virtual HRESULT getId(ULONG *aId) = 0;
    virtual HRESULT getTimeout(ULONG *aTimeout) = 0;
    virtual HRESULT setTimeout(ULONG aTimeout) = 0;
    virtual HRESULT getProtocolVersion(ULONG *aProtocolVersion) = 0;
    virtual HRESULT getStatus(GuestSessionStatus_T *aStatus) = 0;
    virtual HRESULT getEnvironmentChanges(std::vector<com::Utf8Str> &aEnvironmentChanges) = 0;
    virtual HRESULT setEnvironmentChanges(const std::vector<com::Utf8Str> &aEnvironmentChanges) = 0;
    virtual HRESULT getEnvironmentBase(std::vector<com::Utf8Str> &aEnvironmentBase) = 0;
    virtual HRESULT getProcesses(std::vector<ComPtr<IGuestProcess> > &aProcesses) = 0;
    virtual HRESULT getPathStyle(PathStyle_T *aPathStyle) = 0;
    virtual HRESULT getCurrentDirectory(com::Utf8Str &aCurrentDirectory) = 0;
    virtual HRESULT setCurrentDirectory(const com::Utf8Str &aCurrentDirectory) = 0;
    virtual HRESULT getUserHome(com::Utf8Str &aUserHome) = 0;
    virtual HRESULT getUserDocuments(com::Utf8Str &aUserDocuments) = 0;
    virtual HRESULT getMountPoints(std::vector<com::Utf8Str> &aMountPoints) = 0;
    virtual HRESULT getDirectories(std::vector<ComPtr<IGuestDirectory> > &aDirectories) = 0;
    virtual HRESULT getFiles(std::vector<ComPtr<IGuestFile> > &aFiles) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    /** @} */

    /** @name Wrapped IGuestSession methods
     * @{ */
    virtual HRESULT close() = 0;
    virtual HRESULT copyFromGuest(const std::vector<com::Utf8Str> &aSources,
                                  const std::vector<com::Utf8Str> &aFilters,
                                  const std::vector<com::Utf8Str> &aFlags,
                                  const com::Utf8Str &aDestination,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT copyToGuest(const std::vector<com::Utf8Str> &aSources,
                                const std::vector<com::Utf8Str> &aFilters,
                                const std::vector<com::Utf8Str> &aFlags,
                                const com::Utf8Str &aDestination,
                                ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT directoryCopy(const com::Utf8Str &aSource,
                                  const com::Utf8Str &aDestination,
                                  const std::vector<DirectoryCopyFlag_T> &aFlags,
                                  ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT directoryCopyFromGuest(const com::Utf8Str &aSource,
                                           const com::Utf8Str &aDestination,
                                           const std::vector<DirectoryCopyFlag_T> &aFlags,
                                           ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT directoryCopyToGuest(const com::Utf8Str &aSource,
                                         const com::Utf8Str &aDestination,
                                         const std::vector<DirectoryCopyFlag_T> &aFlags,
                                         ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT directoryCreate(const com::Utf8Str &aPath,
                                    ULONG aMode,
                                    const std::vector<DirectoryCreateFlag_T> &aFlags) = 0;
    virtual HRESULT directoryCreateTemp(const com::Utf8Str &aTemplateName,
                                        ULONG aMode,
                                        const com::Utf8Str &aPath,
                                        BOOL aSecure,
                                        com::Utf8Str &aDirectory) = 0;
    virtual HRESULT directoryExists(const com::Utf8Str &aPath,
                                    BOOL aFollowSymlinks,
                                    BOOL *aExists) = 0;
    virtual HRESULT directoryOpen(const com::Utf8Str &aPath,
                                  const com::Utf8Str &aFilter,
                                  const std::vector<DirectoryOpenFlag_T> &aFlags,
                                  ComPtr<IGuestDirectory> &aDirectory) = 0;
    virtual HRESULT directoryRemove(const com::Utf8Str &aPath) = 0;
    virtual HRESULT directoryRemoveRecursive(const com::Utf8Str &aPath,
                                             const std::vector<DirectoryRemoveRecFlag_T> &aFlags,
                                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT environmentScheduleSet(const com::Utf8Str &aName,
                                           const com::Utf8Str &aValue) = 0;
    virtual HRESULT environmentScheduleUnset(const com::Utf8Str &aName) = 0;
    virtual HRESULT environmentGetBaseVariable(const com::Utf8Str &aName,
                                               com::Utf8Str &aValue) = 0;
    virtual HRESULT environmentDoesBaseVariableExist(const com::Utf8Str &aName,
                                                     BOOL *aExists) = 0;
    virtual HRESULT fileCopy(const com::Utf8Str &aSource,
                             const com::Utf8Str &aDestination,
                             const std::vector<FileCopyFlag_T> &aFlags,
                             ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT fileCopyFromGuest(const com::Utf8Str &aSource,
                                      const com::Utf8Str &aDestination,
                                      const std::vector<FileCopyFlag_T> &aFlags,
                                      ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT fileCopyToGuest(const com::Utf8Str &aSource,
                                    const com::Utf8Str &aDestination,
                                    const std::vector<FileCopyFlag_T> &aFlags,
                                    ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT fileCreateTemp(const com::Utf8Str &aTemplateName,
                                   ULONG aMode,
                                   const com::Utf8Str &aPath,
                                   BOOL aSecure,
                                   ComPtr<IGuestFile> &aFile) = 0;
    virtual HRESULT fileExists(const com::Utf8Str &aPath,
                               BOOL aFollowSymlinks,
                               BOOL *aExists) = 0;
    virtual HRESULT fileOpen(const com::Utf8Str &aPath,
                             FileAccessMode_T aAccessMode,
                             FileOpenAction_T aOpenAction,
                             ULONG aCreationMode,
                             ComPtr<IGuestFile> &aFile) = 0;
    virtual HRESULT fileOpenEx(const com::Utf8Str &aPath,
                               FileAccessMode_T aAccessMode,
                               FileOpenAction_T aOpenAction,
                               FileSharingMode_T aSharingMode,
                               ULONG aCreationMode,
                               const std::vector<FileOpenExFlag_T> &aFlags,
                               ComPtr<IGuestFile> &aFile) = 0;
    virtual HRESULT fileQuerySize(const com::Utf8Str &aPath,
                                  BOOL aFollowSymlinks,
                                  LONG64 *aSize) = 0;
    virtual HRESULT fsObjExists(const com::Utf8Str &aPath,
                                BOOL aFollowSymlinks,
                                BOOL *aExists) = 0;
    virtual HRESULT fsObjQueryInfo(const com::Utf8Str &aPath,
                                   BOOL aFollowSymlinks,
                                   ComPtr<IGuestFsObjInfo> &aInfo) = 0;
    virtual HRESULT fsObjRemove(const com::Utf8Str &aPath) = 0;
    virtual HRESULT fsObjRemoveArray(const std::vector<com::Utf8Str> &aPath,
                                     ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT fsObjRename(const com::Utf8Str &aOldPath,
                                const com::Utf8Str &aNewPath,
                                const std::vector<FsObjRenameFlag_T> &aFlags) = 0;
    virtual HRESULT fsObjMove(const com::Utf8Str &aSource,
                              const com::Utf8Str &aDestination,
                              const std::vector<FsObjMoveFlag_T> &aFlags,
                              ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT fsObjMoveArray(const std::vector<com::Utf8Str> &aSource,
                                   const com::Utf8Str &aDestination,
                                   const std::vector<FsObjMoveFlag_T> &aFlags,
                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT fsObjCopyArray(const std::vector<com::Utf8Str> &aSource,
                                   const com::Utf8Str &aDestination,
                                   const std::vector<FileCopyFlag_T> &aFlags,
                                   ComPtr<IProgress> &aProgress) = 0;
    virtual HRESULT fsObjSetACL(const com::Utf8Str &aPath,
                                BOOL aFollowSymlinks,
                                const com::Utf8Str &aAcl,
                                ULONG aMode) = 0;
    virtual HRESULT fsQueryFreeSpace(const com::Utf8Str &aPath,
                                     LONG64 *aFreeSpace) = 0;
    virtual HRESULT fsQueryInfo(const com::Utf8Str &aPath,
                                ComPtr<IGuestFsInfo> &aInfo) = 0;
    virtual HRESULT processCreate(const com::Utf8Str &aExecutable,
                                  const std::vector<com::Utf8Str> &aArguments,
                                  const com::Utf8Str &aCwd,
                                  const std::vector<com::Utf8Str> &aEnvironmentChanges,
                                  const std::vector<ProcessCreateFlag_T> &aFlags,
                                  ULONG aTimeoutMS,
                                  ComPtr<IGuestProcess> &aGuestProcess) = 0;
    virtual HRESULT processCreateEx(const com::Utf8Str &aExecutable,
                                    const std::vector<com::Utf8Str> &aArguments,
                                    const com::Utf8Str &aCwd,
                                    const std::vector<com::Utf8Str> &aEnvironmentChanges,
                                    const std::vector<ProcessCreateFlag_T> &aFlags,
                                    ULONG aTimeoutMS,
                                    ProcessPriority_T aPriority,
                                    const std::vector<LONG> &aAffinity,
                                    ComPtr<IGuestProcess> &aGuestProcess) = 0;
    virtual HRESULT processGet(ULONG aPid,
                               ComPtr<IGuestProcess> &aGuestProcess) = 0;
    virtual HRESULT symlinkCreate(const com::Utf8Str &aSymlink,
                                  const com::Utf8Str &aTarget,
                                  SymlinkType_T aType) = 0;
    virtual HRESULT symlinkExists(const com::Utf8Str &aSymlink,
                                  BOOL *aExists) = 0;
    virtual HRESULT symlinkRead(const com::Utf8Str &aSymlink,
                                const std::vector<SymlinkReadFlag_T> &aFlags,
                                com::Utf8Str &aTarget) = 0;
    virtual HRESULT waitFor(ULONG aWaitFor,
                            ULONG aTimeoutMS,
                            GuestSessionWaitResult_T *aReason) = 0;
    virtual HRESULT waitForArray(const std::vector<GuestSessionWaitForFlag_T> &aWaitFor,
                                 ULONG aTimeoutMS,
                                 GuestSessionWaitResult_T *aReason) = 0;
    /** @} */

private:
    DECLARE_CLS_COPY_CTOR_ASSIGN_NOOP(GuestSessionWrap); /* Shuts up MSC warning C4625. */

};

#endif // !GuestSessionWrap_H_
