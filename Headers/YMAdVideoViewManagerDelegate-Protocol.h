//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURLRequest, YMAdVideoViewManager, YVideoView;

@protocol YMAdVideoViewManagerDelegate <NSObject>
- (_Bool)videoViewManager:(YMAdVideoViewManager *)arg1 videoPlayerEndCardWebViewShouldStartLoadWithRequest:(NSURLRequest *)arg2;
- (void)videoViewManager:(YMAdVideoViewManager *)arg1 errorOverlayTapped:(YVideoView *)arg2;
- (void)videoViewManager:(YMAdVideoViewManager *)arg1 callToActionButtonTapped:(YVideoView *)arg2;
- (void)videoViewManager:(YMAdVideoViewManager *)arg1 replayButtonTapped:(YVideoView *)arg2;
- (void)videoViewManager:(YMAdVideoViewManager *)arg1 endStateOverlayTapped:(YVideoView *)arg2;
@end
