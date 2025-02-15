//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMIDESMutableFloatArray, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface HMIMutableCluster : HMFObject <HMFLogging>
{
    NSMutableArray *_faceprintUUIDs;
    NSMutableSet *_linkedEntityUUIDs;
    HMIDESMutableFloatArray *_centroid;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMIDESMutableFloatArray *centroid; // @synthesize centroid=_centroid;
- (void)addFaceprints:(id)arg1;
@property(readonly) NSSet *linkedEntityUUIDs;
- (void)addLinkedEntityUUIDs:(id)arg1;
@property(readonly) NSArray *faceprintUUIDs;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithFaceprint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

