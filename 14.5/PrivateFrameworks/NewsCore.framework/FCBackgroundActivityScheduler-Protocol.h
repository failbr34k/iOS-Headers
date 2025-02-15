//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FCBackgroundActivityScheduler <NSObject>
- (void)requestBackgroundAppRefreshStartingAfter:(NSDate *)arg1 before:(NSDate *)arg2;
- (void)cancelRepeatingTaskWithIdentifier:(NSString *)arg1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(NSString *)arg2 task:(void (^)(void (^)(long long), _Bool (^)(void)))arg3;
@end

