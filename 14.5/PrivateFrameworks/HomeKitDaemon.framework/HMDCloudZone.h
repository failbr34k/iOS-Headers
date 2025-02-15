//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, CKRecordZone, CKRecordZoneSubscription, CKServerChangeToken, HMDBackingStoreCacheZone, HMDCloudCache, HMDCloudGroup, NSString;

@interface HMDCloudZone : HMFObject
{
    _Bool _recordsAvailable;
    _Bool _decrypted;
    HMDCloudCache *_cache;
    CKRecordZone *_zone;
    HMDCloudGroup *_rootGroup;
    NSString *_subscriptionName;
    CKRecordZoneSubscription *_subscription;
    CKServerChangeToken *_serverChangeToken;
    HMDBackingStoreCacheZone *_backingStoreZone;
}

+ (id)shortDescription;
+ (void)createZoneWithName:(id)arg1 rootRecordName:(id)arg2 subscriptionName:(id)arg3 owner:(id)arg4 cacheZone:(id)arg5 cloudCache:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneRootRecordName;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDBackingStoreCacheZone *backingStoreZone; // @synthesize backingStoreZone=_backingStoreZone;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(retain, nonatomic) CKRecordZoneSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) NSString *subscriptionName; // @synthesize subscriptionName=_subscriptionName;
@property(nonatomic, getter=hasDecrypted) _Bool decrypted; // @synthesize decrypted=_decrypted;
@property(nonatomic, getter=hasRecordsAvaliable) _Bool recordsAvailable; // @synthesize recordsAvailable=_recordsAvailable;
@property(retain, nonatomic) HMDCloudGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property(retain, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(nonatomic) __weak HMDCloudCache *cache; // @synthesize cache=_cache;
- (void)updateServerChangeToken:(id)arg1;
- (void)updateCurrentServerChangeToken;
- (void)deleteZone;
- (void)_initializeServerChangeToken:(id)arg1;
- (void)_initializeSubscription:(id)arg1;
@property(readonly, nonatomic, getter=hasServerTokenAvaliable) _Bool serverTokenAvaliable;
@property(readonly, nonatomic) NSString *owner;
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;
- (void)deleteCloudRecord:(id)arg1;
- (void)deleteCloudRecordNames:(id)arg1;
- (void)updateCloudRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateCloudRecord:(id)arg1;
- (_Bool)isRootCloudRecord:(id)arg1;
- (_Bool)isRootRecord:(id)arg1;
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
- (void)addCloudRecord:(id)arg1 ownerID:(id)arg2;
- (void)markMigratedObjectsAsMigrated;
- (void)fetchMigratedObjects:(CDUnknownBlockType)arg1;
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cloudRecordWithObjectID:(id)arg1;
- (id)__cloudRecordWithObjectID:(id)arg1;
- (id)createCloudRecordWithFetchResult:(id)arg1;
- (id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2;
- (void)cloudRecordWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudRecordWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cloudRecordWithName:(id)arg1;
@property(readonly, nonatomic, getter=doesProcessChangeEvenIfDecryptionFails) _Bool processChangeEvenIfDecryptionFails;
- (id)description;
- (id)shortDescription;
- (id)initWithBackingStoreCacheZone:(id)arg1 cloudCache:(id)arg2;
- (id)init;
@property(readonly, nonatomic) NSString *zoneRootRecordName;

@end

