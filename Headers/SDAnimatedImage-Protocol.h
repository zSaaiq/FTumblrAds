//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAnimatedImageProvider-Protocol.h"

@class NSData, NSDictionary;
@protocol SDAnimatedImageCoder;

@protocol SDAnimatedImage <SDAnimatedImageProvider>
- (id)initWithAnimatedCoder:(id <SDAnimatedImageCoder>)arg1 scale:(double)arg2;
- (id)initWithData:(NSData *)arg1 scale:(double)arg2 options:(NSDictionary *)arg3;

@optional
@property(readonly, nonatomic) id <SDAnimatedImageCoder> animatedCoder;
@property(readonly, nonatomic, getter=isAllFramesLoaded) _Bool allFramesLoaded;
- (void)unloadAllFrames;
- (void)preloadAllFrames;
@end
