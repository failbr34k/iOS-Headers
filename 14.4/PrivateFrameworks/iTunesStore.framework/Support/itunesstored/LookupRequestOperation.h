//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSNumber, NSString, SSAuthenticationContext, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    NSString *_clientIdentifierHeader;
    long long _personalizationStyle;
    SSLookupProperties *_properties;
    SSLookupResponse *_response;
    _Bool _shouldSuppressCookies;
    NSString *_userAgent;
}

- (id)_URLBagContext;
- (void)_setLookupResponse:(id)arg1;
- (void)_setAccountID:(id)arg1;
- (_Bool)_performPlatformLookup:(id *)arg1;
- (_Bool)_performLocationLookup:(id *)arg1;
- (_Bool)_performJSSignLookupWithURLBag:(id)arg1 error:(id *)arg2;
- (id)_newStoreURLOperationWithBagKey:(id)arg1;
- (id)_newLookupResponseWithResultsFromOperation:(id)arg1;
- (id)_authenticationContext;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)run;
@property(copy) NSString *userAgent;
@property _Bool shouldSuppressCookies;
@property long long personalizationStyle;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSLookupResponse *lookupResponse;
@property(readonly) SSLookupProperties *lookupProperties;
- (void)dealloc;
- (id)initWithLookupProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

