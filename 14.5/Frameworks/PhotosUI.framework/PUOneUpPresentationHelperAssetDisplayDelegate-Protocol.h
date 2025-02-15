//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSSet, PUAssetReference, PUOneUpPresentationHelper, UIImage;

@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
- (struct CGRect)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 rectForAssetReference:(PUAssetReference *)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;

@optional
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldDisableScroll:(_Bool)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 scrollAssetReferenceToVisible:(PUAssetReference *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 shouldHideAssetReferences:(NSSet *)arg2;
- (UIImage *)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 currentImageForAssetReference:(PUAssetReference *)arg2;
@end

