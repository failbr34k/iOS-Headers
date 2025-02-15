//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray, NSString, NSURL, VCPCNNModelEspresso;

@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer
{
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    float *_inputData;
    NSString *_resConfig;
    NSMutableArray *_persons;
    NSMutableArray *_results;
    _Bool _saveKeypoints;
    int _inputWidth;
    int _inputHeight;
    float *_heatmapNms;
    _Bool _forceCPU;
    _Bool _sharedModel;
    _Bool _flushModel;
    _Bool _trackingMode;
}

+ (id)sharedModel:(id)arg1;
+ (_Bool)saveKeypoints;
- (void).cxx_destruct;
@property _Bool trackingMode; // @synthesize trackingMode=_trackingMode;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;
- (int)createModelWithHeight:(int)arg1 srcWidth:(int)arg2;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;
- (int)generateHumanPose:(struct __CVBuffer *)arg1;
- (int)processPersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)parsePersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)preferredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;
- (int)updateModelForAspectRatio:(id)arg1;
- (int)configForAspectRatio:(id)arg1;
- (void)dealloc;
- (int)reInitModel;
- (id)initWithKeypointsOption:(_Bool)arg1 aspectRatio:(id)arg2 lightweight:(_Bool)arg3 forceCPU:(_Bool)arg4 sharedModel:(_Bool)arg5 flushModel:(_Bool)arg6;
- (id)init;

@end

