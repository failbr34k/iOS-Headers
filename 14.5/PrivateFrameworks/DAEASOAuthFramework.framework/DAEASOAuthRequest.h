//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DAEASOAuthRequest : NSObject
{
}

+ (id)errorDescriptionFromRequest:(id)arg1;
+ (id)errorDomainFromRequest:(id)arg1;
+ (id)stateFromRequest:(id)arg1;
+ (id)authCodeFromRequest:(id)arg1;
+ (_Bool)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 state:(id)arg6 codeChallenge:(id)arg7 codeChallengeMethod:(long long)arg8;

@end

