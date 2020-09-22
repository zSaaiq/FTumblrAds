//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface GIFReader : NSObject
{
    _Bool _allFrameDelaysAreTheSame;
    NSArray *_frames;
    unsigned long long _loopCount;
    unsigned long long _numberOfFrames;
    NSArray *_frameDelays;
    double _frameDelay;
    struct CGImageSource *_imageSource;
    NSURL *_url;
    struct CGSize _actualGIFSize;
    struct CGSize _reportedGIFSize;
}

+ (struct CGSize)reportedGIFSizeForImageSource:(struct CGImageSource *)arg1;
+ (id)gifDelayForIndex:(unsigned long long)arg1 imageSource:(struct CGImageSource *)arg2;
+ (double)areAllFrameDelaysTheSameForFrameDelays:(id)arg1;
+ (id)frameDelaysFromImageSource:(struct CGImageSource *)arg1;
+ (unsigned long long)loopCountForImageSource:(struct CGImageSource *)arg1;
+ (id)framePropertiesForIndex:(unsigned long long)arg1 imageSource:(struct CGImageSource *)arg2;
+ (id)gifPropertiesFromProperties:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) double frameDelay; // @synthesize frameDelay=_frameDelay;
@property(readonly, nonatomic) _Bool allFrameDelaysAreTheSame; // @synthesize allFrameDelaysAreTheSame=_allFrameDelaysAreTheSame;
@property(readonly, nonatomic) NSArray *frameDelays; // @synthesize frameDelays=_frameDelays;
@property(readonly, nonatomic) unsigned long long numberOfFrames; // @synthesize numberOfFrames=_numberOfFrames;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
- (id)frameForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGSize actualGIFSize; // @synthesize actualGIFSize=_actualGIFSize;
@property(readonly, nonatomic) struct CGSize reportedGIFSize; // @synthesize reportedGIFSize=_reportedGIFSize;
@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (id)frameAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (_Bool)initializedWithURL:(id)arg1;
- (id)initWithLocalGIFURL:(id)arg1;
- (id)init;

@end

