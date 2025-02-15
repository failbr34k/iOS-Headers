//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SpeakThisEventProcessor;

@protocol SpeakThisEventProcessorDelegate <NSObject>
- (struct CGRect)speakThisUIFrameWithEventProcessor:(SpeakThisEventProcessor *)arg1;
- (_Bool)isInSpeakUnderFingerModeWithEventProcessor:(SpeakThisEventProcessor *)arg1;
- (void)exitSpeakFingerModeWithEventProcessor:(SpeakThisEventProcessor *)arg1;
- (void)speakElementAtPoint:(struct CGPoint)arg1 withEventProcessor:(SpeakThisEventProcessor *)arg2;
@end

