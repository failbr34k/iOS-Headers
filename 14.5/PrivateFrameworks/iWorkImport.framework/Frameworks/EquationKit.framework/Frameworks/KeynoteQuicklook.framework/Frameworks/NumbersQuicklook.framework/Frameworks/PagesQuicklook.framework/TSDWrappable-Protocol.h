//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PagesQuicklook/NSObject-Protocol.h>

@class TSDAbstractLayout, TSDLayoutGeometry, TSDWrapSegments, TSUBezierPath;

@protocol TSDWrappable <NSObject>
@property(copy, nonatomic) TSDLayoutGeometry *geometry;
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (TSDWrapSegments *)wrapSegments;
- (TSUBezierPath *)wrapPath;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (TSDAbstractLayout *)parent;
@end

