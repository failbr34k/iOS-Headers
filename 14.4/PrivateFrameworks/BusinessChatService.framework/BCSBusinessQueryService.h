//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol BCSXPCDaemonConnectionProtocol, OS_dispatch_queue;

@interface BCSBusinessQueryService : NSObject
{
    NSDate *_lastTimeoutDate;
    id <BCSXPCDaemonConnectionProtocol> _connection;
    NSString *_clientBundleIdentifier;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) id <BCSXPCDaemonConnectionProtocol> connection; // @synthesize connection=_connection;
@property(retain) NSDate *lastTimeoutDate; // @synthesize lastTimeoutDate=_lastTimeoutDate;
- (void)_deleteInMemoryCache;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prefetchConfigCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)prefetchBloomFilterAndConfigCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLinkItemWithHash:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_isBusinessRegisteredForURL:(id)arg1 chopURL:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isBusinessRegisteredForURL:(id)arg1 chopURL:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isBusinessRegisteredForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLinkItemWithURL:(id)arg1 chopURL:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLinkItemWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchIsBusinessPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBusinessItemWithBizID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)businessItemForPhoneNumber:(id)arg1 isMessageable:(_Bool *)arg2 isChatSuggestVisible:(_Bool *)arg3 error:(id *)arg4;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1 clientBundleIdentifier:(id)arg2;

@end

