//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLAuthenticationChallengeSender-Protocol.h>

@class NSString, NSURLConnectionInternal, NSURLRequest;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender>
{
    NSURLConnectionInternal *_internal;
}

+ (void)_setSweeperInterval:(unsigned long long)arg1;
+ (unsigned long long)_sweeperInterval;
+ (_Bool)canHandleRequest:(id)arg1;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;
+ (struct __CFRunLoop *)resourceLoaderRunLoop;
+ (unsigned long long)_timingDataOptions;
+ (void)_collectTimingDataWithOptions:(unsigned long long)arg1;
+ (_Bool)_collectsTimingData;
+ (void)_setCollectsTimingData:(_Bool)arg1;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (id)_cfInternal;
- (id)_dlInternal;
- (_Bool)defersCallbacks;
- (void)setDefersCallbacks:(_Bool)arg1;
- (id)connectionProperties;
- (void)download;
@property(readonly, copy) NSURLRequest *currentRequest;
@property(readonly, copy) NSURLRequest *originalRequest;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)start;
- (void)setDelegateQueue:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(_Bool)arg3 maxContentLength:(long long)arg4 startImmediately:(_Bool)arg5 connectionProperties:(id)arg6;
- (id)_timingData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

