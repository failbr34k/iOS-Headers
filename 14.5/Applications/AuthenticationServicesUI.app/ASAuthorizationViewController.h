//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ASCredentialRequestContainerViewControllerDelegate-Protocol.h"
#import "ASCredentialRequestPaneViewControllerDelegate-Protocol.h"
#import "ASPasswordAuthenticationPaneViewControllerDelegate-Protocol.h"

@class ASCAuthorizationPresentationContext, ASNavigationController, NSString;
@protocol ASAuthorizationViewControllerDelegate;

@interface ASAuthorizationViewController : UIViewController <ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate>
{
    ASCAuthorizationPresentationContext *_presentationContext;
    ASNavigationController *_navigationController;
    id <ASAuthorizationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ASAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestContainerViewControllerDidDismiss:(id)arg1;
- (void)passwordAuthenticationViewController:(id)arg1 validateUserEnteredPIN:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(id)arg1;
- (void)requestPaneViewController:(id)arg1 didRequestCredentialForLoginChoice:(id)arg2 authenticatedContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestPaneViewController:(id)arg1 dismissWithCredential:(id)arg2 error:(id)arg3;
- (void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)arg1;
- (void)_pushSecurityKeyViewController;
- (long long)modalPresentationStyle;
- (void)_presentContainerViewControllerWithCredentialRequestViewController:(id)arg1;
- (void)_cancelButtonSelected:(id)arg1;
- (id)_cancelBarButtonItem;
- (id)_signInBarButtonItem;
- (void)_presentPINEntryInterface;
- (id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)arg1;
- (id)_securityKeyRequestViewController;
- (id)_initialViewControllerForPresentationContext:(id)arg1;
- (void)_presentInitialViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (id)navigationController;
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)arg1;
- (void)presentPINEntryInterface;
- (void)updateInterfaceWithLoginChoices:(id)arg1;
- (id)initWithPresentationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

