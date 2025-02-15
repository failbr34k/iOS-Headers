//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, PBDataReader;

@interface GEOLPRRoot : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableDictionary *_powerTypes;
    NSMutableArray *_regions;
    NSMutableDictionary *_vehicleTypes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    CDStruct_4ca0835f _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)vehicleTypesType;
+ (Class)powerTypesType;
+ (Class)regionsType;
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
- (unsigned long long)vehicleTypesCount;
- (void)enumerateVehicleTypesUsingBlock:(CDUnknownBlockType)arg1;
- (id)vehicleTypesForKey:(id)arg1;
- (void)setVehicleTypesValue:(id)arg1 forKey:(id)arg2;
- (void)clearVehicleTypes;
@property(retain, nonatomic) NSMutableDictionary *vehicleTypes;
- (unsigned long long)powerTypesCount;
- (void)enumeratePowerTypesUsingBlock:(CDUnknownBlockType)arg1;
- (id)powerTypesForKey:(id)arg1;
- (void)setPowerTypesValue:(id)arg1 forKey:(id)arg2;
- (void)clearPowerTypes;
@property(retain, nonatomic) NSMutableDictionary *powerTypes;
- (id)regionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionsCount;
- (void)addRegions:(id)arg1;
- (void)clearRegions;
@property(retain, nonatomic) NSMutableArray *regions;
- (id)initWithData:(id)arg1;
- (id)init;

@end

