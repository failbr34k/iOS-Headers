//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class CSAudioDecoder, NSData;

@protocol CSAudioDecoderDelegate <NSObject>
- (void)audioDecoderDidDecodePackets:(CSAudioDecoder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned int)arg6;
@end

