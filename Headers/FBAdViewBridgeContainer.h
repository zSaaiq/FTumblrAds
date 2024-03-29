//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAdBridgeContainer.h"

#import "FBAdViewDelegate-Protocol.h"

@class FBAdView, NSString, UIViewController;

@interface FBAdViewBridgeContainer : FBAdBridgeContainer <FBAdViewDelegate>
{
    FBAdView *_adView;
    CDUnknownFunctionPointerType _adViewDidClickCallback;
    CDUnknownFunctionPointerType _adViewDidFinishHandlingClickCallback;
    CDUnknownFunctionPointerType _adViewDidLoadCallback;
    CDUnknownFunctionPointerType _adViewDidFailWithErrorCallback;
    CDUnknownFunctionPointerType _adViewWillLogImpressionCallback;
}

@property(nonatomic) CDUnknownFunctionPointerType adViewWillLogImpressionCallback; // @synthesize adViewWillLogImpressionCallback=_adViewWillLogImpressionCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidFailWithErrorCallback; // @synthesize adViewDidFailWithErrorCallback=_adViewDidFailWithErrorCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidLoadCallback; // @synthesize adViewDidLoadCallback=_adViewDidLoadCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidFinishHandlingClickCallback; // @synthesize adViewDidFinishHandlingClickCallback=_adViewDidFinishHandlingClickCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidClickCallback; // @synthesize adViewDidClickCallback=_adViewDidClickCallback;
@property(retain, nonatomic) FBAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispose;
- (void)adViewWillLogImpression:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (void)adViewDidLoad:(id)arg1;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (id)initWithAdView:(id)arg1 withUniqueId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;

@end

