//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest
{
    NSString *_stepIdentifier;
    PKPaymentPass *_pass;
}

+ (id)requestWithPass:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(copy, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end

