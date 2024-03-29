//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAnimatedImageCoder-Protocol.h"
#import "SDProgressiveImageCoder-Protocol.h"

@class NSArray, NSData, NSString;

@interface SDImageIOAnimatedCoder : NSObject <SDProgressiveImageCoder, SDAnimatedImageCoder>
{
    unsigned long long _width;
    unsigned long long _height;
    struct CGImageSource *_imageSource;
    NSData *_imageData;
    double _scale;
    unsigned long long _loopCount;
    unsigned long long _frameCount;
    NSArray *_frames;
    _Bool _finished;
    _Bool _preserveAspectRatio;
    struct CGSize _thumbnailSize;
}

+ (id)createFrameAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2 scale:(double)arg3 preserveAspectRatio:(_Bool)arg4 thumbnailSize:(struct CGSize)arg5 options:(id)arg6;
+ (double)frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
+ (unsigned long long)imageLoopCountWithSource:(struct CGImageSource *)arg1;
+ (unsigned long long)defaultLoopCount;
+ (id)loopCountProperty;
+ (id)delayTimeProperty;
+ (id)unclampedDelayTimeProperty;
+ (id)dictionaryProperty;
+ (id)imageUTType;
+ (long long)imageFormat;
- (void).cxx_destruct;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
@property(readonly, copy, nonatomic) NSData *animatedImageData;
- (_Bool)scanAndCheckFramesValidWithImageSource:(struct CGImageSource *)arg1;
- (id)initWithAnimatedImageData:(id)arg1 options:(id)arg2;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2 options:(id)arg3;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (id)incrementalDecodedImageWithOptions:(id)arg1;
- (void)updateIncrementalData:(id)arg1 finished:(_Bool)arg2;
- (id)initIncrementalWithOptions:(id)arg1;
- (_Bool)canIncrementalDecodeFromData:(id)arg1;
- (id)decodedImageWithData:(id)arg1 options:(id)arg2;
- (_Bool)canDecodeFromData:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

