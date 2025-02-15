//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface MPSNNOptimizerAdam : MPSNNOptimizer
{
    double _beta1;
    double _beta2;
    float _epsilon;
    unsigned long long _timeStep;
    NSObject<OS_dispatch_semaphore> *_timeStepSemaphore;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(nonatomic) unsigned long long timeStep; // @synthesize timeStep=_timeStep;
@property(readonly, nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) double beta2; // @synthesize beta2=_beta2;
@property(readonly, nonatomic) double beta1; // @synthesize beta1=_beta1;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputMomentumVectors:(id)arg3 inputVelocityVectors:(id)arg4 maximumVelocityVectors:(id)arg5 resultState:(id)arg6;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputMomentumVectors:(id)arg3 inputVelocityVectors:(id)arg4 resultState:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputMomentumVectors:(id)arg4 inputVelocityVectors:(id)arg5 maximumVelocityVectors:(id)arg6 resultState:(id)arg7;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputMomentumVectors:(id)arg4 inputVelocityVectors:(id)arg5 resultState:(id)arg6;
- (void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputMomentumVectors:(id)arg4 inputVelocityVectors:(id)arg5 maximumVelocityVectors:(id)arg6 resultState:(id)arg7;
- (void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputMomentumVectors:(id)arg4 inputVelocityVectors:(id)arg5 resultState:(id)arg6;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 inputMomentumMatrix:(id)arg4 inputVelocityMatrix:(id)arg5 maximumVelocityMatrix:(id)arg6 resultValuesMatrix:(id)arg7;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 inputMomentumMatrix:(id)arg4 inputVelocityMatrix:(id)arg5 resultValuesMatrix:(id)arg6;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 inputVelocityVector:(id)arg5 maximumVelocityVector:(id)arg6 resultValuesVector:(id)arg7;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 inputVelocityVector:(id)arg5 resultValuesVector:(id)arg6;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 optimizerDescriptor:(id)arg6;
- (id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 learningRate:(float)arg2;

@end

