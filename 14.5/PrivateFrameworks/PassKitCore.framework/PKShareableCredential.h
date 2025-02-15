//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKShareableCredential : NSObject <NSSecureCoding, NSCopying>
{
    PKEncryptedPushProvisioningTarget *_encryptedPushProvisioningTarget;
    unsigned long long _status;
    NSString *_ownerDisplayName;
    NSString *_credentialIdentifier;
    NSString *_credentialIdentifierHash;
    NSString *_sharingInstanceIdentifier;
    NSString *_cardConfigurationIdentifier;
    NSString *_nonce;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *cardConfigurationIdentifier; // @synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier;
@property(retain, nonatomic) NSString *sharingInstanceIdentifier; // @synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier;
@property(retain, nonatomic) NSString *credentialIdentifierHash; // @synthesize credentialIdentifierHash=_credentialIdentifierHash;
@property(retain, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
@property(retain, nonatomic) NSString *ownerDisplayName; // @synthesize ownerDisplayName=_ownerDisplayName;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget; // @synthesize encryptedPushProvisioningTarget=_encryptedPushProvisioningTarget;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToShareableCredential:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protoCredential;
- (id)initWithProtoCredential:(id)arg1;

@end

