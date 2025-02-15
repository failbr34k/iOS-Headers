//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaDeviceLockStateChanged : SISchemaInstrumentationMessage
{
    _Bool _isDeviceLocked;
    struct {
        unsigned int isDeviceLocked:1;
    } _has;
}

@property(nonatomic) _Bool isDeviceLocked; // @synthesize isDeviceLocked=_isDeviceLocked;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIsDeviceLocked;

@end

