//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDGPUDataBufferAttribute;

@protocol TSDGPUDataBufferAccessor <NSObject>
- (void)setMetalPoint4D:(CDStruct_83984b6f)arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_83984b6f)metalPoint4DForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setMetalPoint3D:(CDStruct_869f9c67)arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_869f9c67)metalPoint3DForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setMetalPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_6e3f967a)metalPoint2DForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setMetalFloat:(float)arg1 forAttribute:(TSDGPUDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (float)metalFloatForAttribute:(TSDGPUDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
@end

