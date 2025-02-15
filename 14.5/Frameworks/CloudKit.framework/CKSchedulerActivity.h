//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>

@class CKContainer, CKContainerID, NSDate, NSDictionary, NSString;
@protocol OS_xpc_object;

@interface CKSchedulerActivity : NSObject <NSCopying>
{
    _Bool _shouldDefer;
    _Bool _userRequestedBackupTask;
    NSObject<OS_xpc_object> *_xpcActivityCriteriaOverrides;
    NSString *_identifier;
    long long _priority;
    unsigned long long _expectedTransferSizeBytes;
    NSDate *_earliestStartDate;
    CKContainer *_container;
    CKContainerID *_containerID;
    NSObject<OS_xpc_object> *_xpcActivity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // @synthesize xpcActivity=_xpcActivity;
@property(nonatomic) _Bool userRequestedBackupTask; // @synthesize userRequestedBackupTask=_userRequestedBackupTask;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(copy, nonatomic) NSDate *earliestStartDate; // @synthesize earliestStartDate=_earliestStartDate;
@property(nonatomic) unsigned long long expectedTransferSizeBytes; // @synthesize expectedTransferSizeBytes=_expectedTransferSizeBytes;
@property(nonatomic) _Bool shouldDefer; // @synthesize shouldDefer=_shouldDefer;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // @synthesize xpcActivityCriteriaOverrides=_xpcActivityCriteriaOverrides;
@property(copy, nonatomic) NSDictionary *undeprecatedAdditionalXPCActivityCriteria;
@property(copy, nonatomic) NSDictionary *additionalXPCActivityCriteria;
@property(readonly, nonatomic) CKContainer *nullableContainer;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 priority:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 containerID:(id)arg2 priority:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 containerID:(id)arg3 priority:(long long)arg4;

@end

