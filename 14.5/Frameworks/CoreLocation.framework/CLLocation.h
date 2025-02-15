//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLFloor, CLLocationMatchInfo, NSData, NSDate, NSString, _CLLocationGroundAltitude;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
+ (id)locationByReductivelyFilteringLocations:(id)arg1 options:(id)arg2;
+ (id)locationByReductivelyFilteringLocations:(id)arg1;
+ (id)deriveLocationFromLocations:(id)arg1 options:(id)arg2;
+ (id)deriveLocationFromLocations:(id)arg1;
+ (id)filterOutliers:(id)arg1 options:(id)arg2;
+ (id)filterOutliers:(id)arg1;
+ (double)rangeForTransmitPower:(double)arg1;
+ (double)rangeForReductiveFilterOptions:(id)arg1;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 coarseMetaData:(id)arg8 positionContextStateType:(int)arg9 probabilityPositionContextStateIndoor:(double)arg10 probabilityPositionContextStateOutdoor:(double)arg11;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 coarseMetaData:(id)arg8;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4;
- (void)setHorizontalAccuracy:(double)arg1;
@property(readonly, nonatomic) NSString *iso6709Notation;
- (id)propagateLocationToTime:(double)arg1;
- (id)snapToResolution:(double)arg1;
- (double)distanceFromLocation:(id)arg1;
- (double)getDistanceFrom:(id)arg1;
@property(readonly, copy, nonatomic) CLFloor *floor;
@property(readonly, nonatomic) NSData *coarseMetaData;
@property(readonly, nonatomic, getter=isCoordinateFused) _Bool coordinateFused;
@property(readonly, nonatomic) double altitudeWgs84;
@property(readonly, nonatomic) _Bool isAltitudeWgs84Available;
@property(readonly, nonatomic) double probabilityPositionContextStateOutdoor;
@property(readonly, nonatomic) double probabilityPositionContextStateIndoor;
@property(readonly, nonatomic) int positionContextState;
@property(readonly, nonatomic) int signalEnvironmentType;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) double trustedTimestamp;
@property(readonly, nonatomic) unsigned int integrity;
@property(readonly, nonatomic) double rawCourseAccuracy;
@property(readonly, nonatomic) double rawCourse;
@property(readonly, nonatomic) double courseAccuracy;
@property(readonly, nonatomic) double course;
@property(readonly, nonatomic) double speedAccuracy;
@property(readonly, nonatomic) double speed;
@property(readonly, nonatomic) CDStruct_f6588c5f clientLocation;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double verticalAccuracy;
@property(readonly, nonatomic) double horizontalAccuracy;
@property(readonly, nonatomic) double ellipsoidalAltitude;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double rawHorizontalAccuracy;
@property(readonly, nonatomic) struct CLLocationCoordinate2D rawCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) int referenceFrame;
- (id)jsonObject;
- (id)shortDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 clientLocationPrivate:(CDStruct_9a0b11ca)arg2 coarseMetaData:(id)arg3;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 clientLocationPrivate:(CDStruct_9a0b11ca)arg2;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 coarseMetaData:(id)arg2;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9 floor:(int)arg10;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)init;
- (id)_initWithRTLocation:(id)arg1;
- (void)unmatch;
@property(readonly, nonatomic) CLLocationMatchInfo *matchInfo;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithClientLocation:(CDStruct_f6588c5f)arg1 matchInfo:(id)arg2;
@property(readonly, nonatomic) _CLLocationGroundAltitude *_groundAltitude;

@end

