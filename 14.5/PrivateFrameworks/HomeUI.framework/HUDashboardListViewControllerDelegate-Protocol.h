//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUDashboardContext, HUDashboardListViewController;

@protocol HUDashboardListViewControllerDelegate <NSObject>
- (void)dashboardListViewControllerDidFinish:(HUDashboardListViewController *)arg1;
- (void)dashboardListViewController:(HUDashboardListViewController *)arg1 wantsToShowDashboardContext:(HUDashboardContext *)arg2;
@end

