//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSNumber;

@interface MCDNSSettingsPayload : MCPayload
{
    NSDictionary *_dnsSettings;
    NSArray *_onDemandRules;
    NSNumber *_prohibitDisablement;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *prohibitDisablement; // @synthesize prohibitDisablement=_prohibitDisablement;
@property(readonly, copy, nonatomic) NSArray *onDemandRules; // @synthesize onDemandRules=_onDemandRules;
@property(readonly, copy, nonatomic) NSDictionary *dnsSettings; // @synthesize dnsSettings=_dnsSettings;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)verboseDescription;
@property(readonly, copy, nonatomic) NSDictionary *configurationDictionary;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

