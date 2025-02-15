//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClipServices/NSSecureCoding-Protocol.h>

@class CPSClipInvocationPolicy, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface CPSClipMetadata : NSObject <NSSecureCoding>
{
    NSString *_storeClipName;
    NSString *_storeClipCaption;
    NSURL *_storeClipHeroImageURL;
    NSString *_abrClipName;
    NSString *_abrClipCaption;
    NSURL *_abrClipHeroImageURL;
    _Bool _clipIncompatibleWithCurrentDevice;
    _Bool _clipRequestsNotificationPermission;
    _Bool _clipRequestsLocationConfirmationPermission;
    _Bool _hasBusinessItemMetadata;
    _Bool _hasAppMetadata;
    _Bool _poweredByThirdParty;
    _Bool _deviceCapabilitiesDontMatch;
    _Bool _isDeveloperOverride;
    _Bool _fullAppOnly;
    NSString *_clipBundleID;
    long long _clipAction;
    NSString *_clipMinimumOSVersion;
    NSURL *_clipIpaURL;
    NSURL *_clipRequestURL;
    NSURL *_clipURL;
    NSURL *_clipTargetURL;
    NSURL *_clipBusinessIconURL;
    NSDictionary *_clipBusinessIconStyleAttributes;
    NSNumber *_clipMapItemMUID;
    NSString *_clipURLHash;
    NSArray *_clipVerifiedAssociatedDomains;
    CPSClipInvocationPolicy *_invocationPolicy;
    NSString *_fullAppName;
    NSString *_fullAppShortName;
    NSString *_fullAppCaption;
    NSString *_fullAppContentRating;
    NSString *_fullAppBundleID;
    NSURL *_fullAppStoreURL;
    NSURL *_fullAppIconURL;
    NSString *_fullAppCachedIconFilePath;
    NSString *_provider;
    NSNumber *_itemID;
    NSString *_webClipID;
    NSString *_buyParams;
    NSDate *_expirationDate;
    NSDictionary *_amsDictionary;
    unsigned long long _clipVersionIdentifier;
}

