//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCH3DChartShadowsBlurParameters : NSObject
{
    float _quality;
    long long _numPasses;
    long long _shadowSize;
    float _kernelScale;
}

+ (id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;
@property(nonatomic) float kernelScale; // @synthesize kernelScale=_kernelScale;
@property(nonatomic) long long shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic) long long numPasses; // @synthesize numPasses=_numPasses;
@property(nonatomic) float quality; // @synthesize quality=_quality;
- (id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;

@end

