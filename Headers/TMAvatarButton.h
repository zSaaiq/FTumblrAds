//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "NSCopying-Protocol.h"
#import "TMCustomizable-Protocol.h"
#import "TMEditableBlogHeaderSubview-Protocol.h"

@class NSString, TMAvatarView, UIImage, UIView;

@interface TMAvatarButton : UIButton <TMCustomizable, TMEditableBlogHeaderSubview, NSCopying>
{
    _Bool _parallaxEnabled;
    _Bool _isNSFW;
    double _imageAlpha;
    UIImage *_image;
    NSString *_imageURL;
    long long _avatarShape;
    double _squareCornerRadius;
    NSString *_blogName;
    TMAvatarView *_avatarView;
    UIView *_highlightedView;
}

+ (id)cornerRadiusAnimationFromRadius:(double)arg1 toRadius:(double)arg2;
+ (id)transformAnimationFromValue:(id)arg1 toValue:(id)arg2;
+ (id)buttonWithType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) TMAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool isNSFW; // @synthesize isNSFW=_isNSFW;
@property(retain, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(nonatomic) double squareCornerRadius; // @synthesize squareCornerRadius=_squareCornerRadius;
@property(nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) long long avatarShape; // @synthesize avatarShape=_avatarShape;
@property(readonly, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)stopWiggling;
- (void)startWiggling;
- (void)resetSubviewsCornerRadii;
- (double)innerCornerRadius;
- (double)outerCornerRadius;
- (void)animateToCornerRadius:(double)arg1 innerCornerRadius:(double)arg2 grow:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) id imageLayerContents;
- (void)resetImageContentsToCachedImage;
- (void)anonymize;
- (void)setBlogName:(id)arg1 isPrivate:(_Bool)arg2;
- (void)setBlogName:(id)arg1 isPrivate:(_Bool)arg2 force:(_Bool)arg3 isNSFW:(_Bool)arg4 avatarShape:(long long)arg5;
- (void)setBlogName:(id)arg1 isPrivate:(_Bool)arg2 force:(_Bool)arg3 isNSFW:(_Bool)arg4;
- (void)setAvatarShape:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCustomizationAlpha:(double)arg1;
- (id)titleForCustomizing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
