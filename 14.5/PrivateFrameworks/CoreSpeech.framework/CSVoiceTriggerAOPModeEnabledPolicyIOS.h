//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeechFoundation/CSPolicy.h>

#import <CoreSpeech/CSSiriClientBehaviorMonitorDelegate-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_recordStateQueue;
    _Bool _isSiriClientConsideredAsRecord;
    NSString *_pendingRecordingStopUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pendingRecordingStopUUID; // @synthesize pendingRecordingStopUUID=_pendingRecordingStopUUID;
@property(nonatomic) _Bool isSiriClientConsideredAsRecord; // @synthesize isSiriClientConsideredAsRecord=_isSiriClientConsideredAsRecord;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(_Bool)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;
- (_Bool)_isSpeechDetectionDevicePresent;
- (void)_addConditionsForIOSAOP;
- (void)_addConditionsForIOSBargeIn;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

