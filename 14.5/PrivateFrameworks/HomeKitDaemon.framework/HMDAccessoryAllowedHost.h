//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDNetworkRouterFirewallRuleWAN, NSSet, NSString;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding>
{
    HMDNetworkRouterFirewallRuleWAN *_cachedWANRule;
    NSString *_jsonWANRule;
}

+ (_Bool)supportsSecureCoding;
+ (id)allowedHostsFromFirewallRuleConfiguration:(id)arg1;
+ (id)allowedHostsFromJSONFirewallWANRules:(id)arg1;
+ (id)allowedHostForFullWANAccess;
- (void).cxx_destruct;
@property(readonly) NSString *jsonWANRule; // @synthesize jsonWANRule=_jsonWANRule;
- (id)attributeDescriptions;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long purpose;
@property(readonly) NSSet *addresses;
@property(readonly) NSString *name;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWAN *wanRule;
- (id)initWithWANRule:(id)arg1;
- (id)initWithJSONFirewallWANRule:(id)arg1;

@end

