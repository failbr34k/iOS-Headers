//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDialingContactValue-Protocol.h>

@class NSString, _INPBContactValue, _INPBStringValue;

@interface _INPBDialingContactValue : PBCodable <_INPBDialingContactValue, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBContactValue *_dialingContact;
    _INPBStringValue *_dialingPhoneLabel;
    _INPBStringValue *_dialingPhoneNumber;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBStringValue *dialingPhoneNumber; // @synthesize dialingPhoneNumber=_dialingPhoneNumber;
@property(retain, nonatomic) _INPBStringValue *dialingPhoneLabel; // @synthesize dialingPhoneLabel=_dialingPhoneLabel;
@property(retain, nonatomic) _INPBContactValue *dialingContact; // @synthesize dialingContact=_dialingContact;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasDialingPhoneNumber;
@property(readonly, nonatomic) _Bool hasDialingPhoneLabel;
@property(readonly, nonatomic) _Bool hasDialingContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

