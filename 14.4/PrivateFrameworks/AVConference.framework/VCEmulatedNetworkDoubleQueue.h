//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCEmulatedNetwork.h>

@class VCEmulatedNetworkQueue;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork
{
    VCEmulatedNetworkQueue *_networkQueueA;
    VCEmulatedNetworkQueue *_networkQueueB;
}

- (void)runUntilTime:(double)arg1;
- (void)push:(id)arg1;
- (void)dealloc;
- (id)initWithPolicies:(id)arg1;

@end

