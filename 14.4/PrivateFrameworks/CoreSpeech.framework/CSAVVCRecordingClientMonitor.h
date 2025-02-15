//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import <CoreSpeech/CSAudioServerCrashMonitorDelegate-Protocol.h>

@class AVVoiceTriggerClient, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSAVVCRecordingClientMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>
{
    unsigned long long _numOfAVVCRecordingClients;
    AVVoiceTriggerClient *_alwaysOnProcessorController;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController; // @synthesize alwaysOnProcessorController=_alwaysOnProcessorController;
@property(readonly, nonatomic) unsigned long long numOfAVVCRecordingClients; // @synthesize numOfAVVCRecordingClients=_numOfAVVCRecordingClients;
- (void)_didReceiveAVVCRecordingClientNumberChange:(unsigned long long)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

