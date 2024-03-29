//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseGIFEncoder.h"

@class NSArray;

@interface LegacyGIFEncoder : BaseGIFEncoder
{
    unsigned long long _result;
    NSArray *_imageURLs;
    NSArray *_images;
}

+ (void)setLoopCount:(unsigned long long)arg1 destination:(struct CGImageDestination *)arg2;
+ (void)addImage:(id)arg1 toDestination:(struct CGImageDestination *)arg2 frameDuration:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (unsigned long long)result;
- (void)finalizeDestination:(struct CGImageDestination *)arg1;
- (void)cleanup;
- (void)handleCancel;
- (void)updateProgressForFrameIndex:(unsigned long long)arg1 numberOfFrames:(unsigned long long)arg2;
- (id)imageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFrames;
- (void)execute;
- (_Bool)initializedWithValidInput;
- (id)initWithFrameImagePathURLs:(id)arg1 outputURL:(id)arg2 delayPerFrame:(double)arg3;
- (id)initWithFrameImages:(id)arg1 outputURL:(id)arg2 delayPerFrame:(double)arg3;
- (id)initWithGIFURL:(id)arg1 delayBetweenFrames:(double)arg2;

@end

