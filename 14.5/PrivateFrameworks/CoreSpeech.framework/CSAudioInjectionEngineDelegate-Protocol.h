//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioChunkForTV, CSAudioInjectionEngine, NSData, NSError;

@protocol CSAudioInjectionEngineDelegate <NSObject>
- (void)audioEngineAudioChunkForTvAvailable:(CSAudioInjectionEngine *)arg1 audioChunk:(CSAudioChunkForTV *)arg2;
- (void)audioEngineBufferAvailable:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(unsigned long long)arg5;
- (void)audioEngineDidStopRecord:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)audioEngineDidStartRecord:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(NSError *)arg4;
@end

