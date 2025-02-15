//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/NSObject-Protocol.h>

@class NSData;

@protocol FPXEnumerator <NSObject>
- (void)invalidate;
- (void)keepAliveConnectionForRegisteredObserver:(void (^)(void))arg1;
- (void)enumerateChangesFromToken:(NSData *)arg1 reply:(void (^)(NSArray *, NSArray *, _Bool, NSData *, NSError *))arg2;
- (void)enumerateItemsFromPage:(NSData *)arg1 reply:(void (^)(NSArray *, NSData *, NSData *, NSError *))arg2;
- (void)currentSyncAnchorWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

