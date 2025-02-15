//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPMutableMapStateProtocol-Protocol.h"

@class GEOMapRegion, GEOMapServiceTraits, MKMapCamera, NSArray, NSData, NSString, RAPTransitLine;
@protocol RAPMuninContext, RAPPlace, RAPPlacecardImageryContext;

__attribute__((visibility("hidden")))
@interface RAPMapState : NSObject <RAPMutableMapStateProtocol>
{
    _Bool _isShowingLabels;
    _Bool _isShowingImagery;
    id <RAPPlace> _reportedPlace;
    RAPTransitLine *_reportedLine;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_mapRegion;
    double _mapZoomLevel;
    unsigned long long _mapType;
    NSData *_mapSnapshotImageData;
    NSArray *_mapVisibleTileSets;
    MKMapCamera *_mapCamera;
    id <RAPMuninContext> _reportedMuninContext;
    id <RAPPlacecardImageryContext> _placecardImageryContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <RAPPlacecardImageryContext> placecardImageryContext; // @synthesize placecardImageryContext=_placecardImageryContext;
@property(readonly, nonatomic) id <RAPMuninContext> reportedMuninContext; // @synthesize reportedMuninContext=_reportedMuninContext;
@property(readonly, nonatomic) MKMapCamera *mapCamera; // @synthesize mapCamera=_mapCamera;
@property(readonly, nonatomic) NSArray *mapVisibleTileSets; // @synthesize mapVisibleTileSets=_mapVisibleTileSets;
@property(readonly, nonatomic) NSData *mapSnapshotImageData; // @synthesize mapSnapshotImageData=_mapSnapshotImageData;
@property(readonly, nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(readonly, nonatomic) double mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(readonly, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(retain, nonatomic) RAPTransitLine *reportedLine; // @synthesize reportedLine=_reportedLine;
@property(retain, nonatomic) id <RAPPlace> reportedPlace; // @synthesize reportedPlace=_reportedPlace;
@property(readonly, nonatomic) _Bool isShowingImagery; // @synthesize isShowingImagery=_isShowingImagery;
@property(readonly, nonatomic) _Bool isShowingLabels; // @synthesize isShowingLabels=_isShowingLabels;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithReportedPlace:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMapView:(id)arg1 traits:(id)arg2 place:(id)arg3;
- (id)initWithTraits:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

