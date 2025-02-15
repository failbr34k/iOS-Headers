//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPRequest.h>

@class VCPImageHumanPoseAnalyzer;

@interface VCPHumanPoseImageRequest : VCPRequest
{
    VCPImageHumanPoseAnalyzer *_analyzer;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
}

+ (int)parseResults:(id)arg1 observations:(id)arg2;
- (void).cxx_destruct;
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;
- (unsigned int)preferredPixelFormat;
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)updateWithOptions:(id)arg1 error:(id *)arg2;
- (id)processImage:(struct __CVBuffer *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

