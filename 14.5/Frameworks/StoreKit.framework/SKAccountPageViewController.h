//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/PSStateRestoration-Protocol.h>
#import <StoreKit/SKUIRedeemViewCameraOverrideDelegate-Protocol.h>

@class ACAccount, NSString, NSURL, SKInvocationQueueProxy, SKRemoteAccountPageViewController, _UIAsyncInvocation;
@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;

@interface SKAccountPageViewController : UIViewController <SKUIRedeemViewCameraOverrideDelegate, PSStateRestoration>
{
    NSURL *_accountURL;
    _UIAsyncInvocation *_cancelRequest;
    CDUnknownBlockType _prepareBlock;
    CDUnknownBlockType _loadBlock;
    SKRemoteAccountPageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> *_serviceProxy;
    _Bool _isRemoteViewControllerReady;
    _Bool _financeInterruptionCalled;
    _Bool _cameraDidShow;
    _Bool _viewHasAppeared;
    _Bool _isRemoteViewControllerSetup;
    CDUnknownBlockType redeemCompletionHandler;
    _Bool _showAccountGlyph;
    id <SKAccountPageViewControllerDelegate> _delegate;
    ACAccount *_account;
    NSString *_referrer;
    long long _type;
    SKAccountPageViewController *_preWarmedViewController;
    SKAccountPageViewController *_presentingAccountPageViewController;
}

+ (void)isCommerceUIURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak SKAccountPageViewController *presentingAccountPageViewController; // @synthesize presentingAccountPageViewController=_presentingAccountPageViewController;
@property(retain, nonatomic) SKAccountPageViewController *preWarmedViewController; // @synthesize preWarmedViewController=_preWarmedViewController;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool showAccountGlyph; // @synthesize showAccountGlyph=_showAccountGlyph;
@property(retain, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <SKAccountPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_requestRemoteViewController;
- (void)_setupRemoteViewController:(_Bool)arg1;
- (void)_setupPreWarmedViewController;
- (void)_addRemoteView;
- (unsigned long long)_indexForFirstBridgedNavigationViewController;
- (void)_popAllBridgedNavigationViewControllers;
- (id)_overrideScheme:(id)arg1;
- (void)_setupNavigationItem;
- (_Bool)canBeShownFromSuspendedState;
- (void)overrideRedeemOperationWithCode:(id)arg1 cameraRecognized:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)_bridgedRightButtonPressed:(id)arg1;
- (void)_dismissBridgedViewController;
- (void)_presentBridgedViewController;
- (void)_popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)_pushBridgedViewControllerAnimated:(_Bool)arg1 options:(id)arg2;
- (void)_setBridgedNavigationItemWithOptions:(id)arg1;
- (void)_overrideRedeemCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)_overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)_overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_financeInterruptionResolved:(_Bool)arg1;
- (void)_dismissViewControllerWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didFinishLoading;
- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_keyboardDidChangeNotification:(id)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_setupNotificationCenter;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAccountURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

