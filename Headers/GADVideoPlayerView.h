//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADVideoRendering-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString;

@interface GADVideoPlayerView : UIView <GADVideoRendering>
{
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    _Bool _playbackOptimizationEnabled;
    _Bool _playbackOptimizationDisabledBySDKCore;
}

- (void).cxx_destruct;
- (void)disableVideoPlaybackOptimization;
- (void)resetVideoPlaybackOptimization;
- (void)enableVideoPlaybackOptimization;
- (void)optimizeVideoForAdVisibility:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUpWithPlayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
