//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <ChatKit/CKCloudKitSyncProgressViewControllerDelegate-Protocol.h>
#import <ChatKit/CKContainerSearchControllerDelegate-Protocol.h>
#import <ChatKit/CKConversationListCollectionViewCellDelegate-Protocol.h>
#import <ChatKit/CKConversationListControllerProtocol-Protocol.h>
#import <ChatKit/CKConversationListEmbeddedCollectionViewCellDelegate-Protocol.h>
#import <ChatKit/CKConversationResultsControllerDelegate-Protocol.h>
#import <ChatKit/CKMacToolbarItemProvider-Protocol.h>
#import <ChatKit/CKOnboardingControllerDelegate-Protocol.h>
#import <ChatKit/CKPinnedConversationCollectionViewCellDelegate-Protocol.h>
#import <ChatKit/CKPinnedConversationViewDelegate-Protocol.h>
#import <ChatKit/CKReasonTrackingUpdaterDelegate-Protocol.h>
#import <ChatKit/CNContactViewControllerDelegate-Protocol.h>
#import <ChatKit/CNMeCardSharingSettingsViewControllerDelegate-Protocol.h>
#import <ChatKit/IMCloudKitEventHandler-Protocol.h>
#import <ChatKit/TPKContentControllerDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDelegate_Private-Protocol.h>
#import <ChatKit/UICollectionViewDragDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDropDelegate-Protocol.h>
#import <ChatKit/UIScrollViewDelegate-Protocol.h>
#import <ChatKit/UISearchBarDelegate-Protocol.h>
#import <ChatKit/UISearchControllerDelegate-Protocol.h>

@class CKCloudKitSyncProgressViewController, CKConversation, CKConversationListCollectionViewLayout, CKMacToolbarController, CKMacToolbarItem, CKMessagesController, CKOnboardingController, CKPinnedConversationCollectionViewCell, CKReasonTrackingUpdater, CKSearchViewController, CNContact, CNContactStore, NSArray, NSCache, NSDate, NSDictionary, NSMutableSet, NSObject, NSString, TPKContent, TPKContentController, UIBarButtonItem, UIButton, UICollectionViewDiffableDataSource, UISearchController, UIView, _PSMessagesPinningSuggester;
@protocol OS_dispatch_queue, OS_os_log;

@interface CKConversationListCollectionViewController : UICollectionViewController <CKPinnedConversationViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UICollectionViewDelegate_Private, UISearchControllerDelegate, UISearchBarDelegate, UIScrollViewDelegate, CKReasonTrackingUpdaterDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, CKConversationListCollectionViewCellDelegate, CKConversationListEmbeddedCollectionViewCellDelegate, CKPinnedConversationCollectionViewCellDelegate, CKMacToolbarItemProvider>
{
    _Bool _isVisible;
    _Bool _hidePinsForAnimation;
    _Bool _isBelowMacSnapToMinWidth;
    _Bool _holdPinningUpdatesForConversationDeletion;
    _Bool _compositionWasSent;
    _Bool _isInitialAppearance;
    _Bool _willRotate;
    _Bool _macShouldShowZKWSearch;
    _Bool _holdPinningUpdatesForOnboardingAnimation;
    _Bool _hasActivePinnedConversationDropSession;
    _Bool _nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate;
    _Bool _isShowingPinnedChatDropTarget;
    _Bool _isShowingSwipeDeleteConfirmation;
    _Bool _isShowingPinningOnboarding;
    _Bool _shouldUseFastPreviewText;
    _Bool _haveAppliedInitialSnapshot;
    _Bool _isApplyingSnapshot;
    _Bool _isCommitingDiffableDataSourceTransaction;
    _Bool _isCheckingIfPinningOnboardingNeeded;
    _Bool _canShowSuggestedPinningOnboardingCell;
    _Bool _isCurrentlyAnimatingPinningOnboardingSuggestions;
    unsigned long long _filterMode;
    CKMessagesController *_messagesController;
    NSString *_deferredSearchQuery;
    unsigned long long _editingMode;
    CKPinnedConversationCollectionViewCell *_prototypePinnedConversationCollectionViewCell;
    CKConversationListCollectionViewLayout *_conversationLayout;
    NSString *_lastSelectedConversationItemIdentifier;
    NSDate *_lastUserSelectedConversationTime;
    NSString *_lastUserSelectedConversationItemIdentifier;
    CKReasonTrackingUpdater *_updater;
    UIView *_noMessagesDialogView;
    UISearchController *_searchController;
    CNContact *_meContact;
    CKSearchViewController *_modernSearchResultsController;
    UIButton *_macVirtualComposeButton;
    UIBarButtonItem *_composeButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_optionsButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_doneButtonItem;
    CKCloudKitSyncProgressViewController *_syncProgressViewController;
    CKConversation *_conversationPendingOrbPinChange;
    CNContactStore *_contactStore;
    CKOnboardingController *_onboardingController;
    _PSMessagesPinningSuggester *_pinnedConversationSuggester;
    CKMacToolbarController *_macToolbarController;
    CKMacToolbarItem *_composeToolbarItem;
    NSObject<OS_dispatch_queue> *_tipKitQueue;
    long long _pinningInteractionMethod;
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_frozenPinnedConversations;
    NSArray *_frozenConversations;
    long long _pinnedConversationViewLayoutStyle;
    NSDictionary *_blockedSnapshotInfo;
    NSMutableSet *_itemIdentifiersForVisibleContextMenuInteractions;
    NSArray *_recommendedPinningConversations;
    TPKContentController *_tipKitContentController;
    TPKContent *_tipKitContent;
    NSCache *_cacheForLastDisplayedActivitySnapshotByConversation;
}

