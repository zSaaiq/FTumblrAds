//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MISSING_TYPE, UIColor;

@interface _TtC6Tumblr25SponsoredDecorationButton : UIButton
{
    MISSING_TYPE *advertisementView;
    MISSING_TYPE *useStaticSponsoredIcon;
    MISSING_TYPE *$__lazy_storage_$_basicAdLabel;
    MISSING_TYPE *$__lazy_storage_$_staticSponsoredIcon;
    MISSING_TYPE *advertisementType;
    MISSING_TYPE *isBasic;
    MISSING_TYPE *useMiniStyle;
}

+ (id)images:(int)arg1 mini:(_Bool)arg2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)clearAffineTransform;
- (void)rotateDynamicImageTo:(double)arg1 withRadius:(double)arg2;
- (void)rotateDynamicImageTo:(double)arg1 withRadius:(double)arg2 clockwise:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdvertisementType:(int)arg1 mini:(_Bool)arg2;
@property(nonatomic, retain) UIColor *tintColor;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
@property(nonatomic) int advertisementType; // @synthesize advertisementType;

@end

