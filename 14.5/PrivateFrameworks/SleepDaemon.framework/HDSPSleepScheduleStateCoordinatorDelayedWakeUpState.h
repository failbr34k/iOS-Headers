//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HDSPSleepScheduleStateCoordinatorStateMachineState.h>

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState
{
}

- (void)bedtimeReached;
- (void)windDownReached;
- (id)determineExpirationDateForCurrentDate:(id)arg1;
- (void)updateStateWithCheckExpiration:(_Bool)arg1;
- (void)wakeUpConfirmed;
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;
- (unsigned long long)scheduleState;
- (id)stateName;

@end

