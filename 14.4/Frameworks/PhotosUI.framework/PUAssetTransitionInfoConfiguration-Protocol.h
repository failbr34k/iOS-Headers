//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PUPhotoViewContentHelper, PXImageLayerModulator, UIImage, UIView;
@protocol PUDisplayAsset;

@protocol PUAssetTransitionInfoConfiguration <NSObject>
@property(retain, nonatomic) PXImageLayerModulator *imageLayerModulator;
@property(retain, nonatomic) PUPhotoViewContentHelper *contentHelper;
@property(copy, nonatomic) NSArray *badgeTransitionInfos;
@property(retain, nonatomic) id <PUDisplayAsset> asset;
@property(nonatomic) double cornerRadius;
@property(nonatomic) _Bool allowAutoPlay;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) CDStruct_1b6d18a9 seekTime;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) UIView *snapshotView;
@end

