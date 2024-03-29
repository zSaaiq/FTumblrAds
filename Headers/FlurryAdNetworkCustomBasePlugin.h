//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdNetworkBasePlugin.h"

#import "FlurryCustomAdNetworkDelegate-Protocol.h"

@class NSString;
@protocol FlurryCustomAdNetwork, FlurryCustomAdNetworkProperties;

@interface FlurryAdNetworkCustomBasePlugin : FlurryAdNetworkBasePlugin <FlurryCustomAdNetworkDelegate>
{
    id <FlurryCustomAdNetwork> _adNetwork;
    id <FlurryCustomAdNetworkProperties> _adNetworkProperties;
}

@property(retain, nonatomic) id <FlurryCustomAdNetworkProperties> adNetworkProperties; // @synthesize adNetworkProperties=_adNetworkProperties;
@property(retain, nonatomic) id <FlurryCustomAdNetwork> adNetwork; // @synthesize adNetwork=_adNetwork;
- (void).cxx_destruct;
- (void)networkDidCollapseAd;
- (void)networkWillCollapseAd;
- (void)networkWillExpandAd;
- (void)networkWillLeaveApplication:(_Bool)arg1;
- (void)networkDidDismissInterstitial;
- (void)networkWillDismissInterstitial;
- (void)networkWillPresentInterstitial;
- (void)networkAdDidReceiveClick:(_Bool)arg1;
- (void)networkDidReceiveAd:(id)arg1 interstitialAd:(_Bool)arg2;
- (void)networkDidFailAd:(id)arg1 interstitialAd:(_Bool)arg2;
- (void)cleanupAdView:(id)arg1;
- (void)renderAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (_Bool)getAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (_Bool)adIsAvailable:(id)arg1 parentView:(id)arg2 orientation:(long long)arg3;
- (id)initAdNetwork:(Class)arg1 withProperties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

