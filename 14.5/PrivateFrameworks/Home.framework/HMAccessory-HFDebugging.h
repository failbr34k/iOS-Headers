//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeContainedObject-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFRoomContextProviding-Protocol.h>
#import <Home/HFServiceNameComponentsProviding-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFSymptomFixableObject-Protocol.h>
#import <Home/HFUIRepresentableHomeObject-Protocol.h>

@class HFServiceNameComponents, HMHome, HMResidentDevice, HMRoom, HMSymptomsHandler, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol HFUIRepresentableHomeObject;

@interface HMAccessory (HFDebugging) <HFStateDumpBuildable, HFFavoritable, HFUIRepresentableHomeObject, HFSymptomFixableObject, HFHomeContainedObject, HFRoomContextProviding, HFReorderableHomeKitObject, HFServiceNameComponentsProviding>
+ (id)hf_userFriendlyLocalizedLowercaseDescription:(id)arg1;
+ (id)hf_userFriendlyLocalizedCapitalizedDescription:(id)arg1;
+ (id)hf_getUserFriendlyDescriptionKey:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
- (_Bool)hf_areAllSensorServices;
- (_Bool)hf_anyNonSensorServiceIsFavorite;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
- (void)_pushSymptomUpdate;
@property(readonly, nonatomic) _Bool hf_fakeNetworkNotShareableSymptom;
@property(readonly, nonatomic) _Bool hf_fakeNetworkProfileInstallSymptom;
@property(readonly, nonatomic) _Bool hf_fakeNetworkProfileFixSymptom;
@property(readonly, nonatomic) _Bool hf_fake8021xNetworkSymptom;
@property(readonly, nonatomic) _Bool hf_fakeVPNProfileExpired;
@property(nonatomic, setter=hf_setFakeWiFiMismatchSymptom:) _Bool hf_fakeWiFiMismatchSymptom;
@property(readonly, nonatomic) _Bool hf_fakeShouldDisplayManualFixOption;
@property(readonly, nonatomic) _Bool hf_fakeITunesSymptom;
@property(readonly, nonatomic) _Bool hf_fakeICloudSymptom;
@property(readonly, nonatomic) _Bool hf_fakeHomeKitSymptom;
@property(readonly, nonatomic) _Bool hf_fakeGeneralFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeHardwareFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeInternetFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeWiFiPerformanceSymptom;
@property(readonly, nonatomic) _Bool hf_fakeWiFiSymptom;
@property(readonly, nonatomic) _Bool hf_fakeUnreachableError;
- (_Bool)hf_shouldDisplayManualFixOptionForSymptom:(long long)arg1;
- (_Bool)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_identifyHomePod;
@property(readonly, nonatomic) _Bool hf_needsSoftwareUpdateToSupportBeingAddedToMediaSystem;
@property(readonly, nonatomic) unsigned long long hf_mediaAccessControlCapabilities;
- (_Bool)hf_supportsMultiUserLanguage:(id)arg1;
@property(readonly, nonatomic) _Bool hf_isAudioReceiver;
@property(readonly, nonatomic) _Bool hf_isSpeaker;
@property(readonly, nonatomic) _Bool hf_isDumbSpeaker;
@property(readonly, nonatomic) _Bool hf_isAirPortExpressSpeaker;
@property(readonly, nonatomic) _Bool hf_isAppleTV;
@property(readonly, nonatomic) _Bool hf_isHomePod;
@property(readonly, nonatomic) _Bool hf_isMediaAccessory;
@property(readonly, nonatomic) id <HFUIRepresentableHomeObject> hf_topLevelUIRepresentableHomeObject;
@property(readonly, nonatomic) NSSet *hf_accessories;
@property(readonly, nonatomic) NSSet *hf_profiles;
@property(readonly, nonatomic) NSSet *hf_services;
- (_Bool)hf_shouldHideNearbyAccessoryService:(id)arg1;
@property(readonly, nonatomic) NSString *hf_userFriendlyLocalizedLowercaseDescription;
@property(readonly, nonatomic) NSString *hf_userFriendlyLocalizedCapitalizedDescription;
- (id)hf_categoryType;
@property(readonly, nonatomic) NSString *hf_categoryOrPrimaryServiceType;
@property(readonly, nonatomic) _Bool hf_isDirectlyReachable;
@property(readonly, nonatomic) _Bool hf_needsReprovisioningCheck;
@property(readonly, nonatomic) _Bool hf_hasManagedNetworkCredential;
@property(readonly, nonatomic) NSArray *hf_networkConfigurationProfiles;
@property(readonly, nonatomic) NSArray *hf_networkRouterProfiles;
@property(readonly, nonatomic) HMAccessory *hf_owningBridgeAccessory;
@property(readonly, nonatomic) NSArray *hf_bridgedAccessories;
@property(readonly, nonatomic) NSSet *hf_servicesBehindBridge;
@property(readonly, nonatomic) NSSet *hf_programmableSwitchNamespaceServices;
@property(readonly, nonatomic) NSSet *hf_programmableSwitchServices;
- (id)hf_serviceOfType:(id)arg1;
@property(readonly, nonatomic) unsigned long long hf_numberOfProgrammableSwitches;
@property(readonly, nonatomic) long long hf_appPunchOutReason;
@property(readonly, copy, nonatomic) NSSet *hf_displayNamesForVisibleTiles;
@property(readonly, copy, nonatomic) NSSet *hf_componentServices;
@property(readonly, nonatomic) _Bool hf_hasInputSourceService;
- (id)hf_primaryService;
@property(readonly, nonatomic) NSArray *hf_irrigationSystemServices;
@property(readonly, nonatomic) NSSet *hf_groupableServices;
@property(readonly, copy, nonatomic) NSSet *hf_visibleServices;
@property(readonly, copy, nonatomic) NSSet *hf_standardServices;
@property(readonly, nonatomic) HMResidentDevice *hf_linkedResidentDevice;
- (id)hf_setShowAsIndividualServices:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_showAsIndividualServices;
@property(readonly, nonatomic) _Bool hf_showAsAccessoryTile;
@property(readonly, nonatomic) _Bool hf_shouldSeparateAccessoryName;
@property(readonly, nonatomic) _Bool hf_isMultiSensorAccessory;
@property(readonly, nonatomic) _Bool hf_isSingleSensorAccessory;
@property(readonly, nonatomic) _Bool hf_showsAsAccessoryInControlCentre;
@property(readonly, nonatomic) _Bool hf_isSensorAccessory;
@property(readonly, nonatomic) _Bool hf_isNonServiceBasedAccessory;
@property(readonly, nonatomic) _Bool hf_isVisibleAccessory;
@property(readonly, nonatomic) _Bool hf_canShowAsIndividualServices;
@property(readonly, nonatomic) _Bool hf_isMultiServiceAccessory;
@property(readonly, nonatomic) _Bool hf_isSingleServiceLikeAccessory;
@property(readonly, nonatomic) _Bool hf_isSingleServiceAccessory;
@property(readonly, nonatomic) _Bool hf_areAllServicesInGroups;
@property(readonly, nonatomic) _Bool hf_isTelevision;
@property(readonly, nonatomic) _Bool hf_isSprinkler;
@property(readonly, nonatomic) _Bool hf_isRemoteControl;
@property(readonly, nonatomic) _Bool hf_isProgrammableSwitch;
@property(readonly, nonatomic) _Bool hf_isPowerStrip;
@property(readonly, nonatomic) _Bool hf_isNotificationSupportedCamera;
@property(readonly, nonatomic) _Bool hf_isNetworkRouterSatellite;
@property(readonly, nonatomic) _Bool hf_isNetworkRouter;
@property(readonly, nonatomic) _Bool hf_isCamera;
@property(readonly, nonatomic) _Bool hf_isCeilingFanWithLight;
@property(readonly, nonatomic) _Bool hf_isVisibleAsBridgedAccessory;
@property(readonly, nonatomic) _Bool hf_isVisibleAsBridge;
@property(readonly, nonatomic) _Bool hf_isPureBridge;
@property(readonly, nonatomic) _Bool hf_isCategorizedAsBridge;
@property(readonly, nonatomic) _Bool hf_isBridge;
@property(readonly, nonatomic) _Bool hf_isIdentifiable;
@property(readonly, nonatomic) _Bool hf_requiresFirmwareUpdate;
@property(readonly, nonatomic) NSSet *accessories;
- (_Bool)hf_isValidObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HMHome *home;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

