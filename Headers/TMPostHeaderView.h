//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMScreenIdentifying-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_TtP11TumblrTheme16AppColorScheming_-Protocol.h"
#import "_TtP8TumblrUI20FollowButtonDelegate_-Protocol.h"

@class NSArray, NSMutableArray, NSString, TMFollowButton, TMPostHeaderViewModel, UIButton, UIImageView, UILabel, UITapGestureRecognizer, _TtC11TumblrTheme14AppColorScheme, _TtC11TumblrTheme7TMTheme, _TtC6Tumblr25SponsoredDecorationButton, _TtC6Tumblr27PostHeaderDetailLabelButton;
@protocol TMAvatarViewProtocol, TMPostHeaderViewDelegate;

@interface TMPostHeaderView : UIView <UIGestureRecognizerDelegate, _TtP8TumblrUI20FollowButtonDelegate_, _TtP11TumblrTheme16AppColorScheming_, TMScreenIdentifying>
{
    _Bool _canSelect;
    _Bool _tapped;
    NSString *_screenIdentifier;
    UIButton *_dismissPostButton;
    UIView *_borderView;
    UILabel *_titleLabel;
    TMFollowButton *_followButton;
    UIButton *_reportPostButton;
    UIImageView *_votedBadge;
    TMPostHeaderViewModel *_viewModel;
    id <TMPostHeaderViewDelegate> _delegate;
    _TtC6Tumblr27PostHeaderDetailLabelButton *_sourceDetailLabelButton;
    _TtC6Tumblr27PostHeaderDetailLabelButton *_accessDetailLabelButton;
    _TtC6Tumblr25SponsoredDecorationButton *_decorationView;
    UIView *_highlightedHeaderView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_accessibilityElements;
    id _followCoordinatorObserver;
    unsigned long long _postFollowType;
    _TtC11TumblrTheme7TMTheme *_theme;
    NSString *_postID;
    id <TMAvatarViewProtocol> _avatarView;
    TMFollowButton *_blogFollowButton;
    TMFollowButton *_reblogFollowButton;
    unsigned long long _postHeaderViewModelHash;
    _TtC11TumblrTheme14AppColorScheme *_appColorScheme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC11TumblrTheme14AppColorScheme *appColorScheme; // @synthesize appColorScheme=_appColorScheme;
@property(nonatomic) unsigned long long postHeaderViewModelHash; // @synthesize postHeaderViewModelHash=_postHeaderViewModelHash;
@property(retain, nonatomic) TMFollowButton *reblogFollowButton; // @synthesize reblogFollowButton=_reblogFollowButton;
@property(retain, nonatomic) TMFollowButton *blogFollowButton; // @synthesize blogFollowButton=_blogFollowButton;
@property(readonly, nonatomic) id <TMAvatarViewProtocol> avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSString *postID; // @synthesize postID=_postID;
@property(retain, nonatomic) _TtC11TumblrTheme7TMTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long postFollowType; // @synthesize postFollowType=_postFollowType;
@property(retain, nonatomic) id followCoordinatorObserver; // @synthesize followCoordinatorObserver=_followCoordinatorObserver;
@property(retain, nonatomic) NSMutableArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool tapped; // @synthesize tapped=_tapped;
@property(retain, nonatomic) UIView *highlightedHeaderView; // @synthesize highlightedHeaderView=_highlightedHeaderView;
@property(retain, nonatomic) _TtC6Tumblr25SponsoredDecorationButton *decorationView; // @synthesize decorationView=_decorationView;
@property(retain, nonatomic) _TtC6Tumblr27PostHeaderDetailLabelButton *accessDetailLabelButton; // @synthesize accessDetailLabelButton=_accessDetailLabelButton;
@property(retain, nonatomic) _TtC6Tumblr27PostHeaderDetailLabelButton *sourceDetailLabelButton; // @synthesize sourceDetailLabelButton=_sourceDetailLabelButton;
@property(readonly, nonatomic) __weak id <TMPostHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TMPostHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
@property(readonly, nonatomic) UIImageView *votedBadge; // @synthesize votedBadge=_votedBadge;
@property(readonly, nonatomic) UIButton *reportPostButton; // @synthesize reportPostButton=_reportPostButton;
@property(readonly, nonatomic) TMFollowButton *followButton; // @synthesize followButton=_followButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
- (void)updateColors:(id)arg1;
- (void)prepareForReuse;
- (_Bool)isAccessibilityElement;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) NSArray *accessibleElements;
- (id)detailTitleAccessibilityLabel;
@property(readonly, nonatomic) _Bool showsFollowButton;
- (id)followButtonWithType:(unsigned long long)arg1 hidesWhenFollowing:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)carouselIndexForFollowButton:(id)arg1;
- (void)followButton:(id)arg1 didFollowBlogWithName:(id)arg2 placementIdentifier:(id)arg3;
- (id)blogInfoForFollowButton:(id)arg1;
- (id)avatarImageViewForFollowButton:(id)arg1;
- (void)sponsoredButtonTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)detailLabelTapped;
- (void)avatarViewTapped:(id)arg1;
- (void)tapped:(id)arg1;
- (void)updateFollowButtonForFollowingState:(_Bool)arg1 updateSubviews:(_Bool)arg2;
- (void)updateAvatar;
- (void)updateAccessLabelButtonForPostHeaderViewModel:(id)arg1 appColorScheme:(id)arg2;
- (void)updateDetailLabelButtonForPostHeaderViewModel:(id)arg1 appColorScheme:(id)arg2;
- (void)rotateDecorationToOffset:(double)arg1 width:(double)arg2;
- (void)setupWithPostHeaderViewModel:(id)arg1 appColorScheme:(id)arg2;
- (_Bool)dismissOrReportButtonVisible;
- (void)layoutSubviews;
- (void)dealloc;
- (void)tintColorDidChange;
@property(readonly, nonatomic) UIButton *dismissPostButton; // @synthesize dismissPostButton=_dismissPostButton;
- (void)dismissPost:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 avatarView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

