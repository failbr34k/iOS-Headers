//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDSoftwareUpdateModel, HMFMessageDispatcher, HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSArray, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _allowExtraUpdate;
    long long _state;
    HMSoftwareUpdateDocumentationMetadata *_documentationMetadata;
    NSUUID *_identifier;
    HMFSoftwareVersion *_version;
    unsigned long long _downloadSize;
    double _installDuration;
    HMFMessageDispatcher *_messageDispatcher;
    HMDAccessory *_accessory;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)modelNamespace;
- (void).cxx_destruct;
@property __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property _Bool allowExtraUpdate; // @synthesize allowExtraUpdate=_allowExtraUpdate;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) double installDuration; // @synthesize installDuration=_installDuration;
@property(readonly) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, copy) HMFSoftwareVersion *version; // @synthesize version=_version;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1 forAccessoryUUID:(id)arg2;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
@property(readonly, copy) HMDSoftwareUpdateModel *model;
- (void)_handleDocumentationStateNotification:(id)arg1;
- (void)_handleDocumentationRequest:(id)arg1;
- (void)_handleUpdateDocumentationMetadata:(id)arg1;
- (void)setDocumentationMetadata:(id)arg1;
@property(readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @synthesize documentationMetadata=_documentationMetadata;
- (void)_handleUpdateState:(id)arg1;
- (void)_updateState:(long long)arg1 message:(id)arg2 options:(id)arg3;
- (void)updateLocalState:(long long)arg1;
- (void)setState:(long long)arg1;
@property(readonly) long long state; // @synthesize state=_state;
- (void)registerForMessages;
- (void)invalidate;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
@property(readonly, copy) NSString *propertyDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 installDuration:(double)arg4 documentationMetadata:(id)arg5 releaseDate:(id)arg6;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

