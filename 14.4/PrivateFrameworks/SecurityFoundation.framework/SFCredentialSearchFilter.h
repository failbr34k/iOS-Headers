//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSPredicate;
@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter : NSObject <NSCopying, NSSecureCoding>
{
    id _credentialSearchFilterInternal;
    NSPredicate *_attributesPredicate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPredicate *attributesPredicate; // @synthesize attributesPredicate=_attributesPredicate;
@property(retain, nonatomic) NSArray *usernames;
@property(retain, nonatomic) NSArray<_SFServiceIdentifier> *serviceIdentifiers;
@property(retain, nonatomic) NSDate *maximumModificationDate;
@property(retain, nonatomic) NSDate *minimumModificationDate;
@property(retain, nonatomic) NSDate *maximumCreationDate;
@property(retain, nonatomic) NSDate *minimumCreationDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

