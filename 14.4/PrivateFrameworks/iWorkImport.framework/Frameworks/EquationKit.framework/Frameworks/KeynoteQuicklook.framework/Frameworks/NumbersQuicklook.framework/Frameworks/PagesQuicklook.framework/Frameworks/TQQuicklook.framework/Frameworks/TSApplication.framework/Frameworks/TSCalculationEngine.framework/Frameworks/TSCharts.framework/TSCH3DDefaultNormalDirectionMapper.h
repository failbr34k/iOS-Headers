//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DNormalDirectionMapper.h>

@interface TSCH3DDefaultNormalDirectionMapper : TSCH3DNormalDirectionMapper
{
    tvec3_17f03ce0 mNormalBias;
}

+ (id)mapperWithNormalBias:(const tvec3_17f03ce0 *)arg1;
- (id).cxx_construct;
- (void)mapFromVertexArray:(const tvec3_17f03ce0 *)arg1 normalArray:(const tvec3_17f03ce0 *)arg2 normalMatrix:(const tmat3x3_b39cd897 *)arg3 numVertices:(long long)arg4 destination:(vector_aab22ae2 *)arg5;
- (id)initWithNormalBias:(const tvec3_17f03ce0 *)arg1;

@end

