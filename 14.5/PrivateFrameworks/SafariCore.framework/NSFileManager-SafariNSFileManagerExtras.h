//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafariNSFileManagerExtras)
- (void)safari_removeContentsOfDirectory:(id)arg1;
- (_Bool)safari_removeDirectoryIfEmpty:(id)arg1;
- (id)safari_frameworksDirectoryURLs;
- (id)safari_pathWithUniqueFilenameForPath:(id)arg1;
- (_Bool)_safari_removeFileAtURL:(id)arg1 onlyIfFileExists:(_Bool)arg2 error:(id *)arg3;
- (_Bool)safari_removeFileOnlyAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)safari_removeFileAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)safari_moveDownloadedFileAtURL:(id)arg1 toURL:(id)arg2;
- (id)safari_createTemporaryDirectoryWithTemplate:(id)arg1;
- (id)safari_autoFillQuirksDownloadDirectoryURL;
- (id)safari_productionSafariSettingsDirectory;
- (id)safari_nonContaineredSettingsDirectoryURL;
- (id)safari_settingsDirectoryURL;
- (id)safari_settingsDirectoryForHomeDirectory:(id)arg1;
- (id)safari_settingsDirectoryForLibraryDirectory:(id)arg1;
- (id)safari_safariLibraryDirectory;
- (id)_safari_libraryDirectoryForHomeDirectory:(id)arg1;
- (id)safari_containerDirectoryURL;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2;
- (id)safari_ensureDirectoryExists:(id)arg1;
@end

