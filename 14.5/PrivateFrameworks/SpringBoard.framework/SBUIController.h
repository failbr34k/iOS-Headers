//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BCBatteryDeviceObserving-Protocol.h>
#import <SpringBoard/CSAccessoryStatusProviding-Protocol.h>
#import <SpringBoard/CSPowerStatusProviding-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFMotionAlarmDelegate-Protocol.h>
#import <SpringBoard/SBHomeScreenBackdropViewBaseDelegate-Protocol.h>
#import <SpringBoard/SBReachabilityObserver-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>
#import <SpringBoard/SBWallpaperOrientationProvider-Protocol.h>
#import <SpringBoard/UIInteractionProgressObserver-Protocol.h>
#import <SpringBoard/UIWindowDelegate-Protocol.h>

@class ATXAppDirectoryClient, BCBatteryDeviceController, BSPersistentTimer, CSAccessory, NSMutableDictionary, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBDismissOnlyAlertItem, SBFMotionAlarmController, SBHIDUILockAssertion, SBHUDController, SBHomeGestureParticipant, SBHomeScreenBackdropViewBase, SBHomeScreenWindow, SBIconContentView, SBIconController, SBMainScreenActiveInterfaceOrientationWindow, SBVolumeControl, SBWallpaperEffectView, SBWindow, UIForceStageInteractionProgress, UIStatusBar, UIView;

