//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UICollectionLayoutItemSolver;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionEstimatedSolutionBookmark : NSObject
{
    _UICollectionLayoutItemSolver *_solution;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryOffsets;
    struct _NSRange _itemRange;
    struct CGRect _solutionFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <_UICollectionLayoutAuxillaryOffsets> supplementaryOffsets; // @synthesize supplementaryOffsets=_supplementaryOffsets;
@property(readonly, nonatomic) struct _NSRange itemRange; // @synthesize itemRange=_itemRange;
@property(readonly, nonatomic) struct CGRect solutionFrame; // @synthesize solutionFrame=_solutionFrame;
@property(readonly, nonatomic) _UICollectionLayoutItemSolver *solution; // @synthesize solution=_solution;
- (id)description;
- (id)_supplementaryOffsetsForItemRange:(struct _NSRange)arg1 solution:(id)arg2 supplementaryOffsets:(id)arg3;
- (id)initWithSolution:(id)arg1 frame:(struct CGRect)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 maxItemFrameCount:(long long)arg5;

@end

