//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPDevicePowerObserver-Protocol.h>
#import <SleepDaemon/HDSPDiagnosticsProvider-Protocol.h>
#import <SleepDaemon/HDSPNotificationObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepEventHandler-Protocol.h>
#import <SleepDaemon/HDSPSleepEventProvider-Protocol.h>
#import <SleepDaemon/HDSPSleepModeObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleModelObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleStateObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepTracker-Protocol.h>
#import <SleepDaemon/HDSPTimeAsleepTrackerStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPTimeAsleepTrackerStateMachineInfoProvider-Protocol.h>
#import <SleepDaemon/HDSPTimeChangeObserver-Protocol.h>
#import <SleepDaemon/HDSPWakeDetector-Protocol.h>

@class HDSPEnvironment, HDSPTimeAsleepTrackerStateMachine, HKSPSleepScheduleModel, NSArray, NSDate, NSString;
@protocol HDSPSleepEventDelegate, HDSPSleepTrackerDelegate, HDSPTimeAsleepTracker, HDSPWakeDetectorDelegate, NAScheduler;

@interface HDSPTimeAsleepTracker : NSObject <HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPWakeDetector, HDSPNotificationObserver, HDSPDevicePowerObserver, HDSPSleepTracker>
{
    _Bool _isDetecting;
    struct os_unfair_lock_s _timeAsleepTrackerLock;
    HDSPEnvironment *_environment;
    id <HDSPSleepTrackerDelegate> _delegate;
    id <HDSPWakeDetectorDelegate> _wakeDetectorDelegate;
    id <HDSPSleepEventDelegate> _sleepEventDelegate;
    CDUnknownBlockType _sleepTrackerProvider;
    id <HDSPTimeAsleepTracker> _sleepTracker;
    HDSPTimeAsleepTrackerStateMachine *_stateMachine;
    NSArray *_appLaunchRegistrations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *appLaunchRegistrations; // @synthesize appLaunchRegistrations=_appLaunchRegistrations;
@property(readonly, nonatomic) HDSPTimeAsleepTrackerStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) struct os_unfair_lock_s timeAsleepTrackerLock; // @synthesize timeAsleepTrackerLock=_timeAsleepTrackerLock;
@property(readonly, nonatomic) id <HDSPTimeAsleepTracker> sleepTracker; // @synthesize sleepTracker=_sleepTracker;
@property(readonly, copy, nonatomic) CDUnknownBlockType sleepTrackerProvider; // @synthesize sleepTrackerProvider=_sleepTrackerProvider;
@property(nonatomic) __weak id <HDSPSleepEventDelegate> sleepEventDelegate; // @synthesize sleepEventDelegate=_sleepEventDelegate;
@property(nonatomic) __weak id <HDSPWakeDetectorDelegate> wakeDetectorDelegate; // @synthesize wakeDetectorDelegate=_wakeDetectorDelegate;
@property(readonly, nonatomic) _Bool isDetecting; // @synthesize isDetecting=_isDetecting;
@property(nonatomic) __weak id <HDSPSleepTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)diagnosticInfo;
- (id)diagnosticDescription;
- (id)currentState;
- (void)previousSessionFinished;
- (id)processedSessionForSession:(id)arg1;
@property(readonly, nonatomic) unsigned long long detectionWindowMinutes;
- (void)stopDetecting;
- (void)startDetecting;
- (void)_handleInternalSleepSessionEndRequest;
- (void)_handleActivityDetectedOnDate:(id)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)significantTimeChangeDetected:(id)arg1;
- (void)deviceChangedChargingState:(_Bool)arg1;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (id)eventIdentifiers;
- (void)sleepEventIsDue:(id)arg1;
- (id)upcomingEventsDueAfterDate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3;
- (void)notifyForActivityDetectedOnDate:(id)arg1;
- (void)stopAppLaunchDetection;
- (void)_handleAppLaunched:(id)arg1 onDate:(id)arg2;
- (void)startAppLaunchDetection;
- (void)stopActivityDetection;
- (void)startActivityDetection;
- (id)_createSleepSessionWithSleepAnalysis:(id)arg1 endReason:(unsigned long long)arg2;
- (void)_handleSleepSessionAnalysisResults:(id)arg1 endReason:(unsigned long long)arg2;
- (void)endSleepTrackingSessionWithReason:(unsigned long long)arg1;
- (void)startSleepTrackingSessionWithReason:(unsigned long long)arg1;
- (void)unscheduleSleepTracking;
- (void)scheduleSleepTracking;
- (id)trackingWindowAfterDate:(id)arg1;
@property(readonly, nonatomic) unsigned long long sleepScheduleState;
@property(readonly, nonatomic) _Bool inWakeDetectionWindow;
@property(readonly, nonatomic) _Bool inUserRequestedSleepMode;
@property(readonly, nonatomic) _Bool isCharging;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)updateState;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1 sleepTrackerProvider:(CDUnknownBlockType)arg2;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

