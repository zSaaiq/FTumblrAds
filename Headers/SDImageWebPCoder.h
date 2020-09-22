//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAnimatedImageCoder-Protocol.h"
#import "SDProgressiveImageCoder-Protocol.h"

@class NSArray, NSData, NSString;
@protocol OS_dispatch_semaphore;

@interface SDImageWebPCoder : NSObject <SDProgressiveImageCoder, SDAnimatedImageCoder>
{
    struct WebPIDecoder *_idec;
    struct WebPDemuxer *_demux;
    NSData *_imageData;
    double _scale;
    unsigned long long _loopCount;
    unsigned long long _frameCount;
    NSArray *_frames;
    struct CGContext *_canvas;
    struct CGColorSpace *_colorSpace;
    _Bool _hasAnimation;
    _Bool _hasAlpha;
    _Bool _finished;
    double _canvasWidth;
    double _canvasHeight;
    NSObject<OS_dispatch_semaphore> *_lock;
    unsigned long long _currentBlendIndex;
    _Bool _preserveAspectRatio;
    struct CGSize _thumbnailSize;
}

+ (id)sharedCoder;
- (void).cxx_destruct;
- (id)safeAnimatedImageFrameAtIndex:(unsigned long long)arg1;
- (id)safeStaticImageFrame;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
@property(readonly, copy, nonatomic) NSData *animatedImageData;
- (_Bool)scanAndCheckFramesValidWithDemuxer:(struct WebPDemuxer *)arg1;
- (id)initWithAnimatedImageData:(id)arg1 options:(id)arg2;
- (id)sd_encodedWebpDataWithImage:(struct CGImage *)arg1 quality:(double)arg2 maxPixelSize:(struct CGSize)arg3 maxFileSize:(unsigned long long)arg4;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2 options:(id)arg3;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (struct CGColorSpace *)sd_createColorSpaceWithDemuxer:(struct WebPDemuxer *)arg1;
- (double)sd_frameDurationWithIterator:(struct WebPIterator)arg1;
- (struct CGImage *)sd_createWebpImageWithData:(struct WebPData)arg1 colorSpace:(struct CGColorSpace *)arg2 scaledSize:(struct CGSize)arg3;
- (struct CGImage *)sd_drawnWebpImageWithCanvas:(struct CGContext *)arg1 iterator:(struct WebPIterator)arg2 colorSpace:(struct CGColorSpace *)arg3 scaledSize:(struct CGSize)arg4;
- (void)sd_blendWebpImageWithCanvas:(struct CGContext *)arg1 iterator:(struct WebPIterator)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (id)incrementalDecodedImageWithOptions:(id)arg1;
- (void)updateIncrementalData:(id)arg1 finished:(_Bool)arg2;
- (id)initIncrementalWithOptions:(id)arg1;
- (id)decodedImageWithData:(id)arg1 options:(id)arg2;
- (_Bool)canIncrementalDecodeFromData:(id)arg1;
- (_Bool)canDecodeFromData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

