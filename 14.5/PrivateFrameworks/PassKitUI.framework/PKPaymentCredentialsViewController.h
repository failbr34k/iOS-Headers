//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentProvisioningControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupHideSetupLaterButtonProtocol-Protocol.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString, PKPaymentCredentialCache, PKPaymentCredentialTableViewCell, PKPaymentProvisioningController, PKPaymentSetupFlowController, PKPaymentSetupFooterView, PKPaymentSetupProduct, PKTableHeaderView, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentProvisioningControllerDelegate, PKPaymentSetupPresentationProtocol>
{
    PKPaymentProvisioningController *_provisioningController;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSMutableArray *_credentialCaches;
    PKPaymentCredentialCache *_peerPaymentCredentialCache;
    NSMutableArray *_refundedCredentialCaches;
    NSMutableArray *_unavailableCredentialCaches;
    NSMutableOrderedSet *_ordering;
    NSMutableDictionary *_paymentCredentialToCredentialSectionMap;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    _Bool _allowsManualEntry;
    UIImage *_placeHolder;
    PKPaymentCredentialTableViewCell *_sizingCell;
    unsigned long long _maximumNumberOfSelectableCredentials;
    double _cachedHeaderViewWidth;
    PKPaymentSetupFlowController *_flowController;
    _Bool _hideSetupLaterButton;
    PKPaymentSetupProduct *_product;
    NSString *_lastBackedUpDefaultPaymentPassSerialNumber;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastBackedUpDefaultPaymentPassSerialNumber; // @synthesize lastBackedUpDefaultPaymentPassSerialNumber=_lastBackedUpDefaultPaymentPassSerialNumber;
@property(nonatomic) _Bool hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (id)paymentSetupMarker;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentSecurityCapabilitiesFlowWithFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performSecurityCheckForCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_updatePassSnapshot:(id)arg1 paymentCredential:(id)arg2 credentialSection:(unsigned long long)arg3 credentialsInCache:(id)arg4;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)_presentAccountAlertIfNotSelectedWithContinueHandler:(CDUnknownBlockType)arg1 setupLaterHandler:(CDUnknownBlockType)arg2;
- (void)_presentAlertForCredentialCache:(id)arg1 continueHandler:(CDUnknownBlockType)arg2 setupLaterHandler:(CDUnknownBlockType)arg3;
- (id)_credentialCacheRequiringAlert;
- (void)_setupLaterTapped;
- (void)_terminateSetupFlow;
- (void)_continue;
- (void)_startProvisioningForCredentials:(id)arg1;
- (void)_startProvisioningForSelectedCards;
- (void)_presentManualAddController;
- (void)_setUserInteractionEnabled:(_Bool)arg1;
- (void)_updateForSelectionCount;
- (unsigned long long)_numberOfSelectedCredentials;
- (void)_updateMaximumSelectableCredentials;
- (void)_sortCredentialCaches:(id)arg1;
- (void)_populateOrderCredentialCaches;
- (void)_updateRemoteCredentialCache;
- (void)_updateTableHeaderViewSubtitle;
- (_Bool)_canSelectCredentialCache:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)_showRefund:(id)arg1;
- (void)_showUnavailableDetail:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_setPassSnapshotOnCell:(id)arg1 cell:(id)arg2;
- (void)_configureCell:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3 sizing:(_Bool)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)_sectionForCredentialSection:(unsigned long long)arg1;
- (unsigned long long)_credentialSectionForPaymentCredential:(id)arg1;
- (unsigned long long)_credentialSectionForSection:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 allowsManualEntry:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

