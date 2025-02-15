//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMCoreLite/NSObject-Protocol.h>

@class NSError;

@protocol FMPromise <NSObject>
- (void (^)(NSError *))errorOnlyCompletionHandlerAdapter;
- (void (^)(id, NSError *))completionHandlerAdapter;
- (_Bool)finishWithNoResult;
- (_Bool)finishWithResult:(id)arg1 error:(NSError *)arg2;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithError:(NSError *)arg1;
@end

