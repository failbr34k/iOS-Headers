//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOLatLng, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_correctedAddressSecondaryStreetLine;
    GEOAddress *_correctedAddress;
    GEOLatLng *_correctedCoordinate;
    NSString *_customLabel;
    double _lastUpdateDate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _hasSubmittedRAP;
    struct {
        unsigned int has_lastUpdateDate:1;
        unsigned int has_hasSubmittedRAP:1;
        unsigned int read_unknownFields:1;
        unsigned int read_correctedAddressSecondaryStreetLine:1;
        unsigned int read_correctedAddress:1;
        unsigned int read_correctedCoordinate:1;
        unsigned int read_customLabel:1;
        unsigned int wrote_anyField:1;
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
@property(nonatomic) _Bool hasHasSubmittedRAP;
@property(nonatomic) _Bool hasSubmittedRAP;
@property(nonatomic) _Bool hasLastUpdateDate;
@property(nonatomic) double lastUpdateDate;
@property(retain, nonatomic) NSString *customLabel;
@property(readonly, nonatomic) _Bool hasCustomLabel;
@property(retain, nonatomic) NSString *correctedAddressSecondaryStreetLine;
@property(readonly, nonatomic) _Bool hasCorrectedAddressSecondaryStreetLine;
@property(retain, nonatomic) GEOAddress *correctedAddress;
@property(readonly, nonatomic) _Bool hasCorrectedAddress;
@property(retain, nonatomic) GEOLatLng *correctedCoordinate;
@property(readonly, nonatomic) _Bool hasCorrectedCoordinate;
- (id)initWithData:(id)arg1;
- (id)init;

@end

