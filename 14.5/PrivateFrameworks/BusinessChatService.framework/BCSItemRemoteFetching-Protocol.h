//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSString;

@protocol BCSItemRemoteFetching <NSObject>
- (void)fetchItemsWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 forClientBundleID:(NSString *)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
@end

