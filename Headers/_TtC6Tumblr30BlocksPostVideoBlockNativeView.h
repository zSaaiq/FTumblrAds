//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TMContentRectOffsetCalculatorDelegate-Protocol.h"
#import "TMVideoAutoPlayAttributes-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr30BlocksPostVideoBlockNativeView : UIView <TMVideoAutoPlayAttributes, TMContentRectOffsetCalculatorDelegate>
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *videoTransitionController;
    MISSING_TYPE *videoPresentedInLightBox;
    MISSING_TYPE *videoPlaybackView;
    MISSING_TYPE *appAttributionView;
    MISSING_TYPE *attribution;
    MISSING_TYPE *eventProvider;
    MISSING_TYPE *videoRuleTracker;
    MISSING_TYPE *videoAdAutoStopResponder;
    MISSING_TYPE *videoAdAutoStopResonderDelegate;
    MISSING_TYPE *calculator;
    MISSING_TYPE *beaconCache;
    MISSING_TYPE *canPlayVideoInline;
    MISSING_TYPE *canAutoPlayOnCellular;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)attributionTapped;
- (void)muteButtonTapped:(id)arg1;
- (float)percentVisible;
- (void)fireBeacon:(id)arg1 eventProvider:(id)arg2;
- (void)contentOffsetCalculator:(id)arg1 didEndIntersectingContentViewRect:(struct CGRect)arg2;
- (void)contentOffsetCalculator:(id)arg1 didBeginIntersectingContentViewRect:(struct CGRect)arg2;
- (void)mediaTransitionControllerDidDismiss:(id)arg1;
- (void)mediaTransitionController:(id)arg1 didPresentMediaView:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool canAutoPlayOnCellular; // @synthesize canAutoPlayOnCellular;
@property(nonatomic) _Bool canPlayVideoInline; // @synthesize canPlayVideoInline;

@end

