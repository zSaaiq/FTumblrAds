//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11ImageLoader18BlurImageOperation : NSObject
{
    MISSING_TYPE *averageBrightnessLimit;
    MISSING_TYPE *darkenAlpha;
    MISSING_TYPE *blurRadius;
    MISSING_TYPE *saturationDeltaFactor;
    MISSING_TYPE *maxWidthForBlurring;
    MISSING_TYPE *customTintColor;
}

- (void).cxx_destruct;
- (id)transformWithImage:(id)arg1 referenceViewSize:(struct CGSize)arg2;
- (id)initWithBlurRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3;
- (id)initWithBlurRadius:(double)arg1;
- (id)init;

@end

