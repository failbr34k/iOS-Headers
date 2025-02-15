//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class AMSProcessInfo, NSMutableDictionary, NSString, NSURLSession;

@interface ClipURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    AMSProcessInfo *_clientInfo;
    struct os_unfair_lock_s _lock;
    NSURLSession *_session;
    NSMutableDictionary *_tasks;
}

+ (id)sharedSession;
- (void).cxx_destruct;
- (id)_requestForDownloadVariant:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)taskForSessionID:(id)arg1 withDownloadVariant:(id)arg2 streamWriter:(id)arg3 logContext:(CDStruct_d9ba43fd)arg4 metricEvent:(id)arg5;
- (void)cancelTasksAndInvalidateSession;
- (id)initWithClientInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

