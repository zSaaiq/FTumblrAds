//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, TMContentOffsetCalculator, _TtC6Tumblr20TrackableViewHandler;

@interface _TtC6Tumblr16ClientSideAdView : UIView
{
    MISSING_TYPE *currentAdView;
    MISSING_TYPE *currentAdInstanceData;
    MISSING_TYPE *mediationIDs;
    MISSING_TYPE *bloglessAdViewDelegate;
    MISSING_TYPE *advertisement;
    MISSING_TYPE *trackableViewHandler;
    MISSING_TYPE *sponsoredMomentsViewsManager;
    MISSING_TYPE *didFireLoadingImpression;
    MISSING_TYPE *nativeAd;
    MISSING_TYPE *adsEventProvider;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *manuallyLeftDIOAd;
    MISSING_TYPE *activityIndicator;
    MISSING_TYPE *contentOffsetCalculator;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateColors:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)midpointVisibleForOneSecondWithVisibilityCalculator:(id)arg1 handler:(id)arg2;
- (void)midpointNoLongerVisibleWithVisibilityCalculator:(id)arg1 handler:(id)arg2;
- (void)midpointBecameVisibleWithVisibilityCalculator:(id)arg1 handler:(id)arg2;
- (void)viewLaidOutWithHandler:(id)arg1;
- (void)contentOffsetCalculator:(id)arg1 didEndIntersectingContentViewRect:(struct CGRect)arg2;
- (void)contentOffsetCalculator:(id)arg1 didBeginIntersectingContentViewRect:(struct CGRect)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)setupAsTrackableWithAdvertisement:(id)arg1 bloglessAdViewDelegate:(id)arg2 delegates:(id)arg3 scrollView:(id)arg4 analyticsBuffer:(id)arg5;
- (id)init;
@property(nonatomic, retain) TMContentOffsetCalculator *contentOffsetCalculator; // @synthesize contentOffsetCalculator;
@property(nonatomic, retain) _TtC6Tumblr20TrackableViewHandler *trackableViewHandler; // @synthesize trackableViewHandler;

@end
