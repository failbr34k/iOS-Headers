//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class CLRegion, NSString, UNSLocationMonitor;

@protocol UNSLocationMonitorObserver <NSObject>

@optional
- (void)locationMonitor:(UNSLocationMonitor *)arg1 triggerDidFireForRegion:(CLRegion *)arg2 forBundleIdentifier:(NSString *)arg3;
@end

