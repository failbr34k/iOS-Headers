//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDScorecardLayout : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_ratingCategorys;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_ratingCategorys:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)ratingCategoryType;
- (void).cxx_destruct;
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
- (id)ratingCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)ratingCategorysCount;
- (void)addRatingCategory:(id)arg1;
- (void)clearRatingCategorys;
@property(retain, nonatomic) NSMutableArray *ratingCategorys;
@property(retain, nonatomic) NSString *version;
@property(readonly, nonatomic) _Bool hasVersion;
- (id)initWithData:(id)arg1;
- (id)init;

@end

