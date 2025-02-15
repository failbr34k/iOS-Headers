//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/SYServiceDelegate-Protocol.h>
#import <VoiceShortcuts/VCCompanionSyncSessionDelegate-Protocol.h>

@class NSSet, NSString, SYService, VCCompanionSyncSession, VCNRDeviceSyncService, WFDebouncer;
@protocol OS_dispatch_queue, VCCompanionSyncServiceDelegate, VCSyncDataEndpoint;

@interface VCCompanionSyncService : NSObject <SYServiceDelegate, VCCompanionSyncSessionDelegate>
{
    id <VCCompanionSyncServiceDelegate> _delegate;
    SYService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    id <VCSyncDataEndpoint> _syncDataEndpoint;
    WFDebouncer *_debouncer;
    NSSet *_currentDataHandlers;
    VCCompanionSyncSession *_currentSession;
    VCNRDeviceSyncService *_currentSyncService;
}

- (void).cxx_destruct;
@property(copy, nonatomic) VCNRDeviceSyncService *currentSyncService; // @synthesize currentSyncService=_currentSyncService;
@property(retain, nonatomic) VCCompanionSyncSession *currentSession; // @synthesize currentSession=_currentSession;
@property(copy, nonatomic) NSSet *currentDataHandlers; // @synthesize currentDataHandlers=_currentDataHandlers;
@property(readonly, nonatomic) WFDebouncer *debouncer; // @synthesize debouncer=_debouncer;
@property(readonly, nonatomic) id <VCSyncDataEndpoint> syncDataEndpoint; // @synthesize syncDataEndpoint=_syncDataEndpoint;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) SYService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <VCCompanionSyncServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)companionSyncSession:(id)arg1 didUpdateProgress:(double)arg2;
- (void)companionSyncSessionDidFinishSendingChanges:(id)arg1;
- (void)companionSyncSession:(id)arg1 didFinishWithError:(id)arg2;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;
- (void)configureReasonForUnderlyingSession:(id)arg1 withSession:(id)arg2;
- (void)updateCurrentSyncServiceIfNecessary;
- (void)updateSyncDataHandlers;
- (void)resetSession;
- (void)requestFullResync;
- (void)requestSyncImmediately;
- (void)resumeServiceIfNecessary;
- (void)requestSync;
- (_Bool)isRunningOnWatch;
- (void)dealloc;
- (id)initWithSyncDataEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

