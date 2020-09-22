//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_TtP11TumblrTheme9TMTheming_-Protocol.h"
#import "_TtP8TumblrUI19TMImageViewDelegate_-Protocol.h"

@class NSString, _TtC8TumblrUI11TMImageView;
@protocol TMBlogCardHeaderImageViewDelegate;

@interface TMBlogCardHeaderImageView : UIView <_TtP8TumblrUI19TMImageViewDelegate_, _TtP11TumblrTheme9TMTheming_>
{
    _Bool _shouldStretchHeaderImage;
    id <TMBlogCardHeaderImageViewDelegate> _delegate;
    NSString *_imageURLString;
    double _stretchHeaderTopInset;
    _TtC8TumblrUI11TMImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStretchHeaderImage; // @synthesize shouldStretchHeaderImage=_shouldStretchHeaderImage;
@property(retain, nonatomic) _TtC8TumblrUI11TMImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double stretchHeaderTopInset; // @synthesize stretchHeaderTopInset=_stretchHeaderTopInset;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(nonatomic) __weak id <TMBlogCardHeaderImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTheming:(id)arg1;
- (void)imageViewDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)imageViewDidFinishLoading:(id)arg1;
- (void)imageViewDidCompleteFade:(id)arg1;
- (void)imageViewContentsDidChange:(id)arg1;
- (id)image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
