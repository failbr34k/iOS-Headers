//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMICameraVideoFrame, NSDictionary;

@interface HMICameraVideoAnalyzerSignificantEvent : NSObject <NSSecureCoding>
{
    long long _events;
    HMICameraVideoFrame *_videoFrame;
    NSDictionary *_annotationScores;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSDictionary *annotationScores; // @synthesize annotationScores=_annotationScores;
@property(readonly) HMICameraVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(readonly) long long events; // @synthesize events=_events;
- (long long)confidenceThatEventOccurred:(long long)arg1;
- (id)initWithEvents:(long long)arg1 annotationScores:(id)arg2 videoFrame:(id)arg3;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

