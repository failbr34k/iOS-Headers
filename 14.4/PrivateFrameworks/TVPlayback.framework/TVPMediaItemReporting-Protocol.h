//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/NSObject-Protocol.h>

@protocol TVPMediaItemReportingDelegate;

@protocol TVPMediaItemReporting <NSObject>
- (id <TVPMediaItemReportingDelegate>)reportingDelegate;

@optional
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
@end

