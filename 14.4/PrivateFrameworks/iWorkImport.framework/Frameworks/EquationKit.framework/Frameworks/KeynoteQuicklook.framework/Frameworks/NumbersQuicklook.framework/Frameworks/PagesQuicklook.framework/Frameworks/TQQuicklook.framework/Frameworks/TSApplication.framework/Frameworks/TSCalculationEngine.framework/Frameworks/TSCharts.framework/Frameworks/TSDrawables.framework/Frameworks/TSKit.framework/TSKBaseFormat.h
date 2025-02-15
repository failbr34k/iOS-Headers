//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKFormat.h>

#import <TSKit/NSCopying-Protocol.h>

@interface TSKBaseFormat : TSKFormat <NSCopying>
{
    unsigned char _base;
    unsigned char _basePlaces;
    _Bool _baseUseMinusSign;
}

+ (id)defaultHexadecimalFormat;
@property(readonly, nonatomic) _Bool baseUseMinusSign; // @synthesize baseUseMinusSign=_baseUseMinusSign;
@property(readonly, nonatomic) unsigned char basePlaces; // @synthesize basePlaces=_basePlaces;
@property(readonly, nonatomic) unsigned char base; // @synthesize base=_base;
- (id)asBaseFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBase:(unsigned char)arg1 basePlaces:(unsigned char)arg2 baseUseMinusSign:(_Bool)arg3;
- (id)initWithFormatType:(unsigned int)arg1;

@end

