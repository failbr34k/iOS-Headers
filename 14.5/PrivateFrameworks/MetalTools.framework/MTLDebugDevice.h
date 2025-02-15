//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsDevice.h>

@interface MTLDebugDevice : MTLToolsDevice
{
    struct MTLSamplerDescriptorHashMap _argumentBufferSamplers;
    struct os_unfair_lock_s _referenceTrackingCommandBufferLock;
    struct unordered_set<MTLDebugCommandBuffer *, std::__1::hash<MTLDebugCommandBuffer *>, std::__1::equal_to<MTLDebugCommandBuffer *>, std::__1::allocator<MTLDebugCommandBuffer *>> _referenceTrackingCommandBuffers;
    struct CheckerboardRenderTargetPipelineCache _checkerboardRTPipelineCache;
    _Bool _storeValidationEnabled;
    _Bool _loadValidationEnabled;
}

+ (_Bool)complainAboutSloppyTextureUsage;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) _Bool loadValidationEnabled; // @synthesize loadValidationEnabled=_loadValidationEnabled;
@property(readonly) _Bool storeValidationEnabled; // @synthesize storeValidationEnabled=_storeValidationEnabled;
- (void)clearRenderEncoder:(id)arg1 writeMask:(unsigned long long)arg2 withCheckerboard:(float *)arg3;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (CDStruct_14f26992)accelerationStructureSizesWithDescriptor:(id)arg1;
- (void)notifyExternalReferencesNonZeroOnDealloc:(id)arg1;
- (void)removeReferenceTrackingCommandBuffer:(id)arg1;
- (void)addReferenceTrackingCommandBuffer:(id)arg1;
- (id)newFence;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newSharedEvent;
- (id)newEvent;
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (const struct MTLTargetDeviceArch *)targetDeviceInfo;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(_Bool)arg2;
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id *)arg3;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;
- (id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)validateLinkedFunctions:(id)arg1;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (_Bool)validateDynamicLibraryURL:(id)arg1 error:(id *)arg2;
- (_Bool)validateDynamicLibrary:(id)arg1 state:(_Bool)arg2 error:(id *)arg3;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id *)arg2;
- (id)newDynamicLibrary:(id)arg1 error:(id *)arg2;
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id *)arg2;
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (void)notifySamplerStateDeallocated:(id)arg1;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2 context:(struct _MTLMessageContext *)arg3;
- (void)validateResourceOptions:(unsigned long long)arg1 isTexture:(_Bool)arg2 isIOSurface:(_Bool)arg3 context:(struct _MTLMessageContext *)arg4;
- (void)validateMemorylessResource:(id)arg1 context:(struct _MTLMessageContext *)arg2;
- (id)newHeapWithDescriptor:(id)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newCommandQueue;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end

