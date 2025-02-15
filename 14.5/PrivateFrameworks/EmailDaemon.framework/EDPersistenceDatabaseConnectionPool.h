//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFResourcePool, NSLock, NSMapTable, NSMutableSet, _EDPersistenceDatabaseConnectionWrapper;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject
{
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheSize;
    unsigned long long _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    unsigned long long _maxConcurrentBackgroundReaders;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
    id <EDPersistenceDatabaseConnectionPoolDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maxConcurrentBackgroundReaders; // @synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders;
@property(nonatomic) __weak id <EDPersistenceDatabaseConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long writersWaiting;
@property(readonly, nonatomic) unsigned long long backgroundReadersWaiting;
- (unsigned long long)maxConcurrentReaders;
@property(nonatomic) unsigned long long cacheSize;
- (void)flush;
- (void)_unlockForConnectionType:(unsigned long long)arg1 resource:(id)arg2;
- (void)checkInConnection:(id)arg1;
- (_Bool)_lockForConnectionType:(unsigned long long)arg1 resource:(id *)arg2;
- (id)_connectionWithType:(unsigned long long)arg1;
- (id)writerConnection;
- (id)readerConnection;
- (id)backgroundReaderConnection;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;
- (id)init;

@end

