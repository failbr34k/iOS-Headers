//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMetric.h>

#import <coreroutine/RTMetricProtocol-Protocol.h>

@class NSString, RTRelabeler;

@interface RTRelabelerMetrics : RTMetric <RTMetricProtocol>
{
    RTRelabeler *_relabeler;
}

+ (id)supportedMetricKeys;
+ (CDStruct_b8464340)event;
+ (id)bucketedKeys;
+ (id)doubleKeys;
+ (id)integerKeys;
+ (id)unsignedIntegerKeys;
+ (id)booleanKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) RTRelabeler *relabeler; // @synthesize relabeler=_relabeler;
- (_Bool)submitMetricsWithError:(id *)arg1;
- (void)setDerivedMetrics;
- (void)setErrorMetrics:(id)arg1;
- (void)setOutputMetricsUsingInputCandidate:(id)arg1 priorVector:(id)arg2 observationVector:(id)arg3 posteriorVector:(id)arg4 relabeledProbVector:(id)arg5 relabeledInferredMapItem:(id)arg6;
- (id)maxUUIDOfProbVector:(id)arg1;
- (double)logMax2ConfidenceRatioOfRelabeledProbVector:(id)arg1;
- (id)getUUIDForPotentialRelabelingItemUsingInputCandidate:(id)arg1 relabeledProbVector:(id)arg2;
- (double)calculateEntropyOfProbVector:(id)arg1;
- (void)setNumberOfUniqueMapItems:(id)arg1;
- (void)setNonRevGeoCandidates:(id)arg1 revGeoCandidates:(id)arg2;
- (void)setFilteredInputMetricsUsingContextCandidates:(id)arg1;
- (void)setPreprocessedMetricsUsingInputCandidate:(id)arg1 contextCandidates:(id)arg2;
- (id)initWithRelabeler:(id)arg1;
- (id)initWithLoggingEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

