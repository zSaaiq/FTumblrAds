//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr19CompactBlogCardCell : UITableViewCell
{
    MISSING_TYPE *$__lazy_storage_$_contentContainerView;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *avatarView;
    MISSING_TYPE *followButton;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *blogRowResponder;
    MISSING_TYPE *leftSpacer;
    MISSING_TYPE *rightSpacer;
    MISSING_TYPE *showAvatarConstraints;
    MISSING_TYPE *hideAvatarConstraints;
    MISSING_TYPE *cellSpacingVerticalConstraint;
    MISSING_TYPE *theme;
    MISSING_TYPE *buttonBackgroundColor;
}

+ (double)totalHeightForBlogRowCell:(id)arg1;
- (void).cxx_destruct;
- (void)updateTheming:(id)arg1;
- (id)avatarImageViewForFollowButton:(id)arg1;
- (id)carouselIndexForFollowButton:(id)arg1;
- (id)blogInfoForFollowButton:(id)arg1;
- (void)simpleFollowButtonTapped;
- (void)updateWithBlogUUID:(id)arg1 responder:(id)arg2 screenIdentifier:(id)arg3 spacerHeight:(double)arg4 analyticsBuffer:(id)arg5;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

