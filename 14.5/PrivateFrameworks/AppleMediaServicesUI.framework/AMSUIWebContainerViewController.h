//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUICommonViewController.h>

#import <AppleMediaServicesUI/AMSUIWebPresentationDelegate-Protocol.h>
#import <AppleMediaServicesUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSDictionary, NSString, UINavigationItem, UIViewController;
@protocol AMSUIWebPagePresenter, AMSUIWebPresentationDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebContainerViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate>
{
    _Bool _shouldSkipInitialRefresh;
    _Bool _dismissCalled;
    _Bool _hasAppeared;
    UIViewController<AMSUIWebPagePresenter> *_containedViewController;
    unsigned long long _activePresentationType;
    AMSUIWebAppearance *_appearance;
    long long _containerIndex;
    long long _disableReappearPlaceholder;
    AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *_modalPresentationDelegate;
    AMSUIWebContainerViewController *_nextContainer;
    NSDictionary *_pageInfo;
    AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *_pushPresentationDelegate;
    AMSUIWebClientContext *_context;
    UIViewController *_hiddenViewController;
    UINavigationItem *_lastNavigationItem;
    long long _lastNavigationStyle;
    AMSUIWebNavigationBarModel *_navigationBarModel;
    struct CGPoint _scrollPosition;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
@property(nonatomic) long long lastNavigationStyle; // @synthesize lastNavigationStyle=_lastNavigationStyle;
@property(nonatomic) __weak UINavigationItem *lastNavigationItem; // @synthesize lastNavigationItem=_lastNavigationItem;
@property(retain, nonatomic) UIViewController *hiddenViewController; // @synthesize hiddenViewController=_hiddenViewController;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) _Bool dismissCalled; // @synthesize dismissCalled=_dismissCalled;
@property(nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool shouldSkipInitialRefresh; // @synthesize shouldSkipInitialRefresh=_shouldSkipInitialRefresh;
@property(nonatomic) __weak AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *pushPresentationDelegate; // @synthesize pushPresentationDelegate=_pushPresentationDelegate;
@property(retain, nonatomic) NSDictionary *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak AMSUIWebContainerViewController *nextContainer; // @synthesize nextContainer=_nextContainer;
@property(nonatomic) __weak AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *modalPresentationDelegate; // @synthesize modalPresentationDelegate=_modalPresentationDelegate;
@property(nonatomic) long long disableReappearPlaceholder; // @synthesize disableReappearPlaceholder=_disableReappearPlaceholder;
@property(nonatomic) long long containerIndex; // @synthesize containerIndex=_containerIndex;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) unsigned long long activePresentationType; // @synthesize activePresentationType=_activePresentationType;
- (void)_setupNavBarAnimated:(_Bool)arg1;
- (void)_scrollTo:(struct CGPoint)arg1 webView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_refreshForInitialAppear;
- (void)_prepareToMoveWebViewToVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postEvent:(id)arg1;
- (void)_handleSelectedNavigationButton:(id)arg1;
- (void)_handlePushDismissal;
- (unsigned long long)_determineActivePresentationType;
- (id)_barButtonItemFromModel:(id)arg1 navModel:(id)arg2;
- (void)_applyAppearance;
- (void)_adjustWebViewScrollFor:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *containedViewController; // @synthesize containedViewController=_containedViewController;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)didDismissController:(id)arg1;
- (void)replaceContentWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleModalDismissal;
- (void)cacheScrollViewPositionFor:(id)arg1;
- (void)applyNavigationModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)navigationItem;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 appearance:(id)arg2 navigationBar:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

