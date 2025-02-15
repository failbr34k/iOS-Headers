//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICPlayActivityEnqueuerProperties.h>

@class NSNumber, NSString, NSTimeZone;

@interface ICMutablePlayActivityEnqueuerProperties : ICPlayActivityEnqueuerProperties
{
}

@property(copy, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(nonatomic) long long systemReleaseType; // @dynamic systemReleaseType;
@property(copy, nonatomic) NSString *storeFrontID; // @dynamic storeFrontID;
@property(nonatomic) unsigned long long storeAccountID; // @dynamic storeAccountID;
@property(nonatomic, getter=isSBEnabled) _Bool SBEnabled; // @dynamic SBEnabled;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @dynamic privateListeningEnabled;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(copy, nonatomic) NSString *deviceGUID; // @dynamic deviceGUID;
@property(copy, nonatomic) NSString *buildVersion; // @dynamic buildVersion;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

