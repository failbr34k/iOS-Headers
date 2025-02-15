//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject
{
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __CFDictionary *_observers;
    _Bool _isReachable;
    _Bool _receivedAtLeastOneCallback;
}

@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (_Bool)hasObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHostname:(id)arg1;

@end

