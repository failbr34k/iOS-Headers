//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarKit/NSObject-Protocol.h>

@class IAPNavigationAccessory, IAPNavigationAccessoryComponent;

@protocol IAPNavigationDelegate <NSObject>
- (void)IAPNavigationAccessory:(IAPNavigationAccessory *)arg1 didDisableNavigationUpdatesForComponent:(IAPNavigationAccessoryComponent *)arg2;
- (void)IAPNavigationAccessory:(IAPNavigationAccessory *)arg1 didEnableNavigationUpdatesForComponent:(IAPNavigationAccessoryComponent *)arg2;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:(IAPNavigationAccessory *)arg1;
- (void)IAPNavigationAccessoryDidBecomeAvailable:(IAPNavigationAccessory *)arg1;
@end

