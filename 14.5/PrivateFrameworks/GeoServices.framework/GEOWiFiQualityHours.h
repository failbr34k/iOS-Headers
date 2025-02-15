//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEOWiFiQualityHours : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _days;
    struct GEOWiFiQualityTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (void)setTimeRanges:(struct GEOWiFiQualityTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOWiFiQualityTimeRange)timeRangesAtIndex:(unsigned long long)arg1;
- (void)addTimeRanges:(struct GEOWiFiQualityTimeRange)arg1;
- (void)clearTimeRanges;
@property(readonly, nonatomic) struct GEOWiFiQualityTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
- (int)StringAsDays:(id)arg1;
- (id)daysAsString:(int)arg1;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (int)daysAtIndex:(unsigned long long)arg1;
- (void)addDays:(int)arg1;
- (void)clearDays;
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

