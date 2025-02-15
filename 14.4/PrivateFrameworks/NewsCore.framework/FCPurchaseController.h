//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCPurchaseProviderType-Protocol.h>
#import <NewsCore/FCUserInfoObserving-Protocol.h>
#import <NewsCore/NSURLSessionDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCCloudContext, FCKeyValueStore, FCPurchaseLookUpEntriesManager, NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURLSession;
@protocol FCEntitlementsOverrideProviderType, OS_dispatch_queue;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, NSURLSessionDelegate, FCAppActivityObserving, FCPurchaseProviderType>
{
    NSSet *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_webAccessEntriesByTagID;
    id <FCEntitlementsOverrideProviderType> _entitlementsOverrideProvider;
    FCCloudContext *_cloudContext;
    NSURLSession *_session;
    FCKeyValueStore *_localStore;
    FCPurchaseLookUpEntriesManager *_purchaseLookupEntriesManager;
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_entitlementQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCAsyncSerialQueue *entitlementQueue; // @synthesize entitlementQueue=_entitlementQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(copy, nonatomic) NSDate *lastEntitlementCheckTime; // @synthesize lastEntitlementCheckTime=_lastEntitlementCheckTime;
@property(copy) NSDictionary *readOnlyPurchaseLookUpEntriesByTagID; // @synthesize readOnlyPurchaseLookUpEntriesByTagID=_readOnlyPurchaseLookUpEntriesByTagID;
@property(retain, nonatomic) FCPurchaseLookUpEntriesManager *purchaseLookupEntriesManager; // @synthesize purchaseLookupEntriesManager=_purchaseLookupEntriesManager;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; // @synthesize entitlementsOverrideProvider=_entitlementsOverrideProvider;
@property(retain, nonatomic) NSMutableDictionary *webAccessEntriesByTagID; // @synthesize webAccessEntriesByTagID=_webAccessEntriesByTagID;
@property(retain, nonatomic) NSSet *purchasesDiscoveredTagIDs; // @synthesize purchasesDiscoveredTagIDs=_purchasesDiscoveredTagIDs;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleWebAcccessFailureWithTagID:(id)arg1 purchaseID:(id)arg2 email:(id)arg3 purchaseReceipt:(id)arg4;
- (void)handleWebAccessSuccessWithTagID:(id)arg1;
- (void)addToWebAccessEntryListWithEntry:(id)arg1;
- (id)webAccessEntryForTagID:(id)arg1;
- (id)_webAccessEntryIDForTagID:(id)arg1;
- (void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleAccessTokenVerificationFailureWithTagID:(id)arg1;
- (void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(_Bool)arg2 accessToken:(id)arg3;
- (void)handleAccessTokenChangeWithTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
- (void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(_Bool)arg3;
- (void)activityObservingApplicationDidEnterBackground;
- (void)cleanupExpiredPurchaseLookupEntriesIfNeeded;
- (void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)silentRemoveFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)updatePurchaseEntryToValid:(id)arg1 purchaseType:(unsigned long long)arg2;
- (void)updatePurchaseEntryToSubcsriptionNotSupported:(id)arg1;
- (void)updatePurchaseEntryToExpired:(id)arg1 hasShownRenewalNotice:(_Bool)arg2;
- (void)updatePurchaseEntryToExpired:(id)arg1;
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1;
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)addToPurchasedChannelsListWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 purchaseValidationState:(unsigned long long)arg4 isNewsAppPurchase:(_Bool)arg5 lastVerificationTime:(id)arg6;
- (_Bool)atleastOneValidAppStorePurchase;
- (_Bool)isTagPurchased:(id)arg1;
- (_Bool)isTagIDPurchased:(id)arg1;
- (id)allAppStorePurchasedTagIDs;
- (void)_enumerateValidPurchasesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *allPurchaseIDs;
- (id)_allPurchasedTagIDs;
@property(readonly, nonatomic) NSSet *allPurchasedTagIDs;
@property(readonly, nonatomic) NSSet *allTagIDs;
- (id)allAppStorePurchasedTagIDsByPurchaseID;
- (id)purchaseLookUpEntryForTagID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *purchaseLookUpEntriesByTagID;
- (void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1;
- (void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1;
- (void)_entitlementCheckWithIgnoreCache:(_Bool)arg1 restorableBundleIAPs:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4 serialCompletion:(CDUnknownBlockType)arg5;
- (void)performEntitlementCheckWithIgnoreCache:(_Bool)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)webAccessOptedInTagIDs;
- (id)subscriptionNotSupportedChannelIDs;
- (id)expiredPurchaseChannelIDs;
- (void)silentExpireInAppSubscriptions;
- (void)forceExpireAllSubscriptionsIfNeeded;
- (_Bool)hasPurchaseTypeAppStore;
- (_Bool)isPaidSubscriberFromWeb;
- (_Bool)isPaidSubscriberFromAppStore;
- (_Bool)isPaidSubscriberFromNews;
- (_Bool)isPaidSubscriber;
- (void)addExpiredPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(_Bool)arg4 expirationDate:(id)arg5;
- (void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(_Bool)arg4;
- (void)clearAllPurchases;
- (void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2;
- (void)setLastSignedInItunesAccountNameWithName:(id)arg1;
@property(readonly, nonatomic) NSString *lastSignedInItunesAccountName;
- (void)setLastSignedInItunesAccountDSIDWithDSID:(id)arg1;
- (id)lastSignedInItunesAccountDSID;
- (void)clearAllAppStorePurchases;
- (void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(_Bool)arg3 isBundleSubscriber:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(_Bool)arg3 isBundleSubscriber:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeFromWebAccessOptedInListWithTagID:(id)arg1;
- (void)addToWebAccessOptedInListWithTagID:(id)arg1;
- (void)notifyPurchasesDiscoveredWithTagIDs:(id)arg1;
- (void)notifyWebAccessOptedInListChanged;
- (void)notifyPurchaseListChanged;
- (void)notifyPurchaseRemovedWithTagIDs:(id)arg1;
- (void)notifyPurchaseAddedWithTagIDs:(id)arg1;
- (void)saveToDisk;
- (void)loadLocalCachesFromStore;
- (void)_applicationDidEnterBackground;
- (void)_initializeAppStorePurchaseDiscoveredList;
- (void)dealloc;
- (id)initWithCloudContext:(id)arg1 keyValueStoreOption:(unsigned long long)arg2;
- (id)initWithCloudContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

