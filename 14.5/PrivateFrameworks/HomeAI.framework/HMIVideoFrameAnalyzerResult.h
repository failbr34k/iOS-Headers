//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoEvent-Protocol.h>

@class HMIVideoFrame, NSSet, NSString;

@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent>
{
    HMIVideoFrame *_frame;
    NSSet *_events;
    struct CGRect _regionOfInterest;
}

- (void).cxx_destruct;
@property(readonly) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly) NSSet *events; // @synthesize events=_events;
@property(readonly) HMIVideoFrame *frame; // @synthesize frame=_frame;
@property(readonly) CDStruct_1b6d18a9 time;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(id)arg1 events:(id)arg2 regionOfInterest:(struct CGRect)arg3;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

