//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthExperience/NSObject-Protocol.h>

@class HKCloudSyncObserver, HKCloudSyncObserverStatus, NSError, NSProgress;

@protocol HKCloudSyncObserverDelegate <NSObject>
- (void)cloudSyncObserverStatusUpdated:(HKCloudSyncObserver *)arg1 status:(HKCloudSyncObserverStatus *)arg2;
- (void)cloudSyncObserverSyncCompleted:(HKCloudSyncObserver *)arg1;
- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncFailedWithError:(NSError *)arg2;
- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncDidStartWithProgress:(NSProgress *)arg2;
@end

