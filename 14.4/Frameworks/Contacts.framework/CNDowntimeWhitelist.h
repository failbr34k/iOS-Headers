//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSNotificationCenter;
@protocol CNDowntimeWhitelistContainerFetching, NSObject;

@interface CNDowntimeWhitelist : NSObject
{
    id <CNDowntimeWhitelistContainerFetching> _containerFetcher;
    CNContactStore *_contactStore;
    NSNotificationCenter *_notificationCenter;
    id <NSObject> _contactStoreDidChangeNotificationToken;
}

+ (_Bool)isWhitelistedContact:(id)arg1;
+ (_Bool)anyContactIsWhitelisted:(id)arg1;
+ (id)keyDescriptor;
+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> contactStoreDidChangeNotificationToken; // @synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) id <CNDowntimeWhitelistContainerFetching> containerFetcher; // @synthesize containerFetcher=_containerFetcher;
- (void)setTestContainerFetcher:(id)arg1;
- (id)requestForNonUnifiedContacts;
- (id)requestForContactsInPermittedContainers;
- (id)requestForContactsInPermittedContainersWithHandles:(id)arg1;
- (id)allWhitelistedContacts:(id *)arg1;
- (id)allWhitelistedHandleStrings:(id *)arg1;
- (id)allWhitelistedHandleStrings;
- (_Bool)isHandleStringWhitelisted:(id)arg1 error:(id *)arg2;
- (_Bool)isHandleStringWhitelisted:(id)arg1;
- (id)whitelistedHandleStringsFromHandleStrings:(id)arg1 error:(id *)arg2;
- (id)whitelistedHandleStringsFromHandleStrings:(id)arg1;
- (void)dealloc;
- (void)beginObservingChangeNotifications;
- (id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithContactStore:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)init;

@end

