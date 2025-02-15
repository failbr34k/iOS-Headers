//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDSiriServerConnectionFailed : PBCodable <NSCopying>
{
    long long _errorCode;
    unsigned long long _timestamp;
    int _connectionType;
    NSString *_errorDomain;
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int connectionType:1;
    } _has;
}

@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

