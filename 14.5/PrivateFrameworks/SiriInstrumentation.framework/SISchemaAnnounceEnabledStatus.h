//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaAnnounceEnabledStatus : SISchemaInstrumentationMessage
{
    _Bool _announceMessagesEnabled;
    _Bool _announceCallsEnabled;
    struct {
        unsigned int announceMessagesEnabled:1;
        unsigned int announceCallsEnabled:1;
    } _has;
}

@property(nonatomic) _Bool announceCallsEnabled; // @synthesize announceCallsEnabled=_announceCallsEnabled;
@property(nonatomic) _Bool announceMessagesEnabled; // @synthesize announceMessagesEnabled=_announceMessagesEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasAnnounceCallsEnabled;
@property(nonatomic) _Bool hasAnnounceMessagesEnabled;

@end

