//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMBlogCell.h"

@class MISSING_TYPE, NSString, TMFollowButton;
@protocol TMBlogSearchResultTableViewCellDelegate;

@interface _TtC6Tumblr31TMBlogSearchResultTableViewCell : TMBlogCell
{
    MISSING_TYPE *followButton;
    MISSING_TYPE *followed;
    MISSING_TYPE *canFollow;
    MISSING_TYPE *titleAttributedView;
    MISSING_TYPE *detailTitleAttributedView;
    MISSING_TYPE *titleViewSize;
    MISSING_TYPE *detailTitleViewSize;
    MISSING_TYPE *delegate;
    MISSING_TYPE *followCoordinatorObserver;
    MISSING_TYPE *screenIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (id)avatarImageViewForFollowButton:(id)arg1;
- (id)carouselIndexForFollowButton:(id)arg1;
- (id)blogInfoForFollowButton:(id)arg1;
@property(nonatomic, copy) NSString *screenIdentifier;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
@property(nonatomic, retain) id <TMBlogSearchResultTableViewCellDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool canFollow; // @synthesize canFollow;
@property(nonatomic) _Bool followed; // @synthesize followed;
@property(nonatomic, readonly) TMFollowButton *followButton; // @synthesize followButton;

@end

