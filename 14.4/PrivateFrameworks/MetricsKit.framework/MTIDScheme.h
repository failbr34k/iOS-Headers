//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface MTIDScheme : NSObject <NSSecureCoding>
{
    _Bool _isDefault;
    NSString *_idNamespace;
    long long _idType;
    long long _rotationSchedule;
    long long _lifespan;
    NSArray *_correlations;
    NSString *_version;
    NSString *_containerIdentifier;
    unsigned long long _localHash;
    unsigned long long _correlationHash;
    NSArray *_topics;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(nonatomic) unsigned long long correlationHash; // @synthesize correlationHash=_correlationHash;
@property(nonatomic) unsigned long long localHash; // @synthesize localHash=_localHash;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSArray *correlations; // @synthesize correlations=_correlations;
@property(nonatomic) long long lifespan; // @synthesize lifespan=_lifespan;
@property(nonatomic) long long rotationSchedule; // @synthesize rotationSchedule=_rotationSchedule;
@property(nonatomic) long long idType; // @synthesize idType=_idType;
@property(copy, nonatomic) NSString *idNamespace; // @synthesize idNamespace=_idNamespace;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)calculateHash;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) double maxPastTimeInterval;
@property(readonly, nonatomic) double maxFutureTimeInterval;
@property(readonly, nonatomic) unsigned long long storagePoolSize;
- (void)overrideLifespanMaybe;
- (id)initWithNamespace:(id)arg1 type:(long long)arg2;
- (id)initWithNamespace:(id)arg1 options:(id)arg2;

@end

