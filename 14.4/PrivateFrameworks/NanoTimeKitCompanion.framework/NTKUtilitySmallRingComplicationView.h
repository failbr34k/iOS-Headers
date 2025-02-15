//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class NTKColoringImageView;

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView
{
    _Bool _didDrawOnce;
    float _fillFraction;
    NTKColoringImageView *_fillFractionRing;
}

- (void).cxx_destruct;
@property(nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property(retain, nonatomic) NTKColoringImageView *fillFractionRing; // @synthesize fillFractionRing=_fillFractionRing;
- (id)ringColor;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateRingWithRingDescription:(id)arg1 backgroundRingAlpha:(double)arg2;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)layoutSubviews;
- (void)_applyForegroundAlpha;
- (id)initWithFrame:(struct CGRect)arg1;

@end

