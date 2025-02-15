//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDFill.h>

#import <TSDrawables/NSCopying-Protocol.h>
#import <TSDrawables/NSMutableCopying-Protocol.h>
#import <TSDrawables/TSDMixing-Protocol.h>
#import <TSDrawables/TSPStyleObjectDataContainer-Protocol.h>
#import <TSDrawables/TSSPresetSource-Protocol.h>

@class NSArray, NSObject, NSString, TSDImageFillCachedImage, TSPData, TSUColor;
@protocol OS_dispatch_queue;

@interface TSDImageFill : TSDFill <TSDMixing, TSSPresetSource, TSPStyleObjectDataContainer, NSCopying, NSMutableCopying>
{
    TSPData *mImageData;
    unsigned long long mTechnique;
    TSUColor *mTintColor;
    TSDImageFillCachedImage *mStandardSizeTintedImage;
    TSDImageFillCachedImage *mHalfSizeTintedImage;
    TSDImageFillCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    TSUColor *mCachedReferenceColor;
    _Bool mShouldSkipFurtherAttemptsToCalculateReferenceColor;
    struct CGSize mFillSize;
    _Bool mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage *mTempRenderCopy;
    struct CGImage *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3;
+ (id)presetKinds;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TSUColor *tintColor; // @synthesize tintColor=mTintColor;
@property(nonatomic) unsigned long long technique; // @synthesize technique=mTechnique;
@property(readonly, retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
- (void)p_drawPDFWithProvider:(id)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect)arg3;
- (void)p_drawBitmapImage:(struct CGImage *)arg1 withOrientation:(long long)arg2 inContext:(struct CGContext *)arg3 bounds:(struct CGRect)arg4;
- (struct CGRect)p_drawnRectForImageSize:(struct CGSize)arg1 destRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (id)p_validatedImageProvider;
@property(readonly, nonatomic) NSArray *referencedDataList;
- (id)presetKind;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)p_quarterSizeCachedImage;
- (id)p_halfSizeCachedImage;
- (id)p_standardSizeCachedImage;
- (id)p_tintedImageWithScale:(double)arg1;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)drawFillInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 clippingToPath:(struct CGPath *)arg3;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 rectForFill:(struct CGRect)arg3;
- (struct CGSize)p_sizeOfFillImageForDestRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (struct CGSize)renderedImageSizeForObjectSize:(struct CGSize)arg1;
- (id)p_cachedImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orContentsScaleProvider:(id)arg3;
- (_Bool)p_shouldApplyTintedImage;
- (long long)fillType;
- (_Bool)canApplyToRenderableByAddingSubrenderables;
- (_Bool)canApplyToRenderable;
- (_Bool)drawsInOneStep;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)p_updateCachedReferenceColorIfNeeded;
- (void)i_updateStoredReferenceColorIfNeeded;
- (id)p_calculateReferenceColor;
@property(readonly, nonatomic) TSUColor *storedReferenceColor;
- (id)referenceColorForFontArchiving;
- (id)referenceColor;
- (void)i_setStoredReferenceColor:(id)arg1;
- (id)imageDataAtFillSize;
- (void)p_setFillSizeForApplicationData;
- (_Bool)isOpaque;
@property(readonly, nonatomic) struct CGSize fillSize; // @synthesize fillSize=mFillSize;
@property(readonly, nonatomic) double scale;
- (struct CGSize)p_imageDataNaturalSize;
@property(readonly, nonatomic) _Bool canCopyData;
- (id)copyWithNewImageData:(id)arg1;
@property(nonatomic, setter=p_setFillSize:) struct CGSize p_fillSize;
@property(retain, nonatomic, setter=p_setTintColor:) TSUColor *p_tintColor;
@property(nonatomic, setter=p_setTechnique:) unsigned long long p_technique;
@property(retain, nonatomic, setter=p_setImageData:) TSPData *p_imageData;
- (void)flushImageCache;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_clearTintedImageCache;
- (void)dealloc;
- (void)i_commonInit;
- (id)initForUnarchiving;
- (id)initWithImageData:(id)arg1 technique:(unsigned long long)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4;
- (id)initWithImageData:(id)arg1 technique:(unsigned long long)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4 referenceColor:(id)arg5;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

