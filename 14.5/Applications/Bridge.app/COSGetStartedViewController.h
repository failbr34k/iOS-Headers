//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

#import "MCProfileConnectionObserver-Protocol.h"

@class COSWatchUnpairInstructionsController, MCProfileConnection, NSString, NSTimer, UIButton, UIImageView;
@protocol COSGetStartedViewControllerDelegate;

@interface COSGetStartedViewController : BPSWelcomeOptinViewController <MCProfileConnectionObserver>
{
    _Bool _didRegisterNRObserver;
    _Bool _showMigrationLayout;
    _Bool _isAutomationUIEnabled;
    _Bool _pairingInfrastructureIsBusy;
    id <COSGetStartedViewControllerDelegate> _getStartedDelegate;
    unsigned long long _radioState;
    NSTimer *_welcomeTextUpdater;
    MCProfileConnection *_mcConnection;
    UIImageView *_marketingBannerImage;
    UIButton *_automationButton;
    COSWatchUnpairInstructionsController *_unpairInstructions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) COSWatchUnpairInstructionsController *unpairInstructions; // @synthesize unpairInstructions=_unpairInstructions;
@property(retain, nonatomic) UIButton *automationButton; // @synthesize automationButton=_automationButton;
@property(retain, nonatomic) UIImageView *marketingBannerImage; // @synthesize marketingBannerImage=_marketingBannerImage;
@property(retain, nonatomic) MCProfileConnection *mcConnection; // @synthesize mcConnection=_mcConnection;
@property(retain, nonatomic) NSTimer *welcomeTextUpdater; // @synthesize welcomeTextUpdater=_welcomeTextUpdater;
@property(nonatomic) unsigned long long radioState; // @synthesize radioState=_radioState;
@property(nonatomic) _Bool pairingInfrastructureIsBusy; // @synthesize pairingInfrastructureIsBusy=_pairingInfrastructureIsBusy;
@property(nonatomic) _Bool isAutomationUIEnabled; // @synthesize isAutomationUIEnabled=_isAutomationUIEnabled;
@property(nonatomic) _Bool showMigrationLayout; // @synthesize showMigrationLayout=_showMigrationLayout;
@property(nonatomic) _Bool didRegisterNRObserver; // @synthesize didRegisterNRObserver=_didRegisterNRObserver;
@property(nonatomic) __weak id <COSGetStartedViewControllerDelegate> getStartedDelegate; // @synthesize getStartedDelegate=_getStartedDelegate;
- (void)nanoRegistryStatusChanged:(id)arg1;
- (void)showConnectivityAlert;
- (void)presentUnpairingViewControllerAnimated:(_Bool)arg1;
- (void)_unregisterNRObserver;
- (void)_registerNRObserver;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)updateRadioStateForNotification:(id)arg1;
- (void)_logConnectionDescription;
- (void)updateRadioState;
- (void)updateUIState;
- (void)stopUpdatingWelcomeText;
- (void)startUpdatingWelcomeText;
- (void)updateWelcomeText;
- (void)_tappedInternalManualMode:(id)arg1;
- (void)learnMoreButtonPressed:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)learnMoreButtonTitle;
- (id)alternateButtonTitle;
- (id)suggestedButtonTitle;
- (id)detailString;
- (id)titleString;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_getUnpairInstructions;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

