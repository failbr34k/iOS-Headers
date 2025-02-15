//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/PKPassLibraryDelegate-Protocol.h>
#import <SpringBoard/SBBiometricUnlockBehaviorDelegate-Protocol.h>
#import <SpringBoard/SBUIBiometricResourceObserver-Protocol.h>
#import <SpringBoard/SBUIPasscodeBiometricMatchingAssertionFactory-Protocol.h>
#import <SpringBoard/SBWalletPrearmRecognizerDelegate-Protocol.h>

@class NSHashTable, NSMutableOrderedSet, NSString, PKPassLibrary, SBUIBiometricResource, SBWalletPreArmController, SBWalletPrearmRecognizer, _SBPendingMesaUnlockBehaviorUnlockRequest;
@protocol BSInvalidatable, SBBiometricUnlockBehavior, SBLockScreenBiometricAuthenticationCoordinatorDelegate;

@interface SBLockScreenBiometricAuthenticationCoordinator : NSObject <BSDescriptionProviding, SBUIBiometricResourceObserver, SBBiometricUnlockBehaviorDelegate, SBWalletPrearmRecognizerDelegate, PKPassLibraryDelegate, SBUIPasscodeBiometricMatchingAssertionFactory>
{
    SBUIBiometricResource *_biometricResource;
    id <BSInvalidatable> _fingerDetectEnabledAssertion;
    id <SBLockScreenBiometricAuthenticationCoordinatorDelegate> _delegate;
    id <SBBiometricUnlockBehavior> _autoUnlockBehavior;
    SBWalletPreArmController *_walletPreArmController;
    SBWalletPrearmRecognizer *_walletPrearmRecognizer;
    _Bool _presentingWalletInterface;
    _Bool _didMatchBeforeWalletPrearmRecognizerTimeout;
    PKPassLibrary *_passLibrary;
    unsigned long long _state;
    _Bool _isAuthenticated;
    id <BSInvalidatable> _matchingWantedAssertion;
    unsigned long long _matchingWantedAssertionMode;
    _Bool _bioAuthenticatedWhileMenuButtonDown;
    _SBPendingMesaUnlockBehaviorUnlockRequest *_pendingUnlockRequest;
    NSMutableOrderedSet *_activePasscodeMatchAssertions;
    NSHashTable *_disabledAssertions;
    NSHashTable *_disabledUnlockAssertions;
    NSHashTable *_disabledAutoUnlockAssertions;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_getPassLibrary, setter=_setPassLibrary:) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
@property(readonly, nonatomic, getter=_state) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=_walletPrearmRecognizer) SBWalletPrearmRecognizer *walletPrearmRecognizer; // @synthesize walletPrearmRecognizer=_walletPrearmRecognizer;
@property(retain, nonatomic, getter=_setAutoUnlockBehavior, setter=_setAutoUnlockBehavior:) id <SBBiometricUnlockBehavior> autoUnlockBehavior; // @synthesize autoUnlockBehavior=_autoUnlockBehavior;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_isAuthenticated;
@property(nonatomic) _Bool bioAuthenticatedWhileMenuButtonDown; // @synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown;
@property(nonatomic) __weak id <SBLockScreenBiometricAuthenticationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_walletPreArmDisabledDidChange:(id)arg1;
- (void)_clearFingerDetectAssertion;
- (void)_createFingerDetectAssertion;
- (void)_handlePassKitDismissalIfNecessaryWithReason:(id)arg1;
- (_Bool)_isWalletPreArmAllowed;
- (void)_removePasscodeMatchingAssertion:(id)arg1;
- (void)_addPasscodeMatchingAssertion:(id)arg1;
- (_Bool)_hasActivePasscodeViews;
- (_Bool)_isMatchingEffectivelyDisabled;
- (_Bool)_stateWantsMatching:(unsigned long long)arg1 outMatchMode:(unsigned long long *)arg2;
- (void)_invalidateWalletPreArmRecognizer;
- (void)_clearPendingUnlockRequest;
- (void)_toggleAutoUnlockBehaviorEnabled:(_Bool)arg1;
- (void)_pendUnlockRequest:(id)arg1;
- (void)_setupPreArmRecognizerIfPossibleForReason:(id)arg1;
- (void)_stateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_updateMatchingForState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_setState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)passLibraryReceivedInterruption;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (void)walletPrearmRecognizer:(id)arg1 didFailToRecognizeForReason:(unsigned long long)arg2;
- (void)walletPrearmRecognizerDidRecognize:(id)arg1;
- (void)biometricResource:(id)arg1 matchingAllowedDidChange:(_Bool)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_resetStateForReason:(id)arg1;
- (void)_noteMenuButtonDoublePress;
- (void)_noteMenuButtonSinglePress;
@property(readonly, nonatomic, getter=isAutoUnlockingDisabled) _Bool autoUnlockingDisabled;
- (id)acquireDisableAutoUnlockAssertionForReason:(id)arg1;
@property(readonly, nonatomic, getter=isUnlockingDisabled) _Bool isUnlockingDisabled;
- (id)acquireDisableUnlockAssertionForReason:(id)arg1;
@property(readonly, nonatomic, getter=isWalletPreArmDisabled) _Bool walletPreArmDisabled;
- (id)acquireDisableWalletPreArmAssertionForReason:(id)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (id)acquireDisableCoordinatorAssertionForReason:(id)arg1;
- (id)initWithBiometricResource:(id)arg1 walletPreArmController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

