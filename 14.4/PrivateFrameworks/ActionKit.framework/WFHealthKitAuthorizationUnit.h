//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class HKObjectType;

@interface WFHealthKitAuthorizationUnit : NSObject <NSSecureCoding>
{
    HKObjectType *_objectType;
    long long _accessType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long accessType; // @synthesize accessType=_accessType;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithObjectType:(id)arg1 accessType:(long long)arg2;

@end

