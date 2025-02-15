//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _containedBys;
    CDStruct_62a50c50 _sectionIds;
    unsigned long long _buildingId;
    unsigned long long _featureId;
    unsigned long long _fixtureId;
    unsigned long long _geminiId;
    unsigned long long _levelId;
    unsigned long long _unitId;
    unsigned long long _venueGeminiId;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _levelOrdinal;
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_featureId:1;
        unsigned int has_fixtureId:1;
        unsigned int has_geminiId:1;
        unsigned int has_levelId:1;
        unsigned int has_unitId:1;
        unsigned int has_venueGeminiId:1;
        unsigned int has_venueId:1;
        unsigned int has_levelOrdinal:1;
        unsigned int read_unknownFields:1;
        unsigned int read_containedBys:1;
        unsigned int read_sectionIds:1;
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
@property(nonatomic) _Bool hasVenueGeminiId;
@property(nonatomic) unsigned long long venueGeminiId;
@property(nonatomic) _Bool hasGeminiId;
@property(nonatomic) unsigned long long geminiId;
- (void)setContainedBys:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)containedByAtIndex:(unsigned long long)arg1;
- (void)addContainedBy:(unsigned long long)arg1;
- (void)clearContainedBys;
@property(readonly, nonatomic) unsigned long long *containedBys;
@property(readonly, nonatomic) unsigned long long containedBysCount;
@property(nonatomic) _Bool hasFeatureId;
@property(nonatomic) unsigned long long featureId;
@property(nonatomic) _Bool hasLevelOrdinal;
@property(nonatomic) int levelOrdinal;
@property(nonatomic) _Bool hasFixtureId;
@property(nonatomic) unsigned long long fixtureId;
@property(nonatomic) _Bool hasUnitId;
@property(nonatomic) unsigned long long unitId;
- (void)setSectionIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)sectionIdAtIndex:(unsigned long long)arg1;
- (void)addSectionId:(unsigned long long)arg1;
- (void)clearSectionIds;
@property(readonly, nonatomic) unsigned long long *sectionIds;
@property(readonly, nonatomic) unsigned long long sectionIdsCount;
@property(nonatomic) _Bool hasLevelId;
@property(nonatomic) unsigned long long levelId;
@property(nonatomic) _Bool hasBuildingId;
@property(nonatomic) unsigned long long buildingId;
@property(nonatomic) _Bool hasVenueId;
@property(nonatomic) unsigned long long venueId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifier:(id)arg4;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;

@end

