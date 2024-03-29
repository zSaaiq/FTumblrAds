//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol FNFDecompressionSessionDelegate;

@protocol FNFDecompressionSession <NSObject>
+ (NSString *)errorDomain;
+ (id)alloc;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *format;
- (struct CGSize)inputSize;
- (unsigned char)canAcceptFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 iFrame:(unsigned long long)arg2 enqueueInfo:(NSDictionary *)arg3;
- (void)closeSession;
- (id)initWithDelegate:(id <FNFDecompressionSessionDelegate>)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 videoSize:(struct CGSize)arg3 numOfDecoderThreads:(unsigned int)arg4 async:(_Bool)arg5 config:(struct FNFDecompressionConfig)arg6 pixelBufferPool:(struct __CVPixelBufferPool *)arg7;
@end

