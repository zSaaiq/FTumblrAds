//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;

@interface _TtC6Tumblr22BloglessAdViewDelegate : NSObject
{
    MISSING_TYPE *viewController;
    MISSING_TYPE *screenIdentifier;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *impressionReceiver;
    MISSING_TYPE *session;
}

- (void).cxx_destruct;
- (id)init;
- (void)dismissedFullScreenYahooVideo:(id)arg1 timelineObject:(id)arg2;
- (void)presentedFullScreenYahooVideo:(id)arg1 timelineObject:(id)arg2;
- (void)didLoopYahooVideo:(id)arg1 timelineObject:(id)arg2;
- (void)playedOrPausedYahooVideo:(id)arg1 timelineObject:(id)arg2 played:(_Bool)arg3;
- (void)didEndScrubbingYahooVideo:(id)arg1 timelineObject:(id)arg2;
- (void)willBeginScrubbingYahooVideo:(id)arg1 timelineObject:(id)arg2;
- (void)mutedOrUnmutedYahooVideo:(id)arg1 timelineObject:(id)arg2 muted:(_Bool)arg3;
- (void)didAutoStopYahooVideo:(id)arg1 timelineObject:(id)arg2;
- (void)didAutoPlayYahooVideo:(id)arg1 timelineObject:(id)arg2;
- (id)backfillAdEventProviderForBackfillAd:(id)arg1;
- (void)fireImpressionEventWithMediationIDs:(id)arg1 adInstanceData:(id)arg2;
- (void)fireViewableImpressionEventWithMediationIDs:(id)arg1 adInstanceData:(id)arg2;
- (void)fireEventTrackerWithBeaconURL:(id)arg1;
- (void)fireBeaconsWithBeaconConstructors:(id)arg1 eventProvider:(id)arg2 advertisement:(id)arg3;
- (void)dismissedFullScreenVideoWithTimelineObject:(id)arg1 videoPlayer:(id)arg2;
- (void)presentedFullScreenVideoWithTimelineObject:(id)arg1 videoPlayer:(id)arg2;
- (void)didLoopVideoWithTimelineObject:(id)arg1 videoPlayer:(id)arg2;
- (void)playedOrPausedVideoWithTimelineObject:(id)arg1 videoPlayer:(id)arg2 played:(_Bool)arg3;
- (void)didEndScrubbingWithTimelineObject:(id)arg1 videoPlayer:(id)arg2;
- (void)willBeginScrubbingWithTimelineObject:(id)arg1 videoPlayer:(id)arg2;
- (void)mutedOrUnmutedVideoWithTimelineObject:(id)arg1 videoPlayer:(id)arg2 muted:(_Bool)arg3;
- (void)didAutoStopVideoWithTimelineObject:(id)arg1 videoPlayer:(id)arg2;
- (void)didAutoPlayVideoWithTimelineObject:(id)arg1 videoPlayer:(id)arg2;
- (void)requestAdInformationForURLString:(id)arg1;
- (void)loaderBecameVisibleWithAd:(id)arg1;
- (void)tappedSponsoredButtonWithAd:(id)arg1;
- (void)performedSelectionActionWithAd:(id)arg1 clickAreaName:(id)arg2;
- (id)initWithViewController:(id)arg1 screenIdentifier:(id)arg2 analyticsBuffer:(id)arg3 linkRouter:(id)arg4 impressionReceiver:(id)arg5 session:(id)arg6;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController;

@end

