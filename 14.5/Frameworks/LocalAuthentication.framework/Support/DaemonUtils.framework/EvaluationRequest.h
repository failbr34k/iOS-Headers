//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DaemonUtils/Request.h>

@class NSData, NSDictionary;

@interface EvaluationRequest : Request
{
    _Bool _secureIntentRequested;
    long long _policy;
    NSData *_acl;
    id _aclOperation;
    NSDictionary *_options;
    long long _purpose;
}

+ (_Bool)isApplePayPolicy:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool secureIntentRequested; // @synthesize secureIntentRequested=_secureIntentRequested;
@property(readonly, nonatomic) long long purpose; // @synthesize purpose=_purpose;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) id aclOperation; // @synthesize aclOperation=_aclOperation;
@property(readonly, nonatomic) NSData *acl; // @synthesize acl=_acl;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) _Bool isInAppPayment;
@property(readonly, nonatomic) _Bool isUnlock;
@property(readonly, nonatomic) _Bool isApplePay;
- (_Bool)interactive;
- (void)updateOptions:(id)arg1;
- (id)initWithAcl:(id)arg1 operation:(id)arg2 options:(id)arg3;
- (id)initWithPolicy:(long long)arg1 options:(id)arg2;

@end