+ (id)conversationListCollectionViewControllerLogHandle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *cacheForLastDisplayedActivitySnapshotByConversation; // @synthesize cacheForLastDisplayedActivitySnapshotByConversation=_cacheForLastDisplayedActivitySnapshotByConversation;
@property(retain, nonatomic) TPKContent *tipKitContent; // @synthesize tipKitContent=_tipKitContent;
@property(retain, nonatomic) TPKContentController *tipKitContentController; // @synthesize tipKitContentController=_tipKitContentController;
@property(retain, nonatomic) NSArray *recommendedPinningConversations; // @synthesize recommendedPinningConversations=_recommendedPinningConversations;
@property(nonatomic) _Bool isCurrentlyAnimatingPinningOnboardingSuggestions; // @synthesize isCurrentlyAnimatingPinningOnboardingSuggestions=_isCurrentlyAnimatingPinningOnboardingSuggestions;
@property(nonatomic) _Bool canShowSuggestedPinningOnboardingCell; // @synthesize canShowSuggestedPinningOnboardingCell=_canShowSuggestedPinningOnboardingCell;
@property(nonatomic) _Bool isCheckingIfPinningOnboardingNeeded; // @synthesize isCheckingIfPinningOnboardingNeeded=_isCheckingIfPinningOnboardingNeeded;
@property(retain, nonatomic) NSMutableSet *itemIdentifiersForVisibleContextMenuInteractions; // @synthesize itemIdentifiersForVisibleContextMenuInteractions=_itemIdentifiersForVisibleContextMenuInteractions;
@property(retain, nonatomic) NSDictionary *blockedSnapshotInfo; // @synthesize blockedSnapshotInfo=_blockedSnapshotInfo;
@property(nonatomic) _Bool isCommitingDiffableDataSourceTransaction; // @synthesize isCommitingDiffableDataSourceTransaction=_isCommitingDiffableDataSourceTransaction;
@property(nonatomic) _Bool isApplyingSnapshot; // @synthesize isApplyingSnapshot=_isApplyingSnapshot;
@property(nonatomic) _Bool haveAppliedInitialSnapshot; // @synthesize haveAppliedInitialSnapshot=_haveAppliedInitialSnapshot;
@property(nonatomic) long long pinnedConversationViewLayoutStyle; // @synthesize pinnedConversationViewLayoutStyle=_pinnedConversationViewLayoutStyle;
@property(copy, nonatomic) NSArray *frozenConversations; // @synthesize frozenConversations=_frozenConversations;
@property(copy, nonatomic) NSArray *frozenPinnedConversations; // @synthesize frozenPinnedConversations=_frozenPinnedConversations;
@property(nonatomic) _Bool shouldUseFastPreviewText; // @synthesize shouldUseFastPreviewText=_shouldUseFastPreviewText;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool isShowingPinningOnboarding; // @synthesize isShowingPinningOnboarding=_isShowingPinningOnboarding;
@property(nonatomic) long long pinningInteractionMethod; // @synthesize pinningInteractionMethod=_pinningInteractionMethod;
@property(nonatomic) _Bool isShowingSwipeDeleteConfirmation; // @synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation;
@property(nonatomic) _Bool isShowingPinnedChatDropTarget; // @synthesize isShowingPinnedChatDropTarget=_isShowingPinnedChatDropTarget;
@property(nonatomic) _Bool nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate; // @synthesize nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate=_nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate;
@property(nonatomic) _Bool hasActivePinnedConversationDropSession; // @synthesize hasActivePinnedConversationDropSession=_hasActivePinnedConversationDropSession;
@property(nonatomic) _Bool holdPinningUpdatesForOnboardingAnimation; // @synthesize holdPinningUpdatesForOnboardingAnimation=_holdPinningUpdatesForOnboardingAnimation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tipKitQueue; // @synthesize tipKitQueue=_tipKitQueue;
@property(retain, nonatomic) CKMacToolbarItem *composeToolbarItem; // @synthesize composeToolbarItem=_composeToolbarItem;
@property(nonatomic) __weak CKMacToolbarController *macToolbarController; // @synthesize macToolbarController=_macToolbarController;
@property(nonatomic) _Bool macShouldShowZKWSearch; // @synthesize macShouldShowZKWSearch=_macShouldShowZKWSearch;
@property(retain, nonatomic) _PSMessagesPinningSuggester *pinnedConversationSuggester; // @synthesize pinnedConversationSuggester=_pinnedConversationSuggester;
@property(retain, nonatomic) CKOnboardingController *onboardingController; // @synthesize onboardingController=_onboardingController;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CKConversation *conversationPendingOrbPinChange; // @synthesize conversationPendingOrbPinChange=_conversationPendingOrbPinChange;
@property(nonatomic) _Bool willRotate; // @synthesize willRotate=_willRotate;
@property(nonatomic) _Bool isInitialAppearance; // @synthesize isInitialAppearance=_isInitialAppearance;
@property(retain, nonatomic) CKCloudKitSyncProgressViewController *syncProgressViewController; // @synthesize syncProgressViewController=_syncProgressViewController;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(retain, nonatomic) UIBarButtonItem *optionsButtonItem; // @synthesize optionsButtonItem=_optionsButtonItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
@property(retain, nonatomic) UIBarButtonItem *composeButtonItem; // @synthesize composeButtonItem=_composeButtonItem;
@property(retain, nonatomic) UIButton *macVirtualComposeButton; // @synthesize macVirtualComposeButton=_macVirtualComposeButton;
@property(nonatomic) _Bool compositionWasSent; // @synthesize compositionWasSent=_compositionWasSent;
@property(retain, nonatomic) CKSearchViewController *modernSearchResultsController; // @synthesize modernSearchResultsController=_modernSearchResultsController;
@property(nonatomic) _Bool holdPinningUpdatesForConversationDeletion; // @synthesize holdPinningUpdatesForConversationDeletion=_holdPinningUpdatesForConversationDeletion;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UIView *noMessagesDialogView; // @synthesize noMessagesDialogView=_noMessagesDialogView;
@property(retain, nonatomic) CKReasonTrackingUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) NSString *lastUserSelectedConversationItemIdentifier; // @synthesize lastUserSelectedConversationItemIdentifier=_lastUserSelectedConversationItemIdentifier;
@property(retain, nonatomic) NSDate *lastUserSelectedConversationTime; // @synthesize lastUserSelectedConversationTime=_lastUserSelectedConversationTime;
@property(retain, nonatomic) NSString *lastSelectedConversationItemIdentifier; // @synthesize lastSelectedConversationItemIdentifier=_lastSelectedConversationItemIdentifier;
@property(retain, nonatomic) CKConversationListCollectionViewLayout *conversationLayout; // @synthesize conversationLayout=_conversationLayout;
@property(retain, nonatomic) CKPinnedConversationCollectionViewCell *prototypePinnedConversationCollectionViewCell; // @synthesize prototypePinnedConversationCollectionViewCell=_prototypePinnedConversationCollectionViewCell;
@property(nonatomic) _Bool isBelowMacSnapToMinWidth; // @synthesize isBelowMacSnapToMinWidth=_isBelowMacSnapToMinWidth;
@property(nonatomic) _Bool hidePinsForAnimation; // @synthesize hidePinsForAnimation=_hidePinsForAnimation;
@property(nonatomic) unsigned long long editingMode; // @synthesize editingMode=_editingMode;
@property(retain, nonatomic) NSString *deferredSearchQuery; // @synthesize deferredSearchQuery=_deferredSearchQuery;
@property(nonatomic) __weak CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) unsigned long long filterMode; // @synthesize filterMode=_filterMode;
@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) NSObject<OS_os_log> *conversationListCollectionViewControllerLogHandle;
- (long long)_feedbackPinningInteractionMethod;
- (id)_pinningSuggestionsForConversations:(id)arg1;
- (void)_submitFeedbackIfNecessaryForPinsChangedWithPreviousPinnedConversationIdentifiers:(id)arg1;
- (void)_submitFeedbackIfNecessaryForSuggestedPinnedConversationsFollowingOnboardingCompletedSuccessfully:(_Bool)arg1;
- (void)showPinningOnboardingTapped;
- (id)_userDefaults;
@property(readonly, nonatomic) _Bool shouldShowTipKitContent;
- (void)fetchPinningSuggestions;
- (id)toolbarItemForIdentifier:(id)arg1;
- (double)virtualToolbarPreferredHeight;
- (_Bool)itemProviderDisablesTouches;
- (void)providerWillBeRemovedFromToolbarController:(id)arg1;
- (void)configureWithToolbarController:(id)arg1;
- (void)_chatAllowedByScreenTimeChanged:(id)arg1;
- (void)_downtimeStateChanged:(id)arg1;
- (void)onboardingControllerDidFinish:(id)arg1;
- (id)presentingViewControllerForOnboardingController:(id)arg1;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(_Bool)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(id)arg1;
- (_Bool)_imageForkedFromMeCard;
- (unsigned long long)_meCardSharingAudience;
- (_Bool)_meCardSharingEnabled;
- (id)_meCardSharingState;
- (id)_meCardSharingNameProviderWithContact:(id)arg1;
- (id)_meContact;
- (id)_contactStore;
- (id)nicknameController;
- (void)showMeCardViewControllerWithNickname:(id)arg1;
- (id)_avatarProviderFromNickname:(id)arg1;
- (void)showMeCardViewController;
- (void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2;
- (id)contentController:(id)arg1 contentView:(id)arg2 iconForCustomizationID:(long long)arg3;
- (void)contentController:(id)arg1 actionTapped:(id)arg2;
- (void)updateContentsOfTipCellForCustomizationType:(long long)arg1;
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(_Bool)arg3;
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(_Bool)arg3;
- (void)updateConversationNamesForNicknames:(id)arg1;
- (void)updateNoMessagesDialog;
- (id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2;
- (void)_reloadVisibleConversationList:(id)arg1;
- (void)endHoldingConversationListUpdatesForPPTTests;
- (void)beginHoldingConversationListUpdatesForPPTTests;
- (_Bool)_shouldAnimatePinningChangesForUpdateFollowingHoldForReason:(id)arg1;
- (void)updateConversationList;
- (void)reasonTrackingUpdater:(id)arg1 didEndHoldingUpdatesWithFinalReason:(id)arg2;
- (void)reasonTrackingUpdater:(id)arg1 didBeginHoldingUpdatesWithInitialReason:(id)arg2;
- (void)reasonTrackingUpdater:(id)arg1 needsUpdateForReasons:(id)arg2 followingHoldForReason:(id)arg3;
- (void)updateConversationListForMessageSentToConversation:(id)arg1;
- (void)_updateConversationListsAndSortIfEnabled;
- (void)_updateConversationFilteredFlagsAndReportSpam;
- (void)_refreshConversationList;
- (void)updateConfigurationStateForSelectedCell;
- (void)reloadData;
- (id)conversationList;
- (id)_dndSwipeActionForIndexPath:(id)arg1;
- (id)_deleteSwipeActionForIndexPath:(id)arg1;
- (id)trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (id)leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_setPinnedConversationViewLayoutStyle:(long long)arg1 shouldInvalidateLayout:(_Bool)arg2;
- (void)_conversationListPinnedConversationsDidChange:(id)arg1;
- (void)performResumeDeferredSetup;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)updateConversationSelection;
- (void)updateConversationSelectionPreservingLastSelectedItemIdentifier;
- (void)selectConversationClosestToDeletedIndex:(id)arg1;
- (void)selectFirstActiveConversation;
- (void)selectPinnedConversationForItem:(long long)arg1;
- (void)selectNextSequentialConversation:(_Bool)arg1;
- (void)selectDefaultConversationAnimated:(_Bool)arg1;
- (void)selectDefaultConversationAnimated:(_Bool)arg1 shouldUsePreviousySelectedIndexPath:(_Bool)arg2;
- (void)selectDefaultConversationAnimated:(_Bool)arg1 removingPendingConversationCell:(_Bool)arg2;
- (void)removePendingConversationCell;
- (void)deleteSelectedConversation;
- (void)_selectConversationAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)_indexPathOfDefaultConversation;
- (id)_itemIdentifierOfDefaultConversation;
- (_Bool)_isRunningPPT;
- (void)noteUnreadCountsChanged;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3;
- (void)_beginAccountRepairIfNeeded;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)unregisterForCloudKitEvents;
- (void)registerForCloudKitEventsWithDelayedRegistration:(_Bool)arg1;
- (void)registerForCloudKitEventsImmediately;
- (void)_updateSyncProgressIfNeededWithProgressController:(id)arg1 forceShow:(_Bool)arg2;
- (void)updateSyncProgressIfNeeded;
- (void)_cancelDeletion:(CDUnknownBlockType)arg1;
- (id)alertMessageForDelete;
- (id)alertTitleForDeleteMultiple;
- (id)alertTitleForDelete;
- (void)performDeletionForPendingConversationCell:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performDeletionForActiveConversation:(id)arg1 itemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cellToUpdate:(id)arg4;
- (void)deleteButtonTappedForItemIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 cellToUpdate:(id)arg3;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)showMultiplePhoneNumbersAlertForNicknames;
- (void)showAccountMismatachAlertForNicknames;
- (void)newComposeWillActivate;
- (void)composeButtonClicked:(id)arg1;
- (void)_endHoldingUpdatesForBatchEditing:(_Bool)arg1;
- (void)_updateToolbarItems;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditingMode:(unsigned long long)arg1 animated:(_Bool)arg2 shouldUpdate:(_Bool)arg3;
- (void)setEditingMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)editButtonMenuWillShow;
- (id)editButtonDropdownMenu;
- (void)backButtonPressed;
- (void)updateBackButton;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)commitPinnedConversationsForEditingPins;
- (void)updateNavigationItems;
- (_Bool)_shouldResizeNavigationBar;
- (void)_updateLargeTitleDisplayModeWithAnimation:(_Bool)arg1;
- (_Bool)_shouldAllowLargeTitles;
- (id)transparentNavBarAppearance;
- (void)updateManualScrollEdgeProgress;
- (id)_multitaskingDragExclusionRects;
- (void)_ck_setNeedsUpdateOfMultitaskingDragExclusionRects;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)firstVisibleIndexPathInCollectionView;
- (id)lastVisibleIndexPathInCollectionView;
- (_Bool)shouldScrollCollectionViewForCellSelection:(id)arg1;
- (void)scrollToFirstSelectedItemIfNecessary;
- (void)_updateInsets;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)startTipCellAnimatingIfNecessary;
- (void)stopTipCellAnimatingIfNecessary;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isShowingConversationFromCatalystOpenURL;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewLayoutMarginsDidChange;
- (void)_iosUpdateNavbarLayoutIfNeeded;
- (void)_macosUpdateNavbarLayoutIfNeeded;
- (void)_updateNavbarLayoutIfNeeded;
- (void)_endHoldingUpdatesOnViewWillAppear;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)_handingPendingConversationDidChange:(id)arg1;
- (void)_handleAccountRegistrationChange:(id)arg1;
- (void)updateSMSSpamConversationsDisplayName;
- (id)_getTitleForCurrentFilterMode;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_contactStoreDidFinishLoadingNotification:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_chatWatermarkDidChange:(id)arg1;
- (void)_multiWayCallStateChanged:(id)arg1;
- (void)_conversationContactPhotosEnabledChangedNotification:(id)arg1;
- (void)_conversationSpamFilteringStateChangedNotification:(id)arg1;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_conversationIsFilteredChangedNotification:(id)arg1;
- (void)_chatRegistryLastMessageLoadedNotification:(id)arg1;
- (void)updateContentsOfCellForConversation:(id)arg1 animated:(_Bool)arg2;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (_Bool)_updateRemovesTypingChatItem:(id)arg1;
- (_Bool)_updateAddsTypingChatItem:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_increaseContrastDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)searcherDidComplete:(id)arg1;
- (void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2;
- (void)searchControllerDidBeginDragging:(id)arg1;
- (void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3;
- (id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)muteConversationButtonTappedForConversationWithItemIdentifier:(id)arg1 setMuted:(_Bool)arg2;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)showCannotPinMoreConversationsAlert;
- (void)pinConversation:(id)arg1 withReason:(id)arg2;
- (void)unpinConversation:(id)arg1 withReason:(id)arg2;
- (void)togglePinStateForConversation:(id)arg1 withReason:(id)arg2;
- (void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2;
- (void)avatarHeaderWasTappedForConversation:(id)arg1;
- (double)widthForDeterminingAvatarVisibility;
- (void)pinButtonTappedForCell:(id)arg1;
- (_Bool)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
- (id)detailsControllerBusinessPrivacyInfoPresentingViewController:(id)arg1;
- (void)detailsControllerDidDismiss:(id)arg1;
- (id)detailsNavigationControllerConversation:(id)arg1;
- (void)dismissDetailsNavigationController;
- (_Bool)hasDetailsNavigationController;
- (_Bool)isDetailsNavigationControllerDetached;
- (void)unpinButtonTappedForCell:(id)arg1 withConversation:(id)arg2;
- (void)presentDetailsForItemIdentifier:(id)arg1 fromView:(id)arg2;
- (id)_conversationDetailsActionForItemIdentifier:(id)arg1 withCell:(id)arg2;
- (id)_openConversationInNewWindowActionForItemIdentifier:(id)arg1;
- (id)_secondaryMenuForItemIdentifier:(id)arg1 inSection:(unsigned long long)arg2 withCell:(id)arg3;
- (id)_deleteConversationActionForItemIdentifier:(id)arg1 withCell:(id)arg2;
- (id)_muteActionForItemIdentifier:(id)arg1;
- (id)_pinActionForItemIdentifier:(id)arg1;
- (id)_markAsActionForItemIdentifier:(id)arg1;
- (id)_primaryMenuForItemIdentifier:(id)arg1 inSection:(unsigned long long)arg2 withCell:(id)arg3;
- (id)_topLevelMenuForItemIdentifier:(id)arg1 inSection:(unsigned long long)arg2 withCell:(id)arg3;
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (id)_previewForHighlightingOrDismissingContextMenuWithConfiguration:(id)arg1 collectionView:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (_Bool)contextMenuInteractionShouldBeginAtIndexPath:(id)arg1;
- (_Bool)sectionHasActionableConversations:(unsigned long long)arg1;
- (id)preferredFocusEnvironments;
- (void)performSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)searchResultsController;
@property(readonly, nonatomic) _Bool isSearchActiveAndDisplayingResultsForSearchText;
@property(readonly, nonatomic) _Bool isSearchActive;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)_performTranscriptPushForItemAtIndexPath:(id)arg1 userInitiated:(_Bool)arg2;
- (id)pinningIndexPathPairForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2;
- (void)compositionSent;
- (void)significantTimeChange;
- (id)indexPathOfFirstSelectedItem;
- (void)_dismissPresentedNavController:(id)arg1;
- (_Bool)_shouldKeepSelection;
- (void)invalidateCellLayout;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)_refreshConversationListCellForGroupPhotoUpdate:(id)arg1;
- (id)init;
- (void)completeAnimation;
- (void)removeNewlyPinnedSuggestionCells:(id)arg1;
- (void)animateInPinsToFinalPosition;
- (_Bool)shouldAnimatePositionForRecommendedItemIdentifiers:(id)arg1 pinnedItemIdentifiers:(id)arg2;
- (void)pinConversationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateOutBackgroundSnapshotView:(id)arg1;
- (void)animateInCollectionView:(id)arg1 aboveBackgroundSnapshotView:(id)arg2 enteringOnboarding:(_Bool)arg3 animationDistance:(double)arg4;
- (double)animationDistanceForCompletingOnboarding;
- (void)startSuggestedPinsAnimation;
- (void)startCompletePinningOnboardingAnimation;
- (void)startEndSuggestedPinsAnimation;
- (id)_lastDisplayedActivitySnapshotCacheKeyForConversation:(id)arg1;
- (id)previousPinnedConversationActivitySnapshotForConversation:(id)arg1;
- (void)pinnedConversationView:(id)arg1 didUpdateWithActivitySnapshot:(id)arg2;
- (_Bool)shouldShowPinnedConversations;
- (_Bool)shouldShowPendingCell;
- (long long)numberOfPinnedConversations;
- (long long)numberOfConversations;
- (long long)distanceBetweenConversationIndexPath:(id)arg1 andIndexPath:(id)arg2;
- (id)nextSequentialIndexPathForIndexPath:(id)arg1 descending:(_Bool)arg2;
- (struct CGRect)pinnedConversationMultitaskingDragExclusionRect;
- (double)yCoordinateForBorderBetweenPinnedAndActiveSectionExcludingConversations:(id)arg1;
- (id)conversationsForItemIdentifiers:(id)arg1;
- (id)conversationForItemIdentifier:(id)arg1;
- (id)itemIdentifiersForConversations:(id)arg1 inSection:(unsigned long long)arg2;
- (_Bool)itemIdentifierIsFromPinnedSection:(id)arg1;
- (id)itemIdentifierForConversation:(id)arg1 inSection:(unsigned long long)arg2;
- (id)pinnedConversationsFromSnapshot:(id)arg1;
- (void)updateContentsOfCellWithItemIdentifier:(id)arg1 indexPath:(id)arg2 animated:(_Bool)arg3;
- (void)updateContentsOfCellWithIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)updateContentsOfCellWithItemIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)updateContentsOfCellsWithItemIdentifiers:(id)arg1 animated:(_Bool)arg2;
- (void)updateContentsOfAllCellsAnimated:(_Bool)arg1;
- (void)applyConversationListSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSnapshotAnimatingDifferences:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSnapshotAnimatingDifferences:(_Bool)arg1;
- (id)generateSnapshot;
- (void)_filterControlSelectionChanged:(id)arg1;
- (_Bool)_messageSpamFilteringEnabled;
- (_Bool)_messageUnknownFilteringEnabled;
- (_Bool)_shouldShowInboxView;
- (id)conversationAtIndexPath:(id)arg1;
- (id)conversationsAtIndexPaths:(id)arg1;
- (void)_removeConversationsFromFrozenConversations:(id)arg1;
- (void)_unfreezeConversations;
- (void)_freezeConversations;
- (id)_allFrozenConversations;
- (id)activeConversations;
- (id)pinnedConversations;
- (id)pinnedConversationIdentifiers;
- (void)avatarViewTapped:(id)arg1;
- (void)configureConversationCell:(id)arg1 forItemIdentifier:(id)arg2;
- (id)cellForStandardConversationWithItemIdentifier:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellPinningOnboardingItemIdentifier:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)configureNewMessageCell:(id)arg1;
- (id)newMessageCellInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (void)configureDropTargetCell:(id)arg1;
- (id)cellForPinnedConversationDropTargetInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)_pinnedConversationShortNames;
- (id)_recentMessagesInPinnedConversations;
- (id)_conversationsInRowOfItemIdentifier:(id)arg1;
- (_Bool)_isOnlyActivityItemInRowForConversation:(id)arg1 itemIdentifier:(id)arg2;
- (_Bool)_conversationHasActivityItem:(id)arg1;
- (long long)_activityItemOriginationDirectionForItemIdentifier:(id)arg1 conversation:(id)arg2;
- (double)_activityItemTopInsetForIndexPath:(id)arg1;
- (void)_configurePinnedConversationCell:(id)arg1 forConversation:(id)arg2 itemIdentifier:(id)arg3 indexPath:(id)arg4 animated:(_Bool)arg5;
- (void)configurePinnedConversationCell:(id)arg1 forItemIdentifier:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)cellForPinnedConversationWithItemIdentifier:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)configureFilterCell:(id)arg1;
- (void)configureTipKitOnboardingCell:(id)arg1;
- (void)configureTipKitCell:(id)arg1;
- (id)tipKitOnboardingCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)tipKitCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (void)configureOnboardingTitleCell:(id)arg1;
- (id)cellForPinningOnboardingTitleViewCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)filterCellInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)filterCellSegmentTitles;
- (void)updateContentsOfCell:(id)arg1 withItemIdentifier:(id)arg2 atIndexPath:(id)arg3 animated:(_Bool)arg4;
- (id)cellForIndexPath:(id)arg1 inCollectionView:(id)arg2 withItemIdentifier:(id)arg3;
- (id)supplementaryViewForIndexPath:(id)arg1 inCollectionView:(id)arg2 withKind:(id)arg3;
- (id)dataSourceWithCollectionView:(id)arg1;
- (void)_performItemDropWithCollectionView:(id)arg1 dropCoordinator:(id)arg2;
- (void)commitPinnedConversationsFromSnapshot:(id)arg1;
- (void)didReorderConversationsWithTransaction:(id)arg1;
- (void)_performConversationDropWithCollectionView:(id)arg1 dropCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)_conversationAfterDropDestination:(id)arg1 fromDiffableDataSource:(id)arg2 snapshot:(id)arg3 excludingDraggedConversation:(id)arg4;
- (id)_conversationsFromLocalDropSession:(id)arg1;
- (id)_conversationFromDragItem:(id)arg1;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (_Bool)_isDropForSession:(id)arg1 toLeadingEdgeOfView:(id)arg2;
- (id)_conversationDropProposalForCollectionView:(id)arg1 dropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (unsigned long long)_destinationSectionForDropSession:(id)arg1 destinationIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)dragOrDropPreviewParametersForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)_snapshotOfAvatarViewForConversation:(id)arg1;
- (id)dragPreviewViewForPinnedConversation:(id)arg1 inCollectionView:(id)arg2;
- (_Bool)_shouldUsePreviewProviderForDragItemAtIndexPath:(id)arg1;
- (id)_dragItemsForConversation:(id)arg1 indexPath:(id)arg2 inCollectionView:(id)arg3;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

