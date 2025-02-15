//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMXPCMessageTransport-Protocol.h>

@class HMDProcessInfo, HMDXPCMessageCountTracker, HMDXPCMessageSendPolicyParameters, HMDXPCRequestTracker, NSDictionary, NSObject, NSSet, NSString, NSXPCConnection;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDXPCClientConnection : HMFMessageTransport <HMXPCMessageTransport, HMFLogging>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDXPCMessageCountTracker *_counterTracker;
    NSString *_signature;
    _Bool _activated;
    _Bool _entitledForAPIAccess;
    _Bool _entitledForBackgroundMode;
    _Bool _entitledForCameraClipsAccess;
    _Bool _entitledForMultiUserSetupAccess;
    _Bool _entitledForPersonManagerAccess;
    HMDXPCMessageSendPolicyParameters *_sendPolicyParameters;
    NSDictionary *_userInfo;
    HMDProcessInfo *_processInfo;
    NSXPCConnection *_xpcConnection;
    unsigned long long _entitlements;
    NSString *_clientName;
    HMDXPCRequestTracker *_requestTracker;
    NSDictionary *_privateAccessEntitlement;
}

+ (id)logCategory;
+ (unsigned long long)entitlementsForConnection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *privateAccessEntitlement; // @synthesize privateAccessEntitlement=_privateAccessEntitlement;
@property(readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitledForPersonManagerAccess) _Bool entitledForPersonManagerAccess; // @synthesize entitledForPersonManagerAccess=_entitledForPersonManagerAccess;
@property(readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) _Bool entitledForMultiUserSetupAccess; // @synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess;
@property(readonly, nonatomic, getter=isEntitledForCameraClipsAccess) _Bool entitledForCameraClipsAccess; // @synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)logIdentifier;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateUserInfo:(id)arg1;
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1;
- (void)initiateRefresh;
- (void)deactivate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canSendMessage:(id)arg1;
- (_Bool)shouldSendResponseForMessageIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *activeRequests;
- (void)updateSendPolicyParameters:(id)arg1;
@property(readonly, nonatomic) id remoteProxy;
@property(readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(retain, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters; // @synthesize sendPolicyParameters=_sendPolicyParameters;
- (void)__handleApplicationStateChange:(id)arg1;
@property(retain) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, getter=isPlatformBinary) _Bool platformBinary;
@property(readonly, nonatomic) int clientPid;
@property(readonly, nonatomic) NSString *name;
- (id)_displayName;
@property(readonly, nonatomic, getter=isEntitledForStateDump) _Bool entitledForStateDump;
@property(readonly, nonatomic, getter=isEntitledForSecureAccess) _Bool entitledForSecureAccess;
@property(readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) _Bool entitledForShortcutsAutomationAccess;
@property(readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) _Bool entitledToProvideAccessorySetupPayload;
@property(readonly, nonatomic, getter=isEntitledForHomeLocationAccess) _Bool entitledForHomeLocationAccess;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
- (id)counterIdentifierForMessage:(id)arg1;
- (unsigned long long)homeManagerOptions;
@property(readonly) Class principalClass;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)attributeDescriptions;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 counterTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

