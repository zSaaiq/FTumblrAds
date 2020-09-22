//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIVisualEffectView;

@interface FBAdBlurredOverlayView : UIView
{
    UIImageView *_backgroundImageView;
    UIVisualEffectView *_blurEffectView;
    UIView *_overlayView;
}

@property(nonatomic) __weak UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViewWithImage:(id)arg1 andOverlayColor:(id)arg2;
- (void)setupBackgroundImageViewWithImage:(id)arg1;
- (void)setupBlurEffectView;
- (void)setupOverlayViewWithColor:(id)arg1;
- (id)initWithBackgroundImage:(id)arg1 andOverlayColor:(id)arg2;
- (id)initWithBackgroundImage:(id)arg1;

@end

