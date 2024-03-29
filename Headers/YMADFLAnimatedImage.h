//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, UIImage;
@protocol OS_dispatch_queue;

@interface YMADFLAnimatedImage : NSObject
{
    _Bool _predrawingEnabled;
    UIImage *_posterImage;
    unsigned long long _loopCount;
    NSDictionary *_delayTimesForIndexes;
    unsigned long long _frameCount;
    unsigned long long _frameCacheSizeMax;
    NSData *_data;
    unsigned long long _frameCacheSizeOptimal;
    unsigned long long _frameCacheSizeMaxInternal;
    unsigned long long _requestedFrameIndex;
    unsigned long long _posterImageFrameIndex;
    NSMutableDictionary *_cachedFramesForIndexes;
    NSMutableIndexSet *_cachedFrameIndexes;
    NSMutableIndexSet *_requestedFrameIndexes;
    NSIndexSet *_allFramesIndexSet;
    unsigned long long _memoryWarningCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct CGImageSource *_imageSource;
    YMADFLAnimatedImage *_weakProxy;
    struct CGSize _size;
}

+ (id)predrawnImageFromImage:(id)arg1;
+ (struct CGSize)sizeForImage:(id)arg1;
+ (id)animatedImageWithGIFData:(id)arg1;
+ (void)initialize;
+ (void)logStringFromBlock:(CDUnknownBlockType)arg1 withLevel:(unsigned long long)arg2;
+ (void)setLogBlock:(CDUnknownBlockType)arg1 logLevel:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) YMADFLAnimatedImage *weakProxy; // @synthesize weakProxy=_weakProxy;
@property(readonly, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) unsigned long long memoryWarningCount; // @synthesize memoryWarningCount=_memoryWarningCount;
@property(readonly, nonatomic) NSIndexSet *allFramesIndexSet; // @synthesize allFramesIndexSet=_allFramesIndexSet;
@property(readonly, nonatomic) NSMutableIndexSet *requestedFrameIndexes; // @synthesize requestedFrameIndexes=_requestedFrameIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *cachedFrameIndexes; // @synthesize cachedFrameIndexes=_cachedFrameIndexes;
@property(readonly, nonatomic) NSMutableDictionary *cachedFramesForIndexes; // @synthesize cachedFramesForIndexes=_cachedFramesForIndexes;
@property(readonly, nonatomic) unsigned long long posterImageFrameIndex; // @synthesize posterImageFrameIndex=_posterImageFrameIndex;
@property(nonatomic) unsigned long long requestedFrameIndex; // @synthesize requestedFrameIndex=_requestedFrameIndex;
@property(nonatomic) unsigned long long frameCacheSizeMaxInternal; // @synthesize frameCacheSizeMaxInternal=_frameCacheSizeMaxInternal;
@property(readonly, nonatomic, getter=isPredrawingEnabled) _Bool predrawingEnabled; // @synthesize predrawingEnabled=_predrawingEnabled;
@property(readonly, nonatomic) unsigned long long frameCacheSizeOptimal; // @synthesize frameCacheSizeOptimal=_frameCacheSizeOptimal;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long frameCacheSizeMax; // @synthesize frameCacheSizeMax=_frameCacheSizeMax;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSDictionary *delayTimesForIndexes; // @synthesize delayTimesForIndexes=_delayTimesForIndexes;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
- (id)description;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)resetFrameCacheSizeMaxInternal;
- (void)growFrameCacheSizeAfterMemoryWarning:(id)arg1;
- (void)purgeFrameCacheIfNeeded;
- (id)frameIndexesToCache;
- (id)imageAtIndex:(unsigned long long)arg1;
- (void)addFrameIndexesToCache:(id)arg1;
- (id)imageLazilyCachedAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAnimatedGIFData:(id)arg1 optimalFrameCacheSize:(unsigned long long)arg2 predrawingEnabled:(_Bool)arg3;
- (id)initWithAnimatedGIFData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned long long frameCacheSizeCurrent;

@end

