//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSPlayerErrorOverlayDelegate-Protocol.h"
#import "YVCastingOverlayDelegate-Protocol.h"
#import "YVChromePlayPauseViewDelegate-Protocol.h"
#import "YVSNotCastableOverlayDelegate-Protocol.h"

@class NSString, UIImage, UIView, VDMSGlobalState, YVChromeToolbarItemNode, YVChromeToolbarNode, YVChromeViewNode, YVCustomChrome, YVideoPlayerControlOptions;
@protocol YVChromeDelegate;

@interface YVChrome : NSObject <YVChromePlayPauseViewDelegate, YVCastingOverlayDelegate, YVSNotCastableOverlayDelegate, VDMSPlayerErrorOverlayDelegate>
{
    _Bool _isScrubbing;
    _Bool _needsUpdate;
    _Bool _inVisualSeek;
    id <YVChromeDelegate> _delegate;
    VDMSGlobalState *_globalState;
    YVChromeViewNode *_rootNode;
    YVChromeViewNode *_thumbnailImageView;
    YVChromeViewNode *_airplayOverlay;
    YVChromeViewNode *_castingOverlay;
    YVChromeViewNode *_notAirplayableOverlay;
    YVChromeViewNode *_notCastableOverlay;
    YVChromeViewNode *_wifiRestrictedOverlay;
    YVChromeViewNode *_errorOverlay;
    YVChromeViewNode *_visualSeekView;
    YVChromeViewNode *_topControlsView;
    YVChromeViewNode *_bottomControlsView;
    YVChromeViewNode *_topGradient;
    YVChromeViewNode *_bottomGradient;
    YVChromeViewNode *_seekbar;
    YVChromeViewNode *_playbackPositionLabel;
    YVChromeViewNode *_durationLabel;
    YVChromeViewNode *_skipBackButton;
    YVChromeViewNode *_skipForwardButton;
    YVChromeToolbarNode *_topLeftToolbar;
    YVChromeToolbarNode *_topRightToolbar;
    YVChromeToolbarNode *_bottomLeftToolbar;
    YVChromeToolbarNode *_bottomRightToolbar;
    YVChromeToolbarItemNode *_liveIndicator;
    YVChromeToolbarItemNode *_adCountLabel;
    YVChromeToolbarItemNode *_popoutButton;
    YVChromeToolbarItemNode *_airplayButton;
    YVChromeToolbarItemNode *_castButton;
    YVChromeToolbarItemNode *_moreInfoButton;
    YVChromeToolbarItemNode *_adChoiceButton;
    YVChromeToolbarItemNode *_toolbarPlayPauseButton;
    YVChromeToolbarItemNode *_combinedTimeLabel;
    YVChromeToolbarItemNode *_muteButton;
    YVChromeToolbarItemNode *_fullscreenButton;
    YVChromeToolbarItemNode *_closedCaptionsButton;
    YVChromeToolbarItemNode *_audioSelectionButton;
    YVChromeToolbarItemNode *_feedbackButton;
    YVChromeToolbarItemNode *_manualBitrateButton;
    YVChromeViewNode *_centerPlayButton;
    YVChromeViewNode *_replayButton;
    YVChromeViewNode *_centerActivityIndicator;
    YVChromeViewNode *_muteIndicator;
    YVChromeViewNode *_voiceOverChromeToggleButton;
    YVChromeViewNode *_customLogoImageView;
    UIImage *_desiredThumbnailImage;
    double _thumbnailAnimationDuration;
    struct CGRect _lastBottomRightFrame;
}

