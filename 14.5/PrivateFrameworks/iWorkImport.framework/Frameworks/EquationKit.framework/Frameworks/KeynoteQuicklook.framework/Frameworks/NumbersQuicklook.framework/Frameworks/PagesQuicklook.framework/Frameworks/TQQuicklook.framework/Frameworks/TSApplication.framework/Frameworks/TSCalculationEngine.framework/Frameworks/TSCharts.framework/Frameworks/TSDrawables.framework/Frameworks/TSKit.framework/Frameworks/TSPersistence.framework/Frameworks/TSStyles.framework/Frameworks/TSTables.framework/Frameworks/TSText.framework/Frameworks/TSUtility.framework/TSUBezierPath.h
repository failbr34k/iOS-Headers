//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>

@interface TSUBezierPath : NSObject <NSCopying>
{
    long long sfr_elementCount;
    long long sfr_elementMax;
    struct PATHSEGMENT *sfr_head;
    double *sfr_elementLength;
    double sfr_totalLength;
    long long sfr_lastSubpathIndex;
    void *sfr_extraSegments;
    double sfr_lineWidth;
    struct CGRect sfr_bounds;
    struct CGRect sfr_controlPointBounds;
    double sfr_miterLimit;
    double sfr_flatness;
    double *sfr_dashedLinePattern;
    unsigned long long sfr_dashedLineCount;
    double sfr_dashedLinePhase;
    struct CGPath *sfr_path;
    long long sfr_extraSegmentCount;
    long long sfr_extraSegmentMax;
    struct {
        unsigned int sfr_flags:8;
        unsigned int sfr_pathState:2;
        unsigned int sfr_calculatedLengths:1;
        unsigned int sfr_unused:21;
    } sfr_bpFlags;
}

+ (double)defaultLineWidth;
+ (void)setDefaultLineWidth:(double)arg1;
+ (unsigned long long)defaultLineJoinStyle;
+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;
+ (unsigned long long)defaultLineCapStyle;
+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;
+ (long long)defaultWindingRule;
+ (void)setDefaultWindingRule:(long long)arg1;
+ (double)defaultFlatness;
+ (void)setDefaultFlatness:(double)arg1;
+ (double)defaultMiterLimit;
+ (void)setDefaultMiterLimit:(double)arg1;
+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (void)clipRect:(struct CGRect)arg1;
+ (void)strokeRect:(struct CGRect)arg1;
+ (void)fillRect:(struct CGRect)arg1;
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)bezierPathWithDefaultsForErrorCases;
+ (id)bezierPathWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
+ (id)bezierPath;
+ (void)initialize;
+ (double)lineWidth;
+ (void)setLineWidth:(double)arg1;
+ (unsigned long long)lineJoinStyle;
+ (void)setLineJoinStyle:(unsigned long long)arg1;
+ (unsigned long long)lineCapStyle;
+ (void)setLineCapStyle:(unsigned long long)arg1;
+ (long long)windingRule;
+ (void)setWindingRule:(long long)arg1;
+ (double)flatness;
+ (void)setFlatness:(double)arg1;
+ (double)miterLimit;
+ (void)setMiterLimit:(double)arg1;
+ (double)minimumLengthForSideToHaveFullContinuityWithCornerRadius1:(double)arg1 cornerRadius2:(double)arg2;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 upperRightRadius:(double)arg2 lowerRightRadius:(double)arg3 lowerLeftRadius:(double)arg4 upperLeftRadius:(double)arg5 useLegacyCorners:(_Bool)arg6 keepNoOpElements:(_Bool)arg7;
+ (id)bezierPathWithLegacyRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithContinuousCornerRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (id)initWithCString:(const char *)arg1;
- (const char *)cString;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;
- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;
- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;
- (void)appendBezierPathWithRect:(struct CGRect)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(_Bool)arg2;
- (void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(_Bool)arg2;
- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;
- (long long)elementAtIndex:(long long)arg1 allPoints:(struct CGPoint *)arg2;
- (long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;
- (long long)elementAtIndex:(long long)arg1;
- (long long)elementCount;
- (double)lengthToElement:(long long)arg1;
- (double)lengthOfElement:(long long)arg1;
- (double)length;
- (void)calculateLengths;
- (double)calculateLengthOfElement:(long long)arg1;
@property(readonly, nonatomic) _Bool containsClosePathElement;
- (_Bool)isClockwise;
- (_Bool)isFlat;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)controlPointBounds;
- (struct CGPoint)currentPoint;
- (_Bool)isEmpty;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (_Bool)isDiamond;
- (_Bool)isTriangular;
- (struct CGPath *)CGPath;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)convertCloseElementsToLineElements;
- (id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1;
- (id)bezierPathByRemovingRedundantElements;
- (id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1;
- (id)bezierPathByReversingPath;
- (id)_copyFlattenedPath;
- (id)bezierPathByFlatteningPathWithFlatness:(double)arg1;
- (id)bezierPathByFlatteningPath;
- (void)flattenIntoPath:(id)arg1 flatness:(double)arg2;
- (void)flattenIntoPath:(id)arg1;
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;
- (void)addClip;
- (void)fill;
- (void)stroke;
- (void)_doPath;
- (struct CGPoint)_checkPointForValidity:(struct CGPoint)arg1;
- (_Bool)_isValid:(double)arg1;
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
@property(nonatomic) double flatness;
@property(nonatomic) double miterLimit;
@property(nonatomic) long long windingRule;
@property(nonatomic) unsigned long long lineJoinStyle;
@property(nonatomic) unsigned long long lineCapStyle;
@property(nonatomic) double lineWidth;
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)relativeLineToPoint:(struct CGPoint)arg1;
- (void)relativeMoveToPoint:(struct CGPoint)arg1;
- (void)removeAllPoints;
- (void)closePath;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyPathAttributesTo:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)_deviceLineToPoint:(struct CGPoint)arg1;
- (void)_deviceMoveToPoint:(struct CGPoint)arg1;
- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;
- (id)description;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startRadialVector:(struct CGPoint)arg2 endRadialVector:(struct CGPoint)arg3 angleSign:(int)arg4 startNewPath:(_Bool)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(_Bool)arg5;

@end

