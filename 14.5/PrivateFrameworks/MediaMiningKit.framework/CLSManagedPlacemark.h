//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CLSLocationCacheEntry, NSData, NSString;

@interface CLSManagedPlacemark : NSManagedObject
{
}

+ (id)entityName;

// Remaining properties
@property(copy, nonatomic) NSString *administrativeArea; // @dynamic administrativeArea;
@property(copy, nonatomic) NSString *administrativeAreaCode; // @dynamic administrativeAreaCode;
@property(copy, nonatomic) NSString *areasOfInterest; // @dynamic areasOfInterest;
@property(retain, nonatomic) CLSLocationCacheEntry *entry; // @dynamic entry;
@property(copy, nonatomic) NSString *geoServiceProvider; // @dynamic geoServiceProvider;
@property(copy, nonatomic) NSString *inlandWater; // @dynamic inlandWater;
@property(nonatomic) _Bool isIsland; // @dynamic isIsland;
@property(copy, nonatomic) NSString *isoCountryCode; // @dynamic isoCountryCode;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(copy, nonatomic) NSString *locality; // @dynamic locality;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(copy, nonatomic) NSString *ocean; // @dynamic ocean;
@property(copy, nonatomic) NSString *regionIdentifier; // @dynamic regionIdentifier;
@property(nonatomic) double regionLatitude; // @dynamic regionLatitude;
@property(nonatomic) double regionLongitude; // @dynamic regionLongitude;
@property(nonatomic) double regionRadius; // @dynamic regionRadius;
@property(retain, nonatomic) NSData *revGeoLocationData; // @dynamic revGeoLocationData;
@property(copy, nonatomic) NSString *subAdministrativeArea; // @dynamic subAdministrativeArea;
@property(copy, nonatomic) NSString *subLocality; // @dynamic subLocality;
@property(copy, nonatomic) NSString *subThoroughfare; // @dynamic subThoroughfare;
@property(copy, nonatomic) NSString *thoroughfare; // @dynamic thoroughfare;

@end

