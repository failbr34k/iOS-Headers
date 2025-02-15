//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPRecord, FCCKPRecordIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable <NSCopying>
{
    NSString *_etag;
    FCCKPRecordIdentifier *_identifier;
    FCCKPRecord *_record;
    int _type;
    CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) FCCKPRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) FCCKPRecordIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRecord;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;

@end

