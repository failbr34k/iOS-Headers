//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPTablePart.h"

@class RAPReportComposerMapPickerSection;

__attribute__((visibility("hidden")))
@interface RAPReportComposerMapFeaturePickerPart : RAPTablePart
{
    RAPReportComposerMapPickerSection *_mapCoordinatePickerSection;
}

- (void).cxx_destruct;
- (void)updateCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithMapPickerSection:(id)arg1;
- (id)initWithFeatureKind:(long long)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 delegate:(id)arg3;
- (id)initWithFeatureKind:(long long)arg1 camera:(id)arg2 delegate:(id)arg3;

@end

