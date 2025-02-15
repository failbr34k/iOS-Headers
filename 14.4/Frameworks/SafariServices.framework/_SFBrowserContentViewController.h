//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/PKAddPassesViewControllerDelegate-Protocol.h>
#import <SafariServices/SFBrowserViewDelegate-Protocol.h>
#import <SafariServices/SFReaderEnabledWebViewControllerDelegate-Protocol.h>
#import <SafariServices/SFReaderViewControllerDelegate-Protocol.h>
#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>
#import <SafariServices/UIScrollViewDelegate-Protocol.h>
#import <SafariServices/WBSDigitalHealthManagerDelegate-Protocol.h>
#import <SafariServices/WBSFluidProgressControllerWindowDelegate-Protocol.h>
#import <SafariServices/WBSFluidProgressStateSource-Protocol.h>
#import <SafariServices/WBSTranslationConsentAlertHelperDelegate-Protocol.h>
#import <SafariServices/WBSTranslationContextDelegate-Protocol.h>
#import <SafariServices/_SFActivityItemCustomizationDelegate-Protocol.h>
#import <SafariServices/_SFActivityViewControllerDelegate-Protocol.h>
#import <SafariServices/_SFBarManagerDelegate-Protocol.h>
#import <SafariServices/_SFBrowserContentController-Protocol.h>
#import <SafariServices/_SFBrowserDocument-Protocol.h>
#import <SafariServices/_SFBrowserKeyCommandSafariViewControllerMethods-Protocol.h>
#import <SafariServices/_SFDownloadDelegate-Protocol.h>
#import <SafariServices/_SFDynamicBarAnimatorDelegate-Protocol.h>
#import <SafariServices/_SFFindOnPageViewDelegate-Protocol.h>
#import <SafariServices/_SFLinkPreviewHandler-Protocol.h>
#import <SafariServices/_SFMailContentProviderDataSource-Protocol.h>
#import <SafariServices/_SFNavigationBarDelegate-Protocol.h>
#import <SafariServices/_SFPageLoadErrorControllerDelegate-Protocol.h>
#import <SafariServices/_SFPrintControllerDelegate-Protocol.h>
#import <SafariServices/_SFQuickLookDocumentSource-Protocol.h>
#import <SafariServices/_SFSaveToFilesOperationDelegate-Protocol.h>
#import <SafariServices/_SFSingleBookmarkNavigationControllerDelegate-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, NSTimer, NSURL, SFBrowserDocumentTrackerInfo, SFBrowserPersonaAnalyticsHelper, SFNanoDomainContainerView, SFReaderEnabledWebViewController, SFReaderViewController, SFSafariViewControllerConfiguration, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, WBSAllowedLegacyTLSHostManager, WBSAutoFillQuirksManager, WBSDigitalHealthManager, WBSFluidProgressController, WBSFluidProgressState, WBSTranslationContext, WBSURLSpoofingMitigator, WBSWellKnownURLResponseCodeReliabilityChecker, WKBackForwardListItem, WKPreferences, WKWebView, _SFActivityViewController, _SFBarManager, _SFBrowserView, _SFCalendarEventDetector, _SFDigitalHealthViewController, _SFDownload, _SFDynamicBarAnimator, _SFFindOnPageView, _SFFluidProgressView, _SFMailContentProvider, _SFNavigationBar, _SFNavigationBarItem, _SFNavigationUtilitiesManager, _SFPageFormatMenuController, _SFPageLoadErrorController, _SFPageZoomPreferenceManager, _SFPerSitePreferencesVendor, _SFPrintController, _SFQuickLookDocument, _SFQuickLookDocumentController, _SFQuickLookDocumentWriter, _SFReloadOptionsController, _SFSafariSharingExtensionController, _SFSaveToFilesOperation, _SFSecIdentityPreferencesController, _SFTelephonyNavigationMitigationPolicy, _SFToolbar, _SFWebView, _WKActivatedElementInfo, _WKUserInitiatedAction;
@protocol SFReaderContext, _SFBrowserContentViewControllerDelegate, _SFBrowserDocument;

