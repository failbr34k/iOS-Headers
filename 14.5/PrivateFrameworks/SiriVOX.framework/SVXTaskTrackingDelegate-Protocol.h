//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@protocol SVXTaskTracking;

@protocol SVXTaskTrackingDelegate <NSObject>
- (void)taskTrackerDidEnd:(id <SVXTaskTracking>)arg1;
- (void)taskTracker:(id <SVXTaskTracking>)arg1 childWillBegin:(id <SVXTaskTracking>)arg2;
@end

