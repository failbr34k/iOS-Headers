//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/HKSPUserDefaults-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HKSPMockUserDefaults : NSObject <HKSPUserDefaults>
{
    struct os_unfair_lock_s _defaultsLock;
    NSMutableDictionary *_defaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s defaultsLock; // @synthesize defaultsLock=_defaultsLock;
@property(readonly, nonatomic) NSMutableDictionary *defaults; // @synthesize defaults=_defaults;
- (void)removeObjectForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

