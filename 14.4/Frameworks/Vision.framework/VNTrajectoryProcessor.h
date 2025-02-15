//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, CIFilter, CIImage, ParabolaDetetction, VNDetectContoursRequest, VNImageBuffer;

__attribute__((visibility("hidden")))
@interface VNTrajectoryProcessor : NSObject
{
    CIContext *_ciContext;
    CIFilter *_absoluteDiffFilter;
    CIFilter *_thresholdFilter;
    CIFilter *_dilateFilter;
    CIFilter *_contrastFilter;
    VNDetectContoursRequest *_detectContoursRequest;
    VNImageBuffer *_previousFrameBuffer;
    CIImage *_previousFrameImage;
    unsigned long long _maximumImageDimension;
    float _preScaleFactor;
    float _dilateRadius;
    CDStruct_1b6d18a9 _frameAnalysisSpacing;
    CDStruct_1b6d18a9 _lastAnalyzedFramePTS;
    CDStruct_1b6d18a9 _nextFrameToBeAnalyzedPTS;
    _Bool _processAllFrames;
    struct CGColorSpace *_sRGB;
    ParabolaDetetction *_parabolaDetector;
    unsigned long long _currentImageWidth;
    unsigned long long _currentImageHeight;
}

- (void).cxx_destruct;
- (id)processVNImageBuffer:(id)arg1 regionOfInterest:(struct CGRect)arg2 withOptions:(id)arg3 warningRecorder:(id)arg4 requestUUID:(id)arg5 error:(id *)arg6;
- (id)_VNPointsFromCGPoints:(const vector_e1abc270 *)arg1;
- (struct __CVBuffer *)_createCroppedAndScaledBufferFromVNImageBuffer:(id)arg1 regionOfInterest:(struct CGRect)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithFrameAnalysisSpacing:(CDStruct_1b6d18a9)arg1 trajectoryLength:(long long)arg2;

@end

