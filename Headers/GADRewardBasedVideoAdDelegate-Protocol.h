//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADAdReward, GADRewardBasedVideoAd, NSError;

@protocol GADRewardBasedVideoAdDelegate <NSObject>
- (void)rewardBasedVideoAd:(GADRewardBasedVideoAd *)arg1 didRewardUserWithReward:(GADAdReward *)arg2;

@optional
- (void)rewardBasedVideoAdWillLeaveApplication:(GADRewardBasedVideoAd *)arg1;
- (void)rewardBasedVideoAdDidClose:(GADRewardBasedVideoAd *)arg1;
- (void)rewardBasedVideoAdDidStartPlaying:(GADRewardBasedVideoAd *)arg1;
- (void)rewardBasedVideoAdDidOpen:(GADRewardBasedVideoAd *)arg1;
- (void)rewardBasedVideoAdDidReceiveAd:(GADRewardBasedVideoAd *)arg1;
- (void)rewardBasedVideoAd:(GADRewardBasedVideoAd *)arg1 didFailToLoadWithError:(NSError *)arg2;
@end

