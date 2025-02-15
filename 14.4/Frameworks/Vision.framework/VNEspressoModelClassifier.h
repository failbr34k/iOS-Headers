//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VNEspressoModelClassifier : VNDetector
{
    shared_ptr_b26ea6de mDescriptorProcessor;
    shared_ptr_047f28ed mClassifier;
    NSSet *_blacklistedIdentifiers;
}

+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;
+ (id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1;
+ (void)convertRelationships:(id)arg1 toStdRelationships:(vector_153622dc *)arg2;
+ (shared_ptr_eb20c8f2)createHierarchicalModelForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2;
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)blacklistedIdentifiers;
- (id)getLabels;
- (_Bool)_calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 descriptorBuffer:(shared_ptr_0a6daad2 *)arg5 debugIntermediatesDumpPath:(id)arg6 outputDebugDictionary:(id)arg7 error:(id *)arg8;
- (id)calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 error:(id *)arg5;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;

@end

