//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MISSING_TYPE, UILabel;

@interface TMTableSectionHeaderView : UITableViewHeaderFooterView
{
    MISSING_TYPE *displaysDividers;
    MISSING_TYPE *applyPrimaryColor;
    MISSING_TYPE *horizontalInset;
    MISSING_TYPE *topDivider;
    MISSING_TYPE *bottomDivider;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *textLabelBottomConstraint;
    MISSING_TYPE *_textLabel;
    MISSING_TYPE *_detailTextLabel;
    MISSING_TYPE *mainLabelHorizontalConstraints;
    MISSING_TYPE *detailLabelHorizontalConstraints;
}

+ (double)sectionHeaderHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
@property(nonatomic, retain) UILabel *detailTextLabel;
@property(nonatomic, retain) UILabel *textLabel;
@property(nonatomic) _Bool applyPrimaryColor; // @synthesize applyPrimaryColor;
@property(nonatomic) _Bool displaysDividers; // @synthesize displaysDividers;

@end
