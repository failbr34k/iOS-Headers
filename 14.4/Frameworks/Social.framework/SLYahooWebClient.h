//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/SLWebClient-Protocol.h>

@class NSArray, NSString;

@interface SLYahooWebClient : NSObject <SLWebClient>
{
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *youTubeScope;
@property(readonly, nonatomic) NSArray *defaultScope;
@property(readonly, nonatomic) NSString *clientRedirectForAppOpenURL;
@property(readonly, nonatomic) Class fallbackWebUserInfoResponseClass;
@property(readonly, nonatomic) Class webUserInfoResponseClass;
@property(readonly, nonatomic) Class webAuthRequestClass;
@property(readonly, nonatomic) Class tokenRequestClass;
@property(readonly, nonatomic) Class tokenResponseClass;
@property(readonly, nonatomic) NSString *fallbackUserInfoURL;
@property(readonly, nonatomic) NSString *userInfoURL;
@property(readonly, nonatomic) NSString *authRequestURL;
@property(readonly, nonatomic) NSString *tokenURL;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSString *clientRedirect;
@property(readonly, nonatomic) NSString *clientSecret;
@property(readonly, nonatomic) NSString *clientID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

