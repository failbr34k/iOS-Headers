//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContextKit/CKContextServiceUpdateNotifications-Protocol.h>

@class CKContextSemaphore, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_semaphore;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications>
{
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    NSObject<OS_dispatch_semaphore> *_sema_capabilities;
    CKContextSemaphore *_serviceSemaphore;
    unsigned long long _defaultRequestType;
}

+ (_Bool)isLikelyUnsolicitedUserInteraction;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)arg1 andMachTime:(unsigned long long)arg2;
+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;
+ (id)new;
+ (void)_observeApplicationStateNotifications;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long defaultRequestType; // @synthesize defaultRequestType=_defaultRequestType;
- (void)ancestorsForTopics:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)workWithServiceSemaphore:(CDUnknownBlockType)arg1;
- (long long)tryAcquireServiceSemaphore;
@property(readonly, nonatomic) NSSet *capabilities;
- (id)indexVersionId;
- (id)retrieveCapabilites;
- (void)registerConfigurationUpdateHandler:(CDUnknownBlockType)arg1;
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;
- (id)newRequest;
- (void)_updateCachedCapabilites;
- (void)didReceiveCKContextServiceUpdateNotification;
- (void)ensureFullyInitialized;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;
- (id)init;

@end

