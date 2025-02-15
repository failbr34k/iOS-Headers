//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPARegion.h>

@interface IPAMutableRegion : IPARegion
{
}

- (void)applyAffineTransform:(struct CGAffineTransform)arg1;
- (void)applyOrientation:(long long)arg1 imageSize:(struct CGSize)arg2;
- (void)roundDown;
- (void)roundUp;
- (void)shrinkBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)shrinkBy:(struct CGPoint)arg1;
- (void)growBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)growBy:(struct CGPoint)arg1;
- (void)setRegion:(id)arg1;
- (void)clear;
- (void)scaleBy:(struct CGPoint)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flipInRect:(struct CGRect)arg1;
- (void)diffWithRegion:(id)arg1;
- (void)diffWithRect:(struct CGRect)arg1;
- (void)clipToRectArray:(id)arg1;
- (void)clipToRegion:(id)arg1;
- (void)clipToRect:(struct CGRect)arg1;
- (void)removeRectArray:(id)arg1;
- (void)addRectArray:(id)arg1;
- (void)removeRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)removeRect:(struct CGRect)arg1;
- (void)addRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

