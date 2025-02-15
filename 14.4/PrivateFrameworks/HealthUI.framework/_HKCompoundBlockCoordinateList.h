//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class HKValueRange, NSArray;

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList
{
    NSArray *_subCoordinates;
    HKValueRange *_chartableValueRange;
}

- (void).cxx_destruct;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (CDStruct_6ca94699)blockPathEnd;
- (CDStruct_6ca94699)blockPathStart;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (long long)numCoordinates;
- (id)coordinates;
- (id)_coordinatesInChartableRange:(id)arg1;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;

@end

