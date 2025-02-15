//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSObject;
@protocol FCOperationCanceling, OS_dispatch_queue;

@protocol FCStreaming <NSObject>
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (id <FCOperationCanceling>)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end

