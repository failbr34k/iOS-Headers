//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/HMIVideoProcessingNode.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMFUnfairLock, HMITimeIntervalAverage, NSObject, NSString;
@protocol HMIVideoCommandBufferDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMIVideoCommandBuffer : HMIVideoProcessingNode <HMFLogging>
{
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    long long _count;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _maxDuration;
    HMITimeIntervalAverage *_delay;
    id <HMIVideoCommandBufferDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property __weak id <HMIVideoCommandBufferDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) double videoDelay;
@property(readonly) CDStruct_1b6d18a9 videoDuration;
@property(readonly) unsigned long long videoSampleCount;
- (void)handleBlock:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)flush;
- (void)flushAsync;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithMaxDuration:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

