//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUPlaceholderNode : NURenderNode
{
}

- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (_Bool)isPlaceholderNode;
- (id)initWithInputs:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;

@end

