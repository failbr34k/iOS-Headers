//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDPathSource.h>

#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDRealignablePathSource-Protocol.h>

@class NSArray, NSMutableArray, TSDBezierNode;

@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing>
{
    NSMutableArray *mSubpaths;
    unsigned long long mActiveSubpath;
    _Bool mHasLockedFlipTransform;
    struct CGAffineTransform mLockedFlipTransform;
}

+ (id)editableBezierPathSourceWithBezierPath:(id)arg1;
+ (id)editableBezierPathSourceWithPathSource:(id)arg1;
+ (id)editableBezierPathSource;
@property(retain, nonatomic) NSMutableArray *subpaths; // @synthesize subpaths=mSubpaths;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)closePath;
- (void)smoothCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) NSArray *nodeTypes;
@property(readonly, nonatomic) struct CGPath *subpathForSelection;
- (void)cutAtSelectedNodes;
- (_Bool)canCutAtSelectedNodes;
- (void)splitSelectedNodes;
- (void)splitSelectedEdges;
- (id)splitEdge:(long long)arg1 at:(double)arg2 fromSubpath:(long long)arg3;
- (void)deleteSelectedEdges;
- (void)closeSelectedNodes;
- (_Bool)canCloseSelectedNodes;
- (void)connectSelectedNodes;
- (_Bool)canConnectSelectedNodes;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(_Bool *)arg1 andSecondPathFirstNode:(_Bool *)arg2;
- (void)selectSubpathForNode:(id)arg1 toggle:(_Bool)arg2;
@property(nonatomic, getter=isClosed) _Bool closed;
@property(readonly, nonatomic) _Bool isOpen;
- (void)smoothAllNodes;
- (void)smoothNode:(id)arg1;
- (void)sharpenAllNodes;
- (void)toggleSelectedNodesToType:(int)arg1;
- (void)toggleNode:(id)arg1 toType:(int)arg2 prevNode:(id)arg3 nextNode:(id)arg4;
@property(readonly, nonatomic) struct CGRect nodeBounds;
- (id)insertNodeAtPoint:(struct CGPoint)arg1 tolerance:(double)arg2;
- (_Bool)bezierPathUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 tolerance:(double)arg3;
- (double)distanceToPoint:(struct CGPoint)arg1 subpathIndex:(unsigned long long *)arg2 elementIndex:(unsigned long long *)arg3 tValue:(double *)arg4 threshold:(double)arg5;
- (id)bezierNodeUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)deleteSelectedNodes;
- (void)deleteSelectedNodesForced:(_Bool)arg1;
@property(readonly, nonatomic) _Bool deletingSelectedNodesWillDeleteShape;
@property(readonly, nonatomic) _Bool canDeleteSelectedNodes;
@property(readonly, nonatomic) _Bool isCompound;
- (void)removeNode:(id)arg1;
@property(readonly, nonatomic) _Bool allNodesSelected;
@property(readonly, nonatomic) _Bool hasSelectedNode;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSDBezierNode *lastNode;
@property(readonly, nonatomic) TSDBezierNode *firstNode;
- (id)nodeAfterNode:(id)arg1;
- (id)nodePriorToNode:(id)arg1;
- (void)removeLastNode;
- (void)addNode:(id)arg1;
- (void)adjustGeometryForAlignToOrigin:(id)arg1;
- (void)alignToOrigin;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (Class)preferredRepClass;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)pathFlipTransform;
- (void)setLockedFlipTransform:(_Bool)arg1;
- (void)reverseDirection;
@property(retain, nonatomic) NSMutableArray *nodes;
- (void)setBezierPath:(id)arg1;
- (void)convertToHobby;
- (struct CGPath *)pathWithoutFlips;
- (id)bezierPathWithoutFlips;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (void)dealloc;
@property(readonly, nonatomic) _Bool closeIfEndpointsAreEqual;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

