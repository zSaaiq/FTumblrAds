//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADPrecacheGMSGHandler, GADVideoConfiguration;

@interface GADVideoPlayerGMSGHandler : GADGMSGHandler
{
    GADVideoConfiguration *_videoConfiguration;
    GADPrecacheGMSGHandler *_precacheGMSGHandler;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didReceiveTouchMoveAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveSeekToCurrentTimeAction:(id)arg2;
- (void)adView:(id)arg1 didReceivePauseVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceivePlayVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveLoadControlVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveLoadVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveSetVolumeAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveMutedVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveBackgroundAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveShowVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveHideVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveSetVideoSourceAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveNewVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveRotationVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceivePositionVideoAction:(id)arg2;
- (void)adView:(id)arg1 didReceivePrecacheAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveVideoAction:(id)arg2;
- (id)init;

@end

