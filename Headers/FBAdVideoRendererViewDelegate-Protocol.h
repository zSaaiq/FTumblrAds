//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdVideoRendererView, NSError;

@protocol FBAdVideoRendererViewDelegate <NSObject>
- (void)videoViewDidLoad:(FBAdVideoRendererView *)arg1;

@optional
- (void)videoView:(FBAdVideoRendererView *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoViewDidEnd:(FBAdVideoRendererView *)arg1;
- (void)videoViewDidStall:(FBAdVideoRendererView *)arg1;
- (void)videoViewDidDisengageSeek:(FBAdVideoRendererView *)arg1;
- (void)videoViewDidSeek:(FBAdVideoRendererView *)arg1;
- (void)videoViewDidEngageSeek:(FBAdVideoRendererView *)arg1;
- (void)videoViewDidPlay:(FBAdVideoRendererView *)arg1;
- (void)videoViewDidPause:(FBAdVideoRendererView *)arg1;
- (void)videoViewDidChangeVolume:(FBAdVideoRendererView *)arg1;
@end