@interface SBUIController : NSObject <SBWallpaperObserver, PTSettingsKeyObserver, UIInteractionProgressObserver, SBWallpaperOrientationProvider, SBReachabilityObserver, SBHomeScreenBackdropViewBaseDelegate, BCBatteryDeviceObserving, SBFMotionAlarmDelegate, UIWindowDelegate, CSPowerStatusProviding, CSAccessoryStatusProviding>
{
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    SBMainScreenActiveInterfaceOrientationWindow *_fakeSpringBoardStatusBarWindow;
    UIStatusBar *_fakeSpringBoardStatusBar;
    SBHomeScreenBackdropViewBase *_homeScreenBackdropView;
    SBWindow *_homeScreenDimmingWindow;
    SBWallpaperEffectView *_reachabilityWallpaperEffectView;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UIForceStageInteractionProgress *_homeButtonForceProgress;
    BCBatteryDeviceController *_batteryDeviceController;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isFullyCharged:1;
    unsigned int _isBatteryCritical:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToExternalChargingAccessory:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    unsigned int _wasConnectedToWirelessChargingAccessory:1;
    unsigned int _isConnectedToWirelessInternalCharger:1;
    unsigned int _isConnectedToWirelessInternalAccessory:1;
    unsigned int _isConnectedToWindowedAccessory:1;
    struct CGRect _visibleScreenCoordinatesForWindowedAccessory;
    SBHIDUILockAssertion *_suspendProximityForAttachedWindowedAccessoryAssertion;
    SBHomeGestureParticipant *_homeGestureParticipant;
    unsigned int _isConnectedToQiPower:1;
    SBHUDController *_HUDController;
    SBVolumeControl *_volumeControl;
    float _batteryCapacity;
    _Bool _supportsDetailedBatteryCapacity;
    _Bool _disableAppSwitchForcePressDueToHomeButtonForce;
    int _powerStateUpdateToken;
    NSMutableDictionary *_powerSourceHasChimed;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    NSMutableSet *_contentRequiringReasons;
    ATXAppDirectoryClient *_appDirectoryClient;
    _Bool _disallowsPointerInteraction;
    SBFMotionAlarmController *_motionAlarmController;
    _Bool _disableChimeForWirelessCharging;
    _Bool _disableScreenWakeForWirelessCharging;
    BSPersistentTimer *_debounceWirelessChargingTimer;
    _Bool _isAccessoryAnimationAllowed;
    CSAccessory *_lastAttachedAccessory;
    CSAccessory *_lastDetachedAccessory;
    NSMutableDictionary *_accessoriesAttachedByUUID;
    _Bool _chargingChimeEnabled;
    SBIconController *_iconController;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (struct CGAffineTransform)_transformAndFrame:(struct CGRect *)arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(struct CGRect)arg4;
+ (struct CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2;
+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2;
+ (id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(struct CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(_Bool)arg7;
+ (struct CGRect)statusBarFrameForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 statusBarStyleRequest:(id)arg4 withinBounds:(struct CGRect)arg5 inReferenceSpace:(_Bool)arg6;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 remainderFrame:(struct CGRect *)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(_Bool)arg5;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool chargingChimeEnabled; // @synthesize chargingChimeEnabled=_chargingChimeEnabled;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
- (void)_setConnectedToWindowedAccessory:(_Bool)arg1;
- (_Bool)_shouldShowAnimationForAccessory:(id)arg1;
- (_Bool)_isAccessoryAttached:(long long)arg1;
- (_Bool)_shouldInitiateAnimationForAccessory:(id)arg1;
- (void)_dismissAccessory:(id)arg1 playChime:(_Bool)arg2;
- (void)windowedAccessoryPresented;
- (void)windowedAccessoryDismissed;
- (void)setIsAccessoryAnimationAllowed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isAccessoryAnimationAllowed;
- (void)setLastDetachedAccessory:(id)arg1;
- (void)setLastAttachedAccessory:(id)arg1;
- (void)removeDetachedAccessory:(id)arg1;
- (void)storeAttachedAccessory:(id)arg1;
@property(readonly, nonatomic) CSAccessory *lastDetachedAccessory;
@property(readonly, nonatomic) CSAccessory *lastAttachedAccessory;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (id)_currentHomeScreenLegibilitySettings;
- (id)_legibilitySettings;
- (void)updateStatusBarLegibility;
- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)homeScreenBackdropView:(id)arg1 opaquenessDidChange:(_Bool)arg2;
- (void)_removeReachabilityEffectViewIfNecessary;
- (void)handleDidEndReachabilityAnimation;
- (void)handleWillBeginReachabilityAnimation;
- (void)_activateApplicationFromAccessibility:(id)arg1;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (unsigned char)headsetBatteryCapacity;
- (_Bool)isHeadsetBatteryCharging;
- (_Bool)isHeadsetDocked;
- (void)disableAnimationForNextIconRotation;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
@property(nonatomic) _Bool homeScreenAutorotatesEvenWhenIconIsDragging;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@property(readonly, copy) NSString *description;
- (void)statusBarOverridesDidChange:(id)arg1;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (_Bool)supportsDetailedBatteryCapacity;
- (_Bool)isConnectedToUnsupportedChargingAccessory;
- (void)setIsConnectedToUnsupportedChargingAccessory:(_Bool)arg1;
- (void)connectedDevicesDidChange:(id)arg1;
- (void)ACPowerChanged;
- (void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
@property(readonly, nonatomic, getter=isConnectedToQiPower) _Bool connectedToQiPower;
- (void)setPointerInteractionsEnabled:(_Bool)arg1;
- (struct CGRect)visibleScreenCoordinatesForWindowedAccessory;
- (_Bool)isConnectedToWindowedAccessory;
- (_Bool)isConnectedToWirelessInternalAccessory;
@property(readonly, nonatomic, getter=isConnectedToWirelessInternalCharger) _Bool connectedToWirelessInternalCharger;
- (_Bool)isConnectedToChargeIncapablePowerSource;
@property(readonly, nonatomic, getter=isConnectedToExternalChargingSource) _Bool connectedToExternalChargingSource;
@property(readonly, nonatomic, getter=isOnAC) _Bool onAC;
- (_Bool)isFullyCharged;
- (_Bool)isBatteryCharging;
- (int)batteryCapacityAsPercentage;
- (float)batteryCapacity;
- (void)_playAccessoryChimeIfAppropriateForAccessory:(id)arg1 attaching:(_Bool)arg2 withDelay:(double)arg3;
- (void)_cancelDebounceWirelessChargingTimer;
- (void)_resetWirelessChargingState;
- (void)_debounceWirelessChargingTimerFired;
- (void)_setDebounceWirelessChargingTimerWithDuration:(double)arg1;
- (_Bool)_isConnectedToWirelessCharging;
- (void)didDetectDeviceMotion;
- (void)playChargingChimeIfAppropriate;
- (void)suppressChimeForConnectedPowerSources;
- (_Bool)_powerSourceWantsToPlayChime;
- (void)_enumeratePowerSourcesWithBlock:(CDUnknownBlockType)arg1;
- (void)_disableWirelessChargingChimeAndScreenWakeForDuration:(double)arg1;
- (void)updateBatteryState:(id)arg1;
- (void)cancelVolumeEvent;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(_Bool)arg2;
- (_Bool)handleHomeButtonDoublePressDown;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_reduceMotionStatusDidChange:(id)arg1;
- (_Bool)handleHomeButtonSinglePressUpWithSourceType:(unsigned long long)arg1;
- (_Bool)handleHomeButtonSinglePressUp;
- (_Bool)disableAppSwitchForcePressDueToHomeButtonForce;
- (_Bool)dissmissAlertItemsAndSheetsIfPossible;
- (_Bool)hasVisibleAlertItemOrSheet:(out _Bool *)arg1;
- (void)_switchToHomeScreenWallpaperAnimated:(_Bool)arg1;
- (void)cancelInProcessAnimations;
- (_Bool)isBackdropVisible;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringContentForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1 options:(unsigned long long)arg2;
- (void)beginRequiringContentForReason:(id)arg1;
- (_Bool)isIconListViewTornDown;
- (void)tearDownIconListAndBar;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1;
- (void)restoreContentWithOptions:(unsigned long long)arg1;
- (void)restoreContent;
- (void)_closeOpenFolderIfNecessary;
- (void)_hideKeyboard;
- (void)_deviceUILocked;
- (void)_activateWorkspaceEntity:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 validator:(CDUnknownBlockType)arg4;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (id)workflowClientFromWebClip:(id)arg1 appToLaunch:(id)arg2;
- (long long)transitionSourceForIcon:(id)arg1 iconLocation:(id)arg2;
- (void)getRotationContentSettings:(CDStruct_e950349b *)arg1 forWindow:(id)arg2;
- (void)_setupHomeScreenContentBackdropView;
- (void)_setupHomeScreenDimmingWindow;
- (void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenDimmingAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)scalingView;
- (id)contentView;
- (id)window;
- (void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2;
- (void)setFakeSpringBoardStatusBarVisible:(_Bool)arg1;
- (id)_fakeSpringBoardStatusBar;
- (id)fakeStatusBarStyleRequestForStyle:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (_Bool)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (void)_willRevealOrHideContentView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

