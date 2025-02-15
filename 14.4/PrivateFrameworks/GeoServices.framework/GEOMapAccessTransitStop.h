//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapAccessTransitNodeBase.h>

#import <GeoServices/GEOMapTransitStop-Protocol.h>

@class NSString;
@protocol GEOMapTransitHall;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitStop : GEOMapAccessTransitNodeBase <GEOMapTransitStop>
{
    id <GEOMapTransitHall> _hall;
}

- (void).cxx_destruct;
- (id)findLinksOut:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findLinksIn:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findHall:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long hallID;

// Remaining properties
@property(readonly, nonatomic) double boundingRadius;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property(readonly, nonatomic) long long polygonPointsCount;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long transitID;

@end

