//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSASAlbum, MSASAssetCollection, MSASComment, MSASInvitation, MSASModelEnumerator, MSASSharingRelationship, NSArray, NSDate, NSDictionary, NSError, NSNumber, NSString;
@protocol MSASModelObserver, NSCoding;

@protocol MSASModel <NSObject>
@property(nonatomic) double maxGroupedCallbackEventStaleness;
@property(nonatomic) double maxGroupedCallbackEventIdleInterval;
@property(nonatomic) int maxGroupedCallbackEventBatchCount;
@property(readonly, retain, nonatomic) NSString *personID;
- (_Bool)errorIsCancellation:(NSError *)arg1;
- (NSString *)focusAssetCollectionGUID;
- (void)setFocusAssetCollectionGUID:(NSString *)arg1;
- (void)setFocusAlbumGUID:(NSString *)arg1;
- (NSDictionary *)serverSideConfiguration;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(NSArray *)arg1 assetTypeFlags:(int)arg2;
- (void)retrieveAssets:(NSArray *)arg1 inAlbumWithGUID:(NSString *)arg2;
- (void)forgetEverything;
- (void)deleteCommentWithGUID:(NSString *)arg1;
- (void)addComments:(NSArray *)arg1 toAssetCollectionWithGUID:(NSString *)arg2;
- (void)markCommentsForAssetCollectionWithGUID:(NSString *)arg1 asViewedWithLastViewedDate:(NSDate *)arg2;
- (void)deleteAssetCollectionsWithGUIDs:(NSArray *)arg1;
- (void)deleteAssetCollectionWithGUID:(NSString *)arg1;
- (void)addAssetCollections:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(NSString *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(NSString *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)removeAccessControlEntryWithGUID:(NSString *)arg1;
- (void)addAccessControlEntries:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2;
- (void)rejectInvitationWithGUID:(NSString *)arg1;
- (void)acceptInvitationWithGUID:(NSString *)arg1;
- (void)acceptInvitationWithToken:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)unsubscribeFromAlbumWithGUID:(NSString *)arg1;
- (void)subscribeToAlbumWithGUID:(NSString *)arg1;
- (void)markAlbumGUIDAsViewed:(NSString *)arg1;
- (void)deleteAlbumWithGUID:(NSString *)arg1;
- (void)modifyAlbumMetadata:(MSASAlbum *)arg1;
- (void)addAlbum:(MSASAlbum *)arg1;
- (void)refreshAccessControlListForAlbumWithGUID:(NSString *)arg1;
- (void)refreshCommentsForAssetCollectionWithGUID:(NSString *)arg1 resetSync:(_Bool)arg2;
- (void)refreshContentOfAlbumWithGUID:(NSString *)arg1 resetSync:(_Bool)arg2;
- (void)refreshResetSync:(_Bool)arg1;
- (void)forgetEverythingInfo:(NSDictionary *)arg1 completionBlock:(void (^)(void))arg2;
- (void)forgetEverythingInfo:(NSDictionary *)arg1;
- (void)deleteCommentWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)addComments:(NSArray *)arg1 toAssetCollectionWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(NSString *)arg1 asViewedWithLastViewedDate:(NSDate *)arg2 info:(NSDictionary *)arg3;
- (void)deleteAssetCollectionWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)addAssetCollections:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3 completionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3 completionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)removeAccessControlEntryWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)addAccessControlEntries:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)markAsSpamInvitationWithToken:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)markAsSpamInvitationWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)markAsSpamAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)rejectInvitationWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)acceptInvitationWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)validateInvitationToken:(NSString *)arg1 albumName:(NSString *)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3;
- (void)acceptInvitationWithToken:(NSString *)arg1 info:(NSDictionary *)arg2 completionBlock:(void (^)(NSDictionary *, NSError *))arg3;
- (void)unsubscribeFromAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)subscribeToAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)markAlbumGUIDAsViewed:(NSString *)arg1 moveLastViewedAssetCollectionMarker:(_Bool)arg2 info:(NSDictionary *)arg3;
- (void)markAlbumGUIDAsViewed:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)deleteAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)modifyAlbumMetadata:(MSASAlbum *)arg1 info:(NSDictionary *)arg2;
- (void)addAlbum:(MSASAlbum *)arg1 info:(NSDictionary *)arg2;
- (void)refreshAccessControlListForAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(NSString *)arg1 resetSync:(_Bool)arg2 info:(NSDictionary *)arg3;
- (void)refreshContentOfAlbumWithGUID:(NSString *)arg1 resetSync:(_Bool)arg2 info:(NSDictionary *)arg3;
- (void)refreshResetSync:(_Bool)arg1 info:(NSDictionary *)arg2;
- (NSDate *)serverCommunicationBackoffDate;
- (id)userInfoForCommentWithGUID:(NSString *)arg1;
- (void)setUserInfo:(id <NSCoding>)arg1 forCommentWithGUID:(NSString *)arg2;
- (id)userInfoForInvitationWithGUID:(NSString *)arg1;
- (void)setUserInfo:(id <NSCoding>)arg1 forInvitationWithGUID:(NSString *)arg2;
- (id)userInfoForAccessControlWithGUID:(NSString *)arg1;
- (void)setUserInfo:(id <NSCoding>)arg1 forAccessControlWithGUID:(NSString *)arg2;
- (id)userInfoForAssetCollectionWithGUID:(NSString *)arg1;
- (void)setUserInfo:(id <NSCoding>)arg1 forAssetCollectionWithGUID:(NSString *)arg2;
- (id)userInfoForAlbumWithGUID:(NSString *)arg1;
- (void)setUserInfo:(id <NSCoding>)arg1 forAlbumWithGUID:(NSString *)arg2;
- (NSDate *)lastViewedCommentDateForAssetCollectionWithGUID:(NSString *)arg1;
- (NSString *)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(NSString *)arg1;
- (int)unviewedAssetCollectionCountForAlbumWithGUID:(NSString *)arg1;
- (_Bool)isAssetCollectionWithGUIDMarkedAsUnviewed:(NSString *)arg1;
- (int)unviewedAlbumCount;
- (_Bool)isAlbumWithGUIDMarkedAsUnviewed:(NSString *)arg1;
- (MSASComment *)captionForAssetCollectionWithGUID:(NSString *)arg1;
- (MSASComment *)commentWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)commentsForAssetCollectionWithGUID:(NSString *)arg1;
- (void)videoURLsForAssetCollectionWithGUID:(NSString *)arg1 forMediaAssetType:(unsigned long long)arg2 completionBlock:(void (^)(NSError *, NSArray *, NSDate *))arg3;
- (void)videoURLForAssetCollectionWithGUID:(NSString *)arg1 completionBlock:(void (^)(NSError *, NSURL *, NSDate *))arg2;
- (MSASAssetCollection *)assetCollectionWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)assetCollectionGUIDsInAlbumWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)assetCollectionsInAlbumWithGUID:(NSString *)arg1;
- (NSNumber *)isPublicAccessEnabledForAlbumWithGUID:(NSString *)arg1;
- (MSASInvitation *)invitationWithGUID:(NSString *)arg1;
- (MSASInvitation *)invitationForAlbumWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)invitationGUIDs;
- (MSASModelEnumerator *)invitations;
- (MSASSharingRelationship *)accessControlWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)accessControlGUIDsForAlbumWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)accessControlsForAlbumWithGUID:(NSString *)arg1;
- (MSASAlbum *)albumWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)albumGUIDs;
- (MSASModelEnumerator *)albums;
- (void)removeObserver:(id <MSASModelObserver>)arg1;
- (void)addObserver:(id <MSASModelObserver>)arg1;
- (_Bool)hasEnqueuedActivities;
- (_Bool)hasCommandsInGroupedCommandQueue;
- (void)shutDownForDestruction:(_Bool)arg1 completionBlock:(void (^)(void))arg2;
- (void)shutDown;
- (void)cancel;
- (void)start;
@end

