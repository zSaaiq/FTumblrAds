//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr33PanoramaDeviceMotionOffsetUpdater : NSObject
{
    MISSING_TYPE *contentSize;
    MISSING_TYPE *frameSize;
    MISSING_TYPE *horizontalRotationMultiplier;
    MISSING_TYPE *verticalRotationMultiplier;
}

- (id)init;
- (struct CGPoint)updatedOffsetForDeviceMotionWithCurrentOffset:(struct CGPoint)arg1 xRotation:(double)arg2 yRotation:(double)arg3 zRotation:(double)arg4;
- (id)initWithFrameSize:(struct CGSize)arg1 contentSize:(struct CGSize)arg2 horizontalRotationMultiplier:(double)arg3 verticalRotationMultiplier:(double)arg4;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize;

@end

