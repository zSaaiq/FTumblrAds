//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADAdMediationDelegate-Protocol.h"
#import "GADBannerViewDelegate-Protocol.h"
#import "GADSlotAdResponseDelegate-Protocol.h"

@class GADBannerView, GADVideoController, NSString, UIViewController;
@protocol GADNativeExpressAdViewDelegate;

@interface GADNativeExpressAdView : UIView <GADBannerViewDelegate, GADAdMediationDelegate, GADSlotAdResponseDelegate>
{
    GADBannerView *_bannerView;
    id <GADNativeExpressAdViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GADNativeExpressAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 willProcessMediatedAdResponse:(id)arg2;
- (_Bool)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id *)arg3;
- (id)adLoaderConfigurationForAd:(id)arg1 networkConfiguration:(id)arg2;
- (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;
- (void)adViewWillLeaveApplication:(id)arg1;
- (void)adViewDidDismissScreen:(id)arg1;
- (void)adViewWillDismissScreen:(id)arg1;
- (void)adViewWillPresentScreen:(id)arg1;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)setAdOptions:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) GADVideoController *videoController;
@property(readonly, nonatomic) __weak NSString *adNetworkClassName;
@property(nonatomic, getter=isAutoloadEnabled) _Bool autoloadEnabled;
@property(nonatomic) struct GADAdSize adSize;
@property(nonatomic) __weak UIViewController *rootViewController;
@property(copy, nonatomic) NSString *adUnitID;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (id)initWithAdSize:(struct GADAdSize)arg1 origin:(struct CGPoint)arg2;
- (id)initWithAdSize:(struct GADAdSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adSize:(struct GADAdSize)arg2;
- (void)commonInitWithBannerView:(id)arg1;
- (void)rootObjectLoggerChanged;
- (void)createdBannerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

