//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_TtP11TumblrTheme16AppColorScheming_-Protocol.h"
#import "_TtP11TumblrTheme9TMTheming_-Protocol.h"

@class NSArray, TMComposeButton, _TtC6Tumblr11BarIconView;

@interface TMTabBarOverlay : UIView <_TtP11TumblrTheme9TMTheming_, _TtP11TumblrTheme16AppColorScheming_>
{
    _Bool _showsDownIcon;
    long long _selectedIndex;
    NSArray *_allItems;
    TMComposeButton *_composeButton;
    _TtC6Tumblr11BarIconView *_dashboardIconView;
    _TtC6Tumblr11BarIconView *_activityIconView;
    NSArray *_tabBarItems;
    UIView *_separator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(nonatomic) _Bool showsDownIcon; // @synthesize showsDownIcon=_showsDownIcon;
@property(readonly, nonatomic) _TtC6Tumblr11BarIconView *activityIconView; // @synthesize activityIconView=_activityIconView;
@property(readonly, nonatomic) _TtC6Tumblr11BarIconView *dashboardIconView; // @synthesize dashboardIconView=_dashboardIconView;
@property(readonly, nonatomic) TMComposeButton *composeButton; // @synthesize composeButton=_composeButton;
@property(readonly, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)setShowsDownArrow:(_Bool)arg1;
- (void)resetItemTypesAnimated:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *itemTypes;
- (void)updateColors:(id)arg1 animated:(_Bool)arg2;
- (void)updateColors:(id)arg1;
- (void)updateTheming:(id)arg1;
- (void)updateTheming:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)serverConfigurationUpdated:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
