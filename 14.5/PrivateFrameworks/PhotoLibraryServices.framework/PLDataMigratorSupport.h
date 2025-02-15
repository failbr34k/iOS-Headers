//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
- (void)removeLegacyMetadataFiles;
- (void)removeAsidePhotosDatabase;
- (void)removeInternalMemoriesRelatedSnapshotDirectory;
- (void)removeModelInterestDatabase;
- (void)recordDataMigrationInfo:(id)arg1;
- (id)initWithPathManager:(id)arg1;

@end

