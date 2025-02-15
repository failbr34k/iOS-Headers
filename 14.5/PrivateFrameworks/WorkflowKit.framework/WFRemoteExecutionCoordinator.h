//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/IDSServiceDelegate-Protocol.h>
#import <WorkflowKit/WFRemoteExecutionSessionDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate>
{
    _Bool _allowRunRequests;
    NSMutableArray *_activeSessions;
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowRunRequests; // @synthesize allowRunRequests=_allowRunRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableArray *activeSessions; // @synthesize activeSessions=_activeSessions;
- (void)mapSelectorsForIncomingProtobuf;
- (id)defaultIDSOptions;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
@property(readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
- (id)pairedDevice;
- (_Bool)hasPairedDevice;
- (_Bool)shouldDropMessageDueToStaleness:(id)arg1;
- (_Bool)messageCameFromPairedDevice:(id)arg1;
- (void)finishSessionWithRequest:(id)arg1;
- (void)sessionDidFinish:(id)arg1;
- (id)sessionsOfClass:(Class)arg1;
- (void)handleUnknownRequestMessage:(id)arg1;
- (id)unknownRequestError;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)unknownRequestMessageWithIdentifier:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)sendFileAtURL:(id)arg1 transferIdentifier:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;
- (void)handleIncomingAceCommand:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAskWhenRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendAskWhenRunRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleStopRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAlertRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendAlertRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRunRequestResponse:(id)arg1;
- (void)handleRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAceCommandResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendAceCommandDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAskWhenRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (_Bool)sendStopRequest:(id)arg1 error:(id *)arg2;
- (void)handleAlertRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendRunRequest:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)sessionFromRequestIdentifier:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)cancelSessions:(id)arg1;
- (void)cancelPendingFileTransfers;
- (void)cancelAllSessions;
- (id)initAndAllowRunRequests:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

