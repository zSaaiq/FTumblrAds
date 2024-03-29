//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface FBAdChoiceCollectionViewCell : UICollectionViewCell
{
    long long _style;
    NSString *_optionTitle;
    NSString *_optionSubtitle;
    UILabel *_optionTitleLabel;
    UILabel *_optionSubtitleLabel;
    UIView *_optionIconView;
    long long _flowType;
}

+ (id)reuseId;
@property(nonatomic) long long flowType; // @synthesize flowType=_flowType;
@property(retain, nonatomic) UIView *optionIconView; // @synthesize optionIconView=_optionIconView;
@property(retain, nonatomic) UILabel *optionSubtitleLabel; // @synthesize optionSubtitleLabel=_optionSubtitleLabel;
@property(retain, nonatomic) UILabel *optionTitleLabel; // @synthesize optionTitleLabel=_optionTitleLabel;
@property(copy, nonatomic) NSString *optionSubtitle; // @synthesize optionSubtitle=_optionSubtitle;
@property(copy, nonatomic) NSString *optionTitle; // @synthesize optionTitle=_optionTitle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)configureForFlowType:(long long)arg1 layoutType:(long long)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

