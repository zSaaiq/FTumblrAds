//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UILabel;

@interface TMTitleSubtitleView : UIView
{
    NSDictionary *_titleAttributes;
    NSDictionary *_subtitleAttributes;
    NSDictionary *_exclusiveTitleAttributes;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (id)defaultExclusiveTitleAttributes;
+ (id)defaultSubtitleAttributes;
+ (id)defaultTitleAttributes;
+ (id)defaultParagraphStyle;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSDictionary *exclusiveTitleAttributes; // @synthesize exclusiveTitleAttributes=_exclusiveTitleAttributes;
@property(retain, nonatomic) NSDictionary *subtitleAttributes; // @synthesize subtitleAttributes=_subtitleAttributes;
@property(retain, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)setTintColor:(id)arg1;
- (_Bool)hasSubtitleText;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)attributedSubtitleWithText:(id)arg1;
- (id)attributedTitleWithText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 titleAttributes:(id)arg4 subtitleAttributes:(id)arg5 exclusiveTitleAttributes:(id)arg6;

@end
