//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData, NSString;

@interface LTSchemaLocaleConfidence : SISchemaInstrumentationMessage
{
    NSString *_locale;
    unsigned int _confidence;
    struct {
        unsigned int confidence:1;
    } _has;
    _Bool _hasLocale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLocale; // @synthesize hasLocale=_hasLocale;
@property(nonatomic) unsigned int confidence; // @synthesize confidence=_confidence;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasConfidence;

@end

