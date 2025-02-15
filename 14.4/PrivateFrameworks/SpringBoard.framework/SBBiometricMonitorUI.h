//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBiometricMonitorObserver-Protocol.h>

@class NSString, SBBiometricMonitorViewController, UIWindow;
@protocol SBBiometricMonitorDataSource;

@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver>
{
    _Bool _enabled;
    UIWindow *_debugWindow;
    SBBiometricMonitorViewController *_debugViewController;
    _Bool _deferredMatchUpdatePending;
    _Bool _deferredPresenceDetectUpdatePending;
    id <SBBiometricMonitorDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SBBiometricMonitorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)biometricMonitorDataSourcePoseUpdated:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;
- (void)biometricMonitorDataSourceMatchingEnded:(id)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id)arg1;
- (void)biometricMonitorDataSourceMatchingStarted:(id)arg1;
- (void)_cancelDeferredUpdatePresenceDetectState;
- (_Bool)_isDeferredPresenceDetectStateUpdatePending;
- (void)_deferredUpdatePresenceDetectState;
- (void)_cancelDeferredUpdateMatchState;
- (_Bool)_isDeferredMatchStateUpdatePending;
- (void)_deferredUpdateMatchState;
- (void)_doDeferredPresenceDetectUpdate;
- (void)_updatePresenceDetectState;
- (void)_doDeferredMatchStateUpdate;
- (void)_updateMatchState;
- (void)disable;
- (void)enable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

