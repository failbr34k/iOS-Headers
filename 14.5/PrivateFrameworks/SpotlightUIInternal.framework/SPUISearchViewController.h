//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpotlightUIInternal/SFFeedbackListener-Protocol.h>
#import <SpotlightUIInternal/SPUIResultsViewDelegate-Protocol.h>
#import <SpotlightUIInternal/SPUISearchHeaderDelegate-Protocol.h>
#import <SpotlightUIInternal/SearchUIFirstTimeExperienceDelegate-Protocol.h>
#import <SpotlightUIInternal/SearchUIResultsViewDelegate-Protocol.h>
#import <SpotlightUIInternal/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSTimer, SPUILockScreenFooterView, SPUINavigationController, SPUIResultsViewController, SPUISearchFirstTimeViewController, SPUISearchHeader, SPUITestingHelper, UIView, _UILegibilitySettings;
@protocol SPUISearchViewControllerDelegate, SPUISearchViewControllerSizingDelegate;

@interface SPUISearchViewController : UIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SPUIResultsViewDelegate, UIGestureRecognizerDelegate, SFFeedbackListener, SearchUIResultsViewDelegate>
{
    _Bool _internetOverrideForPPT;
    _Bool _lastQueryWasAuthenticated;
    _Bool _clearQueryOnDismissal;
    _Bool _expandPlatterOnAppear;
    id <SPUISearchViewControllerDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    SPUISearchHeader *_searchHeader;
    NSMutableSet *_allHeaderViews;
    SPUISearchFirstTimeViewController *_firstTimeExperienceViewController;
    SPUIResultsViewController *_searchResultViewController;
    SPUIResultsViewController *_proactiveResultViewController;
    SPUILockScreenFooterView *_lockScreenFooterView;
    UIView *_tapToRadarView;
    unsigned long long _presentationMode;
    double _timeAtDismissal;
    SPUITestingHelper *_testingHelper;
    NSTimer *_windowExpansionTimer;
    unsigned long long _feedbackBackgroundTaskIdentifier;
    unsigned long long _queryIdAtInvoke;
    id <SPUISearchViewControllerSizingDelegate> _sizingDelegate;
    unsigned long long _presentationSource;
}

