//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSExternalPluginBase-Protocol.h>

@class NSArray;
@protocol MTLBuffer, MTLCommandBuffer, MTLComputeCommandEncoder;

@protocol MPSExternalCNNUnary <MPSExternalPluginBase>

@optional
- (unsigned long long)encodeBatchToCommandBuffer:(id <MTLCommandBuffer>)arg1 computeCommandEncoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 sourceTextures:(NSArray *)arg5 sourceInfo:(const CDStruct_12100558 *)arg6 destinationTextures:(NSArray *)arg7 destinationInfo:(const CDStruct_5948169e *)arg8 predicationBuffer:(id <MTLBuffer>)arg9 predicationOffset:(unsigned long long)arg10;
@end

