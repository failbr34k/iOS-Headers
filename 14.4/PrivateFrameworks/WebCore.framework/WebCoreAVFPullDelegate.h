//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemOutputPullDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate>
{
    struct BinarySemaphore m_semaphore;
}

- (id).cxx_construct;
@property(readonly, nonatomic) struct BinarySemaphore *semaphore; // @synthesize semaphore=m_semaphore;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

