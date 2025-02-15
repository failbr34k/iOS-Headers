//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SARemoteDevice : AceObject <SAAceSerializable>
{
}

+ (id)remoteDeviceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)remoteDevice;
@property(copy, nonatomic) NSString *userAgent;
@property(nonatomic) _Bool siriEnabled;
@property(copy, nonatomic) NSNumber *personalDomainsEnabled;
@property(copy, nonatomic) NSString *personalDomainsAuthenticationMode;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *deviceName;
@property(copy, nonatomic) NSString *brandName;
@property(copy, nonatomic) NSString *assistantId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

