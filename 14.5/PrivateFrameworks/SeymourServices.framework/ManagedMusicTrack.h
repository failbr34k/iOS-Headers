//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ManagedArtwork, NSSet, NSString;

@interface ManagedMusicTrack : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *album; // @dynamic album;
@property(nonatomic, copy) NSString *artist; // @dynamic artist;
@property(nonatomic, retain) ManagedArtwork *artwork; // @dynamic artwork;
@property(nonatomic, retain) NSSet *catalogWorkoutMetadatas; // @dynamic catalogWorkoutMetadatas;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end

