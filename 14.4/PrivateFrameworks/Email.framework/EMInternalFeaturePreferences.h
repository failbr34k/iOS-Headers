//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class NSString;

@interface EMInternalFeaturePreferences : NSObject <EFLoggable>
{
}

+ (_Bool)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2;
+ (void)_setUserDefaultEnabled:(_Bool)arg1 forKey:(id)arg2;
+ (_Bool)_userDefaultEnabledForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (id)defaultForFeature:(unsigned long long)arg1;
+ (void)setFeature:(unsigned long long)arg1 enabled:(_Bool)arg2;
+ (_Bool)_featureEnabled:(unsigned long long)arg1;
+ (id)observeChangesForFeature:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)_registerForDefaultChanges;
+ (_Bool)featureEnabled:(unsigned long long)arg1;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

