//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import <CoreSpeech/MCProfileConnectionObserver-Protocol.h>

@class NSString;

@interface CSSiriRestrictionOnLockScreenMonitor : CSEventMonitor <MCProfileConnectionObserver>
{
    _Bool _isRestricted;
}

+ (id)sharedInstance;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_notifyObserver:(id)arg1 withRestricted:(_Bool)arg2;
- (void)_didReceiveRestrictionChanged:(_Bool)arg1;
- (void)_didReceiveRestrictionChangedInQueue:(_Bool)arg1;
- (_Bool)_checkSiriRestrictedOnLockScreen;
- (_Bool)isRestricted;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

