//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CDPDevice, CDPRemoteSecretEntryViewController, NSError;

@protocol CDPRemoteSecretEntryDelegate
- (_Bool)performingAccountRecovery;
- (void)dismissRecoveryFlow:(CDPRemoteSecretEntryViewController *)arg1 completion:(void (^)(void))arg2;
- (void)finishValidation:(CDPRemoteSecretEntryViewController *)arg1 withError:(NSError *)arg2;
- (void)performAccountReset:(CDPRemoteSecretEntryViewController *)arg1;
- (void)performRemoteApproval:(CDPRemoteSecretEntryViewController *)arg1;
- (void)performRecoveryKeyRecovery:(CDPRemoteSecretEntryViewController *)arg1;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 depletedRemainingAttemptsForDevice:(CDPDevice *)arg2;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)cancelledRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 didAcceptValidRemoteSecretForDevice:(CDPDevice *)arg2;
@end

