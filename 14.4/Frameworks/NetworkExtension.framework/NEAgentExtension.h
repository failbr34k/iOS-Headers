//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEAgentSessionDelegate-Protocol.h>
#import <NetworkExtension/NEExtensionProviderHostDelegate-Protocol.h>
#import <NetworkExtension/NEPluginDriver-Protocol.h>

@class NEExtensionProviderHostContext, NSArray, NSExtension, NSString, NSUUID, NSXPCInterface;
@protocol NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;

@interface NEAgentExtension : NSObject <NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver>
{
    _Bool _appsUpdateStarted;
    _Bool _appsUpdateEnding;
    id <NEPluginManagerObjectFactory> _managerObjectFactory;
    NEExtensionProviderHostContext *_sessionContext;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_pluginType;
    NSString *_extensionIdentifier;
    NSXPCInterface *_managerProtocol;
    NSXPCInterface *_driverProtocol;
    NSObject<OS_dispatch_source> *_sendFailedTimer;
    NSUUID *_sessionRequestIdentifier;
    NSString *_extensionPointIdentifier;
    NSExtension *_extension;
    NSArray *_extensionUUIDs;
    CDUnknownBlockType _pendingDisposeCompletion;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType pendingDisposeCompletion; // @synthesize pendingDisposeCompletion=_pendingDisposeCompletion;
@property(readonly, nonatomic) NSArray *extensionUUIDs; // @synthesize extensionUUIDs=_extensionUUIDs;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(retain, nonatomic) NSUUID *sessionRequestIdentifier; // @synthesize sessionRequestIdentifier=_sessionRequestIdentifier;
@property(retain) NSObject<OS_dispatch_source> *sendFailedTimer; // @synthesize sendFailedTimer=_sendFailedTimer;
@property _Bool appsUpdateEnding; // @synthesize appsUpdateEnding=_appsUpdateEnding;
@property _Bool appsUpdateStarted; // @synthesize appsUpdateStarted=_appsUpdateStarted;
@property(readonly) NSXPCInterface *driverProtocol; // @synthesize driverProtocol=_driverProtocol;
@property(readonly) NSXPCInterface *managerProtocol; // @synthesize managerProtocol=_managerProtocol;
@property(readonly, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(readonly, nonatomic) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NEExtensionProviderHostContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property(readonly) __weak id <NEPluginManagerObjectFactory> managerObjectFactory; // @synthesize managerObjectFactory=_managerObjectFactory;
- (void)sendExtensionFailed;
- (void)handleExtensionStartedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanupExtensionWithRequestIdentifier:(id)arg1;
- (void)extensionDidStop:(id)arg1;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)wakeup;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateConfiguration:(id)arg1;
- (void)startWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSXPCInterface *driverInterface;
@property(readonly, nonatomic) NSXPCInterface *managerInterface;
@property(readonly, nonatomic) NSArray *uuids;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleExtensionExit:(id)arg1;
- (void)dealloc;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

