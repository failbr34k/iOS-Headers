//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdvisoryNotice, GEOClickableAdvisory, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOAdvisoriesInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOClickableAdvisory *_clickableAdvisory;
    GEOAdvisoryNotice *_evAdvisory;
    NSMutableArray *_incidentAdvisorys;
    NSMutableArray *_noticeAdvisorys;
    GEOAdvisoryNotice *_tollAdvisory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_clickableAdvisory:1;
        unsigned int read_evAdvisory:1;
        unsigned int read_incidentAdvisorys:1;
        unsigned int read_noticeAdvisorys:1;
        unsigned int read_tollAdvisory:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)incidentAdvisoryType;
+ (Class)noticeAdvisoryType;
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
- (id)incidentAdvisoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentAdvisorysCount;
- (void)addIncidentAdvisory:(id)arg1;
- (void)clearIncidentAdvisorys;
@property(retain, nonatomic) NSMutableArray *incidentAdvisorys;
@property(retain, nonatomic) GEOAdvisoryNotice *evAdvisory;
@property(readonly, nonatomic) _Bool hasEvAdvisory;
@property(retain, nonatomic) GEOAdvisoryNotice *tollAdvisory;
@property(readonly, nonatomic) _Bool hasTollAdvisory;
@property(retain, nonatomic) GEOClickableAdvisory *clickableAdvisory;
@property(readonly, nonatomic) _Bool hasClickableAdvisory;
- (id)noticeAdvisoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)noticeAdvisorysCount;
- (void)addNoticeAdvisory:(id)arg1;
- (void)clearNoticeAdvisorys;
@property(retain, nonatomic) NSMutableArray *noticeAdvisorys;
- (id)initWithData:(id)arg1;
- (id)init;

@end

