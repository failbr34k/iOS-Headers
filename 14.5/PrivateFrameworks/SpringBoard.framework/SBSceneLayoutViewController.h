//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBDisplayLayoutContext-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionSceneEntityFrameProvider-Protocol.h>
#import <SpringBoard/SBSceneViewPresentationConfiguring-Protocol.h>

@class FBDisplayLayoutElement, FBDisplayLayoutTransition, FBSDisplayIdentity, NSArray, NSMutableDictionary, NSMutableSet, NSString, SBLayoutState, SBSceneManager, SBWorkspaceApplicationSceneTransitionContext, UIView;
@protocol SBSceneLayoutViewControllerDelegate;

@interface SBSceneLayoutViewController : UIViewController <SBSceneViewPresentationConfiguring, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, BSDescriptionProviding, SBDisplayLayoutContext>
{
    FBDisplayLayoutElement *_homescreenLayoutElement;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    NSMutableDictionary *_layoutElementControllersByRole;
    NSMutableDictionary *_previousLayoutElementControllersByRole;
    NSMutableDictionary *_reusableLayoutElementControllers;
    NSMutableSet *_elementViewControllerUpdatesSuspensionReasons;
    _Bool _userResizing;
    _Bool _elementViewControllerUpdatesSuspended;
    SBLayoutState *_transitioningFromLayoutState;
    SBLayoutState *_transitioningToLayoutState;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_previousSuccessfulTransitionContext;
    SBSceneManager *_sceneManager;
    id <SBSceneLayoutViewControllerDelegate> _delegate;
    UIView *_sceneContainerView;
}

+ (id)sceneLayoutViewControllerForDisplayIdentity:(id)arg1;
+ (id)mainDisplaySceneLayoutViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *sceneContainerView; // @synthesize sceneContainerView=_sceneContainerView;
@property(nonatomic, getter=_areElementViewControllerUpdatesSuspended, setter=_setElementViewControllerUpdatesSuspended:) _Bool elementViewControllerUpdatesSuspended; // @synthesize elementViewControllerUpdatesSuspended=_elementViewControllerUpdatesSuspended;
@property(nonatomic) __weak id <SBSceneLayoutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(nonatomic, getter=isUserResizing) _Bool userResizing; // @synthesize userResizing=_userResizing;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *_previousSuccessfulTransitionContext; // @synthesize _previousSuccessfulTransitionContext;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *_transitionContext; // @synthesize _transitionContext;
@property(readonly, nonatomic) SBLayoutState *_transitioningToLayoutState; // @synthesize _transitioningToLayoutState;
@property(readonly, nonatomic) SBLayoutState *_transitioningFromLayoutState; // @synthesize _transitioningFromLayoutState;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (struct CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)_configureVisibilityForCurrentLayoutState;
- (void)_verifyLayoutElementControllersAreValidForCurrentLayoutState;
- (_Bool)_shouldRotateToLayoutOrientation:(long long)arg1;
@property(readonly, nonatomic, getter=_isCurrentlyRotating) _Bool _currentlyRotating;
@property(readonly, nonatomic) long long _transitioningToLayoutOrientation;
@property(readonly, nonatomic) long long _transitioningFromLayoutOrientation;
- (long long)_overrideWindowActiveInterfaceOrientation;
@property(readonly, nonatomic) long long _layoutOrientation;
- (_Bool)_shouldAdjustViewAffordancesAfterTransition;
- (_Bool)_shouldRepositionViewAfterTransition;
- (void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(_Bool)arg1;
- (void)_endLayoutStateTransitionForFailure;
- (void)_endLayoutStateTransitionWithInterruption:(_Bool)arg1;
- (void)_willEndLayoutStateTransition;
- (void)_beginLayoutStateTransitionWithTransitionContext:(id)arg1;
@property(readonly, nonatomic, getter=_isCurrentlyTransitioning) _Bool _currentlyTransitioning;
- (id)_displayConfiguration;
- (struct CGRect)referenceFrameForUniqueIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)convertRectFromInterfaceOrientationCoordinateSpace:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromInterfaceOrientationCoordinateSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectToInterfaceOrientationCoordinateSpace:(struct CGRect)arg1;
- (struct CGPoint)convertPointToInterfaceOrientationCoordinateSpace:(struct CGPoint)arg1;
- (id)coordinateSpaceForLayoutElement:(id)arg1 layoutState:(id)arg2;
- (id)coordinateSpaceForInterfaceOrientation:(long long)arg1;
- (id)coordinateSpaceForLayoutState:(id)arg1;
- (id)coordinateSpace;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3 hostRequester:(id)arg4;
- (id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3;
- (_Bool)_shouldConsiderHomeScreenAsActive;
- (void)_updateAuxiliaryViews;
- (_Bool)_isLayoutElementViewControllerOccluded:(id)arg1;
- (void)_cleanupDisappearedLayoutElementController:(id)arg1;
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;
- (id)_dequeueLayoutElementControllerForReuseOfClass:(Class)arg1;
- (void)_enqueueLayoutViewControllerForReuse:(id)arg1;
- (id)_transitioningFromLayoutElementControllerForLayoutRole:(long long)arg1;
- (id)_layoutElementControllerForLayoutRole:(long long)arg1;
- (id)_previousLayoutElementControllerWithElementIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_transitioningAppViewControllers;
@property(readonly, copy, nonatomic) NSArray *_transitioningLayoutElementControllers;
@property(readonly, nonatomic) _Bool hasVisibleElements;
@property(readonly, nonatomic) NSArray *appViewControllers;
@property(readonly, nonatomic) NSArray *layoutElementControllers;
@property(readonly, nonatomic) SBLayoutState *layoutState;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)loadView;
@property(readonly, copy) NSString *description;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithSceneManager:(id)arg1;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 maskDisplayCorners:(_Bool)arg4;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3;
- (id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3;
- (id)animationControllerForRotatingWithTransitionRequest:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

