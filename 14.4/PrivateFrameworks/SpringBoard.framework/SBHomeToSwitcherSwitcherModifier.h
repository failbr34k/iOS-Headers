//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier
{
    long long _direction;
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBSwitcherModifier *multitaskingModifier; // @synthesize multitaskingModifier=_multitaskingModifier;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
- (id)_dismissForEmptySwitcherResponseName;
- (id)appLayoutToScrollToDuringTransition;
- (_Bool)isEffectivelyHome;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (double)containerStatusBarAnimationDuration;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3;

@end

