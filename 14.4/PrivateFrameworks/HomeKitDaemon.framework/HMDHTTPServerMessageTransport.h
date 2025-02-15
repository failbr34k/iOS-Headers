//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFHTTPServerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFHTTPServer, HMFUnfairLock, NSArray, NSDictionary, NSMutableArray, NSString, NSUUID;
@protocol HMDHTTPServerMessageTransportDelegate;

@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate>
{
    HMFUnfairLock *_lock;
    NSMutableArray *_clientConnections;
    HMFHTTPServer *_server;
    id <HMDHTTPServerMessageTransportDelegate> _delegate;
    NSUUID *_identifier;
}

+ (id)shortDescription;
+ (id)maximumSupportedProtocolVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDHTTPServerMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMFHTTPServer *server; // @synthesize server=_server;
- (void)timerDidFire:(id)arg1;
- (void)server:(id)arg1 didCloseConnection:(id)arg2;
- (void)server:(id)arg1 didOpenConnection:(id)arg2;
- (_Bool)server:(id)arg1 shouldAcceptConnection:(id)arg2;
- (void)server:(id)arg1 didStopWithError:(id)arg2;
- (void)__registerPingHandler;
- (void)__registerSendMessageHandler;
- (void)__registerSendResponseHandler;
- (void)__registerReceiveMessageHandler;
- (id)_clientConnectionForDevice:(id)arg1;
- (void)sendMessage:(id)arg1 toDevices:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)confirmDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stopWithError:(id)arg1;
- (void)stop;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *TXTRecord;
- (void)removeAllClientConnections;
- (void)removeClientConnection:(id)arg1;
- (void)addClientConnection:(id)arg1;
@property(readonly, nonatomic) NSArray *clientConnections;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithServerIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

