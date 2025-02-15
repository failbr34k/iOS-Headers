//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFDictationDelegate-Protocol.h"

@class AFDictationConnection, CARDictationResult, NSError, NSString, NSTimer;

@interface CRDictationService : NSObject <AFDictationDelegate>
{
    AFDictationConnection *_dictationConnection;
    long long _state;
    CDUnknownBlockType _handler;
    CARDictationResult *_result;
    NSError *_error;
    NSTimer *_processingTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *processingTimer; // @synthesize processingTimer=_processingTimer;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CARDictationResult *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_finishIfPossible;
- (void)_processingTimeLimitReached;
- (void)_reset;
- (void)_transitionToState:(long long)arg1;
- (void)_fireHandler:(CDUnknownBlockType)arg1 withState:(long long)arg2 result:(id)arg3 error:(id)arg4;
- (void)_playEndDictationChime;
- (void)_playStartDictationChimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginRecordingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelRecording;
- (void)stopRecording;
@property(readonly, nonatomic) _Bool dictationAvailable;
@property(readonly, nonatomic) _Bool dictationEnabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

