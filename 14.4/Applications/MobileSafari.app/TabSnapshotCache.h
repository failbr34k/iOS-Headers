//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface TabSnapshotCache : NSObject
{
    NSMapTable *_delegateToContextMap;
    unsigned long long _currentlyRequestedSnapshotCount;
    NSMutableDictionary *_snapshots;
    _Bool _updating;
    NSURL *_thumbnailCacheDirectoryURL;
    NSMutableDictionary *_groupIdentifiers;
    NSObject<OS_dispatch_queue> *_fileSystemAccessQueue;
    _Bool _currentlyRequestingNextSnapshot;
    _Bool _needsRequestNextSnapshot;
    _Bool _deferRequestNextSnapshot;
}

+ (void)removeSavedSnapshotsKeepingSnapshotsWithIdentifiers:(id)arg1;
+ (_Bool)supportsASTC;
+ (id)defaultSnapshotCache;
+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)isIdentifier:(id)arg1 memberOfSameGroupAsIdentifier:(id)arg2;
- (void)removeIdentifier:(id)arg1 fromGroupWithIdentifier:(id)arg2;
- (void)addIdentifier:(id)arg1 toGroupWithIdentifier:(id)arg2;
- (void)setCapacity:(unsigned long long)arg1 forDelegate:(id)arg2;
- (void)setUpdating:(_Bool)arg1 forDelegate:(id)arg2;
- (id)_contextForDelegate:(id)arg1;
- (void)_sendDidFinishUpdatingToDelegateIfNeeded;
@property(readonly, nonatomic, getter=isFinishedUpdating) _Bool finishedUpdating;
- (void)performBatchUpdatesWithBlock:(CDUnknownBlockType)arg1;
- (void)requestNextSnapshotIfNecessary;
- (void)_requestNextSnapshotIfNecessaryForDelegate:(id)arg1;
- (id)debugDescription;
- (void)_enumerateDelegatesAndIdentifiersForEntry:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_finishUpdatingToState:(long long)arg1 cachedSnapshot:(id)arg2 forEntry:(id)arg3;
- (void)_finishUpdatingToState:(long long)arg1 forEntry:(id)arg2;
- (void)_beginUpdatingStateForIdentifier:(id)arg1;
- (id)_writeSnapshotImage:(struct CGImage *)arg1 withIdentifier:(id)arg2;
- (void)_saveSnapshotForIdentifier:(id)arg1;
- (id)_readSnapshotImageForIdentifier:(id)arg1;
- (void)_requestSavedSnapshotForIdentifier:(id)arg1;
- (void)_determineInitialStateForIdentifier:(id)arg1;
- (void)invalidateSnapshotWithIdentifier:(id)arg1;
- (_Bool)hasValidSnapshotWithIdentifier:(id)arg1;
- (id)snapshotWithIdentifier:(id)arg1;
- (void)setIdentifiersToCache:(id)arg1 forDelegate:(id)arg2;
- (id)identifiersToCacheForDelegate:(id)arg1;
- (id)_allIdentifiersToCache;
- (id)_URLForSnapshotWithIdentifier:(id)arg1 isKTX:(_Bool)arg2 effectsVersion:(long long)arg3;
- (void)_enumeratePossibleURLsForSnapshotWithIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_existingURLForSnapshotWithIdentifier:(id)arg1 effectsVersion:(long long *)arg2;
- (id)_preferredURLForSnapshotWithIdentifier:(id)arg1;
- (id)_entryForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_entryForIdentifier:(id)arg1;
- (id)initWithThumbnailCacheDirectoryURL:(id)arg1;
- (id)init;

@end

