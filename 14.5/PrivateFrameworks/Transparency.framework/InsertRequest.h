//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSString;

@interface InsertRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(nonatomic) _Bool accountMismatch; // @dynamic accountMismatch;
@property(nonatomic) unsigned long long appVersion; // @dynamic appVersion;
@property(nonatomic) int application; // @dynamic application;
@property(copy, nonatomic) NSData *clientData; // @dynamic clientData;
@property(copy, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(copy, nonatomic) NSString *requestUuid; // @dynamic requestUuid;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(nonatomic) int version; // @dynamic version;

@end

