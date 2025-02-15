//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate;

@interface HMDUnassociatedFaceCropModel : HMBModel
{
}

+ (id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(_Bool)arg1;
+ (id)sentinelParentUUID;
+ (id)hmbQueries;
+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
@property struct CGRect faceBoundingBox;
- (id)createFaceCrop;
- (id)initWithFaceCrop:(id)arg1;

// Remaining properties
@property(retain) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(retain) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain) NSData *faceBoundingBoxData; // @dynamic faceBoundingBoxData;

@end

