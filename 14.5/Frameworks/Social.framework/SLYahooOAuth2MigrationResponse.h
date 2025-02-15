//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface SLYahooOAuth2MigrationResponse : NSObject
{
    long long _statusCode;
    NSError *_error;
    NSDictionary *_responseBody;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expiryDate;
}

- (void).cxx_destruct;
@property(readonly) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly) NSDictionary *responseBody; // @synthesize responseBody=_responseBody;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

