//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTLCompileOptions, MTLComputePipelineDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLIndirectCommandBufferDescriptor, MTLRasterizationRateMapDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLSharedEventHandle, MTLSharedTextureHandle, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSBundle, NSString, NSURL, OS_dispatch_data;
@protocol MTLArgumentEncoder, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLEvent, MTLFence, MTLFunction, MTLHeap, MTLIndirectCommandBuffer, MTLLibrary, MTLRasterizationRateMap, MTLRenderPipelineState, MTLSamplerState, MTLSharedEvent, MTLTexture;

@protocol MTLDevice <NSObject>
- (_Bool)supportsVertexAmplificationCount:(long long)arg1;
@property(nonatomic, readonly) long long maxBufferLength;
@property(nonatomic, readonly) long long sparseTileSizeInBytes;
- (CDStruct_14f26992)sparseTileSizeWithTextureType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 sampleCount:(long long)arg3;
- (id <MTLSharedEvent>)newSharedEventWithHandle:(MTLSharedEventHandle *)arg1;
- (id <MTLSharedEvent>)newSharedEvent;
- (id <MTLEvent>)newEvent;
- (id <MTLIndirectCommandBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCommandCount:(long long)arg2 options:(unsigned long long)arg3;
- (id <MTLRasterizationRateMap>)newRasterizationRateMapWithDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;
- (_Bool)supportsRasterizationRateMapWithLayerCount:(long long)arg1;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(long long)arg2;
- (_Bool)areProgrammableSamplePositionsSupported;
@property(nonatomic, readonly) long long maxArgumentBufferSamplerCount;
@property(nonatomic, readonly) long long maxThreadgroupMemoryLength;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
- (long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)supportsTextureSampleCount:(long long)arg1;
- (_Bool)supportsFamily:(long long)arg1;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (id <MTLFence>)newFence;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg3;
- (id <MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithData:(OS_dispatch_data *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibrary;
- (id <MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id <MTLTexture>)newSharedTextureWithHandle:(MTLSharedTextureHandle *)arg1;
- (id <MTLTexture>)newSharedTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(long long)arg3;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, long long))arg4;
- (id <MTLBuffer>)newBufferWithBytes:(void *)arg1 length:(long long)arg2 options:(unsigned long long)arg3;
- (id <MTLBuffer>)newBufferWithLength:(long long)arg1 options:(unsigned long long)arg2;
- (id <MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(long long)arg1;
- (id <MTLCommandQueue>)newCommandQueue;
@property(nonatomic, readonly) long long currentAllocatedSize;
- (_Bool)areRasterOrderGroupsSupported;
@property(nonatomic, readonly) unsigned long long argumentBuffersSupport;
@property(nonatomic, readonly) unsigned long long readWriteTextureSupport;
- (_Bool)isDepth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(nonatomic, readonly) _Bool hasUnifiedMemory;
- (_Bool)isRemovable;
- (_Bool)isHeadless;
- (_Bool)isLowPower;
@property(nonatomic, readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(nonatomic, readonly) unsigned long long registryID;
@property(nonatomic, readonly) NSString *name;

@optional
- (void)convertSparseTileRegions:(const CDStruct_4c83c94d *)arg1 toPixelRegions:(CDStruct_4c83c94d *)arg2 withTileSize:(CDStruct_14f26992)arg3 numRegions:(long long)arg4;
- (void)convertSparsePixelRegions:(const CDStruct_4c83c94d *)arg1 toTileRegions:(CDStruct_4c83c94d *)arg2 withTileSize:(CDStruct_14f26992)arg3 alignmentMode:(unsigned long long)arg4 numRegions:(long long)arg5;

// Remaining properties
@property(nonatomic, readonly) _Bool depth24Stencil8PixelFormatSupported;
@property(nonatomic, readonly) _Bool headless;
@property(nonatomic, readonly) _Bool lowPower;
@property(nonatomic, readonly) _Bool programmableSamplePositionsSupported;
@property(nonatomic, readonly) _Bool rasterOrderGroupsSupported;
@property(nonatomic, readonly) _Bool removable;
@end

