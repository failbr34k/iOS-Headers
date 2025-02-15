//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientService-Protocol.h>
#import <SiriVOX/SVXClientServiceDelegate-Protocol.h>

@class NSString, NSXPCConnection, SVXDeviceSetupContext;
@protocol OS_dispatch_queue, SVXClientService, SVXClientServiceServerConnectionDelegate;

__attribute__((visibility("hidden")))
@interface SVXClientServiceServerConnection : NSObject <SVXClientService, SVXClientServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    id <SVXClientService> _localService;
    id <SVXClientServiceServerConnectionDelegate> _connectionDelegate;
    SVXDeviceSetupContext *_deviceSetupContext;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SVXDeviceSetupContext *deviceSetupContext; // @synthesize deviceSetupContext=_deviceSetupContext;
- (void)_cleanUpConnection;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_remoteServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)notifyAudioSessionDidBecomeActive:(_Bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (oneway void)notifyAudioSessionWillBecomeActive:(_Bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (oneway void)notifyDidEndUpdateAudioPowerWithType:(long long)arg1;
- (oneway void)notifyWillBeginUpdateAudioPowerWithType:(long long)arg1 wrapper:(id)arg2;
- (oneway void)notifySessionDidResignActiveWithDeactivationContext:(id)arg1;
- (oneway void)notifySessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (oneway void)notifySessionDidBecomeActiveWithActivationContext:(id)arg1;
- (oneway void)notifySessionWillBecomeActiveWithActivationContext:(id)arg1;
- (oneway void)notifySessionDidStopSoundWithID:(long long)arg1 error:(id)arg2;
- (oneway void)notifySessionDidStartSoundWithID:(long long)arg1;
- (oneway void)notifySessionWillStartSoundWithID:(long long)arg1;
- (oneway void)notifySessionWillPresentFeedbackWithDialogIdentifier:(id)arg1;
- (oneway void)notifyDidChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyWillChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyDidDeactivateWithContext:(id)arg1;
- (oneway void)notifyWillDeactivateWithContext:(id)arg1;
- (oneway void)notifyDidNotActivateWithContext:(id)arg1 error:(id)arg2;
- (oneway void)notifyDidActivateWithContext:(id)arg1;
- (oneway void)notifyWillActivateWithContext:(id)arg1;
- (oneway void)requestPermissionToActivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prepareForDeviceSetupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)setDeviceSetupContext:(id)arg1;
- (oneway void)stopSpeechSynthesisRequest:(id)arg1;
- (oneway void)cancelPendingSpeechSynthesisRequest:(id)arg1;
- (oneway void)enqueueSpeechSynthesisRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)synthesizeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prewarmRequest:(id)arg1;
- (oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)transitToAutomaticEndpointing;
- (oneway void)performManualEndpointing;
- (oneway void)deactivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prewarmWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)preheatWithActivationSource:(long long)arg1;
- (oneway void)fetchSessionActivityStateWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)fetchSessionStateWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)pingWithReply:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithConnection:(id)arg1 connectionDelegate:(id)arg2 localService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

