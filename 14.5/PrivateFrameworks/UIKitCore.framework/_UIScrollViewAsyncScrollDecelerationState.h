//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIScrollEvent;

__attribute__((visibility("hidden")))
@interface _UIScrollViewAsyncScrollDecelerationState : NSObject
{
    double _lastUpdateTime;
    UIScrollEvent *_scrollEvent;
    struct CGVector _velocity;
    NSMutableArray *_enqueuedCompletionResults;
    _Bool _deliveredFinishedDecelerating;
}

- (void).cxx_destruct;

@end

