//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol TSDSmartPathSource
@property(readonly) unsigned long long numberOfControlKnobs;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (NSString *)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;

@optional
- (struct CGPoint)fixedPointForControlKnobChange;
@end

