//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolNetworkDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3;
- (void)webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2;
- (void)webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2;
- (void)webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 walltime:(double)arg3 request:(id)arg4;
- (void)responseInterceptedWithRequestId:(id)arg1 response:(id)arg2;
- (void)requestInterceptedWithRequestId:(id)arg1 request:(id)arg2;
- (void)requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7;
- (void)loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(_Bool *)arg4;
- (void)loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id *)arg3 metrics:(id *)arg4;
- (void)dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4;
- (void)responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6;
- (void)requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 walltime:(double)arg7 initiator:(id)arg8 redirectResponse:(id *)arg9 type:(long long *)arg10 targetId:(id *)arg11;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

