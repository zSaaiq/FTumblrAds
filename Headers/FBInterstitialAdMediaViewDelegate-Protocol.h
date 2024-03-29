//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInterstitialAdMediaView, NSError;

@protocol FBInterstitialAdMediaViewDelegate <NSObject>
- (void)interstitialAdMediaView:(FBInterstitialAdMediaView *)arg1 didFailWithError:(NSError *)arg2;
- (void)interstitialAdMediaViewDidEnd:(FBInterstitialAdMediaView *)arg1;
- (void)interstitialAdMediaViewDidProgress:(FBInterstitialAdMediaView *)arg1;
- (void)interstitialAdMediaViewDidLoad:(FBInterstitialAdMediaView *)arg1;

@optional
- (void)interstitialAdMediaViewDidPauseVideo:(FBInterstitialAdMediaView *)arg1;
- (void)interstitialAdMediaViewDidStartVideo:(FBInterstitialAdMediaView *)arg1;
- (void)interstitialAdMediaViewDidShowPlayButton:(FBInterstitialAdMediaView *)arg1;
- (void)interstitialAdMediaViewDidHidePlayButton:(FBInterstitialAdMediaView *)arg1;
@end

