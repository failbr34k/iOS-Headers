//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSContextualEvent.h>

@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent
{
    double _confidenceThreshold;
    NSString *_topicID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(nonatomic) double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
- (id)debugDescription;
- (unsigned int)minObservationCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

