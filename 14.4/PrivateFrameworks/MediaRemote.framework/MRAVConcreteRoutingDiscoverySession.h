//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@class AVOutputDeviceDiscoverySession, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    NSArray *_virtualOutputDevices;
    _Bool _scheduledAvailableOutputDevicesReload;
    int _airplayActiveNotificationToken;
    _Bool _isLocalDeviceBeingAirplayedTo;
}

+ (void)setDaemonVirtualDevices:(id)arg1;
+ (id)daemonVirtualDevices;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *virtualOutputDevices; // @synthesize virtualOutputDevices=_virtualOutputDevices;
- (_Bool)_shouldCreateClusterOutputDevices;
- (void)_scheduleAvailableOutputDevicesReload;
- (void)_scheduleReload;
- (id)description;
- (void)_onQueue_reloadAvailableOutputDevices;
- (void)_onQueue_reload;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (id)routingContextUID;
- (void)setTargetAudioSessionID:(unsigned int)arg1;
- (unsigned int)targetAudioSessionID;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (unsigned int)discoveryMode;
@property(retain, nonatomic) NSArray *availableOutputDevices; // @dynamic availableOutputDevices;
@property(retain, nonatomic) NSArray *availableEndpoints; // @dynamic availableEndpoints;
- (_Bool)devicePresenceDetected;
- (unsigned int)endpointFeatures;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

