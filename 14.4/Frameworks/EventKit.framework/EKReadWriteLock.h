//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface EKReadWriteLock : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)performWithWriteLock:(CDUnknownBlockType)arg1;
- (void)performWithReadLock:(CDUnknownBlockType)arg1;
- (id)initWithName:(const char *)arg1;

@end

