//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMApplicationData, HMFUnfairLock, HMHome, HMMutableArray, NSDate, NSDictionary, NSSet, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMActionSet : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    HMFUnfairLock *_lock;
    _Bool _executionInProgress;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHome *_home;
    HMApplicationData *_applicationData;
    NSDate *_lastExecutionDate;
    NSString *_actionSetType;
    _HMContext *_context;
    HMMutableArray *_currentActions;
    NSUUID *_uuid;
}

+ (id)actionSetFromProtoBuf:(id)arg1 home:(id)arg2;
+ (id)allowedActionClasses;
+ (_Bool)supportsSecureCoding;
+ (id)shortcutsComponentActionSet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(nonatomic) _Bool executionInProgress; // @synthesize executionInProgress=_executionInProgress;
- (id)encodeAsProtoBuf;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy) NSUUID *applicationDataIdentifier;
- (void)_registerNotificationHandlers;
- (void)_handleActionSetExecutedNotification:(id)arg1;
- (void)_handleActionSetStartExecutionNotification:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleActionSetRenamedNotification:(id)arg1;
- (void)_handleActionUpdatedNotification:(id)arg1;
- (void)_handleActionRemovedNotification:(id)arg1;
- (void)_doRemoveActionWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleActionAddedNotification:(id)arg1;
- (void)_doAddAction:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (_Bool)requiresDeviceUnlock;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing;
@property(readonly, copy, nonatomic) NSSet *actions;
- (void)setLastExecutionDate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)dealloc;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (id)init;
- (id)initWithShortcutsDictionaryRepresentation:(id)arg1 home:(id)arg2;
@property(readonly, copy) NSDictionary *shortcutsDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

