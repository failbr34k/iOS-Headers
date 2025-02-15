//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCMicroGamepad.h>

#import <GameController/CoalescableMicroGamepad-Protocol.h>
#import <GameController/DigitizerValueChangedDelegate-Protocol.h>

@class GCControllerDirectionPad, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GCAppleTVRemoteControllerProfile : GCMicroGamepad <DigitizerValueChangedDelegate, CoalescableMicroGamepad>
{
    double _windowX;
    double _windowY;
    double _windowSize;
    double _deadzoneSize;
    double _windowBufferSize[4];
    unsigned int _digitizerTouchState;
    unsigned int _sampleCount;
    unsigned int _accumInputSampleCount;
    double _prevLogTime;
    int _orientation;
    int _candidateOrientation;
    NSDate *_candidateOrientationTimestamp;
    unsigned long long _owner;
    long long _deviceType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long owner; // @synthesize owner=_owner;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (void)setAllowsRotation:(_Bool)arg1;
- (id)name;
- (id)initWithController:(id)arg1;
- (void)initCommon:(id)arg1;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;
- (void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double *)arg3 outYInWindow:(double *)arg4;
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(_Bool)arg3;
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;
- (void)processOrientationData:(id)arg1;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (unsigned int)sampleRate;
- (_Bool)ownershipClaimingElementsZero;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) GCControllerDirectionPad *dpad;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

