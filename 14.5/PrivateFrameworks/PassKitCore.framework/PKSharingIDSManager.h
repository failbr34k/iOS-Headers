//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, PKSharingIDSManagerDataSource;

@interface PKSharingIDSManager : NSObject <IDSServiceDelegate>
{
    NSHashTable *_delegates;
    struct os_unfair_lock_s _delegatesLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_sharingDestinations;
    IDSService *_service;
    id <PKSharingIDSManagerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKSharingIDSManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_sharingDestinationWithHandle:(id)arg1;
- (id)_idsIDForHandle:(id)arg1;
- (id)_sanitizedHandleWithFromID:(id)arg1;
- (void)_registerListeners;
- (void)_sendMessageWithProtobuf:(id)arg1 destination:(id)arg2 handleUserDetails:(id)arg3 currentUserDetails:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_canPerformIDSMessageForSharingGroup:(unsigned long long)arg1 handleUserDetails:(id)arg2 currentUserDetails:(id)arg3 error:(id *)arg4;
- (id)_handlerConfigurationForInvitation:(id)arg1 forHandle:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, nonatomic) NSArray *delegates;
- (void)_deviceSharingCapabilitiesRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_deviceSharingCapabiltiesRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_remoteRegistrationRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_remoteRegistrationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_cloudStoreZoneShareInvitationRequestInvitationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_cloudStoreZoneShareInvitationResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_cloudStoreZoneShareInvitationRequestRemoved:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_cloudStoreZoneShareInvitationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendDeviceSharingCapabilitiesRequestForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRemoteRegistrationRequestResult:(unsigned long long)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRemoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendCloudStoreInvitationRequest:(id)arg1 handleUserDetails:(id)arg2 currentUserDetails:(id)arg3 type:(unsigned short)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestCloudStoreZoneInvitationData:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendCloudStoreZoneInvitationResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 invitationError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithIDSService:(id)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

