//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface HKAuthorizationPresentationRequest : NSObject <NSSecureCoding>
{
    _Bool _dismissWhenBackgrounded;
    long long _type;
    NSString *_readUsageDescription;
    NSString *_shareUsageDescription;
    NSString *_researchStudyUsageDescription;
    NSSet *_typesRequiringReadAuthorization;
    NSSet *_typesRequiringShareAuthorization;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=shouldDismissWhenBackgrounded) _Bool dismissWhenBackgrounded; // @synthesize dismissWhenBackgrounded=_dismissWhenBackgrounded;
@property(copy, nonatomic) NSSet *typesRequiringShareAuthorization; // @synthesize typesRequiringShareAuthorization=_typesRequiringShareAuthorization;
@property(copy, nonatomic) NSSet *typesRequiringReadAuthorization; // @synthesize typesRequiringReadAuthorization=_typesRequiringReadAuthorization;
@property(copy, nonatomic) NSString *researchStudyUsageDescription; // @synthesize researchStudyUsageDescription=_researchStudyUsageDescription;
@property(copy, nonatomic) NSString *shareUsageDescription; // @synthesize shareUsageDescription=_shareUsageDescription;
@property(copy, nonatomic) NSString *readUsageDescription; // @synthesize readUsageDescription=_readUsageDescription;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

