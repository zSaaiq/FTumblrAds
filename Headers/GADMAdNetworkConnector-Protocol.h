//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADMediationAdRequest-Protocol.h"

@class NSError, NSObject, UIView, UIViewController;
@protocol GADMAdNetworkAdapter, GADMediatedNativeAd;

@protocol GADMAdNetworkConnector <GADMediationAdRequest>
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didFailInterstitial:(NSError *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 clickDidOccurInBanner:(UIView *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveInterstitial:(NSObject *)arg2;
- (void)adapterDidDismissInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillDismissInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillPresentInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterDidDismissFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillDismissFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillPresentFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillLeaveApplication:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterDidGetAdClick:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveMediatedNativeAd:(id <GADMediatedNativeAd>)arg2;
- (void)adapterDidReceiveInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveAdView:(UIView *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didFailAd:(NSError *)arg2;
- (_Bool)adMuted;
- (float)adVolume;
- (UIViewController *)viewControllerForPresentingModalView;
@end

