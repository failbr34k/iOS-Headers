//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSEventMonitor : NSObject
{
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)notifyObserver:(id)arg1;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)enumerateObserversInQueue:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned long long)type;
- (void)dealloc;
- (id)init;

@end

