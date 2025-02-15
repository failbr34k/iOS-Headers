//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CPLFaceInstance : PBCodable <NSCopying>
{
    double _centerX;
    double _centerY;
    double _size;
    unsigned int _faceState;
    unsigned int _nameSource;
    NSString *_personIdentifier;
    NSMutableArray *_rejectedPersonIdentifiers;
    struct {
        unsigned int centerX:1;
        unsigned int centerY:1;
        unsigned int size:1;
        unsigned int faceState:1;
        unsigned int nameSource:1;
    } _has;
}

+ (Class)rejectedPersonIdentifiersType;
- (void).cxx_destruct;
@property(nonatomic) unsigned int nameSource; // @synthesize nameSource=_nameSource;
@property(retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers; // @synthesize rejectedPersonIdentifiers=_rejectedPersonIdentifiers;
@property(nonatomic) unsigned int faceState; // @synthesize faceState=_faceState;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(retain, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNameSource;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedPersonIdentifiersCount;
- (void)addRejectedPersonIdentifiers:(id)arg1;
- (void)clearRejectedPersonIdentifiers;
@property(nonatomic) _Bool hasFaceState;
@property(nonatomic) _Bool hasSize;
@property(nonatomic) _Bool hasCenterY;
@property(nonatomic) _Bool hasCenterX;
@property(readonly, nonatomic) _Bool hasPersonIdentifier;
- (_Bool)_isFaceStateBitSet:(unsigned int)arg1;
- (void)_setFaceStateBit:(unsigned int)arg1 fromBoolValue:(_Bool)arg2;
@property(nonatomic, getter=isManual) _Bool manual;
@property(nonatomic, getter=isKeyFace) _Bool keyFace;
@property(readonly, nonatomic, getter=isNoneState) _Bool noneState;
- (void)clearState;
- (id)pointerDescription;
- (long long)compare:(id)arg1;

@end

