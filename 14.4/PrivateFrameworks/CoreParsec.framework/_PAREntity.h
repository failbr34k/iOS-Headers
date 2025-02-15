//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PAREntity-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PAREntity : PBCodable <_PAREntity, NSSecureCoding>
{
    float _probabilityScore;
    int _category;
    NSString *_name;
    NSArray *_topics;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(nonatomic) int category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) float probabilityScore; // @synthesize probabilityScore=_probabilityScore;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)arg1;
- (void)clearTopics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

