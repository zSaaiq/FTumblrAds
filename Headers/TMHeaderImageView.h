//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMCustomizable-Protocol.h"
#import "TMEditableBlogHeaderSubview-Protocol.h"
#import "_TtP11TumblrTheme16AppColorScheming_-Protocol.h"
#import "_TtP11TumblrTheme9TMTheming_-Protocol.h"
#import "_TtP8TumblrUI19TMImageViewDelegate_-Protocol.h"

@class NSString, TMLoadingControl, UIColor, UIImage, UIVisualEffectView, _TtC8TumblrUI11TMImageView;
@protocol TMCustomizableHeaderImage;

@interface TMHeaderImageView : UIView <_TtP8TumblrUI19TMImageViewDelegate_, TMCustomizable, TMEditableBlogHeaderSubview, _TtP11TumblrTheme9TMTheming_, _TtP11TumblrTheme16AppColorScheming_>
{
    _Bool _sticky;
    _Bool _shouldBlur;
    _Bool _stretchHeaderImage;
    _Bool _showsAvatar;
    _Bool _loading;
    _Bool _fadeInImageView;
    _Bool _containsTransparentImage;
    _Bool _navigationBarHeightHasBeenSet;
    double _maskHeight;
    UIView *_containerView;
    _TtC8TumblrUI11TMImageView *_imageView;
    double _imageViewHeight;
    NSString *_imageURL;
    UIColor *_failedImageFillColor;
    id <TMCustomizableHeaderImage> _customizableDelegate;
    double _blurAlpha;
    double _navigationBarHeight;
    CDUnknownBlockType _imageLoadedBlock;
    TMLoadingControl *_loader;
    unsigned long long _indexOfContainerSubview;
    UIView *_clippingView;
    UIView *_shadowClippingView;
    UIVisualEffectView *_blurView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool navigationBarHeightHasBeenSet; // @synthesize navigationBarHeightHasBeenSet=_navigationBarHeightHasBeenSet;
@property(nonatomic) _Bool containsTransparentImage; // @synthesize containsTransparentImage=_containsTransparentImage;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *shadowClippingView; // @synthesize shadowClippingView=_shadowClippingView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic, getter=shouldFadeInImageView) _Bool fadeInImageView; // @synthesize fadeInImageView=_fadeInImageView;
@property(nonatomic) unsigned long long indexOfContainerSubview; // @synthesize indexOfContainerSubview=_indexOfContainerSubview;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) TMLoadingControl *loader; // @synthesize loader=_loader;
@property(nonatomic, getter=shouldShowAvatar) _Bool showsAvatar; // @synthesize showsAvatar=_showsAvatar;
@property(nonatomic, getter=shouldStretchHeaderImage) _Bool stretchHeaderImage; // @synthesize stretchHeaderImage=_stretchHeaderImage;
@property(nonatomic) __weak CDUnknownBlockType imageLoadedBlock; // @synthesize imageLoadedBlock=_imageLoadedBlock;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) double blurAlpha; // @synthesize blurAlpha=_blurAlpha;
@property(nonatomic) _Bool shouldBlur; // @synthesize shouldBlur=_shouldBlur;
@property(nonatomic, getter=isSticky) _Bool sticky; // @synthesize sticky=_sticky;
@property(nonatomic) __weak id <TMCustomizableHeaderImage> customizableDelegate; // @synthesize customizableDelegate=_customizableDelegate;
@property(retain, nonatomic) UIColor *failedImageFillColor; // @synthesize failedImageFillColor=_failedImageFillColor;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) double imageViewHeight; // @synthesize imageViewHeight=_imageViewHeight;
@property(readonly, nonatomic) _TtC8TumblrUI11TMImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double maskHeight; // @synthesize maskHeight=_maskHeight;
- (void)imageViewDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)imageViewDidCompleteFade:(id)arg1;
- (void)imageViewContentsDidChange:(id)arg1;
- (void)imageViewDidFinishLoading:(id)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)updateTheming:(id)arg1;
- (void)setCustomizationAlpha:(double)arg1;
- (void)stopWiggling;
- (void)startWiggling;
- (id)titleForCustomizing;
@property(retain, nonatomic) UIImage *image;
- (void)layoutImageView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

