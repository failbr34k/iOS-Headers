//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetProfileInCarIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSetProfileInCarIntent : PBCodable <_INPBSetProfileInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int defaultProfile:1;
    } _has;
    _Bool _defaultProfile;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_profileName;
    _INPBInteger *_profileNumber;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBInteger *profileNumber; // @synthesize profileNumber=_profileNumber;
@property(retain, nonatomic) _INPBString *profileName; // @synthesize profileName=_profileName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) _Bool defaultProfile; // @synthesize defaultProfile=_defaultProfile;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasProfileNumber;
@property(readonly, nonatomic) _Bool hasProfileName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(nonatomic) _Bool hasDefaultProfile;
@property(readonly, nonatomic) _Bool hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

