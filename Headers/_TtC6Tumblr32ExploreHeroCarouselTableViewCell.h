//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "_TtP6Tumblr23TimelineCellImpressions_-Protocol.h"

@class MISSING_TYPE, _TtC6Tumblr32TimelineCellImpressionCalculator;

@interface _TtC6Tumblr32ExploreHeroCarouselTableViewCell : UITableViewCell <_TtP6Tumblr23TimelineCellImpressions_>
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *carousel;
    MISSING_TYPE *collectionViewController;
    MISSING_TYPE *parentViewController;
    MISSING_TYPE *pageControl;
    MISSING_TYPE *contentViewHorizontalConstraints;
    MISSING_TYPE *timelineCellImpressionCalculator;
}

+ (double)heightForCell:(double)arg1;
- (void).cxx_destruct;
- (void)updateWithAppColorSource:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)updateTheming:(id)arg1;
@property(nonatomic, retain) _TtC6Tumblr32TimelineCellImpressionCalculator *timelineCellImpressionCalculator; // @synthesize timelineCellImpressionCalculator;
- (void)collectionViewDidChangePage:(long long)arg1;
- (void)collectionViewDidSelectCellAtIndexPath:(id)arg1;
- (void)pageControlValueChanged:(id)arg1;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

