//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "_TtP11TumblrTheme20ColorSourceRequiring_-Protocol.h"

@class MISSING_TYPE, _TtC6Tumblr14BloglessAdView;

@interface _TtC6Tumblr14BackfillAdCell : UITableViewCell <_TtP11TumblrTheme20ColorSourceRequiring_>
{
    MISSING_TYPE *bloglessAdView;
    MISSING_TYPE *bloglessAdViewContainer;
    MISSING_TYPE *containerViewWidthConstraint;
    MISSING_TYPE *cellSpacingVerticalConstraint;
    MISSING_TYPE *postCellResponder;
    MISSING_TYPE *doubleTapGestureRecognizer;
    MISSING_TYPE *centerXOffsetConstraint;
    MISSING_TYPE *viewModelHash;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *expectedWidth;
}

+ (double)cellHeightWithViewConfiguration:(id)arg1 backfillAd:(id)arg2;
- (void).cxx_destruct;
- (void)updateWithAppColorSource:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)updateTheming:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)setupWithBackfillAd:(id)arg1 viewConfiguration:(id)arg2 appColorScheme:(id)arg3 bloglessAdViewDelegate:(id)arg4 postCellResponder:(id)arg5 spacerHeight:(double)arg6 yahooVideoPlayerProvider:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) _TtC6Tumblr14BloglessAdView *bloglessAdView; // @synthesize bloglessAdView;

@end

