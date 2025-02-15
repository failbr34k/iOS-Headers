//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IMDMessagePTaskStore;

@interface IMDChatStore : NSObject
{
    NSString *_lastModificationStamp;
    id <IMDMessagePTaskStore> _messagePTaskStore;
}

+ (id)sharedInstance;
@property(retain) id <IMDMessagePTaskStore> messagePTaskStore; // @synthesize messagePTaskStore=_messagePTaskStore;
@property(retain) NSString *modificationStamp; // @synthesize modificationStamp=_lastModificationStamp;
- (void)_broadcastToForceReloadChats;
- (void)_broadcastUpdateForMergedChatWithPersonCentricIDIfNeeded:(id)arg1 updatedHandleID:(id)arg2;
- (id)_allHandlesOnAllChats;
- (_Bool)updateHandle:(id)arg1 forMessage:(id)arg2 WithPC:(id)arg3 onService:(id)arg4;
- (_Bool)updatePersonCentricIDForHandlesInChatWithMessage:(id)arg1 fromIdentifier:(id)arg2 personCentricID:(id)arg3 chat:(id)arg4;
- (id)_chatRegistry;
- (void)setChatIsFiltered:(long long)arg1 withChatGuid:(id)arg2;
- (void)deleteChat:(id)arg1;
- (void)remapMessageError:(unsigned int)arg1 toError:(unsigned int)arg2 forChat:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(_Bool)arg3;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2;
- (id)chatsGUIDsForMessageWithIdentifier:(long long)arg1;
- (id)chatsGUIDsForMessageWithGUID:(id)arg1;
- (id)newestChatWithGroupID:(id)arg1 onService:(id)arg2;
- (id)newestChatWithOriginalGroupID:(id)arg1 onService:(id)arg2;
- (id)chatsWithRoomname:(id)arg1 onService:(id)arg2;
- (id)chatsWithHandle:(id)arg1 onService:(id)arg2;
- (unsigned long long)unreadCountForChat:(id)arg1;
- (id)storeChat:(id)arg1;
- (id)loadAllChats;
- (void)_addGroupPhotoToTransferCenterForChat:(id)arg1;
- (void)unblackholeChat:(id)arg1;
- (void)blackholeChat:(id)arg1;
- (void)unarchiveChat:(id)arg1;
- (void)archiveChat:(id)arg1;
- (void)_updateModificationDate;
- (void)dealloc;
- (id)init;

@end

