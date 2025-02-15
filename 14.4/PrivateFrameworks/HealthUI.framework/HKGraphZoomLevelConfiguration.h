//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject
{
    NSDateComponents *_axisLabelIntervalComponents;
    NSDateComponents *_minorAxisIntervalComponents;
    NSDateComponents *_seriesPointIntervalComponents;
    NSDateComponents *_referencePointIntervalComponents;
    long long _intendedTimeScope;
    double _seriesBlockSize;
    double _zoomLevelThreshold;
    double _canonicalSize;
    unsigned long long _majorTickCalendarUnit;
    double _approximateSeriesPointInterval;
    double _todayOffsetSize;
    double _approximateAxisLabelInterval;
}

+ (id)seriesPointIntervalUnitForTimeScope:(long long)arg1 pointCount:(long long)arg2;
+ (id)_axisSpanDateComponentsWithTimeScope:(long long)arg1;
+ (id)_snappingStartDateWithStartDate:(id)arg1 velocity:(struct CGPoint)arg2 calendar:(id)arg3 timeScope:(long long)arg4 options:(long long)arg5;
+ (id)activeRangeFromCadenceRange:(id)arg1 timeScope:(long long)arg2 axisRange:(id)arg3 calendar:(id)arg4;
+ (id)snappingRangeForRange:(id)arg1 axisRange:(id)arg2 timeScope:(long long)arg3 velocity:(struct CGPoint)arg4 calendar:(id)arg5 options:(long long)arg6;
+ (id)chartVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 dataRange:(id)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8;
+ (id)_fitRange:(id)arg1 toDateRange:(id)arg2 timeScope:(long long)arg3 alignment:(long long)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8;
+ (id)_dateOffsetByHalfCanonicalSizeOfDate:(id)arg1 timeScope:(long long)arg2;
+ (id)_visibleRangeDateFromDate:(id)arg1 timeScope:(long long)arg2 calendar:(id)arg3 offset:(long long)arg4;
+ (id)_visibleRangeDateFromAnchor:(id)arg1 timeScope:(long long)arg2 calendar:(id)arg3 offset:(long long)arg4;
+ (id)_findVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 calendar:(id)arg4;
+ (id)chartDataRangeForTimeScope:(long long)arg1 dataRange:(id)arg2 firstWeekday:(long long)arg3 calendar:(id)arg4 cadence:(long long)arg5;
+ (long long)timeScopeForDateRange:(id)arg1;
+ (id)defaultCalendar;
+ (id)configurationForZoomLevel:(long long)arg1;
+ (id)_generateConfigurationForZoomLevel:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double approximateAxisLabelInterval; // @synthesize approximateAxisLabelInterval=_approximateAxisLabelInterval;
@property(readonly, nonatomic) double todayOffsetSize; // @synthesize todayOffsetSize=_todayOffsetSize;
@property(readonly, nonatomic) double approximateSeriesPointInterval; // @synthesize approximateSeriesPointInterval=_approximateSeriesPointInterval;
@property(readonly, nonatomic) unsigned long long majorTickCalendarUnit; // @synthesize majorTickCalendarUnit=_majorTickCalendarUnit;
@property(readonly, nonatomic) double canonicalSize; // @synthesize canonicalSize=_canonicalSize;
@property(readonly, nonatomic) double zoomLevelThreshold; // @synthesize zoomLevelThreshold=_zoomLevelThreshold;
@property(readonly, nonatomic) double seriesBlockSize; // @synthesize seriesBlockSize=_seriesBlockSize;
@property(readonly, nonatomic) long long intendedTimeScope; // @synthesize intendedTimeScope=_intendedTimeScope;
@property(readonly, nonatomic) NSDateComponents *referencePointIntervalComponents; // @synthesize referencePointIntervalComponents=_referencePointIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *seriesPointIntervalComponents; // @synthesize seriesPointIntervalComponents=_seriesPointIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *minorAxisIntervalComponents; // @synthesize minorAxisIntervalComponents=_minorAxisIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *axisLabelIntervalComponents; // @synthesize axisLabelIntervalComponents=_axisLabelIntervalComponents;

@end

