//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DFloatVectorDataBuffer.h>

@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer
{
    vector_ccfc515b _container;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)elementsAtIndices:(id)arg1;
- (unsigned long long)componentByteSize;
- (unsigned long long)components;
- (unsigned long long)count;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_ccfc515b *container;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

