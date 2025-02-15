//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageTransportDelegate-Protocol.h>
#import <HomeKitDaemon/NSXPCListenerDelegate-Protocol.h>

@class HMDApplicationRegistry, HMDProcessMonitor, HMDXPCMessageCountTracker, NSArray, NSMutableSet, NSObject, NSString, NSXPCInterface, NSXPCListener;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    HMDXPCMessageCountTracker *_xpcCounterTracker;
    HMDProcessMonitor *_processMonitor;
    NSXPCListener *_listener;
}

+ (id)logCategory;
+ (id)defaultTransport;
- (void).cxx_destruct;
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly) HMDProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
- (id)dumpState;
- (void)submitCounters;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)activeRequests;
@property(readonly, copy) NSArray *connections;
- (_Bool)stop;
- (_Bool)start;
@property(readonly) HMDApplicationRegistry *applicationRegistry;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

