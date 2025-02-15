//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSData, NSString;
@protocol OS_dispatch_queue;

@interface CUSystemMonitor : NSObject
{
    _Bool _activateCalled;
    _Bool _activateCompleted;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateCalled2;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _bluetoothAddressChangedHandler;
    CDUnknownBlockType _callChangedHandler;
    CDUnknownBlockType _clamshellModeChangedHandler;
    CDUnknownBlockType _consoleUserChangedHandler;
    CDUnknownBlockType _familyUpdatedHandler;
    NSBundle *_locationVisitsBundle;
    CDUnknownBlockType _locationVisitsChangedHandler;
    CDUnknownBlockType _manateeChangedHandler;
    CDUnknownBlockType _meDeviceChangedHandler;
    CDUnknownBlockType _netFlagsChangedHandler;
    CDUnknownBlockType _netInterfacesChangedHandler;
    CDUnknownBlockType _primaryIPChangedHandler;
    CDUnknownBlockType _primaryNetworkChangedHandler;
    CDUnknownBlockType _powerUnlimitedChangedHandler;
    CDUnknownBlockType _primaryAppleIDChangedHandler;
    CDUnknownBlockType _regionChangedHandler;
    CDUnknownBlockType _rotatingIdentifierChangedHandler;
    CDUnknownBlockType _screenLockedChangedHandler;
    CDUnknownBlockType _screenOnChangedHandler;
    CDUnknownBlockType _screenSaverChangedHandler;
    CDUnknownBlockType _systemLockStateChangedHandler;
    CDUnknownBlockType _systemNameChangedHandler;
    CDUnknownBlockType _firstUnlockHandler;
    CDUnknownBlockType _wifiStateChangedHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType wifiStateChangedHandler; // @synthesize wifiStateChangedHandler=_wifiStateChangedHandler;
@property(copy) CDUnknownBlockType firstUnlockHandler; // @synthesize firstUnlockHandler=_firstUnlockHandler;
@property(copy) CDUnknownBlockType systemNameChangedHandler; // @synthesize systemNameChangedHandler=_systemNameChangedHandler;
@property(copy) CDUnknownBlockType systemLockStateChangedHandler; // @synthesize systemLockStateChangedHandler=_systemLockStateChangedHandler;
@property(copy) CDUnknownBlockType screenSaverChangedHandler; // @synthesize screenSaverChangedHandler=_screenSaverChangedHandler;
@property(copy) CDUnknownBlockType screenOnChangedHandler; // @synthesize screenOnChangedHandler=_screenOnChangedHandler;
@property(copy) CDUnknownBlockType screenLockedChangedHandler; // @synthesize screenLockedChangedHandler=_screenLockedChangedHandler;
@property(copy) CDUnknownBlockType rotatingIdentifierChangedHandler; // @synthesize rotatingIdentifierChangedHandler=_rotatingIdentifierChangedHandler;
@property(copy) CDUnknownBlockType regionChangedHandler; // @synthesize regionChangedHandler=_regionChangedHandler;
@property(copy) CDUnknownBlockType primaryAppleIDChangedHandler; // @synthesize primaryAppleIDChangedHandler=_primaryAppleIDChangedHandler;
@property(copy) CDUnknownBlockType powerUnlimitedChangedHandler; // @synthesize powerUnlimitedChangedHandler=_powerUnlimitedChangedHandler;
@property(copy) CDUnknownBlockType primaryNetworkChangedHandler; // @synthesize primaryNetworkChangedHandler=_primaryNetworkChangedHandler;
@property(copy) CDUnknownBlockType primaryIPChangedHandler; // @synthesize primaryIPChangedHandler=_primaryIPChangedHandler;
@property(copy) CDUnknownBlockType netInterfacesChangedHandler; // @synthesize netInterfacesChangedHandler=_netInterfacesChangedHandler;
@property(copy) CDUnknownBlockType netFlagsChangedHandler; // @synthesize netFlagsChangedHandler=_netFlagsChangedHandler;
@property(copy) CDUnknownBlockType meDeviceChangedHandler; // @synthesize meDeviceChangedHandler=_meDeviceChangedHandler;
@property(copy) CDUnknownBlockType manateeChangedHandler; // @synthesize manateeChangedHandler=_manateeChangedHandler;
@property(copy) CDUnknownBlockType locationVisitsChangedHandler; // @synthesize locationVisitsChangedHandler=_locationVisitsChangedHandler;
@property(retain) NSBundle *locationVisitsBundle; // @synthesize locationVisitsBundle=_locationVisitsBundle;
@property(copy) CDUnknownBlockType familyUpdatedHandler; // @synthesize familyUpdatedHandler=_familyUpdatedHandler;
@property(copy) CDUnknownBlockType consoleUserChangedHandler; // @synthesize consoleUserChangedHandler=_consoleUserChangedHandler;
@property(copy) CDUnknownBlockType clamshellModeChangedHandler; // @synthesize clamshellModeChangedHandler=_clamshellModeChangedHandler;
@property(copy) CDUnknownBlockType callChangedHandler; // @synthesize callChangedHandler=_callChangedHandler;
@property(copy) CDUnknownBlockType bluetoothAddressChangedHandler; // @synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) int wifiState;
@property(readonly, nonatomic) unsigned int wifiFlags;
@property(readonly, nonatomic) _Bool firstUnlockedSync;
@property(readonly, nonatomic) _Bool firstUnlocked;
@property(readonly, copy) NSString *systemName;
@property(readonly, nonatomic) int systemLockStateSync;
@property(readonly, nonatomic) int systemLockState;
@property(readonly) _Bool screenSaverActive;
@property(readonly) _Bool screenOn;
@property(readonly) _Bool screenLockedSync;
@property(readonly) _Bool screenLocked;
@property(readonly, copy) NSData *rotatingIdentifierData;
@property(readonly) CDStruct_83abfce7 rotatingIdentifier48;
@property(readonly, copy) NSString *regionRoutineState;
@property(readonly, copy) NSString *regionRoutineCountry;
@property(readonly, copy) NSString *regionMobileCountryCode;
@property(readonly, copy) NSString *regionISOCountryCode;
@property(readonly, copy) NSString *primaryNetworkSignature;
@property(readonly, nonatomic) CDUnion_fab80606 primaryIPv6Addr;
@property(readonly, nonatomic) CDUnion_fab80606 primaryIPv4Addr;
@property(readonly) _Bool primaryAppleIDIsHSA2;
@property(readonly, copy) NSString *primaryAppleID;
@property(readonly) _Bool powerUnlimited;
@property(readonly) unsigned int netFlags;
@property(readonly) _Bool meDeviceValid;
@property(readonly) _Bool meDeviceIsMe;
@property(readonly, copy) NSString *meDeviceName;
@property(readonly, copy) NSString *meDeviceIDSDeviceID;
@property(readonly, copy) NSString *meDeviceFMFDeviceID;
@property(readonly) _Bool manateeAvailable;
@property(readonly) unsigned int locationVisitsFlags;
@property(readonly, copy) NSArray *familyMembers;
@property(readonly, copy) NSString *consoleUserName;
@property(readonly) unsigned int consoleUserID;
@property(readonly) int connectedCallCount;
@property(readonly) _Bool clamshellMode;
@property(readonly) unsigned int callFlags;
@property(readonly, copy) NSData *bluetoothAddressData;
@property(readonly) CDStruct_83abfce7 bluetoothAddress48;
@property(readonly) int activeCallCount;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

