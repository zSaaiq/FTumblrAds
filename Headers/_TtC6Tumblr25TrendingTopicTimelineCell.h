//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE, _TtC6Tumblr32TimelineCellImpressionCalculator;

@interface _TtC6Tumblr25TrendingTopicTimelineCell : UITableViewCell
{
    MISSING_TYPE *timelineCellImpressionCalculator;
    MISSING_TYPE *delegate;
    MISSING_TYPE *topic;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *contentViewHorizontalConstraints;
    MISSING_TYPE *descriptionLabelConstraints;
    MISSING_TYPE *chicletCarouselViewConstraints;
    MISSING_TYPE *tagsViewConstraints;
    MISSING_TYPE *cellSpacingVerticalConstraint;
    MISSING_TYPE *$__lazy_storage_$_topicTitleLabel;
    MISSING_TYPE *$__lazy_storage_$_badgeLabel;
    MISSING_TYPE *$__lazy_storage_$_positionLabel;
    MISSING_TYPE *$__lazy_storage_$_descriptionLabel;
    MISSING_TYPE *$__lazy_storage_$_followButton;
    MISSING_TYPE *$__lazy_storage_$_tagsView;
    MISSING_TYPE *$__lazy_storage_$_chicletCarouselView;
    MISSING_TYPE *$__lazy_storage_$_contentContainerView;
}

+ (double)totalHeightForCell:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateColors:(id)arg1;
- (void)didSelectCell:(id)arg1;
- (void)didSelectFollowButton:(id)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setup:(id)arg1 delegate:(id)arg2 spacerHeight:(double)arg3 appColorScheme:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) _TtC6Tumblr32TimelineCellImpressionCalculator *timelineCellImpressionCalculator; // @synthesize timelineCellImpressionCalculator;

@end

