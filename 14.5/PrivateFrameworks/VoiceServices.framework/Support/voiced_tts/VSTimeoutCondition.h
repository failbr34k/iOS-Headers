//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface VSTimeoutCondition : NSObject
{
    _Bool _shouldStop;
    double _timeoutValue;
    NSCondition *_refreshTimeoutCondition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property(retain, nonatomic) NSCondition *refreshTimeoutCondition; // @synthesize refreshTimeoutCondition=_refreshTimeoutCondition;
@property(nonatomic) double timeoutValue; // @synthesize timeoutValue=_timeoutValue;
- (_Bool)wait;
- (void)stop;
- (void)refresh;
- (_Bool)_waitForTimeInterval:(double)arg1;
- (id)initWithTimeoutValue:(double)arg1;

@end

