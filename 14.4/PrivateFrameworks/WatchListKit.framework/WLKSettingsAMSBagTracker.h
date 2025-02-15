//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject
{
    NSDictionary *_trackedBagKeys;
}

+ (id)sharedTracker;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *trackedBagKeys; // @synthesize trackedBagKeys=_trackedBagKeys;
- (void)_setIsSportsEnabled:(_Bool)arg1;
- (void)_setIsNowPlayingEnabled:(_Bool)arg1;
- (void)_updateKeys:(id)arg1;
- (void)_updateBoolValueForTrackedKey:(id)arg1;
- (_Bool)_amsBagBoolValueForKey:(id)arg1;
- (id)isSportsEnabled;
- (id)isNowPlayingEnabled;
- (void)updateTrackedBagValuesWithChangedKeys:(id)arg1;
- (void)updateTrackedBagValues;
- (id)init;

@end

