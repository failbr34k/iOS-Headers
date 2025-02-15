//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSBatteryChargingView.h>

@class CABackdropLayer, CALayer, CSAccessoryConfiguration, CSRingLayer, SBUILegibilityLabel, UIView;

@interface CSBatteryChargingRingView : CSBatteryChargingView
{
    CSAccessoryConfiguration *_configuration;
    CABackdropLayer *_ringBlurBackdropLayer;
    CALayer *_chargingBoltGlyph;
    CABackdropLayer *_backgroundRadiusBackdropLayer;
    CABackdropLayer *_backgroundBackdropLayer;
    CABackdropLayer *_averageColorBackdropLayer;
    CALayer *_ringTempOverlayLayer;
    CALayer *_splashRing;
    CSRingLayer *_batteryLevelRing;
    CSRingLayer *_trackFillRingLayer;
    CSRingLayer *_ringBlurLayer;
    SBUILegibilityLabel *_chargePercentLabel;
    UIView *_chargingContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *chargingContainerView; // @synthesize chargingContainerView=_chargingContainerView;
@property(retain, nonatomic) SBUILegibilityLabel *chargePercentLabel; // @synthesize chargePercentLabel=_chargePercentLabel;
@property(retain, nonatomic) CSRingLayer *ringBlurLayer; // @synthesize ringBlurLayer=_ringBlurLayer;
@property(retain, nonatomic) CSRingLayer *trackFillRingLayer; // @synthesize trackFillRingLayer=_trackFillRingLayer;
@property(retain, nonatomic) CSRingLayer *batteryLevelRing; // @synthesize batteryLevelRing=_batteryLevelRing;
@property(retain, nonatomic) CALayer *splashRing; // @synthesize splashRing=_splashRing;
@property(retain, nonatomic) CALayer *ringTempOverlayLayer; // @synthesize ringTempOverlayLayer=_ringTempOverlayLayer;
@property(retain, nonatomic) CABackdropLayer *averageColorBackdropLayer; // @synthesize averageColorBackdropLayer=_averageColorBackdropLayer;
@property(retain, nonatomic) CABackdropLayer *backgroundBackdropLayer; // @synthesize backgroundBackdropLayer=_backgroundBackdropLayer;
@property(retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer; // @synthesize backgroundRadiusBackdropLayer=_backgroundRadiusBackdropLayer;
@property(retain, nonatomic) CALayer *chargingBoltGlyph; // @synthesize chargingBoltGlyph=_chargingBoltGlyph;
@property(retain, nonatomic) CABackdropLayer *ringBlurBackdropLayer; // @synthesize ringBlurBackdropLayer=_ringBlurBackdropLayer;
@property(retain, nonatomic) CSAccessoryConfiguration *configuration; // @synthesize configuration=_configuration;
- (struct CGPath *)_pathForRingConfiguration:(id)arg1;
- (id)_ringLayerForRingConfiguration:(id)arg1;
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2 font:(id)arg3;
- (id)_chargePercentFont;
- (_Bool)_isReduceTransparencyEnabled;
- (_Bool)_isDarkerSystemColorsEnabled;
- (_Bool)_isReduceMotionEnabled;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_runAnimationWithType:(unsigned long long)arg1;
- (void)_performChargingBoltDismissAnimation;
- (void)_performChargingBoltPresentAnimation;
- (void)_runBatteryLevelDismissAnimation;
- (void)_runChargingLabelPresentAnimation;
- (void)_runBatteryLevelRingAnimation;
- (void)_runChargingBoltAnimationVisible:(_Bool)arg1;
- (void)_runRingBlurAnimation;
- (void)_runSplashRingAnimation;
- (void)_runDimAnimation;
- (void)setLegibilitySettings:(id)arg1;
- (double)desiredVisibilityDuration;
- (long long)batteryCount;
- (void)setBatteryVisible:(_Bool)arg1;
- (_Bool)batteryVisible;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (id)_colorForBattery:(id)arg1;
- (int)_powerStatusForBattery:(id)arg1;
- (double)batteryChargingLevel;
- (void)_layoutChargePercentLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

