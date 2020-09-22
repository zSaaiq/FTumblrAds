//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdUpdatableView-Protocol.h"

@class NSString, UIImage, UIImageView, UIVisualEffectView;

@interface FBAdBlurredImageView : UIView <FBAdUpdatableView>
{
    _Bool _showBlurImageOnly;
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_blurredImageView;
    UIVisualEffectView *_blurEffectView;
}

+ (void)initialize;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(nonatomic) _Bool showBlurImageOnly; // @synthesize showBlurImageOnly=_showBlurImageOnly;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)updateView:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setupViewsWithImage:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

