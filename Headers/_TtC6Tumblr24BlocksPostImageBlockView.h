//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMPostImageViewDelegate-Protocol.h"
#import "_TtP8TumblrUI19TMImageViewDelegate_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr24BlocksPostImageBlockView : UIView <_TtP8TumblrUI19TMImageViewDelegate_, TMPostImageViewDelegate>
{
    MISSING_TYPE *imageView;
    MISSING_TYPE *delegate;
    MISSING_TYPE *attributionLabel;
    MISSING_TYPE *appAttributionView;
    MISSING_TYPE *mediaAttribution;
    MISSING_TYPE *appAttribution;
    MISSING_TYPE *cta;
    MISSING_TYPE *imageBlock;
    MISSING_TYPE *$__lazy_storage_$_blurredMediaOverlay;
}

- (void).cxx_destruct;
- (void)onTapBlurredImage;
- (void)appAttributionTapped;
- (void)attributionLabelTapped;
- (void)postImageViewTapped:(id)arg1;
- (void)postImageView:(id)arg1 longPressedAtPosition:(struct CGPoint)arg2;
- (void)imageViewDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)imageViewDidCompleteFade:(id)arg1;
- (void)imageViewContentsDidChange:(id)arg1;
- (void)imageViewDidFinishLoading:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

