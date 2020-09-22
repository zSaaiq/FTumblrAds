//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFFrameSource-Protocol.h"
#import "FNFFramesBufferManaging-Protocol.h"

@class FNFCircularFramesBuffer, NSString;

@interface FNFPlayerFramesBuffer : NSObject <FNFFrameSource, FNFFramesBufferManaging>
{
    int _decompressedBufferSize;
    int _sampleBufferRequestThreshold;
    unsigned long long _framesLoop;
    unsigned long long _lastSuggestedFrame;
    unsigned long long _framesDecompressed;
    FNFCircularFramesBuffer *_circularBuffer;
    unsigned long long _decompressionSessionIndexStart;
    unsigned long long _framesEnqueued;
    unsigned long long _framesRead;
    unsigned long long _framesStale;
    unsigned long long _framesFlushed;
    unsigned long long _framesDisplayed;
    unsigned long long _frameToClose;
}

- (void).cxx_destruct;
- (unsigned long long)framesRead;
- (unsigned long long)framesDecompressed;
- (int)bufferSize;
@property(readonly, copy) NSString *description;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 decompressionSession:(id)arg2 enqueueInfo:(id)arg3;
- (void)resetDecompressionSessionIndex;
- (CDUnknownBlockType)addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 iFrameEnqueued:(unsigned long long)arg3;
- (CDUnknownBlockType)addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (CDUnknownBlockType)prepareFlush;
- (void)clear;
- (void)advanceFrame;
- (_Bool)isFrameOnClose:(unsigned long long)arg1;
- (void)setFrameOnClose;
- (void)setLastFrameDisplayed;
- (struct FNFFrameBufferData)_getNextFrame:(CDStruct_1b6d18a9)arg1 withDrawingOn:(_Bool)arg2 bufferIndex:(unsigned long long)arg3 framesRead:(unsigned long long)arg4;
- (struct FNFFrameBufferData)findNextFrame:(CDStruct_1b6d18a9)arg1 withDrawingOn:(_Bool)arg2 isFirstFrame:(_Bool)arg3;
- (_Bool)seekFrameUpdatesFinished;
- (_Bool)isFull;
- (void)setSampleBufferRequestThreshold:(int)arg1;
- (_Bool)doesIFrameBelongsToDecompressionSession:(unsigned long long)arg1;
- (_Bool)shouldRequestData;
- (void)dealloc;
- (id)initWithBufferSize:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

