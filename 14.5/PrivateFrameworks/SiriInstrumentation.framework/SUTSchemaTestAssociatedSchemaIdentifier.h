//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData, SUTSchemaTestGeneratedTurnID;

@interface SUTSchemaTestAssociatedSchemaIdentifier : SISchemaInstrumentationMessage
{
    SUTSchemaTestGeneratedTurnID *_turnID;
    _Bool _hasTurnID;
    unsigned long long _whichIdentifier_Type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasTurnID; // @synthesize hasTurnID=_hasTurnID;
@property(readonly, nonatomic) unsigned long long whichIdentifier_Type; // @synthesize whichIdentifier_Type=_whichIdentifier_Type;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) SUTSchemaTestGeneratedTurnID *turnID; // @synthesize turnID=_turnID;

@end

