//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class NSArray, SBLockScreenLegibilitySettings;

@protocol SBLockScreenPluginAppearance <NSObject>
@property(readonly, nonatomic) struct CGRect presentationRegion;
@property(readonly, retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property(readonly, copy, nonatomic) NSArray *elementOverrides;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@end

