//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync16MapsSyncBaseItem.h>

@class MISSING_TYPE, _TtC8MapsSync19MapsSyncDataSession;

@interface _TtC8MapsSync24MapsSyncCachedUserReview : _TtC8MapsSync16MapsSyncBaseItem
{
    MISSING_TYPE *_muid;
    MISSING_TYPE *_numberPhotosUploaded;
    MISSING_TYPE *_rating;
}

- (id)initWithObject:(id)arg1;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;
@property(nonatomic, readonly) short rating;
@property(nonatomic, readonly) int numberPhotosUploaded;
@property(nonatomic, readonly) unsigned long long muid;

@end

