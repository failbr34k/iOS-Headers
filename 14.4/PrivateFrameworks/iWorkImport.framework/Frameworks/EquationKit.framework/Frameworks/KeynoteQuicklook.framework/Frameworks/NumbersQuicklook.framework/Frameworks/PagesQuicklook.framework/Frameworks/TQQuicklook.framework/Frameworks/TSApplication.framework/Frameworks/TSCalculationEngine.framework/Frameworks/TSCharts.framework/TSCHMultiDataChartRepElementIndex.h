//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying>
{
    unsigned long long mSeriesIndex;
    unsigned long long mValueIndex;
}

+ (id)repElementIndexWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long valueIndex; // @synthesize valueIndex=mValueIndex;
@property(readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
- (id)valueIndexSet;
- (id)seriesIndexSet;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;

@end

