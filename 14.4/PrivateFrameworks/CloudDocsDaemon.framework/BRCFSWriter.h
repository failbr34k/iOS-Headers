//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, NSString, brc_task_tracker;
@protocol OS_dispatch_queue;

@interface BRCFSWriter : NSObject <BRCModule>
{
    BRCAccountSession *_session;
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    brc_task_tracker *_taskTracker;
    _Bool _isCancelled;
}

+ (_Bool)_isPathMatchIdle:(const CDStruct_177058d5 *)arg1;
+ (_Bool)_shouldForceApplyForItem:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithAccountSession:(id)arg1;
- (void)fixupItemsAtStartup;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(_Bool)arg3;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(_Bool)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 rank:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(_Bool *)arg6;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 jobID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (_Bool)applyLocalEditIfNecessaryToURL:(id)arg1 forItem:(id)arg2 serverItem:(id)arg3 forDelete:(_Bool)arg4 error:(id *)arg5;
- (void)_stageCreationOfSymlink:(id)arg1;
- (void)_stageCreationOfDirectory:(id)arg1;
- (id)bouncePath:(id)arg1 forItemConflictingWithAnFSRoot:(id)arg2;
- (_Bool)bouncePathMatch:(const CDStruct_177058d5 *)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (_Bool)bouncePathMatchesForLookup:(id)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (id)_generateGentlePhysicalBounceNameForPathMatch:(const CDStruct_177058d5 *)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned long long *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

