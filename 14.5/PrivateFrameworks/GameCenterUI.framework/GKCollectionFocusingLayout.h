//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout
{
    double _topHeaderHeight;
    double _focusScaleFactor;
    NSIndexPath *_focusedIndexPath;
    double _focusHeaderOffset;
    double _headerToItemSpacing;
    UICollectionViewLayoutAttributes *_topHeaderAttributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *topHeaderAttributes; // @synthesize topHeaderAttributes=_topHeaderAttributes;
@property(nonatomic) double headerToItemSpacing; // @synthesize headerToItemSpacing=_headerToItemSpacing;
@property(nonatomic) double focusHeaderOffset; // @synthesize focusHeaderOffset=_focusHeaderOffset;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(nonatomic) double focusScaleFactor; // @synthesize focusScaleFactor=_focusScaleFactor;
@property(nonatomic) double topHeaderHeight; // @synthesize topHeaderHeight=_topHeaderHeight;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg1;
- (id)focusAdjustedAttributesForItemAttributes:(id)arg1;
- (void)prepareLayout;
- (struct CGSize)sizeForFooterInSection:(long long)arg1;
- (struct CGSize)sizeForHeaderInSection:(long long)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (double)minimumLineSpacingForSectionAtIndex:(long long)arg1;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1;
- (struct UIEdgeInsets)sectionInset;
- (void)_updateFocusFrameForCellAtIndexPath:(id)arg1;
- (void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg1;
- (_Bool)shouldUpdateVisibleCellLayoutAttributes;
- (void)applyDefaults;
- (void)awakeFromNib;
- (id)init;

@end

