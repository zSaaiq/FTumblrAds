//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr11BlogRowCell : UITableViewCell
{
    MISSING_TYPE *$__lazy_storage_$_contentContainerView;
    MISSING_TYPE *avatarView;
    MISSING_TYPE *snowmanButton;
    MISSING_TYPE *followButton;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *bottomSeparator;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *blogRowResponder;
    MISSING_TYPE *cellSpacingVerticalConstraint;
    MISSING_TYPE *containerWidthConstraint;
    MISSING_TYPE *textRightPaddingWithSnowmanConstraints;
    MISSING_TYPE *textRightPaddingWithFollowingConstraints;
    MISSING_TYPE *textRightPaddingWithContentViewConstraints;
    MISSING_TYPE *followButtonWidthConstraint;
    MISSING_TYPE *explicitBlogIsBeingPreviewed;
}

- (void).cxx_destruct;
- (void)updateColors:(id)arg1;
- (id)avatarImageViewForFollowButton:(id)arg1;
- (id)carouselIndexForFollowButton:(id)arg1;
- (id)blogInfoForFollowButton:(id)arg1;
- (void)dealloc;
- (void)snowmanButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
