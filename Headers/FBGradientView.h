//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface FBGradientView : UIView
{
}

+ (Class)layerClass;
+ (id)newWithColors:(id)arg1 locations:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 backgroundColor:(id)arg5 opacity:(double)arg6;
+ (id)newWithColors:(id)arg1 locations:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 opacity:(double)arg5;
+ (id)newWithColors:(id)arg1 locations:(id)arg2 opacity:(double)arg3;
+ (id)newWithColors:(id)arg1 opacity:(double)arg2;
+ (id)newWithColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint)arg1;
- (void)setStartPoint:(struct CGPoint)arg1;
- (void)setLocations:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setOpacity:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

