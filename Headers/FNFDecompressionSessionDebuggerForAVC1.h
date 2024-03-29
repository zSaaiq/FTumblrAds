//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FNFDecompressionSessionDebuggerForAVC1 : NSObject
{
    struct CGSize _inputSize;
    NSString *_codec;
    struct map<unsigned long long, opaqueCMSampleBuffer *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, opaqueCMSampleBuffer *>>> _samples;
    NSMutableDictionary *_debugInfos;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportError:(int)arg1 sample:(struct opaqueCMSampleBuffer *)arg2 sampleIndex:(unsigned long long)arg3 isFirstFrame:(_Bool)arg4 supplemental:(id)arg5;
- (void)reportWarning:(id)arg1 sample:(struct opaqueCMSampleBuffer *)arg2 isFirstFrame:(_Bool)arg3 supplemental:(id)arg4;
- (id)debugInfoAt:(unsigned long long)arg1;
- (struct opaqueCMSampleBuffer *)sampleAt:(unsigned long long)arg1;
- (void)removeSampleAt:(unsigned long long)arg1;
- (void)addSample:(struct opaqueCMSampleBuffer *)arg1 index:(unsigned long long)arg2 debugInfo:(id)arg3;
- (void)decrementSessionCount;
- (void)incrementSessionCount;
- (void)dealloc;
- (id)initWithFormat:(struct opaqueCMFormatDescription *)arg1;

@end

