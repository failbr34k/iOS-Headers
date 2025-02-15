//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint;

__attribute__((visibility("hidden")))
@interface WaypointSet : NSObject
{
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOrigin:(id)arg1 destination:(id)arg2;

@end

