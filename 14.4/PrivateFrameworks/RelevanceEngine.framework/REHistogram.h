//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class REFeature;

@interface REHistogram : NSObject <NSCopying>
{
    REFeature *_feature;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (void)removeValue:(unsigned long long)arg1;
- (void)addValue:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long standardDeviation;
@property(readonly, nonatomic) unsigned long long mean;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (id)initWithFeature:(id)arg1;

@end

