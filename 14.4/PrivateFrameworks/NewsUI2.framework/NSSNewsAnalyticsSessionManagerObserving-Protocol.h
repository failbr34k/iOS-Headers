//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol NSSNewsAnalyticsSessionManagerObserving <NSObject>
- (void)sessionWillEndWithEndReason:(NSNumber *)arg1;
- (void)sessionWillResignActive;
- (void)sessionDidStartWithSessionID:(NSString *)arg1 sourceApplication:(NSString *)arg2;
@property(nonatomic, readonly) NSString *sceneSessionIdentifier;
@end

