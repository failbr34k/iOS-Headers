//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration
{
    _Bool _detectsDarkOnLight;
    _Bool _inHierarchy;
    _Bool _forceUseInputCVPixelBufferDirectly;
    float _contrastAdjustment;
    unsigned long long _maximumImageDimension;
}

@property(nonatomic) _Bool forceUseInputCVPixelBufferDirectly; // @synthesize forceUseInputCVPixelBufferDirectly=_forceUseInputCVPixelBufferDirectly;
@property(nonatomic) _Bool inHierarchy; // @synthesize inHierarchy=_inHierarchy;
@property(nonatomic) unsigned long long maximumImageDimension; // @synthesize maximumImageDimension=_maximumImageDimension;
@property(nonatomic) _Bool detectsDarkOnLight; // @synthesize detectsDarkOnLight=_detectsDarkOnLight;
@property(nonatomic) float contrastAdjustment; // @synthesize contrastAdjustment=_contrastAdjustment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

