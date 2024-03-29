//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADPushTransitionView, NSArray, UILabel;

@interface GADNativeAdAttributionView : UIView
{
    GADPushTransitionView *_iconView;
    UILabel *_textView;
    UIView *_textPaddingLeft;
    UIView *_textPaddingRight;
    NSArray *_dynamicConstraints;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *textView;
@property(readonly, nonatomic) UIView *iconView;
- (void)setAttribution:(id)arg1;
- (void)layoutSubviews;
- (id)initWithAttribution:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

