//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertionManager, HDProfile, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver>
{
    HDProfile *_profile;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_eventCollectors;
}

- (void).cxx_destruct;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (id)_queue_eventCollectorsForType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)requestPendingEventsThroughDate:(id)arg1 sessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)takeSessionAssertionWithOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 sessionIdentifier:(id)arg3 eventsDelegate:(id)arg4;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

