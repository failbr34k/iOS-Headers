//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIRemoteAlertServiceInterface-Protocol.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceInterface_Internal-Protocol.h>

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface_Internal, SBUIRemoteAlertServiceInterface>
{
    _Bool _hasPreservedInputViews;
    _Bool _hasSentAnimationFence;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (_Bool)_selectorIsOverriden:(SEL)arg1;
- (void)sb_dismissForAlertAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sb_presentForAlertAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sb_restoreInputViewsAnimated:(_Bool)arg1;
- (void)sb_preserveInputViewsAnimated:(_Bool)arg1;
- (void)sb_resignFirstResponder;
- (void)sb_becomeFirstResponder;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserInfo:(id)arg1;
- (void)didTransitionToAttachedToWindowedAccessory:(_Bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect)arg2;
- (void)handleButtonActions:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)didInvalidateForRemoteAlert;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

