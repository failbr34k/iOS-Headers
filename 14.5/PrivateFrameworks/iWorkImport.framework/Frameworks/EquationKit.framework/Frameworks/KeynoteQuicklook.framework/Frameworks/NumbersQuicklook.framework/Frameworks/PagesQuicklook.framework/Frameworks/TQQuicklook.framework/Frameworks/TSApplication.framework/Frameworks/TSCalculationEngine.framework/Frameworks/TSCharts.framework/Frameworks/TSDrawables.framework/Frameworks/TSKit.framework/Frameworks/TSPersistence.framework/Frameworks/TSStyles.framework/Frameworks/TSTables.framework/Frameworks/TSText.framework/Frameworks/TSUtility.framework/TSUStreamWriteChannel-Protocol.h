//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol TSUStreamWriteChannel <TSUIOChannel>
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 handler:(void (^)(_Bool, unsigned long long, NSError *))arg2;
@end

