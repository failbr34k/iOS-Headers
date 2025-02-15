//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming, RWIProtocolSecurity;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolSecurity *security;
@property(retain, nonatomic) RWIProtocolNetworkResourceTiming *timing;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property(nonatomic) long long source;
@property(copy, nonatomic) NSString *mimeType;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property(copy, nonatomic) NSString *statusText;
@property(nonatomic) int status;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6;

@end

