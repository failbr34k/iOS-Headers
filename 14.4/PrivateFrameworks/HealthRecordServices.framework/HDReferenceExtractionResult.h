//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_completeResources;
    NSArray *_incompleteResources;
    NSArray *_unresolvableReferences;
    NSURL *_nextSearchResultURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *nextSearchResultURL; // @synthesize nextSearchResultURL=_nextSearchResultURL;
@property(readonly, copy, nonatomic) NSArray *unresolvableReferences; // @synthesize unresolvableReferences=_unresolvableReferences;
@property(readonly, copy, nonatomic) NSArray *incompleteResources; // @synthesize incompleteResources=_incompleteResources;
@property(readonly, copy, nonatomic) NSArray *completeResources; // @synthesize completeResources=_completeResources;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompleteResources:(id)arg1 incompleteResources:(id)arg2 unresolvableReferences:(id)arg3 nextSearchResultURL:(id)arg4;

@end

