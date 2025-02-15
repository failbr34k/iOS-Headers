//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetBinarySettingIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSettingMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetBinarySettingIntent : PBCodable <_INPBSetBinarySettingIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int binaryValue:1;
    } _has;
    int _binaryValue;
    _INPBIntentMetadata *_intentMetadata;
    _INPBSettingMetadata *_settingMetadata;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata; // @synthesize settingMetadata=_settingMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int binaryValue; // @synthesize binaryValue=_binaryValue;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsBinaryValue:(id)arg1;
- (id)binaryValueAsString:(int)arg1;
@property(nonatomic) _Bool hasBinaryValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

