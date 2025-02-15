//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, VCVideoRule;

@protocol VCVideoCaptureClient
- (void)cameraAvailabilityDidChange:(_Bool)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (VCVideoRule *)clientCaptureRule;
- (void)avConferencePreviewError:(NSString *)arg1;

@optional
- (void)avConferenceScreenCaptureError:(NSString *)arg1;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;
@end

