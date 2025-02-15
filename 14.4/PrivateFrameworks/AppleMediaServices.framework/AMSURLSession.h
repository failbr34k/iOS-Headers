//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSURLSessionDataDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionTaskDelegate-Protocol.h>

@class AMSURLDelegateProxy, AMSURLSecurityPolicy, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol AMSRequestEncoding, AMSResponseDecoding, AMSURLHandling, NSURLSessionDelegate><AMSURLProtocolDelegate;

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSessionConfiguration *_configuration;
    AMSURLDelegateProxy *_delegateProxy;
    NSOperationQueue *_delegateQueue;
    id <AMSURLHandling> _protocolHandler;
    id <AMSResponseDecoding> _responseDecoder;
    NSURLSession *_session;
    _Bool _invalidated;
    id <AMSRequestEncoding> _requestEncoder;
    AMSURLSecurityPolicy *_securityPolicy;
}

+ (id)sharedAuthKitSession;
+ (id)defaultSession;
- (void).cxx_destruct;
@property(retain, nonatomic) AMSURLSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) AMSURLDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <AMSResponseDecoding> responseDecoder; // @synthesize responseDecoder=_responseDecoder;
@property(retain, nonatomic) id <AMSRequestEncoding> requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(readonly, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_prepareRequest:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (void)_retryTask:(id)arg1 action:(id)arg2 error:(id *)arg3;
- (id)_handleURLAction:(id)arg1 task:(id)arg2 error:(id *)arg3;
- (id)_formatError:(id)arg1 task:(id)arg2 decodedObject:(id)arg3;
- (id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3;
- (id)dataTaskPromiseWithRequestPromise:(id)arg1;
- (id)dataTaskPromiseWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithRequest:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
@property(retain, nonatomic) id <AMSURLHandling> protocolHandler; // @synthesize protocolHandler=_protocolHandler;
@property(nonatomic) __weak id <NSURLSessionDelegate><AMSURLProtocolDelegate> delegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

