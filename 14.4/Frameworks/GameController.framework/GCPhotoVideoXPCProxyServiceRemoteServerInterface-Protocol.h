//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol GCPhotoVideoXPCProxyServiceRemoteServerInterface
- (void)takeScreenshotWithReply:(void (^)(NSError *))arg1;
- (void)generateURLFor:(NSString *)arg1 optionalFolder:(NSString *)arg2 withReply:(void (^)(NSURL *, NSString *))arg3;
- (void)onVideoRecordingStopWithURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)onVideoRecordingStart:(void (^)(NSError *))arg1;
@end

