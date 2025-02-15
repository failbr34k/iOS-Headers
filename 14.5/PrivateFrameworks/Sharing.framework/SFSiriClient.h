//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/VSSpeechSynthesizerDelegate-Protocol.h>

@class NSMutableArray, NSString, SFSiriRequest, VSSpeechSynthesizer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFSiriClient : NSObject <VSSpeechSynthesizerDelegate>
{
    _Bool _invalidateCalled;
    unsigned int _invalidateFlags;
    SFSiriRequest *_currentRequest;
    NSObject<OS_dispatch_source> *_currentTimer;
    NSString *_languageCode;
    NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _siriDialogHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType siriDialogHandler; // @synthesize siriDialogHandler=_siriDialogHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo2:(id)arg3;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)deviceSetupPlayGreetingID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deviceSetupPrepareGreeting:(CDUnknownBlockType)arg1;
- (void)_deviceSetupEnd;
- (void)deviceSetupEnd;
- (void)deviceSetupBegin:(unsigned long long)arg1;
- (void)startDelayedRequest:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)_processQueuedRequests;
- (void)stopSpeaking;
- (void)_speakText:(id)arg1 languageCode:(id)arg2 flags:(unsigned int)arg3 rate:(double)arg4 delay:(double)arg5 startHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)speakText:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 voiceName:(id)arg4 flags:(unsigned int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 voiceName:(id)arg4 flags:(unsigned int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

