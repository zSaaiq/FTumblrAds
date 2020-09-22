//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "YMAdVideoPlayerViewVideoPlayingForwardingDelegate-Protocol.h"

@class NSError, NSString, NSURL, NSURLRequest, YMAdVideoPlayerView, YVideoViewState;

@protocol YMAdVideoPlayerViewDelegate <NSObject, YMAdVideoPlayerViewVideoPlayingForwardingDelegate>
@property(readonly) NSString *identifier;
@property(retain, nonatomic) YVideoViewState *savedPlaybackState;
- (_Bool)videoPlayerEndCardWebViewShouldStartLoadWithRequest:(NSURLRequest *)arg1;
- (void)videoPlayerWillShowWebviewEndCardForView:(YMAdVideoPlayerView *)arg1;
- (_Bool)videoPlayerDidStatusChangeForView:(YMAdVideoPlayerView *)arg1 status:(int)arg2;
- (void)videoPlayer:(YMAdVideoPlayerView *)arg1 didFailWithError:(NSError *)arg2;
- (void)reportVideoQuartile100Beacon;
- (void)videoPlayer:(YMAdVideoPlayerView *)arg1 statusChangedTo:(int)arg2;
- (void)videoPlayer:(YMAdVideoPlayerView *)arg1 didChangeFullScreenMode:(_Bool)arg2;
- (void)videoPlayerDidTapCallToAction:(YMAdVideoPlayerView *)arg1;
- (void)videoPlayer:(YMAdVideoPlayerView *)arg1 didReplayVideo:(NSURL *)arg2 byUserClick:(_Bool)arg3 fullScreen:(_Bool)arg4;
- (void)videoPlayer:(YMAdVideoPlayerView *)arg1 didPlayTo:(float)arg2 duration:(float)arg3 fullscreen:(_Bool)arg4;
- (void)videoPlayer:(YMAdVideoPlayerView *)arg1 didStartVideo:(NSURL *)arg2 byUserClick:(_Bool)arg3 fullScreen:(_Bool)arg4;
@end

