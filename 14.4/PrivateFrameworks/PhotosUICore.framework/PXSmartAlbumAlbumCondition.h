//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumAlbumCondition : PXSmartAlbumCondition
{
    NSArray *_albumValues;
}

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)anyAlbumValue;
- (void).cxx_destruct;
- (id)_albumValues;
@property(retain, nonatomic) PXLabeledValue *albumValue;
@property(readonly, nonatomic) _Bool albumValueIsOrphaned;

@end

