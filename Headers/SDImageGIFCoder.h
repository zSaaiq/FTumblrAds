//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDImageIOAnimatedCoder.h"

#import "SDAnimatedImageCoder-Protocol.h"
#import "SDProgressiveImageCoder-Protocol.h"

@class NSData, NSString;

@interface SDImageGIFCoder : SDImageIOAnimatedCoder <SDProgressiveImageCoder, SDAnimatedImageCoder>
{
}

+ (unsigned long long)defaultLoopCount;
+ (id)loopCountProperty;
+ (id)delayTimeProperty;
+ (id)unclampedDelayTimeProperty;
+ (id)dictionaryProperty;
+ (id)imageUTType;
+ (long long)imageFormat;
+ (id)sharedCoder;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *animatedImageData;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

