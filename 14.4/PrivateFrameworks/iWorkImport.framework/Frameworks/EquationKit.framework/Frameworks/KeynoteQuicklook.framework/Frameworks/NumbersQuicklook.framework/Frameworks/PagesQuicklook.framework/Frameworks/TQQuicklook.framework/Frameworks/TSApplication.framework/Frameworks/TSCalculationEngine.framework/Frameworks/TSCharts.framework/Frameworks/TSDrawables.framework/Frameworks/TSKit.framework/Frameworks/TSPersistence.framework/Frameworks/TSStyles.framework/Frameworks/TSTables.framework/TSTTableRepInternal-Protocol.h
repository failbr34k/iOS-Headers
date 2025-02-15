//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, TSDTilingLayer, TSTSelectionDragController, TSTTableReferences;

@protocol TSTTableRepInternal
@property(copy, nonatomic) NSSet *visibleFillKnobs;
@property(readonly, nonatomic) _Bool usesSelectionChromeResizer;
@property(readonly, nonatomic) _Bool selectsCellOnInitialTap;
@property(readonly, nonatomic) _Bool selectionUsesBezierPath;
@property(nonatomic) _Bool selectionDragAbortedOnNewSelection;
@property(nonatomic) __weak TSTSelectionDragController *cellDragController;
@property(readonly, nonatomic) _Bool zoomOperationIsInProgress;
@property(readonly, nonatomic) _Bool aspectOperationIsInProgress;
@property(readonly, nonatomic) TSTTableReferences *references;
@property(nonatomic) struct TSUCellCoord ratingsDragCellID;
@property(readonly, nonatomic) TSDTilingLayer *overlayFrozenHeaderColumns;
@property(readonly, nonatomic) TSDTilingLayer *overlayFrozenHeaderCorner;
@property(readonly, nonatomic) TSDTilingLayer *overlayFrozenHeaderRows;
@property(nonatomic) struct CGRect searchSelectionBounds;
@end

