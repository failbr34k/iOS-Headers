//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying>
{
    NSString *_extensionName;
    NSData *_extensionPayload;
    unsigned int _typeCode;
    struct {
        unsigned int typeCode:1;
    } _has;
}

@property(retain, nonatomic) NSData *extensionPayload; // @synthesize extensionPayload=_extensionPayload;
@property(nonatomic) unsigned int typeCode; // @synthesize typeCode=_typeCode;
@property(retain, nonatomic) NSString *extensionName; // @synthesize extensionName=_extensionName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasExtensionPayload;
@property(nonatomic) _Bool hasTypeCode;
@property(readonly, nonatomic) _Bool hasExtensionName;
- (void)dealloc;

@end

