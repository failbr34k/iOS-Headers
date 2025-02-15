//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSArray, NSData, NSString, NSURL;

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest
{
    NSString *_applicationIdentifier;
    unsigned long long _featureIdentifier;
    NSURL *_baseURL;
    NSData *_frontImageData;
    NSData *_backImageData;
    NSString *_documentCountryCode;
    unsigned long long _documentType;
    NSArray *_certificates;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) unsigned long long documentType; // @synthesize documentType=_documentType;
@property(copy, nonatomic) NSString *documentCountryCode; // @synthesize documentCountryCode=_documentCountryCode;
@property(copy, nonatomic) NSData *backImageData; // @synthesize backImageData=_backImageData;
@property(copy, nonatomic) NSData *frontImageData; // @synthesize frontImageData=_frontImageData;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

