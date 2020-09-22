//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIButton, UIImage, UIView, YVVariant, YVideoPlayerControlOptions, YVideoSession, YVideoWindowTransitionState;

@protocol YVChromeDelegate <NSObject>
@property(readonly, nonatomic) _Bool chromeDisplayingCaptions;
@property(readonly, nonatomic) _Bool chromeCaptionsAvailable;
@property(readonly, nonatomic) _Bool chromeStoppedAtEnd;
@property(readonly, nonatomic) _Bool chromeWifiRestricted;
@property(readonly, nonatomic) _Bool chromeSeekable;
@property(readonly, nonatomic) CDStruct_1b6d18a9 chromePlaybackPosition;
@property(readonly, nonatomic) CDStruct_1b6d18a9 chromePlaybackDuration;
- (void)chromeCenterPlaybackControlState:(long long *)arg1 toolbarPlaybackControlState:(long long *)arg2;
- (_Bool)chromeShouldShowMoreInfoButton;
- (_Bool)chromeShouldShowMuteButton:(_Bool)arg1;
- (UIView *)chromeRequestsErrorOverlay;
- (NSError *)chromeRequestsCurrentError;
- (UIImage *)customLogoImage;
- (UIImage *)chromeAdChoicesImage;
- (long long)chromeThumbnailImageContentMode;
- (UIView *)chromePostVideoOverlay;
- (double)chromeTopRightContentInsets;
- (double)chromeTopContentInsets;
- (double)chromeTopLeftContentInsets;
- (YVideoWindowTransitionState *)chromeCurrentWindowTransition;
- (_Bool)chromeControlsVisible;
- (_Bool)chromeless;
- (_Bool)chromeIsFullscreenPortrait;
- (_Bool)chromeIsFullscreenLandscape;
- (YVideoPlayerControlOptions *)chromeControlOptions;
- (YVideoSession *)chromeActiveVideoSession;
- (YVideoSession *)chromeContentVideoSession;
- (YVVariant *)selectedBitrateVariant;
- (void)bottomRightToolbarWidthUpdatedTo:(struct CGRect)arg1;
- (void)chromeManualBitrateButtonPressed:(UIButton *)arg1;
- (void)chromePopoutPressed;
- (void)chromeSkipBackButtonPressed;
- (void)chromeSkipForwardButtonPressed;
- (void)chromeStopCastingButtonPressed;
- (void)chromeCastingOverlayTapped;
- (void)chromeScrubEnded;
- (void)chromeScrubPositionChanged:(double)arg1;
- (void)chromeScrubStart;
- (void)chromeVoiceOverChromeToggleButtonPressed;
- (void)chromeAdChoiceButtonPressed;
- (void)chromeMoreInfoButtonPressed;
- (void)chromeMuteButtonPressed;
- (void)chromeFullscreenButtonPressed;
- (void)chromeClosedCaptionsButtonPressed:(UIButton *)arg1;
- (void)chromeAudioSelectionButtonPressed:(UIButton *)arg1;
- (void)chromeFeedbackButtonPressed:(UIButton *)arg1;
- (void)chromePauseButtonPressed;
- (void)chromeReplayButtonPressed;
- (void)chromePlayButtonPressed;
- (void)chromeViewCreated:(UIView *)arg1;
@end

