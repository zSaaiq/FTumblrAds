//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMCustomizableHeaderImage-Protocol.h"
#import "TMHeaderParallaxControllerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr20AnswerTimeHeaderView : UIView <TMCustomizableHeaderImage, TMHeaderParallaxControllerDelegate>
{
    MISSING_TYPE *askButton;
    MISSING_TYPE *bannerImageURL;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *detailLabel;
    MISSING_TYPE *liveIcon;
    MISSING_TYPE *navigationLiveIcon;
    MISSING_TYPE *bannerView;
    MISSING_TYPE *isLive;
    MISSING_TYPE *shouldFade;
    MISSING_TYPE *labelConstraints;
    MISSING_TYPE *numberOfLines;
    MISSING_TYPE *titleWidth;
    MISSING_TYPE *$__lazy_storage_$_imageDarkeningOverlay;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (void)headerParallaxController:(id)arg1 didUpdateOffset:(double)arg2;
- (void)clippingImageViewFrameChanged:(struct CGRect)arg1 scale:(double)arg2;
- (void)titleTapped:(id)arg1;
- (void)askButtonTapped:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

