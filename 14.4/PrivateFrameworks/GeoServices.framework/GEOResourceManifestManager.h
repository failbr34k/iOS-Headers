//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestServerProxyDelegate-Protocol.h>

@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSDictionary, NSHashTable, NSMutableArray, NSSet, NSString, geo_isolater;
@protocol GEOResourceManifestServerProxy, OS_dispatch_source;

@interface GEOResourceManifestManager : NSObject <GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate>
{
    id <GEOResourceManifestServerProxy> _serverProxy;
    NSHashTable *_serverProxyObservers;
    GEOActiveTileGroup *_activeTileGroup;
    struct os_unfair_lock_s _activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    NSSet *_allResourceNames;
    NSSet *_allRegionalResourceNames;
    _Bool _needsToLoadTileGroupFromDisk;
    NSMutableArray *_tileGroupObservers;
    struct os_unfair_recursive_lock_s _tileGroupObserversLock;
    struct os_unfair_lock_s _closedCountLock;
    long long _closedCount;
    _Bool _constantlyChangeTileGroup;
    double _constantlyChangeTileGroupInterval;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_networkActivityHandlers;
    geo_isolater *_networkActivityHandlersIsolation;
    _Bool _isUpdatingManifest;
    _Bool _isLoadingResources;
    struct os_unfair_lock_s _resourceNamesToPathsLock;
    GEOResourceManifestConfiguration *_configuration;
    NSObject<OS_dispatch_source> *_cachedResourceInfoPurgeTimer;
    unsigned long long _stateCaptureHandle;
}

+ (id)modernManagerForConfiguration:(id)arg1;
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (id)modernManagerNoCreate;
+ (id)modernManager;
+ (id)sharedManager;
+ (void)setHiDPI:(_Bool)arg1;
+ (void)configureInProcessSingletonWithConfiguration:(id)arg1;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (void)setServerProxyClass:(Class)arg1;
+ (void)disableServerConnection;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEOResourceManifestServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)removeDevResources;
- (void)devResourcesFolderDidChange;
- (void)_notifyObserversOfResourcesChange;
- (void)stopObservingDevResources;
- (void)startObservingDevResources;
- (void)forceUpdate;
- (void)resetActiveTileGroup;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1 updateType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)activeTileGroupIdentifier;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasResourceManifest;
- (id)detailedDescription;
- (_Bool)isMuninEnabled;
- (id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2;
- (void)deactivateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)cancelCurrentManifestUpdate;
- (id)updateProgress;
- (void)updateManifest:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateManifest:(CDUnknownBlockType)arg1;
- (void)updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;
- (void)fakeTileGroupChange;
- (void)setConstantlyChangeTileGroupInterval:(double)arg1;
- (void)setConstantlyChangeTileGroup:(_Bool)arg1;
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
- (id)bestLocalizedStringForDisplayStringAtIndex:(unsigned long long)arg1;
- (void)addNetworkActivityHandler:(CDUnknownBlockType)arg1;
- (id)pathForResourceWithName:(id)arg1;
- (void)_buildResourceNamesToPaths;
- (id)allResourcePaths;
- (id)allRegionalResourceNames;
- (id)allResourceNames;
- (void)_purgeCachedResourceInfo;
- (void)_scheduleCachedResourceInfoPurgeTimer;
- (unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)disputedBordersQueryItemsForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (_Bool)isDisputedBordersAllowlistedForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (_Bool)useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2 overrideLocale:(id)arg3;
- (id)_activeTileSetForKey:(const struct _GEOTileKey *)arg1;
@property(readonly, nonatomic) _Bool hasLoadedActiveTileGroup;
@property(readonly, nonatomic) _Bool hasActiveTileGroup;
- (unsigned int)mapMatchingZoomLevel;
- (int)mapMatchingTileSetStyle;
- (void)removeTileGroupObserver:(id)arg1;
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;
- (void)removeServerProxyObserver:(id)arg1;
- (void)addServerProxyObserver:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)closeServerConnection:(_Bool)arg1;
- (void)closeServerConnection;
- (void)openServerConnection;
- (id)authToken;
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (id)_loadActiveTileGroupIfNecessary:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

