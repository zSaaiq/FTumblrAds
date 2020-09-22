//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdNetworkBasePlugin.h"

#import "MobclixAdViewDelegate-Protocol.h"
#import "MobclixFullScreenAdDelegate-Protocol.h"

@class MobclixAdView, MobclixFullScreenAdViewController, NSString;

@interface FlurryAdNetworkMobclixPlugin : FlurryAdNetworkBasePlugin <MobclixFullScreenAdDelegate, MobclixAdViewDelegate>
{
    MobclixAdView *currentBanner;
    MobclixFullScreenAdViewController *currentInterstitial;
    _Bool _mobclixBannerReady;
    _Bool _mobclixInterstitialReady;
    _Bool _adRendered;
}

+ (id)getADClass;
+ (id)getADInterstitialViewClass;
+ (void)setADViewDelegate:(id)arg1;
@property(nonatomic, getter=isAdRendered) _Bool adRendered; // @synthesize adRendered=_adRendered;
@property(nonatomic) _Bool mobclixInterstitialReady; // @synthesize mobclixInterstitialReady=_mobclixInterstitialReady;
@property(nonatomic) _Bool mobclixBannerReady; // @synthesize mobclixBannerReady=_mobclixBannerReady;
@property(retain, nonatomic) MobclixFullScreenAdViewController *currentInterstitial; // @synthesize currentInterstitial;
@property(retain, nonatomic) MobclixAdView *currentBanner; // @synthesize currentBanner;
- (void).cxx_destruct;
- (void)fullScreenAdViewControllerDidDismissAd:(id)arg1;
- (void)fullScreenAdViewController:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)fullScreenAdViewControllerDidFinishLoad:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidFinishTouchThrough:(id)arg1;
- (void)adViewWillTouchThrough:(id)arg1;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)cleanupAdView:(id)arg1;
- (void)removeBanner:(id)arg1;
- (_Bool)viewIsBanner:(id)arg1 withHook:(id)arg2;
- (void)renderAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (_Bool)getAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (id)getADBannerViewClassForBannerDimensions:(id)arg1;
- (id)supportedAdSizes;
- (void)dealloc;
- (_Bool)adIsAvailable:(id)arg1 parentView:(id)arg2 orientation:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
