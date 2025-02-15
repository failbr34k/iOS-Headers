//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSDownloadPolicy, SSItem, SSItemOffer, SSNetworkConstraints, SSURLRequestProperties;
@protocol OS_dispatch_queue;

@interface SSPurchase : NSObject <SSXPCCoding, NSSecureCoding, NSCopying>
{
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    _Bool _backgroundPurchase;
    long long _batchIdentifier;
    NSString *_buyParameters;
    NSNumber *_buyParamsCreatesDownloads;
    NSNumber *_buyParamsCreatesInstallJobs;
    NSNumber *_buyParamsCreatesJobs;
    _Bool _createsDownloads;
    _Bool _createsJobs;
    _Bool _createsInstallJobs;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _displaysOnLockScreen;
    SSDownloadPolicy *_downloadPolicy;
    NSMutableDictionary *_downloadProperties;
    NSNumber *_enabledServiceType;
    long long _expectedDownloadFileSize;
    NSArray *_filteredAssetTypes;
    NSArray *_gratisIdentifiers;
    _Bool _ignoresForcedPasswordRestriction;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    SSNetworkConstraints *_networkConstraints;
    NSNumber *_ownerAccountDSID;
    long long _placeholderDownloadIdentifier;
    _Bool _playbackRequest;
    _Bool _preauthenticated;
    SSURLRequestProperties *_requestProperties;
    id _requiredDeviceCapabilities;
    _Bool _skipSoftwareAccountPreflight;
    NSDictionary *_tidHeaders;
    long long _uniqueIdentifier;
    _Bool _usesLocalRedownloadParametersIfPossible;
}

+ (_Bool)supportsSecureCoding;
+ (id)purchaseWithBuyParameters:(id)arg1;
+ (id)newPurchaseWithXPCEncoding:(id)arg1;
+ (id)newPurchaseWithDatabaseEncoding:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool skipSoftwareAccountPreflight; // @synthesize skipSoftwareAccountPreflight=_skipSoftwareAccountPreflight;
- (void)setDownloadMetadata:(id)arg1;
- (id)downloadMetadata;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (_Bool)_createsJobsWithOverride;
- (_Bool)_createsInstallJobsWithOverride;
- (_Bool)_createsDownloadsWithOverride;
- (id)_buyParametersValueForKey:(id)arg1 fromBuyParams:(id)arg2;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
@property _Bool usesLocalRedownloadParametersIfPossible;
@property long long uniqueIdentifier;
@property(copy) NSDictionary *tidHeaders;
@property(copy) id requiredDeviceCapabilities;
@property(getter=isPreauthenticated) _Bool preauthenticated;
@property long long placeholderDownloadIdentifier;
@property(copy) NSArray *gratisIdentifiers;
@property long long expectedDownloadFileSize;
@property(copy) NSNumber *enabledServiceType;
- (void)setDefaultUserAgent:(id)arg1;
@property long long batchIdentifier;
@property(readonly, getter=isGratisSoftwareClaim) _Bool gratisSoftwareClaim;
- (id)itemOffer;
- (id)item;
- (id)buyParametersValueForKey:(id)arg1;
@property(readonly) NSData *databaseEncoding;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)valueForDownloadProperty:(id)arg1;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
@property(copy) SSURLRequestProperties *requestProperties;
@property(getter=isPlaybackRequest) _Bool playbackRequest;
@property(retain) NSNumber *ownerAccountDSID;
@property(copy) SSNetworkConstraints *networkConstraints;
@property _Bool ignoresForcedPasswordRestriction;
@property(copy) NSArray *filteredAssetTypes;
@property(copy) NSDictionary *downloadProperties;
@property(copy) SSDownloadPolicy *downloadPolicy;
@property _Bool displaysOnLockScreen;
@property(nonatomic) _Bool createsInstallJobs;
@property(nonatomic) _Bool createsJobs;
@property(nonatomic) _Bool createsDownloads;
@property(copy) NSString *buyParameters;
@property(getter=isBackgroundPurchase) _Bool backgroundPurchase;
@property(copy) NSString *affiliateIdentifier;
@property(retain) NSNumber *accountIdentifier;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)init;
- (id)_initSSPurchase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

