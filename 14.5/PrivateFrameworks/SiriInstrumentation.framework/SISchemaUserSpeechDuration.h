//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData, NSString;

@interface SISchemaUserSpeechDuration : SISchemaInstrumentationMessage
{
    long long _durationMs;
    NSString *_resultCandidateId;
    struct {
        unsigned int durationMs:1;
    } _has;
    _Bool _hasResultCandidateId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasResultCandidateId; // @synthesize hasResultCandidateId=_hasResultCandidateId;
@property(copy, nonatomic) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
@property(nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasDurationMs;

@end

