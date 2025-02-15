//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/PXPeopleCollectionViewCellDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleDragAndDropCollectionViewDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleDragAndDropCollectionViewDelegateLayout-Protocol.h>
#import <PhotosUICore/PXPeopleSectionedDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPeopleSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUICore/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, NSMutableDictionary, NSString, PXPeopleDragAndDropCollectionViewLayout, PXPeopleMeViewController, PXPeopleProgressFooterView, PXPeopleProgressManager, PXPeopleSectionedDataSource, PXPeopleSwipeSelectionManager, UIBarButtonItem, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol UIViewControllerAnimatedTransitioning;

@interface PXPeopleCollectionViewController : UICollectionViewController <PXPeopleDragAndDropCollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate, PXPeopleSectionedDataSourceChangeObserver, PXPeopleDragAndDropCollectionViewDelegateLayout, PXPeopleCollectionViewCellDelegate, PXPeopleSwipeSelectionManagerDelegate>
{
    _Bool _ignoreChangeUpdates;
    _Bool _needToCheckProgress;
    _Bool _shouldShowProgressFooter;
    _Bool _shouldShowMeHeader;
    _Bool _pendingChanges;
    _Bool _progressFooterAvailable;
    _Bool _ppt_shouldRunPPTCode;
    UILongPressGestureRecognizer *_dragRecognizer;
    unsigned long long _mode;
    UIBarButtonItem *_removeToolbarItem;
    UIBarButtonItem *_favoriteToolbarItem;
    UIBarButtonItem *_mergeToolbarItem;
    UIBarButtonItem *_selectItem;
    UIBarButtonItem *_debugMenuItem;
    PXPeopleProgressManager *_progressManager;
    PXPeopleProgressFooterView *_progressFooterView;
    PXPeopleMeViewController *_meViewController;
    UITapGestureRecognizer *_statusDebugRecognizer;
    NSDictionary *_contactByPersonLocalIdentifier;
    PXPeopleSwipeSelectionManager *_swipeSelectionManager;
    PXPeopleSectionedDataSource *_dataSource;
    NSIndexPath *_sourceDragIndexPath;
    NSIndexPath *_targetIndexPath;
    id <UIViewControllerAnimatedTransitioning> _transitionAnimator;
    NSArray *_transitionIndices;
    long long _ppt_numCellsLeft;
    NSMutableDictionary *_ppt_seenPeople;
    CDUnknownBlockType _ppt_cellsLoadedCompletionBlock;
    unsigned long long _ppt_sampledCountOfEmptyCells;
    unsigned long long _ppt_sampledCountOfFrames;
    struct CGPoint _lastDragPoint;
    struct CGRect _ppt_visibleCollectionViewRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect ppt_visibleCollectionViewRect; // @synthesize ppt_visibleCollectionViewRect=_ppt_visibleCollectionViewRect;
@property(nonatomic) unsigned long long ppt_sampledCountOfFrames; // @synthesize ppt_sampledCountOfFrames=_ppt_sampledCountOfFrames;
@property(nonatomic) unsigned long long ppt_sampledCountOfEmptyCells; // @synthesize ppt_sampledCountOfEmptyCells=_ppt_sampledCountOfEmptyCells;
@property(copy, nonatomic) CDUnknownBlockType ppt_cellsLoadedCompletionBlock; // @synthesize ppt_cellsLoadedCompletionBlock=_ppt_cellsLoadedCompletionBlock;
@property(nonatomic) _Bool ppt_shouldRunPPTCode; // @synthesize ppt_shouldRunPPTCode=_ppt_shouldRunPPTCode;
@property(retain, nonatomic) NSMutableDictionary *ppt_seenPeople; // @synthesize ppt_seenPeople=_ppt_seenPeople;
@property(nonatomic) long long ppt_numCellsLeft; // @synthesize ppt_numCellsLeft=_ppt_numCellsLeft;
@property(copy, nonatomic) NSArray *transitionIndices; // @synthesize transitionIndices=_transitionIndices;
@property(retain) id <UIViewControllerAnimatedTransitioning> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(nonatomic, getter=isProgressFooterAvailable) _Bool progressFooterAvailable; // @synthesize progressFooterAvailable=_progressFooterAvailable;
@property(nonatomic) _Bool pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property(nonatomic) struct CGPoint lastDragPoint; // @synthesize lastDragPoint=_lastDragPoint;
@property(retain, nonatomic) NSIndexPath *targetIndexPath; // @synthesize targetIndexPath=_targetIndexPath;
@property(retain, nonatomic) NSIndexPath *sourceDragIndexPath; // @synthesize sourceDragIndexPath=_sourceDragIndexPath;
@property(readonly, nonatomic) PXPeopleSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PXPeopleSwipeSelectionManager *swipeSelectionManager; // @synthesize swipeSelectionManager=_swipeSelectionManager;
@property(retain, nonatomic) NSDictionary *contactByPersonLocalIdentifier; // @synthesize contactByPersonLocalIdentifier=_contactByPersonLocalIdentifier;
@property(retain, nonatomic) UITapGestureRecognizer *statusDebugRecognizer; // @synthesize statusDebugRecognizer=_statusDebugRecognizer;
@property(retain, nonatomic) PXPeopleMeViewController *meViewController; // @synthesize meViewController=_meViewController;
@property(nonatomic) _Bool shouldShowMeHeader; // @synthesize shouldShowMeHeader=_shouldShowMeHeader;
@property(nonatomic) _Bool shouldShowProgressFooter; // @synthesize shouldShowProgressFooter=_shouldShowProgressFooter;
@property(retain, nonatomic) PXPeopleProgressFooterView *progressFooterView; // @synthesize progressFooterView=_progressFooterView;
@property _Bool needToCheckProgress; // @synthesize needToCheckProgress=_needToCheckProgress;
@property(retain, nonatomic) PXPeopleProgressManager *progressManager; // @synthesize progressManager=_progressManager;
@property(retain, nonatomic) UIBarButtonItem *debugMenuItem; // @synthesize debugMenuItem=_debugMenuItem;
@property(retain, nonatomic) UIBarButtonItem *selectItem; // @synthesize selectItem=_selectItem;
@property(retain, nonatomic) UIBarButtonItem *mergeToolbarItem; // @synthesize mergeToolbarItem=_mergeToolbarItem;
@property(retain, nonatomic) UIBarButtonItem *favoriteToolbarItem; // @synthesize favoriteToolbarItem=_favoriteToolbarItem;
@property(retain, nonatomic) UIBarButtonItem *removeToolbarItem; // @synthesize removeToolbarItem=_removeToolbarItem;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UILongPressGestureRecognizer *dragRecognizer; // @synthesize dragRecognizer=_dragRecognizer;
@property _Bool ignoreChangeUpdates; // @synthesize ignoreChangeUpdates=_ignoreChangeUpdates;
- (void)statusDebugRecognizerTapped:(id)arg1;
- (id)px_navigationDestination;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
- (void)_performMerge:(_Bool)arg1 targetPerson:(id)arg2 dragPerson:(id)arg3;
- (void)_animateCellAtIndexPathToDefaultState:(id)arg1;
- (id)_originalTargetIndexPathFromDragIndexPath:(id)arg1 targetIndexPath:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)collectionView:(id)arg1 didMergeDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didCancelMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didBeginMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)_progressChanged:(id)arg1;
- (void)_stopProgressMonitoring;
- (void)_startProgressMonitoring;
- (void)_resetHomeIfNeeded;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionViewDidLayout:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
@property(readonly, nonatomic) PXPeopleDragAndDropCollectionViewLayout *dragAndDropCollectionViewLayout;
- (void)_handleToolbarMergeAction:(id)arg1;
- (void)_handleToolbarFavoriteAction:(id)arg1;
- (void)_handleToolbarRemoveAction:(id)arg1;
- (void)_applyChangeDetailsArrayOnCollectionView:(id)arg1;
- (void)_showFavoritingBootstrapForPersonIfApplicable:(id)arg1;
- (void)_changeSelectedIndexesToPersonType:(long long)arg1;
- (void)updateNavTitleForIndexes:(id)arg1;
- (void)_updateToolbarItemsForIndexPaths:(id)arg1;
- (id)_bestTargetIndexPathGivenMergeIndexPaths:(id)arg1;
- (_Bool)_indexPathsContainMixedSections:(id)arg1;
- (long long)_changeTypeForIndexPaths:(id)arg1;
- (id)_rightBarItemsForMode:(unsigned long long)arg1;
- (id)_toolBarItemsForMode:(unsigned long long)arg1;
- (void)_selectAction:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_detailViewControllerAtIndexPath:(id)arg1;
- (void)showDetailsForMemberAtIndexPath:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)peopleCollectionViewCellDidToggleFavoriteState:(id)arg1;
- (double)_bottomInsetForSection:(unsigned long long)arg1;
- (double)_topInsetForSection:(unsigned long long)arg1;
- (struct CGSize)_itemSizeForItemAtIndexPath:(id)arg1;
- (double)_currentItemSpacing;
- (double)_currentLineSpacing;
- (long long)_verticalSizeClass;
- (long long)_horizontalSizeClass;
- (id)_changeMemberAtIndex:(id)arg1 toPersonType:(long long)arg2;
- (unsigned long long)_fixedColumnCountForIndexPath:(id)arg1;
- (_Bool)_favoritesEmpty;
- (void)_updateVisibleCellsForSelectionMode:(unsigned long long)arg1;
- (void)_updateMeHeaderVisibilityIfNeeded:(_Bool)arg1 animated:(_Bool)arg2;
- (id)selectionModeTitle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;
- (id)init;
- (void)commonInit;
- (void)collectionViewDidEndInteractiveMode:(id)arg1;
- (void)collectionViewDidEndDrag:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)handleMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)handleReorderingGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)ppt_indexPathsForPeopleThatCanChangeToType:(long long)arg1;
- (void)ppt_changeIndexPaths:(id)arg1 toType:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)ppt_namePerson:(id)arg1;
- (id)ppt_randomPerson;
- (id)ppt_bestPersonForBootstrap;
- (long long)ppt_numOfCellsLoadingImages;
- (id)ppt_indexPathOfPersonWithMostAssets;
@property(readonly, nonatomic) unsigned long long ppt_countOfEmptyCells;
@property(readonly, nonatomic) NSDictionary *ppt_scrollingInformation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