@interface _SFBrowserContentViewController : UIViewController <SFBrowserViewDelegate, SFReaderEnabledWebViewControllerDelegate, SFReaderViewControllerDelegate, _SFBarManagerDelegate, _SFDownloadDelegate, _SFDynamicBarAnimatorDelegate, _SFFindOnPageViewDelegate, _SFMailContentProviderDataSource, _SFNavigationBarDelegate, _SFPageLoadErrorControllerDelegate, _SFPrintControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressStateSource, WBSDigitalHealthManagerDelegate, PKAddPassesViewControllerDelegate, _SFLinkPreviewHandler, WBSTranslationConsentAlertHelperDelegate, WBSTranslationContextDelegate, _SFActivityItemCustomizationDelegate, _SFActivityViewControllerDelegate, _SFQuickLookDocumentSource, _SFSaveToFilesOperationDelegate, _SFBrowserContentController, _SFBrowserDocument, _SFBrowserKeyCommandSafariViewControllerMethods>
{
    WBSDigitalHealthManager *_cachedDigitalHealthManager;
    _SFDigitalHealthViewController *_digitalHealthViewController;
    NSURL *_currentUsageTrackingURL;
    WKWebView *_previewWebView;
    NSTimer *_previewCloseTimer;
    _SFBrowserView *_browserView;
    SFReaderViewController *_readerViewController;
    _Bool _showingReader;
    WKBackForwardListItem *_lastBackFowardListItemOnWhichReaderWasActivated;
    unsigned long long _lastReaderDeactivationMode;
    _SFNavigationBar *_navigationBar;
    _SFToolbar *_bottomToolbar;
    _SFMailContentProvider *_cachedMailContentProvider;
    _WKUserInitiatedAction *_lastUserInitiatedAction;
    _Bool _canOpenDownloadForInitialLoad;
    unsigned long long _externalAppRedirectState;
    _SFBarManager *_barManager;
    SFNanoDomainContainerView *_nanoDomainContainerView;
    NSTimer *_updateContinuityTimer;
    _SFDynamicBarAnimator *_dynamicBarAnimator;
    _Bool _scrollViewIsDragging;
    unsigned long long _cachedMediaStateIcon;
    _SFNavigationBarItem *_navigationBarItem;
    WBSURLSpoofingMitigator *_URLSpoofingMitigator;
    WBSFluidProgressState *_fluidProgressState;
    WBSFluidProgressController *_fluidProgressController;
    _SFFluidProgressView *_cachedFluidProgressView;
    UITapGestureRecognizer *_showBarsFromBottomBarRecognizer;
    _Bool _pageScrollsWithBottomBar;
    _Bool _interfaceFillsScreen;
    _Bool _usesNarrowLayout;
    _SFPageLoadErrorController *_pageLoadErrorController;
    _SFCalendarEventDetector *_calendarEventDetector;
    _SFDownload *_activeDownload;
    _Bool _showingCrashBanner;
    double _crashBannerDraggingOffset;
    _Bool _showingPinnableBanner;
    double _pinnableBannerDraggingOffset;
    _Bool _shouldDismissReaderInReponseToSameDocumentNavigation;
    _Bool _EVOrganizationNameIsValid;
    NSString *_EVOrganizationName;
    _Bool _isShowingHTTPAuthenticationDialog;
    _Bool _isSuppressingPreviewProgressAnimation;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    _Bool _didReceivePolicyForInitialLoad;
    long long _customPreferredStatusBarStyle;
    _Bool _isDisplayingTelephonyPrompt;
    _SFTelephonyNavigationMitigationPolicy *_telephonyNavigationPolicy;
    _SFPrintController *_printController;
    _SFSecIdentityPreferencesController *_secIdentityPreferencesController;
    _SFPerSitePreferencesVendor *_perSitePreferencesVendor;
    _Bool _wasLoadedWithContentBlockersEnabled;
    NSURL *_urlToReloadForcingContentBlockers;
    _Bool _enableContentBlockersWhenReloading;
    NSMutableArray *_webViewControllers;
    struct UIEdgeInsets _verticalScrollIndicatorBaseInsets;
    struct UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
    _Bool _autoHidingHomeIndicatorPermitted;
    _Bool _prefersHomeIndicatorAutoHidden;
    _Bool _shouldAutoHideHomeIndicator;
    NSURL *_originalRequestURL;
    _SFQuickLookDocument *_quickLookDocument;
    _SFQuickLookDocumentController *_quickLookDocumentController;
    _SFQuickLookDocumentWriter *_quickLookDocumentWriter;
    _SFDownload *_downloadToShowInQuickLook;
    NSString *_suggestedFilenameForNextCommit;
    _Bool _quickLookDocumentCheckCompleted;
    _SFSaveToFilesOperation *_saveToFilesOperation;
    _SFActivityViewController *_activityViewController;
    _SFPageFormatMenuController *_pageFormatMenuController;
    _Bool _keepBarsMinimized;
    UIPanGestureRecognizer *_hideNavigationBarGestureRecognizer;
    NSError *_lastLoadErrorForFormatMenu;
    long long _concurrentNavigationActionPolicyDecisions;
    _Bool _loadWasUserDriven;
    _Bool _webViewIsInFullScreen;
    CDUnknownBlockType _pendingNavigationActionDueToExternalSchemePromptHandler;
    _Bool _gestureRequiresGoingBackToOwnerWebView;
    _Bool _shouldReflectTranslationAsFluidProgress;
    WKBackForwardListItem *_backForwardListItemForCurrentAppLinkBannerCheck;
    WBSAllowedLegacyTLSHostManager *_cachedLegacyTLSHostManager;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSWellKnownURLResponseCodeReliabilityChecker *_wellKnownURLResponseCodeReliabilityChecker;
    struct CGSize _lastSizeUsedForBrowserViewLayout;
    unsigned long long _sizeTransitionCount;
    _Bool _remoteSwipeGestureEnabled;
    _Bool _webViewLayoutUnderlapsStatusBar;
    _Bool __isUsedForAuthentication;
    _Bool _didNotifyInitialLoadFinish;
    _Bool _viewDidAppearInHostApp;
    id <_SFBrowserContentViewControllerDelegate> _delegate;
    long long _displayMode;
    _SFReloadOptionsController *_reloadOptionsController;
    _SFFindOnPageView *_findOnPageView;
    WKPreferences *_wkPreferences;
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    UIColor *_preferredBarTintColor;
    UIColor *_preferredControlTintColor;
    long long _hostAppModalPresentationStyle;
    long long _dismissButtonStyle;
    SFSafariViewControllerConfiguration *_configuration;
    NSString *_bundleIdentifierForProfileInstallation;
    unsigned long long __persona;
    SFBrowserPersonaAnalyticsHelper *__analyticsHelper;
    long long _safariDataSharingMode;
    _SFNavigationUtilitiesManager *__navigationUtilitiesManager;
    WBSTranslationContext *_translationContext;
}

