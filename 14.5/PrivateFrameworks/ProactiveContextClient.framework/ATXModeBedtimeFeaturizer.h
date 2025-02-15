//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXModeFeaturizer-Protocol.h>

@class ATXModeTimer, MTAlarm, MTAlarmManager, NSString;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeBedtimeFeaturizer : NSObject <ATXModeFeaturizer>
{
    MTAlarmManager *_alarmManager;
    MTAlarm *_sleepAlarm;
    ATXModeTimer *_timer;
    int _significantTimeToken;
    id <ATXModeFeaturizerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ATXModeFeaturizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateFeatures;
- (void)_scheduleTimerForAlarm:(id)arg1;
- (void)stopListening;
- (void)beginListening;
- (void)_fetchSleepAlarmIfNecessary;
- (void)_alarmsDidChange:(id)arg1;
- (id)provideFeatures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

