//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_itemDescription;
    NSString *_serviceProviderIdentifier;
    NSDictionary *_serviceProviderData;
    unsigned long long _paymentInstrumentType;
    NSData *_appletValue;
    NSString *_transactionIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSData *appletValue; // @synthesize appletValue=_appletValue;
@property(nonatomic) unsigned long long paymentInstrumentType; // @synthesize paymentInstrumentType=_paymentInstrumentType;
@property(copy, nonatomic) NSDictionary *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_paymentInstrumentDictionary;
- (id)_itemDictionary;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

