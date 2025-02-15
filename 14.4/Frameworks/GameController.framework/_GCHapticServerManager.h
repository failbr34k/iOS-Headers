//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _GCHapticServerManager : NSObject
{
    unsigned long long _nextClientID;
    unsigned long long _tickCount;
    float _tickLengthSeconds;
    _Bool _running;
    _Bool _idle;
    unsigned long long _channelID;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *_logicalHapticDevices;
    NSMutableDictionary *_clientInvalidationHandlers;
    NSMutableDictionary *_hapticPlayers;
    BKSApplicationStateMonitor *_appMonitor;
    _Bool _activeEvents;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_runloopQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *runloopQueue; // @synthesize runloopQueue=_runloopQueue;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(nonatomic) _Bool activeEvents; // @synthesize activeEvents=_activeEvents;
- (id)__onqueue_reserveChannels:(unsigned long long)arg1 forClient:(id)arg2;
- (void)readListCommand:(struct HapticCommand)arg1 client:(id)arg2 renderTime:(double)arg3;
- (void)readParamCurveListCommand:(struct HapticCommand)arg1 client:(id)arg2;
- (void)enterRunloop;
- (void)identifyCompletedClients;
- (void)notifyPlayerNoLongerRetained:(id)arg1;
- (void)processActiveEventsForStartTime:(double)arg1 endTime:(double)arg2;
- (_Bool)playersHaveImpendingCommandsForStartTime:(double)arg1 endTime:(double)arg2;
- (void)processScheduledCommandsForStartTime:(double)arg1 endTime:(double)arg2;
- (_Bool)readClientDataForStartTime:(double)arg1 endTime:(double)arg2;
- (void)scheduleCommand:(const struct HapticCommand *)arg1;
- (void)logicalDeviceWasUnregistered:(id)arg1;
- (void)spawnInputThread;
- (void)hapticClientProxyInitialized:(id)arg1;
- (void)removeHapticClient:(id)arg1;
- (_Bool)acceptNewConnection:(id)arg1 fromHapticsEnabledApp:(id)arg2;
- (id)init;

@end

