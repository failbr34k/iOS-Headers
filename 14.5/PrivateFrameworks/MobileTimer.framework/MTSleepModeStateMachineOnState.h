//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTSleepModeStateMachineState.h>

@class NSDate;

@interface MTSleepModeStateMachineOnState : MTSleepModeStateMachineState
{
    NSDate *_sleepModeEndDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *sleepModeEndDate; // @synthesize sleepModeEndDate=_sleepModeEndDate;
- (void)didEnterWithPreviousState:(id)arg1;
- (_Bool)isEqualToState:(id)arg1;
- (id)initWithSleepModeEndDate:(id)arg1 stateMachine:(id)arg2;

@end

