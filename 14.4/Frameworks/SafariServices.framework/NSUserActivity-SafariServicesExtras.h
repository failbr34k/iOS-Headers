//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/NSUserActivity.h>

@class NSNumber, NSUUID, _SFNavigationIntent;

@interface NSUserActivity (SafariServicesExtras)
+ (id)_sf_windowCreationAcitivtyFromSceneConnectionOptions:(id)arg1;
+ (id)_sf_windowCreationActivityWithRecentlyClosedTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationActivityWithTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationActivityWithMode:(long long)arg1;
+ (id)_sf_windowCreationActivityWithNavigationIntent:(id)arg1;
- (void)_sf_invalidateWindowCreationData;
@property(readonly, nonatomic) NSNumber *_sf_windowCreationMode;
@property(readonly, nonatomic) NSUUID *_sf_windowCreationRecentlyClosedTabUUID;
@property(readonly, nonatomic) NSUUID *_sf_windowCreationSourceBrowserControllerUUID;
@property(readonly, nonatomic) NSUUID *_sf_windowCreationTabUUID;
@property(readonly, nonatomic) _SFNavigationIntent *_sf_windowCreationNavigationIntent;
- (id)sf_windowCreationNavigationIntentID;
@end

