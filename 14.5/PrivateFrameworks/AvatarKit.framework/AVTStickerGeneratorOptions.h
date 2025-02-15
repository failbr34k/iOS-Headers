//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTStickerGeneratorOptions : NSObject
{
    _Bool _correctClipping;
    double _sizeMultiplier;
    double _scaleFactor;
}

+ (id)optionsWithCorrectClipping:(_Bool)arg1;
+ (id)defaultOptions;
@property(nonatomic) _Bool correctClipping; // @synthesize correctClipping=_correctClipping;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) double sizeMultiplier; // @synthesize sizeMultiplier=_sizeMultiplier;
- (id)init;

@end

