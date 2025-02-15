//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPeerPaymentServiceExportedInterface-Protocol.h>
#import <PassKitCore/PKPeerPaymentTargetDeviceDelegate-Protocol.h>

@class NSHashTable, PKPeerPaymentAccount, PKPeerPaymentPreferences, PKPeerPaymentWebServiceContext, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentService : NSObject <PKPeerPaymentServiceExportedInterface, PKPeerPaymentTargetDeviceDelegate>
{
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s _accountLock;
    struct os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
    long long _accountChangedNotificationSuspensionCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)_postAccountChangeNotificationIfNecessaryForAccount:(id)arg1 previousAccount:(id)arg2;
- (void)_preferencesChanged:(id)arg1;
- (void)_accountChanged:(id)arg1;
- (void)_sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)didReceiveAppleCashSharingRecipientCapabilities:(id)arg1 forHandle:(id)arg2;
- (void)sendAppleCashCapabilitiesRequestForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerDeviceWithForceReregister:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1;
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2;
- (void)receivedPeerPaymentMessageData:(id)arg1;
- (void)noteAccountDeleted;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeAccountChangedNotifications;
- (void)suspendAccountChangedNotifications;
- (void)setPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountAndAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)preferencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PKPeerPaymentPreferences *preferences;
@property(readonly, nonatomic) PKPeerPaymentAccount *account;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

