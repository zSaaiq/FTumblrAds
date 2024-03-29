//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YVChromeContainerView.h"

@class UIActivityIndicatorView, UIButton;
@protocol YVChromePlayPauseViewDelegate;

@interface YVChromePlayPauseView : YVChromeContainerView
{
    UIButton *_playPauseButton;
    UIActivityIndicatorView *_activityIndicator;
    id <YVChromePlayPauseViewDelegate> _delegate;
    long long _playbackControlState;
}

- (void).cxx_destruct;
@property(nonatomic) long long playbackControlState; // @synthesize playbackControlState=_playbackControlState;
@property(nonatomic) __weak id <YVChromePlayPauseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
- (void)buttonPressed;
- (void)setupActivityIndicator;
- (void)setupPlayPauseButton;

@end

