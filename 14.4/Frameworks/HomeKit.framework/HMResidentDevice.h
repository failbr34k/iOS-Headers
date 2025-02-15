//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDevice, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID, _HMContext;
@protocol HMResidentDeviceDelegate;

@interface HMResidentDevice : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    _Bool _enabled;
    NSUUID *_uniqueIdentifier;
    unsigned long long _status;
    HMHome *_home;
    NSUUID *_accountIdentifier;
    unsigned long long _capabilities;
    id <HMResidentDeviceDelegate> _delegate;
    HMDevice *_device;
    _HMContext *_context;
    NSUUID *_uuid;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly) HMDevice *device; // @synthesize device=_device;
@property __weak id <HMResidentDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatedEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property __weak HMHome *home; // @synthesize home=_home;
@property unsigned long long status; // @synthesize status=_status;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, getter=isCurrentDevice) _Bool currentDevice;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)dealloc;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

