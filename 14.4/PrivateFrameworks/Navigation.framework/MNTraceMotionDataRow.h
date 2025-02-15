//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class NSString;

@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _timestamp;
    unsigned long long _motionType;
    unsigned long long _exitType;
    unsigned long long _confidence;
}

@property(nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned long long motionType; // @synthesize motionType=_motionType;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double position;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

