//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SXImageRequest;

@protocol SXResourceDataSource <NSObject>
- (NSURL *)translateURL:(NSURL *)arg1;
- (void)fileURLForURL:(NSURL *)arg1 onCompletion:(void (^)(NSURL *))arg2 onError:(void (^)(NSError *))arg3;
- (void (^)(void))loadImagesForImageRequest:(SXImageRequest *)arg1 completionBlock:(void (^)(NSArray *))arg2;
@end

