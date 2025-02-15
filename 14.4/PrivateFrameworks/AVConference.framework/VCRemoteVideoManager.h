//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRemoteVideoManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCRemoteVideoManagerDelegate;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate>
{
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    struct _opaque_pthread_mutex_t _remoteVideoLock;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
    id <VCRemoteVideoManagerDelegate> _delegate;
}

+ (id)defaultManager;
- (void)registerBlocksForService;
- (void)notifyCachedStateForStreamToken:(id)arg1;
- (void)cleanupDictionaries;
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (void)unlock;
- (void)lock;
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (_Bool)doesQueueExistForStreamToken:(id)arg1;
- (id)getQueueForStreamToken:(unsigned int)arg1 videoMode:(int)arg2;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(_Bool)arg3;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;
@property(nonatomic) id <VCRemoteVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

