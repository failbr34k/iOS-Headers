//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTTargetBootstrap/NSXPCListenerDelegate-Protocol.h>
#import <XCTTargetBootstrap/XCTMessagingChannel_DaemonToUIProcess-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTMessagingChannel_DaemonToUIProcess>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_clientListener;
    id <XCTConnectionAccepting> _connectionHandler;
}

- (void).cxx_destruct;
@property(retain) id <XCTConnectionAccepting> connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(retain) NSXPCListener *clientListener; // @synthesize clientListener=_clientListener;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_on_queue_getListenerEndpoint;
- (void)_on_queue_startListeningForClientConnections;
- (_Bool)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id *)arg2;
- (void)_on_queue_connect;
- (void)connect;
- (id)initWithDaemonConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

