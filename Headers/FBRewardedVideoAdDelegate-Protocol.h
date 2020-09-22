//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBRewardedVideoAd, NSError;

@protocol FBRewardedVideoAdDelegate <NSObject>

@optional
- (void)rewardedVideoAdServerRewardDidFail:(FBRewardedVideoAd *)arg1;
- (void)rewardedVideoAdServerRewardDidSucceed:(FBRewardedVideoAd *)arg1;
- (void)rewardedVideoAdWillLogImpression:(FBRewardedVideoAd *)arg1;
- (void)rewardedVideoAdVideoComplete:(FBRewardedVideoAd *)arg1;
- (void)rewardedVideoAd:(FBRewardedVideoAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)rewardedVideoAdWillClose:(FBRewardedVideoAd *)arg1;
- (void)rewardedVideoAdDidClose:(FBRewardedVideoAd *)arg1;
- (void)rewardedVideoAdDidLoad:(FBRewardedVideoAd *)arg1;
- (void)rewardedVideoAdDidClick:(FBRewardedVideoAd *)arg1;
@end

