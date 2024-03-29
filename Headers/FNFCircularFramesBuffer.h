//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FNFCircularFramesBuffer : NSObject
{
    unsigned long long _bufferSize;
    struct FNFFrameBufferDataInternal *_bufferDataInternal;
}

- (unsigned long long)_moduloIndexFromIndex:(unsigned long long)arg1;
- (struct FNFFrameBufferIndexInternal)findNextFrameIndexFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 currentPlaybackTime:(CDStruct_1b6d18a9)arg3 displayBestFrameAvailable:(_Bool)arg4;
- (struct FNFFrameBufferIndexInternal)findFirstFrameIndexFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (struct FNFFrameBufferDataInternal)frameDataAtIndex:(unsigned long long)arg1;
- (void)setFrameData:(struct FNFFrameBufferDataInternal)arg1 atIndex:(unsigned long long)arg2;
- (void)clearFrameBufferFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithBufferSize:(unsigned long long)arg1;

@end

