//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdScreen : NSObject
{
}

+ (struct CGSize)sizeInOrientation;
+ (struct CGRect)boundsInOrientation;
+ (long long)orientation;
+ (struct CGRect)bounds;
+ (_Bool)isLandscape;
+ (_Bool)isPortrait;
+ (struct CGSize)nativeSize;
+ (struct CGSize)size;
+ (double)nativeScale;
+ (double)scale;
+ (void)recomputeCachedState;
+ (void)initialize;

@end