+ (_Bool)isFeedbackSelector:(SEL)arg1;
+ (void)_updateHeaderView:(id)arg1 fromText:(id)arg2 fromToken:(id)arg3;
+ (_Bool)shouldShowAsTypedSuggestion;
+ (_Bool)displayTapToRadar;
- (void).cxx_destruct;
@property(readonly) unsigned long long presentationSource; // @synthesize presentationSource=_presentationSource;
@property __weak id <SPUISearchViewControllerSizingDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
@property unsigned long long queryIdAtInvoke; // @synthesize queryIdAtInvoke=_queryIdAtInvoke;
@property unsigned long long feedbackBackgroundTaskIdentifier; // @synthesize feedbackBackgroundTaskIdentifier=_feedbackBackgroundTaskIdentifier;
@property(retain) NSTimer *windowExpansionTimer; // @synthesize windowExpansionTimer=_windowExpansionTimer;
@property(retain) SPUITestingHelper *testingHelper; // @synthesize testingHelper=_testingHelper;
@property double timeAtDismissal; // @synthesize timeAtDismissal=_timeAtDismissal;
@property _Bool expandPlatterOnAppear; // @synthesize expandPlatterOnAppear=_expandPlatterOnAppear;
@property _Bool clearQueryOnDismissal; // @synthesize clearQueryOnDismissal=_clearQueryOnDismissal;
@property _Bool lastQueryWasAuthenticated; // @synthesize lastQueryWasAuthenticated=_lastQueryWasAuthenticated;
@property _Bool internetOverrideForPPT; // @synthesize internetOverrideForPPT=_internetOverrideForPPT;
@property unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain) UIView *tapToRadarView; // @synthesize tapToRadarView=_tapToRadarView;
@property(retain) SPUILockScreenFooterView *lockScreenFooterView; // @synthesize lockScreenFooterView=_lockScreenFooterView;
@property(retain) SPUIResultsViewController *proactiveResultViewController; // @synthesize proactiveResultViewController=_proactiveResultViewController;
@property(retain) SPUIResultsViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
@property(retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController; // @synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController;
@property(retain) NSMutableSet *allHeaderViews; // @synthesize allHeaderViews=_allHeaderViews;
@property(retain) SPUISearchHeader *searchHeader; // @synthesize searchHeader=_searchHeader;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SPUISearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(nonatomic) _Bool shouldShowKeyboardInputBars;
- (_Bool)_canShowWhileLocked;
- (void)updateResponderChainIfNeeded;
- (void)updatePlatterMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didBeginScrollingResults;
- (void)cancelButtonPressed;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (_Bool)allowInternet;
- (_Bool)hasContentInSearchField;
- (id)firstResultIgnoringSuggestionsIfNeeded;
- (void)expandWindowIfNeeded;
- (void)scheduleWindowExpansionWithInterval:(double)arg1;
- (double)contentHeight;
- (_Bool)optOutOfGoButton;
- (void)willUpdateFromResultsWithHighlightedResult:(id)arg1;
- (void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(_Bool)arg3;
- (id)proactiveResultsTestingObject;
- (id)searchResultsTestingObject;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)setInternetOverrideToDisable:(_Bool)arg1;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)activateFirstTimeExperienceViewAnimate:(_Bool)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)activateViewController:(id)arg1 animate:(_Bool)arg2;
- (void)resultsViewController:(id)arg1 didChangeContentSize:(struct CGSize)arg2 animated:(_Bool)arg3;
- (id)activeViewController;
- (void)didUpdateContentScrolledOffScreenStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (id)currentQuery;
- (id)contentScrollView;
- (void)didChangeExpansionStateForSection:(id)arg1 expanded:(_Bool)arg2;
- (_Bool)sectionShouldBeExpanded:(id)arg1;
- (id)viewControllerForPresenting;
- (void)didScrollPastBottomOfContent;
- (void)didTapInEmptyRegion;
- (void)endBackgroundTaskIfNeeded;
- (void)spotlightDidBackground;
- (void)searchViewDidDismissWithReason:(unsigned long long)arg1;
- (void)clearSearchResults;
- (void)removeCompletionAndHighlightAsTyped:(_Bool)arg1;
- (void)invalidateWindowExpansionTimer;
- (void)performReturnKeyPressAndExpandWidowIfNeeded;
- (void)performWebSearch;
- (void)returnKeyPressed;
- (_Bool)currentQueryIdMatchesResultInGeneralModel;
- (void)clearTimerExpired;
- (void)animateChunkyEnabled:(_Bool)arg1;
- (void)searchViewWillDismissWithReason:(unsigned long long)arg1;
- (void)searchViewDidPresentFromSource:(unsigned long long)arg1;
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (void)showVerticalScrollIndicators:(_Bool)arg1;
- (void)purgeMemory;
- (void)searchViewDidUpdatePresentationProgress:(double)arg1;
- (void)tapToRadarPressed;
- (void)updateFooterView;
- (_Bool)presentationSupportsChunky;
- (void)enableChunky:(_Bool)arg1;
- (void)searchViewWillPresentFromSource:(unsigned long long)arg1;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 queryKind:(unsigned long long)arg3;
- (id)userActivityFromIntent:(id)arg1;
- (void)getUserActivityForResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)launchSiriWithUtteranceText:(id)arg1 source:(long long)arg2;
- (void)didEngageResult:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)dragInitiated;
- (void)searchThroughPunchoutForResult:(id)arg1 forQuery:(id)arg2;
- (void)searchThroughPunchoutForResult:(id)arg1 resultTitle:(id)arg2 forQuery:(id)arg3;
- (void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2;
- (void)updateHeaderViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)createAdditionalHeaderView;
@property(readonly, nonatomic) SPUISearchHeader *headerView;
- (void)dealloc;
- (void)checkClearTimer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) SPUINavigationController *navigationController; // @dynamic navigationController;
@property(readonly) Class superclass;

@end