+ (void)createDefaultWebsiteDataStore;
- (void).cxx_destruct;
@property(retain, nonatomic) WBSTranslationContext *translationContext; // @synthesize translationContext=_translationContext;
@property(retain, nonatomic) _SFNavigationUtilitiesManager *_navigationUtilitiesManager; // @synthesize _navigationUtilitiesManager=__navigationUtilitiesManager;
@property(nonatomic) _Bool viewDidAppearInHostApp; // @synthesize viewDidAppearInHostApp=_viewDidAppearInHostApp;
@property(readonly, nonatomic) _Bool didNotifyInitialLoadFinish; // @synthesize didNotifyInitialLoadFinish=_didNotifyInitialLoadFinish;
@property(nonatomic) long long safariDataSharingMode; // @synthesize safariDataSharingMode=_safariDataSharingMode;
@property(readonly, nonatomic) SFBrowserPersonaAnalyticsHelper *_analyticsHelper; // @synthesize _analyticsHelper=__analyticsHelper;
@property(readonly, nonatomic) unsigned long long _persona; // @synthesize _persona=__persona;
@property(readonly, nonatomic) _Bool _isUsedForAuthentication; // @synthesize _isUsedForAuthentication=__isUsedForAuthentication;
@property(readonly, nonatomic) NSString *bundleIdentifierForProfileInstallation; // @synthesize bundleIdentifierForProfileInstallation=_bundleIdentifierForProfileInstallation;
@property(nonatomic) _Bool webViewLayoutUnderlapsStatusBar; // @synthesize webViewLayoutUnderlapsStatusBar=_webViewLayoutUnderlapsStatusBar;
@property(copy, nonatomic) SFSafariViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) long long dismissButtonStyle; // @synthesize dismissButtonStyle=_dismissButtonStyle;
@property(nonatomic) long long hostAppModalPresentationStyle; // @synthesize hostAppModalPresentationStyle=_hostAppModalPresentationStyle;
@property(retain, nonatomic) UIColor *preferredControlTintColor; // @synthesize preferredControlTintColor=_preferredControlTintColor;
@property(retain, nonatomic) UIColor *preferredBarTintColor; // @synthesize preferredBarTintColor=_preferredBarTintColor;
@property(nonatomic) _Bool remoteSwipeGestureEnabled; // @synthesize remoteSwipeGestureEnabled=_remoteSwipeGestureEnabled;
@property(retain, nonatomic) _WKActivatedElementInfo *activatedElementInfo; // @synthesize activatedElementInfo=_activatedElementInfo;
@property(copy, nonatomic) NSArray *linkActions; // @synthesize linkActions=_linkActions;
@property(readonly, nonatomic) WKPreferences *wkPreferences; // @synthesize wkPreferences=_wkPreferences;
@property(retain, nonatomic) _SFFindOnPageView *findOnPageView; // @synthesize findOnPageView=_findOnPageView;
@property(retain, nonatomic) _SFReloadOptionsController *reloadOptionsController; // @synthesize reloadOptionsController=_reloadOptionsController;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) __weak id <_SFBrowserContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageLoadErrorController:(id)arg1 allowLegacyTLSConnectionForURL:(id)arg2 navigateToURL:(id)arg3;
- (id)legacyTLSHostManager;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (id)translationConsentAlertHelperViewControllerToPresentDetailsFrom:(id)arg1;
- (void)_presentTranslationConsentAlertWithType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_translationContextStateDidChange:(id)arg1;
- (void)_updateMaxVisibleHeightPercentageUserDriven:(_Bool)arg1;
- (void)translationContextNeedsScrollHeightVisibilityUpdate:(id)arg1;
- (void)translationContext:(id)arg1 shouldReportProgressInUnifiedField:(_Bool)arg2;
- (void)translationContext:(id)arg1 showTranslationErrorAlertWithTitle:(id)arg2 message:(id)arg3;
- (id)safariApplicationVersionForTranslationContext:(id)arg1;
- (void)translationContext:(id)arg1 showFeedbackConsentAlertWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)translationContext:(id)arg1 showFirstTimeConsentAlertWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)translationContext:(id)arg1 urlForCurrentPageWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)translationContextIsUsingPrivateBrowsing:(id)arg1;
- (void)translationContextReloadPageInOriginalLanguage:(id)arg1;
- (_Bool)isShowingReaderForCustomizationController:(id)arg1;
- (_Bool)isReaderAvailableForCustomizationController:(id)arg1;
- (_Bool)isDisplayingQuickLookDocumentForCustomizationController:(id)arg1;
- (_Bool)isContentObscuredByDigitalHealthForCustomizationController:(id)arg1;
- (id)webViewForCustomizationController:(id)arg1;
- (void)customizationControllerCustomizationsDidChange:(id)arg1;
- (void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2;
- (void)_presentSaveWebpageViewController;
- (_Bool)_canSaveWebpageForURL:(id)arg1;
- (_Bool)_canSaveWebpage;
- (void)webViewController:(id)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (unsigned long long)mediaStateIcon;
- (void)barManager:(id)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)policyDidChangeForDigitalHealthManager:(id)arg1;
- (_Bool)_personaShouldUseScreenTime;
- (void)stopDigitalHealthTracking;
- (void)beginDigitalHealthTracking;
@property(readonly, nonatomic) _Bool isBlockedByScreenTime;
- (void)_hideDigitalHealthOverlay;
- (void)_showDigitalHealthOverlayWithPolicy:(long long)arg1;
- (void)_updateDigitalHealthTracking;
- (id)_digitalHealthManager;
- (void)_perSitePageZoomPreferenceDidChange:(id)arg1;
- (void)_perSiteAutomaticReaderActivationPreferenceDidChange:(id)arg1;
- (_Bool)_shouldAllowAutomaticReader;
- (id)_committedDomainForPreferences;
- (id)printControllerForContentProvider:(id)arg1;
- (id)webViewForMailContentProvider:(id)arg1;
- (_Bool)readerViewIsVisibleForMailContentProvider:(id)arg1;
- (id)readerControllerForMailContentProvider:(id)arg1;
- (id)_mailContentProvider;
- (void)dismissSFSafariViewControllerKeyPressed;
- (void)resetPageZoomLevelAndFontSize;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)_emailCurrentPageWithPreferredContentType:(long long)arg1;
- (void)emailCurrentPage;
- (void)saveWebpageAlternativeKeyPressed;
- (void)saveWebpageKeyPressed;
- (_Bool)_dismissTransientUIAnimated:(_Bool)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)cancelKeyPressed;
- (void)toggleReaderKeyPressed;
- (void)previousFindResultKeyPressed;
- (void)nextFindResultKeyPressed;
- (void)takeFindStringKeyPressed;
- (void)findKeyPressed;
- (void)navigateForwardKeyPressed;
- (void)navigateBackKeyPressed;
- (void)reloadFromOriginKeyPressed;
- (void)reloadKeyPressed;
- (id)keyCommands;
- (void)visibilityWillChangeForFindOnPageView:(id)arg1;
- (id)webViewForFindOnPageView:(id)arg1;
- (void)_invalidateUserActivity;
- (void)_updateUserActivity;
- (id)handoffURL;
- (void)_cancelPendingUpdateUserActivityTimer;
- (void)_updateUserActivityTimerFired;
- (void)_updateUserActivitySoon;
@property(readonly, nonatomic) _Bool supportsPrivacyReport;
@property(nonatomic) _Bool keepBarsMinimized;
@property(readonly, nonatomic) id <_SFBrowserDocument> activeDocument;
- (void)toggleShowingReaderForUserAction;
@property(readonly, nonatomic, getter=isShowingReader) _Bool showingReader;
@property(readonly, nonatomic) id <SFReaderContext> readerContext;
@property(readonly, nonatomic) NSURL *URLForPerSitePreferences;
@property(readonly, nonatomic) _Bool canHideToolbar;
@property(readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomManager;
@property(readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
- (void)reloadEnablingContentBlockers:(_Bool)arg1;
@property(readonly, nonatomic) _Bool wasLoadedWithContentBlockersEnabled;
- (void)perSiteSettingsUIPresentSettings;
@property(readonly, nonatomic) _SFWebView *activeWebView;
- (unsigned long long)browserPersonaForActivityViewController:(id)arg1;
- (void)activityViewController:(id)arg1 prepareActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentActivityViewController;
- (id)_itemProviderCollectionForSharingURL:(id)arg1 title:(id)arg2;
- (void)_fetchSharingURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_showICSControllerForPath:(id)arg1 sourceURL:(id)arg2;
- (void)_showPassBookControllerForPass:(id)arg1;
- (void)_showDownload:(id)arg1;
- (_Bool)_canShowDownloadWithoutPrompting:(id)arg1;
- (void)downloadDidReceiveResponse:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidFail:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (_Bool)pageLoadErrorControllerShouldReloadAfterError:(id)arg1;
- (_Bool)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(id)arg1;
- (void)pageLoadErrorController:(id)arg1 presentViewController:(id)arg2;
- (void)pageLoadErrorControllerClosePage:(id)arg1;
- (id)pageLoadErrorControllerGetSecIdentityPreferencesController:(id)arg1;
- (void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
- (void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;
- (_Bool)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2 bookmark:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)fluidProgressRocketAnimationDidComplete;
- (id)currentFluidProgressStateSource;
- (_Bool)hasFailedURL;
- (double)estimatedProgress;
- (id)expectedOrCurrentURL;
- (void)_setSuppressingPreviewProgressAnimation:(_Bool)arg1;
- (id)progressState;
- (void)clearFluidProgressState;
- (_Bool)createFluidProgressState;
- (void)navigationBar:(id)arg1 didCreateLeadingToolbar:(id)arg2 trailingToolbar:(id)arg3;
- (void)navigationBarMediaStateMuteButtonWasTapped:(id)arg1;
- (id)navigationBarURLForSharing:(id)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(id)arg1;
- (void)_reloadFromOrigin:(_Bool)arg1;
- (void)navigationBarReloadButtonWasTapped:(id)arg1;
- (void)navigationBarDoneButtonWasTapped:(id)arg1;
- (void)navigationBarCancelButtonWasTapped:(id)arg1;
- (void)navigationBarFormatMenuButtonStartedInteraction:(id)arg1;
- (void)_translationAvailabilityDidChange:(id)arg1;
- (void)navigationBarTranslateButtonWasTapped:(id)arg1;
- (void)navigationBarReaderButtonWasTapped:(id)arg1;
- (void)_hideNavigationBarGestureRecognized:(id)arg1;
- (void)navigationBarFormatMenuButtonBecameUnavailable:(id)arg1;
- (void)navigationBarFormatMenuButtonWasTapped:(id)arg1;
- (void)_showBars;
- (void)compressedNavigationBarWasTapped:(id)arg1;
- (void)navigationBarMetricsDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool _shouldReloadImmediatelyAfterPageLoadError;
@property(readonly, nonatomic) NSString *_hostAppBundleId;
- (void)_didCompleteScrolling;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;
- (void)dynamicBarAnimatorStateDidChange:(id)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;
- (_Bool)dynamicBarAnimator:(id)arg1 canTransitionToState:(long long)arg2 byDraggingWithOffset:(double)arg3;
- (void)stopLoading;
- (void)_showBarsFromBottomBarTap:(id)arg1;
- (void)_dismiss;
- (void)updateBottombarOffset:(double)arg1 topBarHeight:(double)arg2;
- (_Bool)isPageEligibileToShowNotSecureWarning;
- (void)printController:(id)arg1 didCreatePrintInfo:(id)arg2;
- (id)presentingViewControllerForPrintController:(id)arg1;
- (_Bool)printControllerCanPresentPrintUI:(id)arg1;
- (_Bool)printControllerPageIsLoading:(id)arg1;
- (_Bool)printControllerShouldPrintReader:(id)arg1;
- (void)webViewController:(id)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)webViewController:(id)arg1 didStartDownload:(id)arg2;
- (void)webViewController:(id)arg1 didChangeFullScreen:(_Bool)arg2;
- (long long)webViewController:(id)arg1 presentationPolicyForDialog:(id)arg2;
- (void)webViewController:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;
- (void)webViewController:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;
- (unsigned long long)browserPersonaForWebViewController:(id)arg1;
- (void)webViewController:(id)arg1 printFrame:(id)arg2;
- (id)presentingViewControllerForWebViewController:(id)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(id)arg1;
- (void)linkPreviewHelper:(id)arg1 didProduceNavigationIntent:(id)arg2 forAction:(long long)arg3;
- (void)linkPreviewHelper:(id)arg1 redirectToExternalNavigationResult:(id)arg2;
- (id)linkPreviewHelper:(id)arg1 resultOfLoadingURL:(id)arg2;
- (_Bool)linkPreviewHelper:(id)arg1 supportsAction:(long long)arg2 forURL:(id)arg3;
- (void)linkPreviewHelper:(id)arg1 commitPreviewViewControllerForAction:(long long)arg2;
- (id)linkPreviewHelper:(id)arg1 previewViewControllerForURL:(id)arg2;
- (void)readerViewController:(id)arg1 contextMenuDidEndForElement:(id)arg2;
- (void)readerViewController:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3;
- (void)readerViewController:(id)arg1 contextMenuWillPresentForElement:(id)arg2;
- (void)contextMenuConfigurationForReaderViewController:(id)arg1 element:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_invalidatePreviewCloseTimer;
- (void)_closePreviewDocumentTimerFired:(id)arg1;
- (void)webViewController:(id)arg1 contextMenuDidEndForElement:(id)arg2;
- (void)webViewController:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3;
- (void)webViewController:(id)arg1 contextMenuWillPresentForElement:(id)arg2;
- (void)webViewController:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_willCommitContextMenuForWebView:(id)arg1 withAnimator:(id)arg2;
- (void)_willPresentContextMenu;
- (id)_contextMenuConfigurationForWebView:(id)arg1 element:(id)arg2;
- (_Bool)webViewControllerCanPromptForAccountSecurityRecommendation:(id)arg1;
- (void)webViewController:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webViewControllerDidChangeHasOnlySecureContent:(id)arg1;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(id)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(id)arg1;
- (void)webViewControllerWebProcessDidCrash:(id)arg1;
- (void)webViewController:(id)arg1 webViewDidClose:(id)arg2;
- (void)webViewController:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_openNewWebViewIfNeededWithConfiguration:(id)arg1 forNavigationAction:(id)arg2;
- (void)webViewController:(id)arg1 willGoToBackForwardListItem:(id)arg2 inPageCache:(_Bool)arg3;
- (void)webViewController:(id)arg1 didEndNavigationGestureToBackForwardListItem:(id)arg2;
- (void)webViewController:(id)arg1 willEndNavigationGestureToBackForwardListItem:(id)arg2;
- (void)webViewController:(id)arg1 didSameDocumentNavigation:(id)arg2 ofType:(long long)arg3;
- (void)webViewControllerDidChangeURL:(id)arg1;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)_didDecideNavigationPolicy:(long long)arg1 forNavigationAction:(id)arg2;
- (void)webViewController:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_didDecideNavigationPolicy:(long long)arg1 forNavigationResponse:(id)arg2;
- (id)_fallbackURLForWellKnownChangePasswordURL:(id)arg1;
- (id)_quickLookDocumentForDownload:(id)arg1;
- (void)_internalWebViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_redirectToNewsIfNeededForRequest:(id)arg1 isMainFrame:(_Bool)arg2 userAction:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (id)resultOfLoadingRequest:(id)arg1 inMainFrame:(_Bool)arg2 disallowRedirectToExternalApps:(_Bool)arg3;
- (void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(_Bool)arg2;
- (void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 promptPolicy:(long long)arg3 isMainFrame:(_Bool)arg4 userAction:(id)arg5;
- (void)_queueAlertForRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 isMainFrame:(_Bool)arg3 promptPolicy:(long long)arg4 userAction:(id)arg5;
- (void)_completeRedirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 dialogResult:(long long)arg3;
- (void)_cleanUpAfterRedirectToExternalApp;
- (_Bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (void)webViewControllerUpdateNavigationBar:(id)arg1;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)webViewController:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewControllerDidChangeEstimatedProgress:(id)arg1;
- (void)webViewControllerDidChangeLoadingState:(id)arg1;
- (void)webViewController:(id)arg1 didExtractTextSamplesForTranslation:(id)arg2;
- (void)createReaderWebViewForWebViewController:(id)arg1;
- (void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)webViewControllerDidDetermineReaderAvailability:(id)arg1 dueTo:(long long)arg2;
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didCommitNavigation:(id)arg2;
- (void)authenticationChallengeDidNegotiateModernTLS:(id)arg1;
- (void)webViewController:(id)arg1 authenticationChallenge:(id)arg2 shouldAllowLegacyTLS:(CDUnknownBlockType)arg3;
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)quickLookDocument;
- (void)setQuickLookDocumentForCurrentBackForwardListItem:(id)arg1;
- (id)quickLookDocumentForCurrentBackForwardListItem;
- (id)suggestedFileExtensionForQuickLookDocument:(id)arg1;
- (id)suggestedFileNameForQuickLookDocument:(id)arg1;
- (id)dataForQuickLookDocument:(id)arg1;
- (_Bool)_canTranslateWebpages;
- (void)_hideQuickLookDocumentView;
- (void)_showQuickLookDocumentView;
- (void)_resetPageZoomSetting;
- (void)_decreasePageZoomSetting;
- (void)_increasePageZoomSetting;
- (void)_updatePageZoomWithPreference;
- (void)_openCurrentURLInSafari;
- (id)_applicationPayloadForOpeningInSafari;
@property(readonly, nonatomic) _Bool canPrint;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_initialLoadFinishedWithSuccess:(_Bool)arg1;
- (_Bool)_notifyInitialLoadDidFinish:(_Bool)arg1;
- (void)_showCrashBanner:(id)arg1 animated:(_Bool)arg2;
- (void)_setShowingCrashBanner:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowingPinnableBanner:(id)arg1 animated:(_Bool)arg2;
- (void)_updatePinnableBannerFrame;
- (void)_hideCrashBanner;
- (void)_updatePinnableBannerOffset;
- (void)_updateCrashBannerOffset;
- (double)_crashBannerDraggingOffsetForContentOffset:(struct CGPoint)arg1;
- (void)_showGenericDownloadAlert;
- (void)_updateRemoteSwipeGestureState;
- (void)_updateUI;
- (void)_updateBarItems;
- (void)_updatePreviewLoadingUI;
- (_Bool)_canShowPageFormatMenu;
- (void)didUpdateNavigationBarItem:(id)arg1;
- (void)_updateNavigationBar;
- (void)_invalidateEVOrganizationName;
- (id)_EVOrganizationName;
- (_Bool)_isSecure;
@property(readonly, nonatomic) _Bool isShowingErrorPage;
- (void)loadRequest:(id)arg1;
- (void)_setShowingReader:(_Bool)arg1 deactivationMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_setUpReaderViewController;
- (_Bool)_readerViewControllerNeedsSetUp;
- (void)_showReaderAnimated:(_Bool)arg1;
- (void)_hideReaderAnimated:(_Bool)arg1 deactivationMode:(unsigned long long)arg2;
@property(readonly, nonatomic) WKWebView *webView;
- (void)_setWebView:(id)arg1;
- (double)dynamicBarAnimator:(id)arg1 minimumTopBarHeightForOffset:(double)arg2;
- (double)_offsetForDynamicBarAnimator;
- (void)_updateDynamicBarGeometry;
- (double)_maximumHeightObscuredByBottomBar;
- (id)_currentWebView;
- (void)_updateInterfaceFillsScreen;
- (void)_updateUsesNarrowLayout;
- (void)_updateBarTheme;
- (_Bool)_effectiveBarCollapsingEnabled;
- (void)_setUpToolbar;
- (void)traitCollectionDidChange:(id)arg1;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (void)_updateStatusBarStyleForced:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_updateScrollToTopView;
@property(readonly, nonatomic) _Bool _usesScrollToTopView;
- (void)_scrollToTopFromScrollToTopView;
- (_Bool)_canScrollToTopInView:(id)arg1;
- (void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(id)arg1;
- (void)webViewControllerDidChangeSafeAreaInsets:(id)arg1;
- (void)_updateScrollIndicatorVerticalInsets:(struct UIEdgeInsets)arg1 horizontalInsets:(struct UIEdgeInsets)arg2;
- (void)_updateCurrentScrollViewInsets;
- (void)_updateWebViewShrinkToFit;
- (_Bool)_isSplitScreen;
- (void)_updateWebViewLayoutSize;
- (struct UIEdgeInsets)_effectiveWebViewSafeAreaInsets;
- (_Bool)_safeAreaShouldAffectWebViewObscuredInsets;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)_updateHomeIndicatorAutoHideState;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_didCompleteViewSizeTransition;
- (void)_layOutBrowserViewForSizeTransition;
- (_Bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;
- (void)_getSafariDataSharingModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_decideDataSharingModeIfNecessaryAndSetUpInterface;
- (_Bool)_isPreviewing;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_didLoadWebView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_setUpTopBarAndBottomBar;
- (void)_setUpCalendarEventDetectorIfNeeded;
- (void)_setUpReloadOptionsControllerIfNeeded;
- (void)_goForward;
- (void)_goBack;
- (void)_willBeginUserInitiatedNavigation;
- (void)_goBackToOwnerWebView;
- (_Bool)_shouldGoBackToOwnerWebView;
- (void)_setUpFindOnPageViewIfNeeded;
- (void)_setUpWebViewControllerIfNeeded;
- (void)_updateWebKitExperimentalFeatures;
- (void)_updateTrackerProtectionPreferences;
- (_Bool)isSafariRestricted;
- (id)webViewConfiguration;
- (id)websiteDataStore;
- (id)websiteDataStoreConfiguration;
- (id)processPool;
- (id)newProcessPool;
- (id)processPoolConfiguration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) SFReaderEnabledWebViewController *rootWebViewController;
- (void)_setUpAnalyticsPersona;
- (void)_invalidateWebViewControllers;
- (void)_popWebViewController;
- (void)_pushWebViewController:(id)arg1;
@property(readonly, nonatomic) SFReaderEnabledWebViewController *webViewController;
- (void)_setCurrentWebViewController:(id)arg1;
- (void)_cleanUpWebViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) _SFBrowserView *browserView;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SFBrowserDocumentTrackerInfo *trackerInfo;

@end

