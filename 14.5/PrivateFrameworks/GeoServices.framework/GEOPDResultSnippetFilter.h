//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippetFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedChildActions;
    int _maxChildItems;
    int _maxChildPlaces;
    _Bool _supportChildItems;
    struct {
        unsigned int has_maxChildItems:1;
        unsigned int has_maxChildPlaces:1;
        unsigned int has_supportChildItems:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSupportedChildActions:(id)arg1;
- (id)supportedChildActionsAsString:(int)arg1;
- (void)setSupportedChildActions:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedChildActionAtIndex:(unsigned long long)arg1;
- (void)addSupportedChildAction:(int)arg1;
- (void)clearSupportedChildActions;
@property(readonly, nonatomic) int *supportedChildActions;
@property(readonly, nonatomic) unsigned long long supportedChildActionsCount;
@property(nonatomic) _Bool hasMaxChildItems;
@property(nonatomic) int maxChildItems;
@property(nonatomic) _Bool hasSupportChildItems;
@property(nonatomic) _Bool supportChildItems;
@property(nonatomic) _Bool hasMaxChildPlaces;
@property(nonatomic) int maxChildPlaces;
- (void)dealloc;

@end

