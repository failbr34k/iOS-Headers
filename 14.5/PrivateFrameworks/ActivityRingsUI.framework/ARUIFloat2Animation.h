//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIRingGroupAnimation-Protocol.h>

@class CAMediaTimingFunction, MISSING_TYPE, NSString;
@protocol ARUIRingGroupAnimationDelegate;

__attribute__((visibility("hidden")))
@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation>
{
    double _percent;
    CDUnknownBlockType _applier;
    _Bool _completed;
    id <ARUIRingGroupAnimationDelegate> _delegate;
    double _duration;
    MISSING_TYPE *_startValue;
    MISSING_TYPE *_currentValue;
    MISSING_TYPE *_endValue;
    CAMediaTimingFunction *_timingFunction;
}

+ (id)animationWithDuration:(double)arg1 startValue:(id)arg2 endValue:(CDUnknownBlockType)arg3 timingFunction:applier: /* Error: Ran out of types for this method. */;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) MISSING_TYPE *endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) MISSING_TYPE *currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) MISSING_TYPE *startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <ARUIRingGroupAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeAnimation;
- (_Bool)isAnimating;
- (void)update:(double)arg1;
- (void)dealloc;
- (id)initWithDuration:(double)arg1 startValue:(id)arg2 endValue:(CDUnknownBlockType)arg3 timingFunction:applier: /* Error: Ran out of types for this method. */;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

