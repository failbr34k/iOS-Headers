//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKSubcredentialMessageComposeViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKAppletSubcredentialSharingRequest, PKHeroCardExplainationHeaderView, PKSharedCredentialsGroupController, PKSubcredentialMessageComposeViewController;
@protocol PKAppletSubcredentialSharingExplanationViewControllerDelegate;

@interface PKAppletSubcredentialSharingExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialMessageComposeViewControllerDelegate, PKViewControllerPreflightable>
{
    PKHeroCardExplainationHeaderView *_heroCardView;
    PKSharedCredentialsGroupController *_groupController;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    id <PKAppletSubcredentialSharingExplanationViewControllerDelegate> _delegate;
    _Bool _isSharing;
    PKSubcredentialMessageComposeViewController *_messageComposeViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKSubcredentialMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)messageComposeViewControllerDidFinishWithResult:(_Bool)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)_openMessagesToPresentAction;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSharedCredentialsGroupController:(id)arg1 delegate:(id)arg2 SharingRequest:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

