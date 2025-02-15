//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKAppletSubcredential, PKAppletSubcredentialEntitlement, PKPaymentPass;

@interface PKAppletSubcredentialSharingRequest : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _forLocalDevice;
    PKPaymentPass *_pass;
    PKAppletSubcredential *_credential;
    NSString *_passIdentifier;
    NSString *_credentialIdentifier;
    PKAppletSubcredentialEntitlement *_entitlement;
    NSString *_recipientIdentifier;
    NSString *_recipientName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isForLocalDevice) _Bool forLocalDevice; // @synthesize forLocalDevice=_forLocalDevice;
@property(copy, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // @synthesize entitlement=_entitlement;
@property(readonly, copy, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
@property(readonly, copy, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
@property(retain, nonatomic) PKAppletSubcredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)invitations;
- (id)credentialWithIdentifier:(id)arg1;
- (id)credentialForPass:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;

@end

