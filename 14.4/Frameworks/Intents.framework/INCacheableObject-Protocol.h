//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol INCacheableObject <NSObject>
+ (void)buildFromCachePayload:(NSDictionary *)arg1 identifier:(NSString *)arg2 completion:(void (^)(id))arg3;
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(void (^)(NSDictionary *))arg1;
@end

