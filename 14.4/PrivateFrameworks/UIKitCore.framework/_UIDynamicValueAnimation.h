//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSArray, NSMutableArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation
{
    CDUnknownBlockType _applier;
    CDUnknownBlockType _viewApplier;
    double _value;
    double _velocity;
    double _unitSize;
    double _friction;
    double _decelerationFactor;
    double _decelerationLnFactor;
    double _multiplier;
    NSMutableArray *_activeValues;
    void *_stepFunction;
}

+ (id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(float)arg3 velocity:(float)arg4 fromValue:(double)arg5 toValue:(double)arg6;
@property(copy, nonatomic) NSArray *activeValues; // @synthesize activeValues=_activeValues;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)_setVelocity:(double)arg1;
- (void)_setMultiplier:(double)arg1;
- (double)_multiplier;
- (void)_setDecelerationFactor:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (_Bool)_animateForInterval:(double)arg1;
- (void)removeActiveValue:(id)arg1;
- (void)addActiveValue:(id)arg1;
- (void)_updateStepFunction;
- (void)_stopAnimation;
- (void)dealloc;
- (double)settlingDuration;
- (id)init;
- (id)initWithValue:(double)arg1 velocity:(double)arg2 unitSize:(double)arg3;

@end

