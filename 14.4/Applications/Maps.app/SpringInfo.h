//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SpringInfo : NSObject
{
    double _mass;
    double _stiffness;
    double _damping;
    double _initialVelocity;
    double _undershootTime;
    double _overshootTime;
    double _settlingTime;
}

@property(readonly, nonatomic) double settlingTime; // @synthesize settlingTime=_settlingTime;
@property(readonly, nonatomic) double overshootTime; // @synthesize overshootTime=_overshootTime;
@property(readonly, nonatomic) double undershootTime; // @synthesize undershootTime=_undershootTime;
@property(readonly, nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(readonly, nonatomic) double damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(readonly, nonatomic) double mass; // @synthesize mass=_mass;
- (id)description;
- (double)valueAtTime:(double)arg1;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4;

@end

