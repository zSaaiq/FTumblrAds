//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdDisplayable-Protocol.h"
#import "FBAdSystemVolumeObserver-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"
#import "FBInterstitialAdMediaViewDelegate-Protocol.h"

@class FBAdAudioMuteButton, FBAdCTAButton, FBAdPlacementDefinition, FBAdVideoProgressBar, FBAdViewabilityValidator, FBGradientView, FBInterstitialAdMediaView, FBInterstitialAdTextView, FBNativeAdDataModel, FBNativeAdMultiProductDataModel, NSNumber, NSString, NSURL, UITapGestureRecognizer;
@protocol FBAdDisplayableViewDelegate;

@interface FBInterstitialAdBodyView : UIView <FBInterstitialAdMediaViewDelegate, FBAdViewabilityValidatorDelegate, FBAdSystemVolumeObserver, FBAdDisplayable>
{
    _Bool _preventCarouselTextTruncationInPortrait;
    _Bool _preventCarouselVideoAutoplay;
    _Bool _canPlayVideo;
    _Bool _impressionSent;
    _Bool _videoPlaybackInterrupted;
    _Bool _videoHasStartedPlaying;
    id <FBAdDisplayableViewDelegate> _delegate;
    CDUnknownBlockType _preferredOverlayTextColorTypeChanged;
    CDUnknownBlockType _onRequestToggleOverlayViews;
    FBNativeAdDataModel *_dataModel;
    FBNativeAdMultiProductDataModel *_multiProductDataModel;
    FBAdPlacementDefinition *_placementDefinition;
    FBAdAudioMuteButton *_audioMuteButton;
    FBAdCTAButton *_callToActionButton;
    FBInterstitialAdTextView *_textContainerView;
    FBInterstitialAdMediaView *_mediaView;
    FBGradientView *_topGradientView;
    FBGradientView *_bottomGradientView;
    FBAdVideoProgressBar *_progressBarView;
    UIView *_mediaViewShadowView;
    FBAdViewabilityValidator *_viewabilityValidator;
    NSNumber *_carouselPageNumber;
    NSNumber *_carouselTotalPages;
    UITapGestureRecognizer *_ctaAreaTapGestureRecognizer;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UITapGestureRecognizer *ctaAreaTapGestureRecognizer; // @synthesize ctaAreaTapGestureRecognizer=_ctaAreaTapGestureRecognizer;
@property(nonatomic) _Bool videoHasStartedPlaying; // @synthesize videoHasStartedPlaying=_videoHasStartedPlaying;
@property(nonatomic) _Bool videoPlaybackInterrupted; // @synthesize videoPlaybackInterrupted=_videoPlaybackInterrupted;
@property(retain, nonatomic) NSNumber *carouselTotalPages; // @synthesize carouselTotalPages=_carouselTotalPages;
@property(retain, nonatomic) NSNumber *carouselPageNumber; // @synthesize carouselPageNumber=_carouselPageNumber;
@property(nonatomic) _Bool impressionSent; // @synthesize impressionSent=_impressionSent;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(nonatomic) __weak UIView *mediaViewShadowView; // @synthesize mediaViewShadowView=_mediaViewShadowView;
@property(nonatomic) __weak FBAdVideoProgressBar *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) __weak FBGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(nonatomic) __weak FBGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(nonatomic) __weak FBInterstitialAdMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak FBInterstitialAdTextView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(nonatomic) __weak FBAdCTAButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(nonatomic) __weak FBAdAudioMuteButton *audioMuteButton; // @synthesize audioMuteButton=_audioMuteButton;
@property(readonly, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(readonly, nonatomic) __weak FBNativeAdMultiProductDataModel *multiProductDataModel; // @synthesize multiProductDataModel=_multiProductDataModel;
@property(readonly, nonatomic) __weak FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) CDUnknownBlockType onRequestToggleOverlayViews; // @synthesize onRequestToggleOverlayViews=_onRequestToggleOverlayViews;
@property(copy, nonatomic) CDUnknownBlockType preferredOverlayTextColorTypeChanged; // @synthesize preferredOverlayTextColorTypeChanged=_preferredOverlayTextColorTypeChanged;
@property(nonatomic) __weak id <FBAdDisplayableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canPlayVideo; // @synthesize canPlayVideo=_canPlayVideo;
@property(nonatomic) _Bool preventCarouselVideoAutoplay; // @synthesize preventCarouselVideoAutoplay=_preventCarouselVideoAutoplay;
@property(nonatomic) _Bool preventCarouselTextTruncationInPortrait; // @synthesize preventCarouselTextTruncationInPortrait=_preventCarouselTextTruncationInPortrait;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (void)interstitialAdMediaView:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdMediaViewDidShowPlayButton:(id)arg1;
- (void)interstitialAdMediaViewDidHidePlayButton:(id)arg1;
- (void)interstitialAdMediaViewDidEnd:(id)arg1;
- (void)interstitialAdMediaViewDidProgress:(id)arg1;
- (void)interstitialAdMediaViewDidPauseVideo:(id)arg1;
- (void)interstitialAdMediaViewDidStartVideo:(id)arg1;
- (void)interstitialAdMediaViewDidLoad:(id)arg1;
- (_Bool)criteriasForLoggingImpressionForVideoIsMet;
- (void)logImpressionIfCriteriasAreFulfilled;
- (void)styleToolbar;
- (void)styleCTAForceCondensedLayout:(_Bool)arg1;
- (void)styleTextView;
- (void)styleMediaView;
- (void)styleProgressBar;
- (_Bool)isAutoplay;
- (_Bool)shouldAutoplayCarousel;
- (_Bool)isCarousel;
- (void)toggleAdDetailsForceShow:(_Bool)arg1;
- (struct CGRect)insetBounds;
- (_Bool)isMediaViewFullscreen;
- (void)bringSubViewsToFront;
- (void)setupNotifications;
- (void)dealloc;
- (_Bool)videoAdHasAudio;
- (_Bool)isVideoAd;
- (_Bool)isVideoCarouselPage;
- (void)layoutSubviews;
- (void)layoutAudioMuteButton;
- (void)layoutProgressBar;
- (void)layoutMediaView;
- (void)putGestureRecogniserToMediaViewIfNeeded;
- (_Bool)isCallToActionPresent;
- (void)layoutCTAForceCondensedLayout:(_Bool)arg1;
- (void)layoutMediaViewShadowView;
- (void)layoutGradients;
- (double)intrinsicCarouselCardHeightForWidth:(double)arg1;
- (void)destroyAd;
- (void)setPlaying:(_Bool)arg1 forced:(_Bool)arg2;
- (void)setupViewabilityValidationIfNeeded;
- (void)showAd;
- (void)setupMediaViewAndAddAsSubviewWithAudioMutedIfNil:(_Bool)arg1;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2 carouselPageNumber:(id)arg3 totalPages:(id)arg4;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2;
- (void)adClicked:(id)arg1 withEvent:(id)arg2;
- (void)didTouchCTAArea:(id)arg1;
- (void)handleSystemVolumeChanged:(float)arg1;
- (void)handleAudioMuteButtonTouch:(id)arg1;
@property(readonly, nonatomic) NSURL *commandURL;
- (double)subtitleFontSize;
- (double)titleFontSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)configureVolume:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

