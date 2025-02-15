//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/_UIClickPresentationInteractionDelegate-Protocol.h>

@class CCUIContentModuleDetailTransitioningDelegate, NSString, UIPresentationController, UIView, UIViewController, _UIClickPresentationInteraction;
@protocol CCUIContentModuleDetailClickPresentationInteractionManagerDelegate;

@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject <_UIClickPresentationInteractionDelegate>
{
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    UIPresentationController *_presentationController;
    _Bool _authenticated;
    struct {
        unsigned int delegateProvidesPresentedViewController:1;
        unsigned int delegateImplementsInteractionShouldBegin:1;
        unsigned int delegateRequiresAuthentication:1;
        unsigned int delegateImplementsInteractionEnded:1;
    } _delegateFlags;
    UIViewController *_presentingViewController;
    id <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> _delegate;
    UIView *_viewForInteraction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *viewForInteraction; // @synthesize viewForInteraction=_viewForInteraction;
@property(readonly, nonatomic) __weak id <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

