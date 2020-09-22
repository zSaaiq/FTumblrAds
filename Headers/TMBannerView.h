//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "_TtP11TumblrTheme16AppColorScheming_-Protocol.h"
#import "_TtP11TumblrTheme9TMTheming_-Protocol.h"

@class UIColor, UIView;

@interface TMBannerView : UIButton <_TtP11TumblrTheme9TMTheming_, _TtP11TumblrTheme16AppColorScheming_>
{
    _Bool _growsUp;
    CDUnknownBlockType _tapBlock;
    UIColor *_tabBarColor;
    UIView *_lineSeparator;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _animations;
    UIColor *_normalBarTintColor;
    UIColor *_highlightedBarTintColor;
    unsigned long long _presentationType;
    double _initalOriginY;
    double _initialHeight;
    double _bannerVisibleDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double bannerVisibleDuration; // @synthesize bannerVisibleDuration=_bannerVisibleDuration;
@property(nonatomic) double initialHeight; // @synthesize initialHeight=_initialHeight;
@property(nonatomic) double initalOriginY; // @synthesize initalOriginY=_initalOriginY;
@property(nonatomic) _Bool growsUp; // @synthesize growsUp=_growsUp;
@property(nonatomic) unsigned long long presentationType; // @synthesize presentationType=_presentationType;
@property(retain, nonatomic) UIColor *highlightedBarTintColor; // @synthesize highlightedBarTintColor=_highlightedBarTintColor;
@property(retain, nonatomic) UIColor *normalBarTintColor; // @synthesize normalBarTintColor=_normalBarTintColor;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIView *lineSeparator; // @synthesize lineSeparator=_lineSeparator;
@property(retain, nonatomic) UIColor *tabBarColor; // @synthesize tabBarColor=_tabBarColor;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void)themeUpdated:(id)arg1;
- (void)tapped;
- (void)swipe;
- (void)hide;
- (void)hideAfterDelay;
- (void)performSimultaneousAnimationsWhileHiding:(_Bool)arg1;
- (void)showInView:(id)arg1 initialY:(double)arg2 animations:(CDUnknownBlockType)arg3 finishedHiding:(CDUnknownBlockType)arg4 presentationType:(unsigned long long)arg5;
- (void)showInView:(id)arg1 animations:(CDUnknownBlockType)arg2 finishedHiding:(CDUnknownBlockType)arg3 presentationType:(unsigned long long)arg4;
- (void)showFromTabBar:(id)arg1 animations:(CDUnknownBlockType)arg2 finishedHiding:(CDUnknownBlockType)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBarTintColor:(id)arg1 tintColor:(id)arg2;
- (void)updateColors:(id)arg1;
- (void)updateTheming:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 bannerVisibleDuration:(double)arg2;

@end

