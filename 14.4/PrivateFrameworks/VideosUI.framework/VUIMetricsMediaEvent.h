//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIMetricsMediaEvent : NSObject
{
}

+ (id)_metricsDataFromTVPMediaItem:(id)arg1 isBackground:(_Bool)arg2 isAmbient:(_Bool)arg3;
+ (id)generateSkipImpressionsFromSkipInfo:(id)arg1;
+ (void)recordImpressionsOfSkipButton:(id)arg1 onMediaItem:(id)arg2;
+ (void)recordClickOfSkipInfo:(id)arg1 onMediaItem:(id)arg2;
+ (id)impressionsMetricsDataFromTVPMediaItem:(id)arg1;
+ (id)clickMetricsDataFromTVPMediaItem:(id)arg1;
+ (void)recordPlayOfTVPMediaItem:(id)arg1;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)arg1 isAmbient:(_Bool)arg2;
+ (void)recordPunchout:(id)arg1 isUrlForPlay:(_Bool)arg2;
+ (void)recordPlay:(id)arg1 isLaunchingExtras:(_Bool)arg2;

@end

