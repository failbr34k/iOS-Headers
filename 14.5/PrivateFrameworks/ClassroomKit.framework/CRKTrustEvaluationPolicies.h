//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CRKTrustEvaluationPolicies : NSObject
{
    NSArray *_policyRefs;
}

+ (id)defaultPolicicesForServerEvaluation;
+ (id)defaultPoliciesForClientEvaluation;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *policyRefs; // @synthesize policyRefs=_policyRefs;
- (id)initWithPolicyRefs:(id)arg1;
- (id)init;

@end

