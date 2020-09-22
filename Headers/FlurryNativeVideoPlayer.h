//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVAudioSession, AVPlayerLayer, FlurryAdViewController, NSDictionary, NSString, NSURL, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol IFlurryNativeAdReporting, IFlurryVideoNativeAd;

@interface FlurryNativeVideoPlayer : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isCollapsed;
    _Bool _autoLoop;
    _Bool _autoPlay;
    _Bool _enteredBG;
    int _controlsShowRequest;
    AVPlayerLayer *_playerLayer;
    id <IFlurryVideoNativeAd> _ad;
    UIView *_parentView;
    NSURL *_videoURL;
    NSDictionary *_videoControlsAssetDictionary;
    UIImage *_vidPlayImage;
    UIImage *_vidPlayImageWithCircle;
    UIImage *_vidPauseImage;
    UIImage *_vidRefreshImage;
    UIImage *_vidFullScreenImage;
    UIImage *_vidMinimizeScreenImage;
    UIImage *_vidMuteImage;
    UIImage *_vidUnMuteImage;
    UIView *_streamOverlayView;
    UIButton *_playButton;
    UIButton *_replayButton;
    UIButton *_CTAButton;
    UIView *_fullscreenView;
    UIView *_fullscreenOverlayView;
    UIButton *_CTAFullScreenButton;
    UIButton *_minimizescreenButton;
    UIView *_controlsGradientView;
    UIButton *_muteButton;
    UIButton *_pauseButton;
    UILabel *_sponsoredTextLabel;
    UIImageView *_sponsoredLogoImageView;
    UILabel *_titleLabel;
    UILabel *_sponsorerLabel;
    FlurryAdViewController *_fullscreenViewController;
    UIImageView *_imageView;
    UITapGestureRecognizer *_tap;
    NSString *_headlineTxt;
    NSString *_sponsorerTxt;
    NSString *_previewImageURL;
    NSString *_previewHqImageURL;
    NSString *_sponsoredImageURL;
    NSString *_callToActionTxt;
    id <IFlurryNativeAdReporting> _adReporting;
    AVAudioSession *_avSession;
    CDUnknownBlockType _thumbnailReadyBlock;
}

