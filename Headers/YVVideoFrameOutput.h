//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface YVVideoFrameOutput : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    CDStruct_505dd565 _sampleTimingInfo;
}

@property(readonly, nonatomic) CDStruct_505dd565 sampleTimingInfo; // @synthesize sampleTimingInfo=_sampleTimingInfo;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 sampleTimingInfo:(CDStruct_505dd565)arg2;

@end

