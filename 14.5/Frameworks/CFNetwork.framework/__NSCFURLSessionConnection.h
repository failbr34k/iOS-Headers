//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSURLResponse, NSURLSessionTask;
@protocol OS_dispatch_data, OS_dispatch_queue, __NSCFURLSessionConnectionDelegate;

@interface __NSCFURLSessionConnection : NSObject <NSCopying>
{
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <__NSCFURLSessionConnectionDelegate> _delegate;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long long _cacheDataMax;
    long long _maxCacheEntrySize;
}

- (void)setIsDownload:(_Bool)arg1;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (void)expectedProgressTargetChanged;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setPriorityHint:(float)arg1 incremental:(_Bool)arg2;
- (void)setPoolPriority:(long long)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end

