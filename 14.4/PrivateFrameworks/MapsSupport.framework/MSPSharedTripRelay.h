//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/IDSServiceDelegate-Protocol.h>

@class IDSService, MSPSharedTripGroupSession, MSPSharedTripSharingIdentity, MSPSharedTripStorageController, NSArray, NSMutableDictionary, NSString;
@protocol MSPSharedTripAvailabiltyDelegate, MSPSharedTripRelayDelegate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripRelay : NSObject <IDSServiceDelegate>
{
    IDSService *_sharingService;
    NSString *_clientID;
    NSString *_displayName;
    MSPSharedTripGroupSession *_sharingETAGroupSession;
    NSMutableDictionary *_sharedTripGroupIDSSessions;
    NSMutableDictionary *_packetBuckets;
    MSPSharedTripStorageController *_storageController;
    id <MSPSharedTripRelayDelegate> _delegate;
    id <MSPSharedTripAvailabiltyDelegate> _availabilityDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MSPSharedTripAvailabiltyDelegate> availabilityDelegate; // @synthesize availabilityDelegate=_availabilityDelegate;
@property(nonatomic) __weak id <MSPSharedTripRelayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSPSharedTripStorageController *storageController; // @synthesize storageController=_storageController;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_removeFinishedSession:(id)arg1;
- (void)_handleIncomingMessage:(id)arg1 info:(id)arg2 fromID:(id)arg3 receivingHandle:(id)arg4 receivingAccountIdentifier:(id)arg5;
- (void)_handleCommand:(id)arg1 fromID:(id)arg2;
- (void)_handleChunk:(id)arg1 fromID:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
- (id)groupSessionForIdentifier:(id)arg1;
- (void)stopSharing;
- (id)removeSharingWith:(id)arg1;
- (id)startSharingGroupSessionWithTripIdentifer:(id)arg1;
- (void)_startService;
@property(readonly, nonatomic) NSArray *accountAliases;
@property(readonly, nonatomic) _Bool hasValidIDSAccount;
@property(readonly, nonatomic) NSString *sharingHandle;
@property(readonly, nonatomic) NSString *sharingName;
@property(readonly, nonatomic) MSPSharedTripSharingIdentity *sharingIdentity;
- (void)_fetchDisplayName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

