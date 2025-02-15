//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject
{
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)tellCurrentTasksToDefer;
- (void)unregister:(id)arg1;
- (id)taskWithDeadline:(double)arg1;
- (id)task;
- (void)dealloc;
- (id)init;

@end