+ (Class)visualSeekViewClass;
+ (Class)spriteViewClass;
+ (Class)imageViewClass;
- (void).cxx_destruct;
@property(nonatomic) double thumbnailAnimationDuration; // @synthesize thumbnailAnimationDuration=_thumbnailAnimationDuration;
@property(retain, nonatomic) UIImage *desiredThumbnailImage; // @synthesize desiredThumbnailImage=_desiredThumbnailImage;
@property(nonatomic) _Bool inVisualSeek; // @synthesize inVisualSeek=_inVisualSeek;
@property(retain, nonatomic) YVChromeViewNode *customLogoImageView; // @synthesize customLogoImageView=_customLogoImageView;
@property(retain, nonatomic) YVChromeViewNode *voiceOverChromeToggleButton; // @synthesize voiceOverChromeToggleButton=_voiceOverChromeToggleButton;
@property(retain, nonatomic) YVChromeViewNode *muteIndicator; // @synthesize muteIndicator=_muteIndicator;
@property(retain, nonatomic) YVChromeViewNode *centerActivityIndicator; // @synthesize centerActivityIndicator=_centerActivityIndicator;
@property(retain, nonatomic) YVChromeViewNode *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) YVChromeViewNode *centerPlayButton; // @synthesize centerPlayButton=_centerPlayButton;
@property(nonatomic) struct CGRect lastBottomRightFrame; // @synthesize lastBottomRightFrame=_lastBottomRightFrame;
@property(retain, nonatomic) YVChromeToolbarItemNode *manualBitrateButton; // @synthesize manualBitrateButton=_manualBitrateButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *audioSelectionButton; // @synthesize audioSelectionButton=_audioSelectionButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *closedCaptionsButton; // @synthesize closedCaptionsButton=_closedCaptionsButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *fullscreenButton; // @synthesize fullscreenButton=_fullscreenButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *combinedTimeLabel; // @synthesize combinedTimeLabel=_combinedTimeLabel;
@property(retain, nonatomic) YVChromeToolbarItemNode *toolbarPlayPauseButton; // @synthesize toolbarPlayPauseButton=_toolbarPlayPauseButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *adChoiceButton; // @synthesize adChoiceButton=_adChoiceButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *moreInfoButton; // @synthesize moreInfoButton=_moreInfoButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *castButton; // @synthesize castButton=_castButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *airplayButton; // @synthesize airplayButton=_airplayButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *popoutButton; // @synthesize popoutButton=_popoutButton;
@property(retain, nonatomic) YVChromeToolbarItemNode *adCountLabel; // @synthesize adCountLabel=_adCountLabel;
@property(retain, nonatomic) YVChromeToolbarItemNode *liveIndicator; // @synthesize liveIndicator=_liveIndicator;
@property(retain, nonatomic) YVChromeToolbarNode *bottomRightToolbar; // @synthesize bottomRightToolbar=_bottomRightToolbar;
@property(retain, nonatomic) YVChromeToolbarNode *bottomLeftToolbar; // @synthesize bottomLeftToolbar=_bottomLeftToolbar;
@property(retain, nonatomic) YVChromeToolbarNode *topRightToolbar; // @synthesize topRightToolbar=_topRightToolbar;
@property(retain, nonatomic) YVChromeToolbarNode *topLeftToolbar; // @synthesize topLeftToolbar=_topLeftToolbar;
@property(retain, nonatomic) YVChromeViewNode *skipForwardButton; // @synthesize skipForwardButton=_skipForwardButton;
@property(retain, nonatomic) YVChromeViewNode *skipBackButton; // @synthesize skipBackButton=_skipBackButton;
@property(retain, nonatomic) YVChromeViewNode *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) YVChromeViewNode *playbackPositionLabel; // @synthesize playbackPositionLabel=_playbackPositionLabel;
@property(retain, nonatomic) YVChromeViewNode *seekbar; // @synthesize seekbar=_seekbar;
@property(retain, nonatomic) YVChromeViewNode *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(retain, nonatomic) YVChromeViewNode *topGradient; // @synthesize topGradient=_topGradient;
@property(retain, nonatomic) YVChromeViewNode *bottomControlsView; // @synthesize bottomControlsView=_bottomControlsView;
@property(retain, nonatomic) YVChromeViewNode *topControlsView; // @synthesize topControlsView=_topControlsView;
@property(retain, nonatomic) YVChromeViewNode *visualSeekView; // @synthesize visualSeekView=_visualSeekView;
@property(retain, nonatomic) YVChromeViewNode *errorOverlay; // @synthesize errorOverlay=_errorOverlay;
@property(retain, nonatomic) YVChromeViewNode *wifiRestrictedOverlay; // @synthesize wifiRestrictedOverlay=_wifiRestrictedOverlay;
@property(retain, nonatomic) YVChromeViewNode *notCastableOverlay; // @synthesize notCastableOverlay=_notCastableOverlay;
@property(retain, nonatomic) YVChromeViewNode *notAirplayableOverlay; // @synthesize notAirplayableOverlay=_notAirplayableOverlay;
@property(retain, nonatomic) YVChromeViewNode *castingOverlay; // @synthesize castingOverlay=_castingOverlay;
@property(retain, nonatomic) YVChromeViewNode *airplayOverlay; // @synthesize airplayOverlay=_airplayOverlay;
@property(retain, nonatomic) YVChromeViewNode *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) YVChromeViewNode *rootNode; // @synthesize rootNode=_rootNode;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) __weak VDMSGlobalState *globalState; // @synthesize globalState=_globalState;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) __weak id <YVChromeDelegate> delegate; // @synthesize delegate=_delegate;
- (CDUnknownBlockType)hideOnShow;
- (CDUnknownBlockType)setAlphaOnShow;
- (void)seekBarWithParent:(id)arg1;
- (void)durationLabelLabelWithParent:(id)arg1;
- (void)playbackPositionLabelWithParent:(id)arg1;
- (void)setupForCustomSeekbarComponent:(id)arg1 inside:(id)arg2;
- (void)feedbackButtonWithParent:(id)arg1;
- (void)audioSelectionButtonWithParent:(id)arg1;
- (void)closedCaptionsButtonWithParent:(id)arg1;
- (void)fullScreenButtonWithParent:(id)arg1;
- (void)manualBitrateButtonWithParent:(id)arg1;
- (void)muteButtonWithParent:(id)arg1;
- (void)combinedTimeLabelWithParent:(id)arg1;
- (void)toolbarPlayPauseButtonWithParent:(id)arg1;
- (void)adChoiceButtonWithParent:(id)arg1;
- (void)moreInfoButtonWithParent:(id)arg1;
- (void)castButtonWithParent:(id)arg1;
- (void)airplayButtonWithParent:(id)arg1;
- (void)popoutButtonWithParent:(id)arg1;
- (void)adCountLabelWithParent:(id)arg1;
- (void)liveIndicatorWithParent:(id)arg1;
- (void)setupForCustomComponent:(id)arg1 inside:(id)arg2;
- (void)voiceOverChromeToggleButtonWithParent:(id)arg1;
- (void)muteIndicicatorWithParent:(id)arg1;
- (void)centerActivityIndicatorWithParent:(id)arg1;
- (void)replayButtonWithParent:(id)arg1;
- (void)centerPlayButtonWithParent:(id)arg1;
- (void)customLogoImageWithParent:(id)arg1;
- (void)skipForwardButtonWithParent:(id)arg1;
- (void)skipBackButtonWithParent:(id)arg1;
- (void)configureViewNodes;
- (long long)thumbnailImageContentMode;
- (id)currentError;
- (void)stopCastingOverlayButtonPressed;
- (void)castingOverlayTapped;
- (void)playPauseViewPauseButtonPressed;
- (void)playPauseViewPlayButtonPressed;
- (void)manualBitrateButtonPressed:(id)arg1;
- (void)voiceOverChromeToggleButtonPressed;
- (void)feedbackButtonPressed:(id)arg1;
- (void)audioSelectionButtonPressed:(id)arg1;
- (void)closedCaptionsButtonPressed:(id)arg1;
- (void)fullscreenButtonPressed;
- (void)muteButtonPressed;
- (void)pauseButtonPressed;
- (void)replayButtonPressed;
- (void)playButtonPressed;
- (void)popoutButtonPressed;
- (void)adChoiceButtonPressed;
- (void)moreInfoButtonPressed;
- (void)skipForwardButtonPressed;
- (void)skipBackButtonPressed;
- (void)seekbarValueChanged:(id)arg1;
- (void)didStopScrubbing;
- (void)didStartScrubbing;
- (void)updateTimeDependentViews;
- (void)updateAdCountLabel;
- (void)updateThumbnailImage:(_Bool)arg1;
- (void)updateAnimated:(_Bool)arg1;
- (void)setNeedsUpdate;
- (void)update;
@property(readonly, nonatomic) YVCustomChrome *customChrome;
@property(readonly, nonatomic) UIView *view;
- (_Bool)shouldShowCombinedTimeLabels;
- (_Bool)isFullscreenPortrait;
- (_Bool)isFullscreenLandscape;
- (_Bool)isFullscreen;
@property(readonly, nonatomic) YVideoPlayerControlOptions *controlOptions;
- (id)videoSession;
- (id)timeAccessibilityTextForHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3;
- (id)timeDisplayForHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3;
- (void)getComponentsForTime:(double)arg1 hours:(long long *)arg2 minutes:(long long *)arg3 seconds:(long long *)arg4;
- (void)sizeLabel:(id)arg1 toFitText:(id)arg2;
- (id)createTimeLabel;
- (id)createAdCountLabel;
- (void)dispatchToNextRunLoop:(CDUnknownBlockType)arg1;
- (void)runOnMain:(CDUnknownBlockType)arg1;
- (id)createChromecastButton;
- (id)createCastingOverlay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

