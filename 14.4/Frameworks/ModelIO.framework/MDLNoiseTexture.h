//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@interface MDLNoiseTexture : MDLTexture
{
    _Bool _vectorNoise;
    float _smoothness;
    _Bool _grayScale;
    float _frequency;
    int _noiseMode;
}

- (id)initCellularNoiseWithFrequency:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;
- (id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(_Bool)arg5 grayscale: /* Error: Ran out of types for this method. */;
- (id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;
- (id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2;
- (id)_generateCellularNoiseAtLevel:(long long)arg1 selector:(SEL)arg2;

@end

