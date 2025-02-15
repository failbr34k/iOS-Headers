//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSDate, NSString;

@interface SBDML3UbiquitousDatabase : NSObject
{
    ML3MusicLibrary *_musicLibrary;
}

- (void).cxx_destruct;
@property(readonly) __weak ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void)dumpUbiquitousMetadata;
@property(readonly, nonatomic) _Bool hasLocalChangesToPush;
@property(readonly, nonatomic) _Bool hasRemoteChangesToPull;
@property(readonly, nonatomic) _Bool hasSyncedAtleastOnce;
- (id)readUbiquitousDatabaseMetadataValuesForIdentifiers:(id)arg1;
- (id)readUbiquitousDatabaseMetadataValuesForIdentifier:(id)arg1;
- (void)updateUbiquitousDatabaseByResetingSyncEntityRevisionForItemsWithMetadataIdentifiers:(id)arg1;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (_Bool)_databaseHasEntryForEntity:(id)arg1;
- (_Bool)updateUbiquitousDatabaseByPersistingUbiquitousMetadataWithEntity:(id)arg1;
- (_Bool)updateUbiquitousDatabaseByInsertingUbiquitousMetadataForTrackWithMetadataIdentifier:(id)arg1 hasBeenPlayed:(_Bool)arg2 playCount:(unsigned long long)arg3 bookmarkTime:(double)arg4 timestamp:(double)arg5 syncRevision:(long long)arg6;
- (_Bool)_updateUbiquitousDatabase_setBookmarkMetadataWithValuesFromTrackWithMetadataIdentifier:(id)arg1 hasBeenPlayed:(_Bool)arg2 playCount:(unsigned long long)arg3 bookmarkTime:(double)arg4 timestamp:(double)arg5 syncRevision:(long long)arg6 usingConnection:(id)arg7;
@property(retain, nonatomic) NSDate *dateToSyncWithUbiquitousStore;
@property(copy, nonatomic) NSString *lastNotificationDomainVersion;
@property(retain, nonatomic) NSDate *dateLastSynced;
@property(copy, nonatomic) NSString *lastSyncedDomainVersion;
@property(nonatomic) unsigned long long lastSyncedEntityRevision;
- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)_valueForDatabaseProperty:(id)arg1;
- (void)updateUbiquitousDatabaseByPerformingWriteTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMusicLibrary:(id)arg1;

@end

