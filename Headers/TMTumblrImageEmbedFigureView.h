//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, TMClickThroughButton, _TtC8TumblrUI11TMImageView;

@interface TMTumblrImageEmbedFigureView : UIView
{
    NSURL *_imageURL;
    TMClickThroughButton *_clickthroughButton;
    _TtC8TumblrUI11TMImageView *_imageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC8TumblrUI11TMImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) TMClickThroughButton *clickthroughButton; // @synthesize clickthroughButton=_clickthroughButton;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithImageCache:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
