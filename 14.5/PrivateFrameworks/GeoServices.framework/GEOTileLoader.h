//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentConfigurationObserver-Protocol.h>
#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileServerProxyDelegate-Protocol.h>

@class GEOTileLoaderConfiguration, GEOTileLoaderInternal, GEOTileLoaderUsage, GEOTileServerProxy, NSHashTable, NSMutableArray, NSMutableSet, NSString, geo_isolater;
@protocol GEOTileLoaderInternalDelegate, OS_dispatch_queue;

@interface GEOTileLoader : NSObject <GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    geo_isolater *_isolater;
    NSObject<OS_dispatch_queue> *_loadQ;
    NSMutableSet *_openers;
    geo_isolater *_openersIsolater;
    CDStruct_34734122 _sortPoint;
    GEOTileServerProxy *_proxy;
    NSMutableArray *_tileDecoders;
    geo_isolater *_tileDecodersIsolater;
    _Bool _networkActive;
    id <GEOTileLoaderInternalDelegate> _internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    int _rollingBatchId;
    GEOTileLoaderUsage *_usage;
    unsigned long long _stateCaptureHandle;
    _Bool _coalesceTimerEnabled;
    GEOTileLoaderInternal *_internal;
    NSHashTable *_observers;
    geo_isolater *_observersIsolater;
}

+ (id)diskCacheLocation;
+ (void)setDiskCacheLocation:(id)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1;
+ (void)setMemoryCacheCountLimit:(unsigned long long)arg1;
+ (void)useLocalLoader;
+ (void)useRemoteLoader;
+ (void)setServerProxyClass:(Class)arg1;
+ (id)tileLoaderWithConfiguration:(id)arg1 serverProxy:(id)arg2;
+ (id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2;
+ (id)modernLoaderForTileGroupIdentifier:(unsigned int)arg1 locale:(id)arg2;
+ (id)modernLoader;
+ (id)singletonConfiguration;
- (void).cxx_destruct;
@property(nonatomic, setter=_setCoalesceTimerEnabled:) _Bool _coalesceTimerEnabled; // @synthesize _coalesceTimerEnabled;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (id)_findInCache:(const struct _GEOTileKey *)arg1;
- (id)internalDelegateQ;
- (void)setInternalDelegateQ:(id)arg1;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (id)proxy;
- (void)proxyDidDownloadRegionalResources:(id)arg1;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxyDidDeleteExternalTileData:(id)arg1;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;
- (void)_performOnServerProxyDelegateQueue:(CDUnknownBlockType)arg1;
- (void)_loadedTileForLocalKey:(struct _GEOTileKey)arg1 preliminary:(_Bool)arg2 quickly:(_Bool)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(CDUnknownBlockType)arg6;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 info:(id)arg3;
- (id)_tileDecoderForTileKey:(const struct _GEOTileKey *)arg1 quickly:(_Bool *)arg2;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)expireTilesWithPredicate:(CDUnknownBlockType)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_tileEditionChanged:(id)arg1;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)clearAllCaches;
- (unsigned long long)calculateFreeableSizeSync;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2;
- (void)_cancelAllForClientOnLoadQueue:(id)arg1;
- (void)cancelAllForClientSynchronous:(id)arg1;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)_issuePendingRequests;
- (void)_timerFired;
- (void)_requestOnlineTiles;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(CDUnknownBlockType)arg12 callback:(CDUnknownBlockType)arg13;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 createTime:(double)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 createTime:(double)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 createTime:(double)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 auditToken:(id)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(CDUnknownBlockType)arg7 callback:(CDUnknownBlockType)arg8;
- (_Bool)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 proxyClient:(id)arg5 options:(unsigned long long)arg6 reason:(unsigned char)arg7 qos:(unsigned int)arg8 signpostID:(unsigned long long)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(CDUnknownBlockType)arg12 callback:(CDUnknownBlockType)arg13;
- (_Bool)_cancelIfNeeded:(__list_iterator_aef25af4 *)arg1;
- (void)_cancel:(__list_iterator_aef25af4 *)arg1 err:(id)arg2;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (void)_notifyObserversOfFailure:(const struct _GEOTileKey *)arg1 error:(id)arg2 options:(unsigned long long)arg3;
- (void)_notifyObserversOfSuccess:(const struct _GEOTileKey *)arg1 source:(long long)arg2 options:(unsigned long long)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)descriptionDictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 serverProxy:(id)arg2;
@property(readonly, nonatomic) int networkHits;
@property(readonly, nonatomic) int diskHits;
@property(readonly, nonatomic) int memoryHits;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

