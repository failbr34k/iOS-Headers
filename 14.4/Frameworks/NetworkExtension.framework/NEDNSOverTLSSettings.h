//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEDNSSettings.h>

@class NSString;

@interface NEDNSOverTLSSettings : NEDNSSettings
{
    NSString *_serverName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *serverName; // @synthesize serverName=_serverName;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dnsProtocol;

@end