+ (struct CGSize)sizeForText:(id)arg1 font:(id)arg2 maxWidth:(int)arg3 maxHeight:(int)arg4;
@property(copy, nonatomic) CDUnknownBlockType thumbnailReadyBlock; // @synthesize thumbnailReadyBlock=_thumbnailReadyBlock;
@property(retain, nonatomic) AVAudioSession *avSession; // @synthesize avSession=_avSession;
@property(nonatomic) __weak id <IFlurryNativeAdReporting> adReporting; // @synthesize adReporting=_adReporting;
@property(nonatomic) _Bool enteredBG; // @synthesize enteredBG=_enteredBG;
@property(retain, nonatomic) NSString *callToActionTxt; // @synthesize callToActionTxt=_callToActionTxt;
@property(retain, nonatomic) NSString *sponsoredImageURL; // @synthesize sponsoredImageURL=_sponsoredImageURL;
@property(retain, nonatomic) NSString *previewHqImageURL; // @synthesize previewHqImageURL=_previewHqImageURL;
@property(retain, nonatomic) NSString *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(retain, nonatomic) NSString *sponsorerTxt; // @synthesize sponsorerTxt=_sponsorerTxt;
@property(retain, nonatomic) NSString *headlineTxt; // @synthesize headlineTxt=_headlineTxt;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FlurryAdViewController *fullscreenViewController; // @synthesize fullscreenViewController=_fullscreenViewController;
@property(retain, nonatomic) UILabel *sponsorerLabel; // @synthesize sponsorerLabel=_sponsorerLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *sponsoredLogoImageView; // @synthesize sponsoredLogoImageView=_sponsoredLogoImageView;
@property(retain, nonatomic) UILabel *sponsoredTextLabel; // @synthesize sponsoredTextLabel=_sponsoredTextLabel;
@property(retain, nonatomic) UIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) UIView *controlsGradientView; // @synthesize controlsGradientView=_controlsGradientView;
@property(retain, nonatomic) UIButton *minimizescreenButton; // @synthesize minimizescreenButton=_minimizescreenButton;
@property(retain, nonatomic) UIButton *CTAFullScreenButton; // @synthesize CTAFullScreenButton=_CTAFullScreenButton;
@property(retain, nonatomic) UIView *fullscreenOverlayView; // @synthesize fullscreenOverlayView=_fullscreenOverlayView;
@property(retain, nonatomic) UIView *fullscreenView; // @synthesize fullscreenView=_fullscreenView;
@property(retain, nonatomic) UIButton *CTAButton; // @synthesize CTAButton=_CTAButton;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *streamOverlayView; // @synthesize streamOverlayView=_streamOverlayView;
@property(retain, nonatomic) UIImage *vidUnMuteImage; // @synthesize vidUnMuteImage=_vidUnMuteImage;
@property(retain, nonatomic) UIImage *vidMuteImage; // @synthesize vidMuteImage=_vidMuteImage;
@property(retain, nonatomic) UIImage *vidMinimizeScreenImage; // @synthesize vidMinimizeScreenImage=_vidMinimizeScreenImage;
@property(retain, nonatomic) UIImage *vidFullScreenImage; // @synthesize vidFullScreenImage=_vidFullScreenImage;
@property(retain, nonatomic) UIImage *vidRefreshImage; // @synthesize vidRefreshImage=_vidRefreshImage;
@property(retain, nonatomic) UIImage *vidPauseImage; // @synthesize vidPauseImage=_vidPauseImage;
@property(retain, nonatomic) UIImage *vidPlayImageWithCircle; // @synthesize vidPlayImageWithCircle=_vidPlayImageWithCircle;
@property(retain, nonatomic) UIImage *vidPlayImage; // @synthesize vidPlayImage=_vidPlayImage;
@property(retain, nonatomic) NSDictionary *videoControlsAssetDictionary; // @synthesize videoControlsAssetDictionary=_videoControlsAssetDictionary;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool autoLoop; // @synthesize autoLoop=_autoLoop;
@property(nonatomic) int controlsShowRequest; // @synthesize controlsShowRequest=_controlsShowRequest;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <IFlurryVideoNativeAd> ad; // @synthesize ad=_ad;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)adjustOrientationCallback;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)getCorrectGesture;
- (void)removeGesturesOnPLayer;
- (void)addGestureToPlayer;
- (double)getButtonSize;
- (double)getFontSize:(id)arg1;
- (struct CGRect)getCGRect:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (_Bool)isAudioON;
- (_Bool)isAutoplayed;
- (int)getViewInfo;
- (float)getCurrentVolume;
- (int)audioInfo;
- (id)getMacroDictionary;
- (void)stopTimer;
- (void)timerCheck:(id)arg1;
- (void)moviePlaybackDidFinish:(id)arg1;
- (void)handleAudioSessionInterruption:(id)arg1;
- (void)addMoviePlaybackDidFinishNotification;
- (void)resumeMovie;
- (void)muteMovieWithState:(_Bool)arg1;
- (void)muteMovie;
- (void)pauseMovie;
- (float)currentVolume;
- (void)playbackStartup;
- (void)playbackPlayState;
- (void)playbackPausedState;
- (void)playbackCompletedState;
- (void)pauseSessionWithState:(int)arg1;
- (void)updatePlayImage:(int)arg1;
- (void)updateMinimizeScreenImage;
- (void)updatePauseImage;
- (void)updateMuteImage:(int)arg1;
- (void)removeFullScreenOverlayView;
- (void)showControls;
- (void)hideControls:(id)arg1;
- (void)showControlsWithTimedHide:(_Bool)arg1;
- (struct CGRect)sponsorerLabelFrame:(struct CGSize)arg1;
- (void)addAdSponsorer;
- (struct CGRect)titleLabelFrame:(struct CGSize)arg1;
- (void)addAdTitle;
- (struct CGRect)sponsoredFrame:(struct CGSize)arg1;
- (struct CGRect)sponsoredLogoFrame:(struct CGSize)arg1;
- (void)addSponsored;
- (struct CGRect)pauseButtonFrame;
- (void)addPauseButton;
- (struct CGRect)muteButtonFrame;
- (void)addMuteButton;
- (struct CGRect)gradientFrame;
- (void)addGradient;
- (struct CGRect)minimizescreenButtonFrame;
- (void)addMinimizeButton;
- (struct CGRect)CTAFullScreenButtonFrame:(struct CGSize)arg1;
- (void)addFullscreenCTAButton;
- (struct CGRect)fullscreenVideoViewFrame:(struct CGRect)arg1;
- (void)addFullscreenVideoView;
- (void)addFullScreenOverlayView;
- (void)videoPlayerFullScreen;
- (void)pauseIfRequred;
- (void)videoPlayerCollapseFullScreen;
- (void)removeSteamOverlay;
- (void)removePlayButtonOverlay;
- (struct CGRect)playButtonFrame:(long long)arg1;
- (void)addPlayButtonOverlay;
- (void)removeRefreshOverlay;
- (void)addRefreshOverlay;
- (void)addStreamOverlayViewForState:(id)arg1;
- (void)addStreamOverlayView;
- (void)addCollapseVideoView;
- (void)willEnterForeground;
- (void)willEnterBackground;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)removeNotificationForFGBG;
- (void)addNotificationForFGBG;
- (void)playVideoWithAd:(id)arg1;
- (void)listSubviewsOfView:(id)arg1;
- (void)previewImageSetup;
- (void)videoSetupWithAd:(id)arg1;
- (id)initViewWithVideoAd:(id)arg1;
- (void)getThumbnailImageAt:(CDStruct_1b6d18a9)arg1 imageReadyBlock:(CDUnknownBlockType)arg2;
- (void)initializeAssetDictionary:(id)arg1;
- (void)setImageAssets;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

