//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFURLSessionConnection.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSURLAuthenticationChallengeSender-Protocol.h>

@class NSError, NSObject, NSString, NSURLResponse;
@protocol OS_dispatch_data;

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSURLAuthenticationChallengeSender, NSCopying>
{
    struct SessionConnectionLoadable *_loaderClient;
    struct URLConnectionLoader *_loader;
    _Bool _canceled;
    long long _suspended;
    NSObject<OS_dispatch_data> *_pendingData;
    long long _pendingCompletion;
    unsigned long long _didReceiveResponseDisposition;
    NSError *_pendingError;
    int _state;
    long long _clientBufferLength;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    _Bool _isMixedReplace;
    _Bool _didCheckMixedReplace;
    _Bool _didCheckCredentialsSuppliedInURL;
    _Bool _actuallyTriedCredentialsSuppliedInURL;
    unsigned long long _maxDataSegmentCoalesceThreshhold;
    unsigned long long _maxDataSegmentCount;
    unsigned int _didReceiveDataCount;
    _Bool _canSendDidFinishCollectingMetrics;
    _Bool _ignoreLoaderEvents;
}

- (void)_captureTransportConnection:(shared_ptr_8da4e70b)arg1 extraBytes:(id)arg2;
- (void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)_needNewBodyStream;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_conditionalRequirementsChanged:(_Bool)arg1;
- (void)_connectionIsWaitingWithReason:(long long)arg1;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didFinishWithError:(id)arg1;
- (void)_didSendBodyData:(struct UploadProgressInfo)arg1;
- (void)_didReceiveData:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(_Bool)arg2 rewrite:(_Bool)arg3;
- (void)_ackBytes:(long long)arg1;
- (void)expectedProgressTargetChanged;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setPriorityHint:(float)arg1 incremental:(_Bool)arg2;
- (void)setPoolPriority:(long long)arg1;
- (void)setIsDownload:(_Bool)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)withLoaderAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

