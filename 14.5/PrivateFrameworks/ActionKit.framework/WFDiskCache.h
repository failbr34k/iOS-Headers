//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface WFDiskCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_cacheURL;
}

+ (id)workflowCache;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (id)actuallyGetObjectForKey:(id)arg1;
- (void)actuallyRemoveObjectForKey:(id)arg1;
- (void)actuallySetObject:(id)arg1 forKey:(id)arg2;
- (id)fileURLForKey:(id)arg1;
- (id)objectForKeyComponents:(id)arg1;
- (void)removeObjectForKeyComponents:(id)arg1;
- (void)setObject:(id)arg1 forKeyComponents:(id)arg2;
- (void)objectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCacheURL:(id)arg1 name:(id)arg2;
- (id)initWithCacheDirectory:(id)arg1 name:(id)arg2;
- (id)initWithApplicationGroupIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

