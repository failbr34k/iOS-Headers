//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UIRemoteViewControllerContaining-Protocol.h>
#import <UIKitCore/_UISharingPublicController-Protocol.h>

@class NSString, UIImage, _UIRemoteViewController, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;
@protocol _UIDocumentSharingControllerDelegate_Private;

@interface UIDocumentSharingController : UIViewController <UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining, _UISharingPublicController>
{
    _Bool _collaborationUIEnabled;
    _Bool _showOnlyAddPeople;
    _Bool _showRootFolder;
    _Bool _legacyAppearance;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    id _delegate;
    UIImage *_thumbnail;
    NSString *_auxiliaryActionTitle;
    NSString *_mailTemplate;
    NSString *_messageTemplate;
    NSString *_mailSubject;
    NSString *_initialHeaderSubtitle;
    NSString *_headerSubtitle;
    NSString *_headerActionTitle;
    NSString *_appName;
    id <_UIDocumentSharingControllerDelegate_Private> __privateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=_legacyAppearance, setter=_setLegacyAppearance:) _Bool legacyAppearance; // @synthesize legacyAppearance=_legacyAppearance;
@property(nonatomic, getter=_privateDelegate, setter=_setPrivateDelegate:) __weak id <_UIDocumentSharingControllerDelegate_Private> _privateDelegate; // @synthesize _privateDelegate=__privateDelegate;
@property(copy, nonatomic, getter=_appName, setter=_setAppName:) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic, getter=_headerActionTitle, setter=_setHeaderActionTitle:) NSString *headerActionTitle; // @synthesize headerActionTitle=_headerActionTitle;
@property(copy, nonatomic, getter=_headerSubtitle, setter=_setHeaderSubtitle:) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(copy, nonatomic, getter=_initialHeaderSubtitle, setter=_setInitialHeaderSubtitle:) NSString *initialHeaderSubtitle; // @synthesize initialHeaderSubtitle=_initialHeaderSubtitle;
@property(nonatomic, getter=_showRootFolder, setter=_setShowRootFolder:) _Bool showRootFolder; // @synthesize showRootFolder=_showRootFolder;
@property(nonatomic, getter=_showOnlyAddPeople, setter=_setShowOnlyAddPeople:) _Bool showOnlyAddPeople; // @synthesize showOnlyAddPeople=_showOnlyAddPeople;
@property(nonatomic, getter=_collaborationUIEnabled, setter=_setCollaborationUIEnabled:) _Bool collaborationUIEnabled; // @synthesize collaborationUIEnabled=_collaborationUIEnabled;
@property(copy, nonatomic, getter=_mailSubject, setter=_setMailSubject:) NSString *mailSubject; // @synthesize mailSubject=_mailSubject;
@property(copy, nonatomic, getter=_messageTemplate, setter=_setMessageTemplate:) NSString *messageTemplate; // @synthesize messageTemplate=_messageTemplate;
@property(copy, nonatomic, getter=_mailTemplate, setter=_setMailTemplate:) NSString *mailTemplate; // @synthesize mailTemplate=_mailTemplate;
@property(copy, nonatomic, getter=_auxiliaryActionTitle, setter=_setAuxiliaryActionTitle:) NSString *auxiliaryActionTitle; // @synthesize auxiliaryActionTitle=_auxiliaryActionTitle;
@property(copy, nonatomic, getter=_thumbnail, setter=_setThumbnail:) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // @synthesize strongReferenceToOurself=_strongReferenceToOurself;
@property(nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (id)_sharingViewPresentationController;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (void)_cloudSharingControllerDidChooseTransport:(id)arg1;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(_Bool)arg1;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_didDismiss;
- (void)_setMailSubject:(id)arg1 template:(id)arg2;
- (void)_shareWasMadePrivate;
- (void)_shareDidChange:(id)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property(readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController;
- (void)_updatePresentationStyleForLegacyAppearance;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

