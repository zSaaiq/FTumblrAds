//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MISSING_TYPE, UIColor;

@interface _TtC8TumblrUI22BlogSelectorHeaderView : UIButton
{
    MISSING_TYPE *containerView;
    MISSING_TYPE *titleView;
    MISSING_TYPE *blogIconView;
    MISSING_TYPE *blogIconHeightConstraint;
    MISSING_TYPE *shouldShowLargeAvatar;
    MISSING_TYPE *caretIconView;
    MISSING_TYPE *centered;
    MISSING_TYPE *blog;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateTheming:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)willMoveToSuperview:(id)arg1;
@property(nonatomic, retain) UIColor *tintColor;

@end
