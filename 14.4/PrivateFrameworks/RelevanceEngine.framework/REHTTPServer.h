//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REHTTPConnectionDelegate-Protocol.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, REHTTPServerDelegate;

@interface REHTTPServer : NSObject <REHTTPConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct _CFHTTPServer *_server;
    NSMutableArray *_connections;
    unsigned short _port;
    id <REHTTPServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <REHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didCloseConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)didOpenConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)didRecievedError:(id)arg1;
- (void)invalidated;
- (_Bool)_valid;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;

@end

