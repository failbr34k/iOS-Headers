//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString, UILongPressGestureRecognizer;
@protocol VUICollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface VUICollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _bottomPadding;
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;
    struct UIEdgeInsets _gradientBoundsInsets;
    struct {
        unsigned int layoutBelowDisabled:1;
    } _flags;
    NSIndexPath *_indexPathForLastFocusedItem;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
@property(nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) struct UIEdgeInsets _gradientBoundsInsets;
- (struct CGRect)_visibleBounds;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;
- (void)_performBlockWithLongPressedCellIndexPath:(CDUnknownBlockType)arg1;
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;
- (void)_longPressAction:(id)arg1;
- (void)_playButtonAction:(id)arg1;
@property(nonatomic) __weak id <VUICollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)reloadData;
- (_Bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

