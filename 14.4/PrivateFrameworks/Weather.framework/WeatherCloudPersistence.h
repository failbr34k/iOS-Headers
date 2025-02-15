//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUbiquitousKeyValueStore, WeatherCloudMigrator;
@protocol WeatherCloudPersistenceDelegate;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence>
{
    id <WeatherCloudPersistenceDelegate> _delegate;
    WeatherCloudMigrator *_migrator;
    NSUbiquitousKeyValueStore *_activeCloudStore;
    NSUbiquitousKeyValueStore *_nonEncryptedStore;
    NSUbiquitousKeyValueStore *_encryptedStore;
}

+ (id)cloudPersistenceWithDelegate:(id)arg1;
+ (_Bool)processIsWhitelistedForSync;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *encryptedStore; // @synthesize encryptedStore=_encryptedStore;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *nonEncryptedStore; // @synthesize nonEncryptedStore=_nonEncryptedStore;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *activeCloudStore; // @synthesize activeCloudStore=_activeCloudStore;
@property(readonly, nonatomic) WeatherCloudMigrator *migrator; // @synthesize migrator=_migrator;
@property __weak id <WeatherCloudPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encryptedStoreChanged:(id)arg1;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)synchronize;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (_Bool)isInitialSyncNotification:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

