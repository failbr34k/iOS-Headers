//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoLibraryPathManager.h>

@interface PLPhotoLibraryPathManager (SQLError)
+ (id)defaultDeferredRenderFileFormatTypeIdentifier;
- (id)recordRebuildReason;
- (long long)lastRebuildReason;
- (void)setSqliteErrorForReason:(long long)arg1 allowsExit:(_Bool)arg2;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessivePersistentHistorySize;
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonMPSUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonMPSPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonUpgradeForceRebuild;
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyThumbnailRebuilds;
- (void)_abortWithRebuildReasonPLRebuildReasonDatabaseCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyOrphanedRecords;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveRecoveryAttempts;
- (void)_abortWithRebuildReasonPLRebuildReasonCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonUnknown;
- (void)_abortWithRebuildReasonPLRebuildReasonLightweightMigration;
- (void)_abortWithRebuildReasonPLRebuildReasonStagedDemoContentInstallation;
- (void)_abortWithRebuildReasonPLRebuildReasonSimulatedCorruption;
- (void)removeSqliteErrorIndicatorFile;
- (_Bool)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1;
- (id)_rebuildDateFormatter;
- (_Bool)sqliteErrorIndicatorFileExists;
- (id)pathToiPhotoLibraryMediaDir;
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1;
- (id)cloudSharingArchiveDirectory;
- (id)directoryPathForInFlightComments:(_Bool)arg1;
- (id)cloudServiceEnableLogFileURL;
- (_Bool)removeCPLDataDirectory;
- (id)cplDownloadFinishedMarkerFilePath;
- (id)cplEnableMarkerFilePath;
- (id)wipeCPLOnOpenPath;
- (id)forceSoftResetSyncPath;
- (id)disableICloudPhotosFilePath;
- (id)pauseICloudPhotosFilePath;
- (id)enableICloudPhotosFilePath;
- (id)cplDataDirectoryCreateIfNeeded:(_Bool)arg1;
- (id)deletedMemoryUUIDsFilePath;
- (id)searchMetadataStoreFilePath;
- (id)zeroKeywordStoreFilePath;
- (id)searchIndexManagerDatabaseFilePath;
- (id)searchIndexManagerDatabaseDirectory;
- (id)photoStreamsDataDirectory;
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
- (_Bool)isSystemPhotoLibraryPathManager;
@end

