//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, SUMaskProvider, SUMaskedView, SUOverlayTransition, SUScriptFunction, SUScriptWindowContext, SUTouchCaptureView, UIViewController;

@interface SUOverlayViewController : SUViewController
{
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    UIViewController *_backViewController;
    _Bool _canSwipeToDismiss;
    UIViewController *_frontViewController;
    SUOverlayTransition *_lastFlipTransition;
    struct CGSize _overlaySize;
    SUOverlayTransition *_presentationTransition;
    SUScriptWindowContext *_scriptWindowContext;
    double _shadowOpacity;
    double _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    long long _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

+ (struct CGSize)defaultOverlaySize;
@property(retain, nonatomic) SUScriptFunction *shouldDismissFunction; // @synthesize shouldDismissFunction=_shouldDismissFunction;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) SUOverlayTransition *presentationTransition; // @synthesize presentationTransition=_presentationTransition;
@property(nonatomic) struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property(retain, nonatomic) UIViewController *frontViewController; // @synthesize frontViewController=_frontViewController;
@property(nonatomic) _Bool canSwipeToDismiss; // @synthesize canSwipeToDismiss=_canSwipeToDismiss;
@property(retain, nonatomic) UIViewController *backViewController; // @synthesize backViewController=_backViewController;
- (void)_tearDownTouchCaptureView;
- (id)_subviewContainerView;
- (void)_setShadowVisible:(_Bool)arg1;
- (void)_setActiveViewController:(id)arg1 updateInterface:(_Bool)arg2;
- (_Bool)_isControllerLoaded:(id)arg1;
- (id)_flipTransition;
- (void)_applyOverlayConfiguration:(id)arg1;
- (void)_applyDisplayProperties;
- (id)_activeViewController;
- (void)_performNextAction;
- (void)_performFlipTransitionAction:(id)arg1;
- (void)_performFlipAction:(id)arg1;
- (void)_overlayAnimationDidFinish;
- (void)_overlayActionDidFinish;
- (void)_finishFlipAction:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)imagePageViewTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldExcludeFromNavigationHistory;
- (id)scriptWindowContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)loadView;
- (void)invalidateForMemoryPurge;
- (id)copyArchivableContext;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewWillDismissWithTransition:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
@property(retain, nonatomic) SUMaskProvider *maskProvider;
@property(readonly, nonatomic, getter=isOnFront) _Bool onFront;
@property(readonly, nonatomic, getter=isActiveOverlay) _Bool activeOverlay;
- (void)flipWithTransition:(id)arg1;
@property(readonly, nonatomic) UIViewController *activeViewController;
- (void)dealloc;
- (id)initWithOverlayConfiguration:(id)arg1;
- (id)init;

@end

