//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformImplementation-Protocol.h>

@class CPLChangeSessionContext, NSString;

@protocol CPLChangeSessionImplementation <CPLPlatformImplementation>
- (void)tearDownWithCompletionHandler:(void (^)(void))arg1;
- (void)finalizeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)beginSessionWithKnownLibraryVersion:(NSString *)arg1 context:(CPLChangeSessionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

