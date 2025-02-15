//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@interface MPSNNOptimizerStochasticGradientDescent : MPSNNOptimizer
{
    float _momentumScale;
    _Bool _useNesterovMomentum;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(readonly, nonatomic) _Bool useNesterovMomentum; // @synthesize useNesterovMomentum=_useNesterovMomentum;
@property(readonly, nonatomic) float momentumScale; // @synthesize momentumScale=_momentumScale;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputMomentumVectors:(id)arg3 resultState:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputMomentumVectors:(id)arg4 resultState:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputMomentumVectors:(id)arg4 resultState:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 inputMomentumMatrix:(id)arg4 resultValuesMatrix:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 resultValuesVector:(id)arg5;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 momentumScale:(float)arg2 useNestrovMomentum:(_Bool)arg3 optimizerDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 momentumScale:(float)arg2 useNesterovMomentum:(_Bool)arg3 optimizerDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 learningRate:(float)arg2;
@property(readonly, nonatomic) _Bool useNestrovMomentum;

@end

