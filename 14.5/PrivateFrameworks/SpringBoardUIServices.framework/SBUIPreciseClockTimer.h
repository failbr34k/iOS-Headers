//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSCalendar, NSMutableDictionary;

@interface SBUIPreciseClockTimer : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)now;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1;
- (void)_handleTimePassed;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)stopMinuteUpdatesForToken:(id)arg1;
- (id)startMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

