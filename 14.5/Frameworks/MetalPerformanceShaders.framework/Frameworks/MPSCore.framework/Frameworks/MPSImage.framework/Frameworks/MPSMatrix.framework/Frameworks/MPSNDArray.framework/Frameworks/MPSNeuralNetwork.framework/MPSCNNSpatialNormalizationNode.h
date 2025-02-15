//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNSpatialNormalizationNode : MPSCNNNormalizationNode
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
}

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
@property(nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1;

@end

