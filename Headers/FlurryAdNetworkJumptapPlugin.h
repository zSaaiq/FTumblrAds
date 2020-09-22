//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdNetworkBasePlugin.h"

#import "JTAdWidgetDelegate-Protocol.h"

@class JTAdWidget, NSString;

@interface FlurryAdNetworkJumptapPlugin : FlurryAdNetworkBasePlugin <JTAdWidgetDelegate>
{
    _Bool internetAvailable;
    JTAdWidget *currentBanner;
    JTAdWidget *currentInterstitial;
    _Bool adRendered;
}

+ (_Bool)viewIsBanner:(id)arg1 withAdSpaceName:(id)arg2;
+ (void)removeBanner:(id)arg1;
+ (_Bool)jumptapEnabled;
+ (id)getADInterstitialViewClass;
+ (id)getADBannerViewClass;
+ (void)setADViewDelegate:(id)arg1;
@property(nonatomic, getter=isAdRendered) _Bool adRendered; // @synthesize adRendered;
@property(retain, nonatomic) JTAdWidget *currentInterstitial; // @synthesize currentInterstitial;
@property(retain, nonatomic) JTAdWidget *currentBanner; // @synthesize currentBanner;
@property(nonatomic) _Bool internetAvailable; // @synthesize internetAvailable;
- (void).cxx_destruct;
- (void)endDisplayingInterstitial:(id)arg1;
- (void)beginDisplayingInterstitial:(id)arg1;
- (void)adWidget:(id)arg1 didFailToShowAd:(id)arg2;
- (void)adWidget:(id)arg1 didFailToRequestAd:(id)arg2;
- (void)endAdInteraction:(id)arg1;
- (void)beginAdInteraction:(id)arg1;
- (id)adSpot:(id)arg1;
- (id)site:(id)arg1;
- (id)publisherId:(id)arg1;
- (_Bool)isInterstitial:(id)arg1;
- (_Bool)shouldRenderAd:(id)arg1;
- (void)removeBanner:(id)arg1;
- (void)cleanupAdView:(id)arg1;
- (_Bool)viewIsBanner:(id)arg1 withHook:(id)arg2;
- (void)renderAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (_Bool)getAdView:(id)arg1 parentView:(id)arg2 showTakeover:(_Bool)arg3 adContainer:(id)arg4;
- (struct CGSize)getBannerDimensions:(id)arg1;
- (id)supportedAdSizes;
- (_Bool)adIsAvailable:(id)arg1 parentView:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

