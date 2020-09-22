//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFFramesBufferManaging-Protocol.h"

@class FNFListFramesBuffer, NSString;

@interface FNFThreadSafePlayerFramesBufferManagerV2 : NSObject <FNFFramesBufferManaging>
{
    int _bufferSize;
    int _sampleBufferRequestThreshold;
    unsigned long long _dataRequestCounter;
    FNFListFramesBuffer *_listFrameBuffer;
    struct atomic<unsigned long long> _framesEnqueued;
    unsigned long long _decompressionSessionIndexStart;
    unsigned long long _framesStale;
    unsigned long long _framesFlushed;
    unsigned long long _frameToClose;
    struct mutex _framesBufferMutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 decompressionSession:(id)arg2 enqueueInfo:(id)arg3;
- (CDUnknownBlockType)addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 iFrameEnqueued:(unsigned long long)arg3;
- (CDUnknownBlockType)addBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (CDUnknownBlockType)prepareFlush;
- (void)clear;
- (void)advanceFrame;
- (_Bool)isFrameOnClose:(unsigned long long)arg1;
- (void)setFrameOnClose;
- (void)setLastFrameDisplayed;
- (struct FNFFrameBufferData)findNextFrame:(CDStruct_1b6d18a9)arg1 withDrawingOn:(_Bool)arg2 isFirstFrame:(_Bool)arg3;
- (_Bool)seekFrameUpdatesFinished;
- (_Bool)isFull;
- (void)setSampleBufferRequestThreshold:(int)arg1;
- (_Bool)doesIFrameBelongsToDecompressionSession:(unsigned long long)arg1;
- (void)resetDecompressionSessionIndex;
- (_Bool)shouldRequestData;
- (void)dealloc;
- (id)initWithBufferSize:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

