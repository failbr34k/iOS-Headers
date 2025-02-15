//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, WBSCoalescedAsynchronousWriterDelegate;

@interface WBSCoalescedAsynchronousWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    CDUnknownBlockType _writerBlock;
    CDUnknownBlockType _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSDictionary *_fileResourceValues;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    _Bool _done;
    NSString *_name;
    id <WBSCoalescedAsynchronousWriterDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WBSCoalescedAsynchronousWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)performScheduledWriteSynchronously;
- (void)startScheduledWriteNowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startScheduledWriteNow;
- (void)scheduleWrite;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (void)_writeDataAsynchronously:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_writeData:(id)arg1;
- (void)_waitForWriteCompletion;
- (id)_dataFromDataSource;
- (void)_scheduleTimer;
- (void)_timerFired;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(CDUnknownBlockType)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(CDUnknownBlockType)arg5 writeDelayInterval:(double)arg6 fileResourceValues:(id)arg7;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4 fileResourceValues:(id)arg5;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3 writeDelayInterval:(double)arg4;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;

@end

