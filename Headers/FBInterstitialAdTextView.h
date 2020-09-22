//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface FBInterstitialAdTextView : UIView
{
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    NSString *_title;
    NSString *_subtitle;
    long long _maxLinesForTitle;
    long long _maxLinesForSubtitle;
    long long _titleFontSize;
    long long _subtitleFontSize;
    double _verticalTextSpacing;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double verticalTextSpacing; // @synthesize verticalTextSpacing=_verticalTextSpacing;
@property(nonatomic) long long subtitleFontSize; // @synthesize subtitleFontSize=_subtitleFontSize;
@property(nonatomic) long long titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) long long maxLinesForSubtitle; // @synthesize maxLinesForSubtitle=_maxLinesForSubtitle;
@property(nonatomic) long long maxLinesForTitle; // @synthesize maxLinesForTitle=_maxLinesForTitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(copy, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlignment:(long long)arg1;
- (_Bool)hasSubtitle;
- (void)layoutSubviews;
- (id)init;

@end

