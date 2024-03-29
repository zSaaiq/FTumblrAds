//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBMediaViewVideoRenderer.h"

#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class FBAdBlurredImageView, FBAdFullscreenVideoController, FBAdImage, FBAdVideoPlayButton, FBAdVideoPlayerAudioMeters, FBAdVideoScrubber, FBAdViewabilityValidator, FBGradientView, NSMutableArray, NSString, UILabel, UITapGestureRecognizer;
@protocol FBMediaViewDefaultVideoRendererDelegate;

@interface FBMediaViewDefaultVideoRenderer : FBMediaViewVideoRenderer <FBAdViewabilityValidatorDelegate>
{
    _Bool _inlineMode;
    _Bool _autoplayEnabled;
    _Bool _layoutBuilt;
    _Bool _playbackSuspended;
    _Bool _playerIsPlaying;
    _Bool _playPauseButtonEnabled;
    _Bool _scrubberEnabled;
    _Bool _videoCurrentlyShownToUser;
    _Bool _volumeWasSet;
    id <FBMediaViewDefaultVideoRendererDelegate> _delegate;
    FBAdImage *_posterImage;
    CDUnknownBlockType _posterImageDidLoadCompletionBlock;
    FBAdVideoPlayerAudioMeters *_audioMetersView;
    double _controlSizeMultiplier;
    FBGradientView *_gradientView;
    NSMutableArray *_observers;
    FBAdVideoPlayButton *_playPauseButton;
    FBAdBlurredImageView *_posterImageView;
    id _progressTimeObserver;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILabel *_timeRemainingLabel;
    FBAdFullscreenVideoController *_videoFullscreenController;
    FBAdVideoScrubber *_videoScrubber;
    FBAdViewabilityValidator *_viewabilityValidator;
    FBAdBlurredImageView *_bgImageView;
}

+ (id)dateFormatter;
@property(retain, nonatomic) FBAdBlurredImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) _Bool volumeWasSet; // @synthesize volumeWasSet=_volumeWasSet;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(nonatomic) __weak FBAdVideoScrubber *videoScrubber; // @synthesize videoScrubber=_videoScrubber;
@property(retain, nonatomic) FBAdFullscreenVideoController *videoFullscreenController; // @synthesize videoFullscreenController=_videoFullscreenController;
@property(nonatomic) _Bool videoCurrentlyShownToUser; // @synthesize videoCurrentlyShownToUser=_videoCurrentlyShownToUser;
@property(nonatomic) __weak UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(nonatomic) __weak UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic, getter=isScrubberEnabled) _Bool scrubberEnabled; // @synthesize scrubberEnabled=_scrubberEnabled;
@property(retain, nonatomic) id progressTimeObserver; // @synthesize progressTimeObserver=_progressTimeObserver;
@property(nonatomic) __weak FBAdBlurredImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(nonatomic, getter=isPlayPauseButtonEnabled) _Bool playPauseButtonEnabled; // @synthesize playPauseButtonEnabled=_playPauseButtonEnabled;
@property(nonatomic) __weak FBAdVideoPlayButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) _Bool playerIsPlaying; // @synthesize playerIsPlaying=_playerIsPlaying;
@property(nonatomic) _Bool playbackSuspended; // @synthesize playbackSuspended=_playbackSuspended;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool layoutBuilt; // @synthesize layoutBuilt=_layoutBuilt;
@property(nonatomic) __weak FBGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) double controlSizeMultiplier; // @synthesize controlSizeMultiplier=_controlSizeMultiplier;
@property(nonatomic) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(nonatomic) __weak FBAdVideoPlayerAudioMeters *audioMetersView; // @synthesize audioMetersView=_audioMetersView;
@property(copy, nonatomic) CDUnknownBlockType posterImageDidLoadCompletionBlock; // @synthesize posterImageDidLoadCompletionBlock=_posterImageDidLoadCompletionBlock;
@property(retain, nonatomic) FBAdImage *posterImage; // @synthesize posterImage=_posterImage;
@property(nonatomic) _Bool inlineMode; // @synthesize inlineMode=_inlineMode;
@property(nonatomic) __weak id <FBMediaViewDefaultVideoRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoScrubberTouchComplete:(id)arg1;
- (void)videoScrubberTouchDown:(id)arg1;
- (void)videoScrubberChanged:(id)arg1;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (void)videoDidFailWithError:(id)arg1;
- (void)videoDidEnd;
- (void)videoDidDisengageSeek;
- (void)videoDidSeek;
- (void)videoDidEngageSeek;
- (void)videoDidPlay;
- (void)videoDidPause;
- (void)videoDidLoad;
- (void)videoDidChangeVolume;
- (void)updateUserInterface;
- (void)updateCoverImage;
- (void)tap:(id)arg1;
- (void)startStopAction:(id)arg1;
- (void)setupView;
- (void)setTapEnabled:(_Bool)arg1;
- (void)setupBgImageView;
- (void)setupCoverImage;
- (void)removeProgressTimeObserver;
- (void)removeGestureRecognizers;
- (void)removeAllObservers;
- (id)remainingTimeLabelFromDate:(id)arg1 duration:(double)arg2;
- (void)onVideoStopped;
- (void)onVideoProgress;
- (void)disableCoverImageIfNeeded;
- (void)enableCoverImageIfNeeded;
- (void)buildLayout;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)addProgressTimeObserver;
- (void)addObserver:(id)arg1;
- (void)addGestureRecognizers;
- (void)loadVideoURL:(id)arg1 clientToken:(id)arg2 requestId:(id)arg3 config:(CDStruct_bc95fd81)arg4 loadedBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)shouldBlurWhitespace;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

