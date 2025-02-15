//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMerging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessorySettings, HMFUnfairLock, NSArray, NSMutableOrderedSet, NSString, NSUUID, _HMContext;
@protocol NSCopying><NSSecureCoding, OS_dispatch_queue, _HMAccesorySettingDelegate;

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSMutableOrderedSet *_constraints;
    _Bool _reflected;
    id <NSCopying><NSSecureCoding> _value;
    id <_HMAccesorySettingDelegate> _delegate;
    NSUUID *_identifier;
    long long _type;
    unsigned long long _properties;
    NSString *_name;
    HMAccessorySettings *_accessorySettings;
    _HMContext *_context;
}

+ (_Bool)supportsSecureCoding;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (id)logCategory;
+ (id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2;
+ (id)_encodedConstraintsToAdd:(id)arg1;
+ (id)_encodedConstraintsToRemove:(id)arg1;
+ (id)shortDescription;
- (void).cxx_destruct;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(nonatomic) __weak HMAccessorySettings *accessorySettings; // @synthesize accessorySettings=_accessorySettings;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long properties; // @synthesize properties=_properties;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <_HMAccesorySettingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)mergeConstraints:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (id)logIdentifier;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUpdatedValue:(id)arg1;
@property(copy) id <NSCopying><NSSecureCoding> value; // @synthesize value=_value;
- (void)updateConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setReflected:(_Bool)arg1;
@property(readonly, getter=isReflected) _Bool reflected; // @synthesize reflected=_reflected;
- (void)removeConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRemovedConstraint:(id)arg1;
- (void)notifyDelegateOfRemovedConstraint:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAddedConstraint:(id)arg1;
- (void)notifyDelegateOfAddedConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (id)constraintWithType:(long long)arg1;
- (void)setConstraints:(id)arg1;
@property(readonly, copy) NSArray *constraints;
- (void)_registerNotificationHandlers;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)unconfigure;
- (void)_unconfigureContext;
- (id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4;

// Remaining properties
@property(readonly) Class superclass;

@end

