//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEORouteMatcher.h>

__attribute__((visibility("hidden")))
@interface GEODrivingRouteMatcher : GEORouteMatcher
{
}

- (double)_courseFromLocation:(id)arg1;
- (CDStruct_c3b9c2ee)_coordinateFromLocation:(id)arg1;
- (_Bool)_supportsSnapping;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (id)initWithRoute:(id)arg1;

@end

