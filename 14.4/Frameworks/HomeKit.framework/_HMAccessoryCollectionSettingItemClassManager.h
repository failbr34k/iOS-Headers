//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _HMAccessoryCollectionSettingItemClassManager : NSObject
{
    HMFUnfairLock *_lock;
    NSMutableDictionary *_classes;
}

+ (id)sharedManager;
+ (id)defaultItemValueClasses;
- (void).cxx_destruct;
- (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;
- (id)itemValueClassesForKeyPath:(id)arg1;
- (id)init;

@end

