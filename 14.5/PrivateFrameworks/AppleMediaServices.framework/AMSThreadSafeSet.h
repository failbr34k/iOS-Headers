//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    NSMutableSet *_backingSet;
    NSObject<OS_dispatch_queue> *_backingSetAccessQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backingSetAccessQueue; // @synthesize backingSetAccessQueue=_backingSetAccessQueue;
@property(retain, nonatomic) NSMutableSet *backingSet; // @synthesize backingSet=_backingSet;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;

@end

