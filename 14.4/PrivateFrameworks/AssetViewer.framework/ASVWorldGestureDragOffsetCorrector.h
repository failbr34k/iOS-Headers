//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ASVWorldGestureDragOffsetCorrector : NSObject
{
    MISSING_TYPE *_initialDragOffset;
    MISSING_TYPE *_thresholdDragOffset;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) MISSING_TYPE *thresholdDragOffset; // @synthesize thresholdDragOffset=_thresholdDragOffset;
@property(nonatomic) MISSING_TYPE *initialDragOffset; // @synthesize initialDragOffset=_initialDragOffset;
- (MISSING_TYPE *)currentDragOffset;
- (id)initWithInitialDragOffset:thresholdDragOffset: /* Error: Ran out of types for this method. */;

@end

