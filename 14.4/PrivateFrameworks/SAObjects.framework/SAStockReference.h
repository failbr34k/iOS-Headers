//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject
{
}

+ (id)referenceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reference;
@property(copy, nonatomic) NSString *symbol;
@property(copy, nonatomic) NSString *companyName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

