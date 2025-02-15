//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBLiveIconImageView.h>

@class CALayer, NSString, UIImage;

@interface SBHClockApplicationIconImageView : SBLiveIconImageView
{
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_hourMinuteDot;
    CALayer *_secondDot;
    unsigned int _jitterSkips;
    UIImage *_mappedContentsImage;
    UIImage *_squareMappedContentsImage;
    NSString *_currentNumberingSystem;
}

+ (id)backgroundImageName;
+ (id)systemNumberingSystem;
+ (void)precacheDataWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (id)iconImageWithImageInfo:(struct SBIconImageInfo)arg1 includingMask:(_Bool)arg2;
+ (id)imageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1;
+ (id)makeImageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1;
+ (id)makeHoursHandLayerWithImageSet:(id)arg1;
+ (id)makeHoursHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1;
+ (id)makeMinutesHandLayerWithImageSet:(id)arg1;
+ (id)makeMinutesHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1;
+ (id)makeSecondsHandLayerWithImageSet:(id)arg1;
+ (id)makeSecondsHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1;
+ (id)makeDotLayerWithOuterDiameter:(double)arg1 innerDiameter:(double)arg2 isSeconds:(_Bool)arg3 imageSet:(id)arg4;
+ (id)makeDotImageWithOuterDiameter:(double)arg1 innerDiameter:(double)arg2 color:(id)arg3 isSeconds:(_Bool)arg4 metrics:(const struct SBHClockApplicationIconImageMetrics *)arg5;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1 size:(struct CGSize)arg2 path:(struct CGPath *)arg3 fillColor:(id)arg4 options:(unsigned long long)arg5;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1 size:(struct CGSize)arg2 actions:(CDUnknownBlockType)arg3;
+ (void)getMetrics:(struct SBHClockApplicationIconImageMetrics *)arg1 forIconImageInfo:(struct SBIconImageInfo)arg2;
+ (void)configureHandLayer:(id)arg1 metrics:(const struct SBHClockApplicationIconImageMetrics *)arg2;
+ (id)hoursMinutesHandColor;
+ (id)secondsHandColor;
+ (void)_handleTimeChange:(id)arg1;
+ (void)_timerFired:(id)arg1;
+ (id)effectiveDate;
+ (void)setOverrideDateOffset:(double)arg1;
+ (double)overrideDateOffset;
+ (void)setOverrideDate:(id)arg1;
+ (id)overrideDate;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentNumberingSystem; // @synthesize currentNumberingSystem=_currentNumberingSystem;
- (void)localeDidChange:(id)arg1;
- (void)_timerFiredWithComponents:(id)arg1 flags:(unsigned long long)arg2;
- (void)updateUnanimated;
- (void)_updateUnanimatedWithComponents:(id)arg1;
- (_Bool)isAnimationAllowed;
- (void)_setAnimating:(_Bool)arg1;
- (void)updateAnimatingState;
- (id)squareContentsImage;
- (id)contentsImage;
- (void)layoutSubviews;
- (void)applyMetrics:(const struct SBHClockApplicationIconImageMetrics *)arg1;
- (void)getMetrics:(struct SBHClockApplicationIconImageMetrics *)arg1;
- (void)setJittering:(_Bool)arg1;
- (void)setPaused:(_Bool)arg1;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

