//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL, WKGeolocationProviderIOS, _WKProcessPoolConfiguration;
@protocol _WKAutomationDelegate, _WKDownloadDelegate, _WKGeolocationCoreLocationProvider;

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<WebKit::WebProcessPool> _processPool;
    struct WeakObjCPtr<id<_WKAutomationDelegate>> _automationDelegate;
    struct WeakObjCPtr<id<_WKDownloadDelegate>> _downloadDelegate;
    struct RetainPtr<_WKAutomationSession> _automationSession;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;
}

+ (_Bool)supportsSecureCoding;
+ (void)_forceGameControllerFramework;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1;
+ (id)_allProcessPoolsForTesting;
+ (id)_sharedProcessPool;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) _WKProcessPoolConfiguration *_configuration;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithConfiguration:(id)arg1;
- (void)_setUsesOnlyHIDGamepadProviderForTesting:(_Bool)arg1;
- (unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
- (unsigned long long)_numberOfConnectedHIDGamepadsForTesting;
- (unsigned long long)_numberOfConnectedGamepadsForTesting;
- (void)_garbageCollectJavaScriptObjectsForTesting;
- (void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)arg1 thirdParty:(id)arg2 shouldScheduleNotification:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_allowAnyTLSCertificateForWebSocketTesting;
- (void)_clearPermanentCredentialsForProtectionSpace:(id)arg1;
- (_Bool)_networkProcessHasEntitlementForTesting:(id)arg1;
- (void)_getActivePagesOriginsInWebProcessForTesting:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_resumeDownloadFromData:(id)arg1 websiteDataStore:(id)arg2 path:(id)arg3 originatingWebView:(id)arg4;
- (id)_downloadURLRequest:(id)arg1 websiteDataStore:(id)arg2 originatingWebView:(id)arg3;
@property(nonatomic, setter=_setCoreLocationProvider:) id <_WKGeolocationCoreLocationProvider> _coreLocationProvider;
- (void)_setAllowsAnySSLCertificateForServiceWorker:(_Bool)arg1;
- (void)_synthesizeAppIsBackground:(_Bool)arg1;
@property(nonatomic, getter=_isStorageAccessAPIEnabled, setter=_setStorageAccessAPIEnabled:) _Bool _storageAccessAPIEnabled;
@property(nonatomic, getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:) _Bool _cookieStoragePartitioningEnabled;
- (unsigned long long)_serviceWorkerProcessCount;
- (unsigned long long)_processCacheSize;
- (unsigned long long)_processCacheCapacity;
- (unsigned long long)_maximumSuspendedPageCount;
- (unsigned long long)_pluginProcessCount;
- (void)_preconnectToServer:(id)arg1;
- (unsigned long long)_webPageContentProcessCount;
- (unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
- (unsigned long long)_webProcessCountIgnoringPrewarmed;
- (_Bool)_hasPrewarmedWebProcess;
- (void)_makeNextNetworkProcessLaunchFailForTesting;
- (void)_makeNextWebProcessLaunchFailForTesting;
- (unsigned long long)_webProcessCount;
- (void)_clearWebProcessCache;
- (void)_syncNetworkProcessCookies;
- (int)_prewarmedProcessIdentifier;
- (int)_networkProcessIdentifier;
- (void)_setUseSeparateServiceWorkerProcess:(_Bool)arg1;
- (void)_terminateServiceWorkers;
- (void)_sendNetworkProcessDidResume;
- (void)_sendNetworkProcessPrepareToSuspend:(CDUnknownBlockType)arg1;
- (void)_sendNetworkProcessWillSuspendImminently;
- (void)_terminateNetworkProcess;
- (void)_clearSupportedPlugins;
- (void)_addSupportedPlugin:(id)arg1 named:(id)arg2 withMimeTypes:(id)arg3 withExtensions:(id)arg4;
@property(copy, nonatomic, setter=_setJavaScriptConfigurationDirectory:) NSURL *_javaScriptConfigurationDirectory;
- (void)_setAutomationSession:(id)arg1;
- (void)_automationCapabilitiesDidChange;
- (void)_warmInitialProcess;
@property(nonatomic, setter=_setAutomationDelegate:) __weak id <_WKAutomationDelegate> _automationDelegate;
@property(nonatomic, setter=_setDownloadDelegate:) __weak id <_WKDownloadDelegate> _downloadDelegate;
- (void)_setObjectsForBundleParametersWithDictionary:(id)arg1;
- (void)_setObject:(id)arg1 forBundleParameter:(id)arg2;
- (id)_objectForBundleParameter:(id)arg1;
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(_Bool)arg1;
- (void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg1;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

