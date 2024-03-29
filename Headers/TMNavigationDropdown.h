//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "_TtP11TumblrTheme16AppColorScheming_-Protocol.h"

@class CAShapeLayer, UIColor, _TtC8TumblrUI24BadgedLabelContainerView;

@interface TMNavigationDropdown : UIControl <_TtP11TumblrTheme16AppColorScheming_>
{
    _TtC8TumblrUI24BadgedLabelContainerView *_labelContainer;
    unsigned long long _arrowStyle;
    unsigned long long _highlightStyle;
    CAShapeLayer *_arrowShapeLayer;
    UIColor *_preferredBackgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *preferredBackgroundColor; // @synthesize preferredBackgroundColor=_preferredBackgroundColor;
@property(retain, nonatomic) CAShapeLayer *arrowShapeLayer; // @synthesize arrowShapeLayer=_arrowShapeLayer;
@property(nonatomic) unsigned long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(nonatomic) unsigned long long arrowStyle; // @synthesize arrowStyle=_arrowStyle;
@property(readonly, nonatomic) _TtC8TumblrUI24BadgedLabelContainerView *labelContainer; // @synthesize labelContainer=_labelContainer;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateColors:(id)arg1;
- (id)upPath;
- (id)downPath;
- (id)pathForArrowStyle:(unsigned long long)arg1;
- (void)setArrowStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