+ (id)fullAppOnlyClipBundleIDs;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long clipVersionIdentifier; // @synthesize clipVersionIdentifier=_clipVersionIdentifier;
@property(copy, nonatomic) NSDictionary *amsDictionary; // @synthesize amsDictionary=_amsDictionary;
@property(nonatomic) _Bool fullAppOnly; // @synthesize fullAppOnly=_fullAppOnly;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) _Bool isDeveloperOverride; // @synthesize isDeveloperOverride=_isDeveloperOverride;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(copy, nonatomic) NSString *webClipID; // @synthesize webClipID=_webClipID;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *fullAppCachedIconFilePath; // @synthesize fullAppCachedIconFilePath=_fullAppCachedIconFilePath;
@property(copy, nonatomic) NSURL *fullAppIconURL; // @synthesize fullAppIconURL=_fullAppIconURL;
@property(copy, nonatomic) NSURL *fullAppStoreURL; // @synthesize fullAppStoreURL=_fullAppStoreURL;
@property(copy, nonatomic) NSString *fullAppBundleID; // @synthesize fullAppBundleID=_fullAppBundleID;
@property(copy, nonatomic) NSString *fullAppContentRating; // @synthesize fullAppContentRating=_fullAppContentRating;
@property(copy, nonatomic) NSString *fullAppCaption; // @synthesize fullAppCaption=_fullAppCaption;
@property(copy, nonatomic) NSString *fullAppShortName; // @synthesize fullAppShortName=_fullAppShortName;
@property(copy, nonatomic) NSString *fullAppName; // @synthesize fullAppName=_fullAppName;
@property(nonatomic) _Bool deviceCapabilitiesDontMatch; // @synthesize deviceCapabilitiesDontMatch=_deviceCapabilitiesDontMatch;
@property(retain, nonatomic) CPSClipInvocationPolicy *invocationPolicy; // @synthesize invocationPolicy=_invocationPolicy;
@property(readonly, nonatomic, getter=isPoweredByThirdParty) _Bool poweredByThirdParty; // @synthesize poweredByThirdParty=_poweredByThirdParty;
@property(readonly, nonatomic) _Bool hasAppMetadata; // @synthesize hasAppMetadata=_hasAppMetadata;
@property(readonly, nonatomic) _Bool hasBusinessItemMetadata; // @synthesize hasBusinessItemMetadata=_hasBusinessItemMetadata;
@property(readonly, nonatomic) NSArray *clipVerifiedAssociatedDomains; // @synthesize clipVerifiedAssociatedDomains=_clipVerifiedAssociatedDomains;
@property(retain, nonatomic) NSString *clipURLHash; // @synthesize clipURLHash=_clipURLHash;
@property(readonly, nonatomic) _Bool clipRequestsLocationConfirmationPermission; // @synthesize clipRequestsLocationConfirmationPermission=_clipRequestsLocationConfirmationPermission;
@property(readonly, nonatomic) _Bool clipRequestsNotificationPermission; // @synthesize clipRequestsNotificationPermission=_clipRequestsNotificationPermission;
@property(readonly, nonatomic) NSNumber *clipMapItemMUID; // @synthesize clipMapItemMUID=_clipMapItemMUID;
@property(readonly, nonatomic) NSDictionary *clipBusinessIconStyleAttributes; // @synthesize clipBusinessIconStyleAttributes=_clipBusinessIconStyleAttributes;
@property(readonly, nonatomic) NSURL *clipBusinessIconURL; // @synthesize clipBusinessIconURL=_clipBusinessIconURL;
@property(readonly, nonatomic) NSURL *clipTargetURL; // @synthesize clipTargetURL=_clipTargetURL;
@property(retain, nonatomic) NSURL *clipURL; // @synthesize clipURL=_clipURL;
@property(retain, nonatomic) NSURL *clipRequestURL; // @synthesize clipRequestURL=_clipRequestURL;
@property(copy, nonatomic) NSURL *clipIpaURL; // @synthesize clipIpaURL=_clipIpaURL;
@property(nonatomic) _Bool clipIncompatibleWithCurrentDevice; // @synthesize clipIncompatibleWithCurrentDevice=_clipIncompatibleWithCurrentDevice;
@property(readonly, nonatomic) NSString *clipMinimumOSVersion; // @synthesize clipMinimumOSVersion=_clipMinimumOSVersion;
@property(readonly, nonatomic) long long clipAction; // @synthesize clipAction=_clipAction;
@property(copy, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
- (id)description;
@property(readonly, nonatomic) NSString *bundleDisplayName;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(retain, nonatomic) NSArray *test_clipVerifiedAssociatedDomains;
- (_Bool)hasValidAssociatedDomainsToLaunchAppClip;
@property(readonly, nonatomic) NSURL *clipLaunchURL;
@property(readonly, nonatomic) NSURL *clipHeroImageURL;
@property(readonly, nonatomic) NSString *clipOpenButtonTitle;
@property(readonly, nonatomic) NSString *clipCaption;
@property(readonly, nonatomic) NSString *clipName;
- (void)_updateInvocationPolicy:(id)arg1;
- (void)_updateWithAMSMetadata:(id)arg1;
- (id)_itemIDFromAppURLString:(id)arg1;
@property(readonly, nonatomic) _Bool hasFullAppInstalledOnSystem;
- (_Bool)hasUpToDateVersionInstalledOnSystemIsPlaceholder:(_Bool *)arg1;
- (void)updateWithStoreClipMetadata:(id)arg1;
- (void)updateWithStoreParentAppMetadata:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeveloperOverride:(id)arg1 invocationURL:(id)arg2;
- (id)initWithBusinessItem:(id)arg1;
- (id)initWithUncheckedDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundleURL:(id)arg2;
- (id)initWithDemoBundleURL:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedSubtitleForClipSuggestion;
@property(readonly, copy, nonatomic) NSString *localizedTitleForClipSuggestion;

@end

