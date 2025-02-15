//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer_Project-Protocol.h>

@class AMSMetricsDatabaseDataSource, NSDate, NSString;
@protocol AMSBagProtocol, AMSMetricsBagContract, AMSMetricsFlushStrategy, OS_dispatch_queue;

@interface AMSMetrics : NSObject <AMSBagConsumer_Project, AMSBagConsumer>
{
    _Bool _flushTimerEnabled;
    _Bool _flushingDisabled;
    _Bool _monitorsLifecycleEvents;
    _Bool _flushOnForeground;
    id <AMSBagProtocol> _bag;
    NSString *_containerId;
    long long _maxBatchSize;
    long long _maxRequestCount;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id <AMSMetricsFlushStrategy> _currentFlushStrategy;
    AMSMetricsDatabaseDataSource *_databaseSource;
    long long _destination;
    NSObject<OS_dispatch_queue> *_engagementQueue;
    CDUnknownBlockType _flushIntervalBlock;
    NSDate *_flushIntervalStartTime;
    NSObject<OS_dispatch_queue> *_flushQueue;
}

+ (id)sharedTimerQueue;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (double)timeIntervalFromServerTime:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (id)serverTimeFromDate:(id)arg1;
+ (_Bool)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2;
+ (void)setFlushTimerEnabled:(_Bool)arg1;
+ (void)setFlushDelayEnabled:(_Bool)arg1;
+ (void)setDisableBackgroundMetrics:(_Bool)arg1;
+ (_Bool)flushTimerEnabled;
+ (_Bool)flushDelayEnabled;
+ (_Bool)disableBackgroundMetrics;
+ (_Bool)diagnosticsSubmissionAllowed;
+ (_Bool)appAnalyticsAllowed;
+ (id)internalInstanceUsingBag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // @synthesize flushQueue=_flushQueue;
@property(retain, nonatomic) NSDate *flushIntervalStartTime; // @synthesize flushIntervalStartTime=_flushIntervalStartTime;
@property(copy, nonatomic) CDUnknownBlockType flushIntervalBlock; // @synthesize flushIntervalBlock=_flushIntervalBlock;
@property(nonatomic) _Bool flushOnForeground; // @synthesize flushOnForeground=_flushOnForeground;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engagementQueue; // @synthesize engagementQueue=_engagementQueue;
@property(nonatomic) long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource; // @synthesize databaseSource=_databaseSource;
@property(retain, nonatomic) id <AMSMetricsFlushStrategy> currentFlushStrategy; // @synthesize currentFlushStrategy=_currentFlushStrategy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) _Bool monitorsLifecycleEvents; // @synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents;
@property(nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(readonly, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) id <AMSMetricsBagContract> bagContract;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;
- (_Bool)_scheduledFlushAllowedForStyle:(long long)arg1;
- (void)_handleFlushIntervalWithStyle:(long long)arg1;
- (void)_flushIntervalInvalidate;
- (double)_flushIntervalForEvents:(id)arg1;
- (void)_beginFlushIntervalWithStyle:(long long)arg1 events:(id)arg2;
- (id)_flushDataSource:(id)arg1 topic:(id)arg2;
- (id)_enqueueFigaroEvents:(id)arg1;
- (id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2;
- (void)_applicationWillEnterForeground;
- (id)flushEvents:(id)arg1;
- (id)flushTopic:(id)arg1;
- (id)flush;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)dropEvents;
- (void)cancel;
@property(nonatomic) _Bool flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
@property(nonatomic) _Bool flushingDisabled; // @synthesize flushingDisabled=_flushingDisabled;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) long long eventCount;
- (void)dealloc;
- (id)initWithContainerID:(id)arg1 bag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

