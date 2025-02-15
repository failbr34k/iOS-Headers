//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DRenderProcessor.h>

@interface TSCH3DRetargetRenderProcessor : TSCH3DRenderProcessor
{
    TSCH3DRenderProcessor *mOriginal;
}

+ (id)processorWithOriginal:(id)arg1;
@property(retain, nonatomic) TSCH3DRenderProcessor *original; // @synthesize original=mOriginal;
- (void)setRenderHints:(const struct RenderHints *)arg1;
- (struct RenderHints)renderHints;
- (void)popRenderState;
- (void)pushRenderState;
- (void)setRenderState:(const struct RenderState *)arg1;
- (struct RenderState)renderState;
- (void)updateRenderState;
- (id)effectsStates;
- (id)effects;
- (void)resetBuffers;
- (void)endFrame;
- (void)beginFrame;
- (void)copyTransformInto:(tmat4x4_3074befe *)arg1;
- (void)copyProjectionInto:(tmat4x4_3074befe *)arg1;
- (void)projection:(tmat4x4_3074befe *)arg1;
- (void)popMatrix;
- (void)pushMatrix;
- (void)translate:(tvec3_17f03ce0 *)arg1;
- (void)scale:(tvec3_17f03ce0 *)arg1;
- (void)multiply:(tmat4x4_3074befe *)arg1;
- (void)replace:(tmat4x4_3074befe *)arg1;
- (void)popState;
- (void)pushState;
- (long long)texture:(id)arg1 resource:(id)arg2 attributes:(const struct TextureAttributes *)arg3;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (void)submit:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOriginal:(id)arg1;
- (_Bool)canRenderPrefilteredLines;

@end

