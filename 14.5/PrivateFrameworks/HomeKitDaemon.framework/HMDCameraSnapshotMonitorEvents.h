//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCharacteristicsAvailabilityListenerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraSnapshotManager, HMDCharacteristicsAvailabilityListener, HMDHAPAccessory, HMDNotificationRegistration, HMFMessageDispatcher, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMDCameraBulletinBoard, OS_dispatch_queue;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMFTimerDelegate, HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate, HMDHomeMessageReceiver>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDCameraSnapshotManager *_snapshotManager;
    NSMutableSet *_snapShotNotificationResponseTimers;
    HMDHAPAccessory *_accessory;
    NSString *_bulletinImagesDirectory;
    id <HMDCameraBulletinBoard> _bulletinBoard;
    HMDNotificationRegistration *_notificationRegistration;
    NSString *_logIdentifier;
    NSUUID *_uniqueIdentifier;
    NSSet *_bulletinSnapshotCharacteristics;
    NSSet *_proactiveSnapshotCharacterisitics;
    HMDCharacteristicsAvailabilityListener *_characteristicsAvailabilityListener;
    NSString *_clientIdentifier;
}

+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener; // @synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener;
@property(copy) NSSet *proactiveSnapshotCharacterisitics; // @synthesize proactiveSnapshotCharacterisitics=_proactiveSnapshotCharacterisitics;
@property(copy) NSSet *bulletinSnapshotCharacteristics; // @synthesize bulletinSnapshotCharacteristics=_bulletinSnapshotCharacteristics;
@property(readonly) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleRemoteNotificationGenerated:(id)arg1;
- (void)handleCameraSettingsDidUpdateNotification:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)handleCharacteristicsChangedNotification:(id)arg1;
- (void)handleBulletinNotificationEnableStateDidChange:(id)arg1;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (void)dealloc;
- (void)registerForMessages;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

