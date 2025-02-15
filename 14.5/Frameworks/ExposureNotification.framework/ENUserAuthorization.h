//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface ENUserAuthorization : NSObject <NSSecureCoding, NSCopying>
{
    long long _authorization;
    NSString *_identifier;
    NSDate *_expirationDate;
    double _lastUpdatedTimestamp;
    NSDate *_testDateToday;
    NSDate *_symptomOnsetDate;
    NSNumber *_didUserTravel;
    NSString *_verificationCode;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(copy, nonatomic) NSNumber *didUserTravel; // @synthesize didUserTravel=_didUserTravel;
@property(copy, nonatomic) NSDate *symptomOnsetDate; // @synthesize symptomOnsetDate=_symptomOnsetDate;
@property(retain, nonatomic) NSDate *testDateToday; // @synthesize testDateToday=_testDateToday;
@property(readonly, nonatomic) double lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setUserAuthorization:(long long)arg1 withExpiration:(id)arg2;
@property(readonly, nonatomic) long long expirationStatus;
@property(nonatomic) long long userAuthorization;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end

