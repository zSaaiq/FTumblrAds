//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SDImageCoderHelper : NSObject
{
}

+ (_Bool)shouldScaleDownImage:(id)arg1 limitBytes:(unsigned long long)arg2;
+ (_Bool)shouldDecodeImage:(id)arg1;
+ (unsigned int)exifOrientationFromImageOrientation:(long long)arg1;
+ (long long)imageOrientationFromEXIFOrientation:(unsigned int)arg1;
+ (void)setDefaultScaleDownLimitBytes:(unsigned long long)arg1;
+ (unsigned long long)defaultScaleDownLimitBytes;
+ (id)decodedAndScaledDownImageWithImage:(id)arg1 limitBytes:(unsigned long long)arg2;
+ (id)decodedImageWithImage:(id)arg1;
+ (struct CGImage *)CGImageCreateScaled:(struct CGImage *)arg1 size:(struct CGSize)arg2;
+ (struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
+ (struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg1;
+ (_Bool)CGImageContainsAlpha:(struct CGImage *)arg1;
+ (struct CGColorSpace *)colorSpaceGetDeviceRGB;
+ (id)framesFromAnimatedImage:(id)arg1;
+ (id)animatedImageWithFrames:(id)arg1;

@end

