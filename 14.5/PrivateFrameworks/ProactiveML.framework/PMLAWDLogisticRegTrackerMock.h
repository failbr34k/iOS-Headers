//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLProtoBufTracker.h>

@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker
{
    PMLTrackerMockAdapter *_adapter;
}

+ (id)mockTrackerForPlanId:(id)arg1;
+ (id)mockTracker;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *trackedWeights; // @dynamic trackedWeights;
@property(readonly, nonatomic) NSArray *trackedGradients; // @dynamic trackedGradients;
- (void)clearTrackedMessages;
- (id)initWithModel:(id)arg1;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

@end

