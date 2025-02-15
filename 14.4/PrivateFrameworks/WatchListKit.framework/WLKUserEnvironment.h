//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface WLKUserEnvironment : NSObject
{
    _Bool _consented;
    _Bool _internalBuild;
    NSNumber *_DSID;
    NSString *_storeFrontIdentifier;
    NSString *_localeIdentifier;
    NSDictionary *_entitlements;
    NSString *_restrictions;
    NSArray *_consentedBrands;
    unsigned long long _protocolVersion;
    NSArray *_deniedBrands;
    NSString *_platform;
}

+ (void)setCurrentEnvironmentForTesting:(id)arg1;
+ (id)currentEnvironment;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) _Bool internalBuild; // @synthesize internalBuild=_internalBuild;
@property(retain, nonatomic) NSArray *deniedBrands; // @synthesize deniedBrands=_deniedBrands;
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) _Bool consented; // @synthesize consented=_consented;
@property(retain, nonatomic) NSArray *consentedBrands; // @synthesize consentedBrands=_consentedBrands;
@property(retain, nonatomic) NSString *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(retain, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (id)_consentQuery;
- (id)_entitlementsQuery;
- (id)_queryParameters;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToEnvironment:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

