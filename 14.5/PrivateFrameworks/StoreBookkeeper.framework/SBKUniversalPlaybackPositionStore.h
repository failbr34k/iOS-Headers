//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSTimer, SBKAsynchronousTask, SBKRequestHandler;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

@interface SBKUniversalPlaybackPositionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isActive;
    _Bool _hasLocalChangesToSync;
    NSMutableArray *_pendingTaskBlocks;
    NSString *_domain;
    NSNumber *_accountIdentifier;
    unsigned long long _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    _Bool _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;
    SBKAsynchronousTask *_currentTask;
    SBKAsynchronousTask *_lookupDomainVersionTask;
    SBKAsynchronousTask *_bagLookupTask;
    SBKRequestHandler *_currentTaskRequestHandler;
    NSDate *_dateToFireNextTimer;
    NSTimer *_timer;
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain) SBKRequestHandler *currentTaskRequestHandler; // @synthesize currentTaskRequestHandler=_currentTaskRequestHandler;
@property(retain) SBKAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain) SBKAsynchronousTask *lookupDomainVersionTask; // @synthesize lookupDomainVersionTask=_lookupDomainVersionTask;
@property(retain) SBKAsynchronousTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly) __weak id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStopTimer;
- (void)_onQueueResumeTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueScheduleTimer;
- (_Bool)_timerIsStopped;
- (void)_timerFired:(id)arg1;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;
- (double)_effectiveAutorefreshRate;
- (void)_updateForStoreAccountsChange;
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (id)_accountForSyncing;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_onQueuePushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onQueueRunTaskWithName:(id)arg1 taskCompletionHandler:(CDUnknownBlockType)arg2 runTaskBlock:(CDUnknownBlockType)arg3;
- (void)_onQueueRunNextPendingTaskBlock;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadBagContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)automaticallySynchronizeOnBecomeActive;
- (_Bool)_automaticallySynchronizeOnBecomeActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;
@property _Bool hasLocalChangesToSync;
@property unsigned long long automaticSynchronizeOptions;
- (void)resignActive;
- (void)becomeActive;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)dealloc;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 accountIdentifier:(id)arg4 isActive:(_Bool)arg5;
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 isActive:(_Bool)arg4;
- (void)deprecated_setDataSource:(id)arg1;

@end

