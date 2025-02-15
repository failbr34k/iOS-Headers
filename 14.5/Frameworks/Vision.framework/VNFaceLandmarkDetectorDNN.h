//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceLandmarkDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector
{
    struct shared_ptr<vision::mod::LandmarkDetectorDNN> _landmarkDetector;
    vector_f48c7054 _landmarkPoints65;
}

+ (const map_781928e9 *)_requestConstellationToDetectorConstellationMap;
+ (id)outputBlobNames;
+ (id)inputBlobNames;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseResources;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(vector_f48c7054 *)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 error:(id *)arg4;
- (_Bool)getLandmarkOcclusionFlags:(vector_a7cf9eda *)arg1 forConstellation:(int)arg2 error:(id *)arg3;
- (_Bool)getLandmarkErrorEstimates:(vector_7584168e *)arg1 forConstellation:(int)arg2 error:(id *)arg3;
- (_Bool)getLandmarkPoints:(vector_f48c7054 *)arg1 forConstellation:(int)arg2 error:(id *)arg3;
- (_Bool)getConstellation:(unsigned long long *)arg1 cvmlConstellation:(int *)arg2 fromOptions:(id)arg3 error:(id *)arg4;
@property(readonly) vector_f48c7054 *landmarkPoints65;

@end

