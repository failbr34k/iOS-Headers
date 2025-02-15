//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSSet, NSString, SASyncAppMetaData;

@interface AFSyncInfo : NSObject <NSSecureCoding>
{
    _Bool _targetIsLocal;
    _Bool _forVerification;
    NSString *_anchor;
    NSString *_validity;
    long long _count;
    NSString *_key;
    SASyncAppMetaData *_appMetadata;
    NSSet *_reasons;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *reasons; // @synthesize reasons=_reasons;
@property(nonatomic) _Bool forVerification; // @synthesize forVerification=_forVerification;
@property(nonatomic) _Bool targetIsLocal; // @synthesize targetIsLocal=_targetIsLocal;
@property(copy, nonatomic) SASyncAppMetaData *appMetadata; // @synthesize appMetadata=_appMetadata;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithAnchor:(id)arg1 forcingReset:(_Bool)arg2;

@end

