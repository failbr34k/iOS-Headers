//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (HealthKit)
+ (id)hk_dateIntervalForDayFromDate:(id)arg1 calendar:(id)arg2;
+ (id)hk_dateIntervalWithAnchor:(id)arg1 startOffset:(double)arg2 endOffset:(double)arg3;
+ (id)hk_instantaneousDateIntervalWithDate:(id)arg1;
+ (id)hk_dateIntervalWithStart:(double)arg1 end:(double)arg2;
+ (id)hk_allTime;
- (id)hk_prettyString;
- (_Bool)hk_containsTime:(double)arg1;
- (_Bool)hk_intersectsDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2;
@end

