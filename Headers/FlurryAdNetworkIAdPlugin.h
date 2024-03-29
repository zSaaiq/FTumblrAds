//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdNetworkBasePlugin.h"

#import "ADBannerViewDelegate-Protocol.h"
#import "ADInterstitialAdDelegate-Protocol.h"

@class NSString;

@interface FlurryAdNetworkIAdPlugin : FlurryAdNetworkBasePlugin <ADInterstitialAdDelegate, ADBannerViewDelegate>
{
    _Bool adRendered;
}

@property(nonatomic, getter=isAdRendered) _Bool adRendered; // @synthesize adRendered;
- (void)interstitialAdActionDidFinish:(id)arg1;
- (_Bool)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)removeBanner:(id)arg1;
- (_Bool)viewIsBanner:(id)arg1 withHook:(id)arg2;
- (void)cleanupAdView:(id)arg1;
- (void)adjustAdBannerFrame;
- (void)renderAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (_Bool)getAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (struct CGSize)getBannerDimensions:(id)arg1;
- (_Bool)adIsAvailable:(id)arg1 parentView:(id)arg2 orientation:(long long)arg3;
- (id)currentBanner;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

