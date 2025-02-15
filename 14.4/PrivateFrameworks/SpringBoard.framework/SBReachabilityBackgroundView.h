//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>

@class CAShapeLayer, NSString, SBHomeGrabberView, SBWallpaperEffectView, UIViewFloatAnimatableProperty;

@interface SBReachabilityBackgroundView : UIView <SBHomeGrabberDelegate>
{
    UIView *_wallpaperContainerView;
    SBWallpaperEffectView *_topWallpaperEffectView;
    SBWallpaperEffectView *_bottomWallpaperEffectView;
    UIView *_hitTestBlockerView;
    long long _wallpaperVariant;
    SBHomeGrabberView *_homeGrabberView;
    CAShapeLayer *_chevronLayer;
    UIViewFloatAnimatableProperty *_chevronShapeAnimatableProperty;
    double _containerViewYOffset;
    double _homeGrabberAdditionalOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double homeGrabberAdditionalOffset; // @synthesize homeGrabberAdditionalOffset=_homeGrabberAdditionalOffset;
@property(nonatomic) double containerViewYOffset; // @synthesize containerViewYOffset=_containerViewYOffset;
@property(nonatomic) long long wallpaperVariant; // @synthesize wallpaperVariant=_wallpaperVariant;
- (void)_setupHitTestBlockerView;
- (void)_setupHomeGrabberView;
- (void)_updateChevronPathForUpFraction:(double)arg1;
- (void)_setupChevron;
- (void)_setupCornerContentsImageForWallpaperEffectView:(id)arg1;
- (double)_displayCornerRadius;
- (void)_updateWallpaperEffectViewAnimated:(_Bool)arg1;
- (id)_newWallpaperEffectViewForVariant:(long long)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
@property(nonatomic) double chevronAlpha;
@property(nonatomic) double homeGrabberAlpha;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperVariant:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

