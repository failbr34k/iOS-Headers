//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKAddShareablePassConfiguration, PKRemoteShareableCredentialsMessageComposeViewController, _UIAsyncInvocation;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;

@interface PKShareableCredentialsMessageComposeViewController : UIViewController
{
    id <PKShareableCredentialsMessageComposeViewControllerDelegate> _delegate;
    PKAddShareablePassConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteShareableCredentialsMessageComposeViewController *_remoteVC;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKShareableCredentialsMessageComposeViewControllerDelegate> delegate;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)_setRemoteVC:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

