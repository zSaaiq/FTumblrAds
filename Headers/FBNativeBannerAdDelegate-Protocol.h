//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNativeBannerAd, NSError;

@protocol FBNativeBannerAdDelegate <NSObject>

@optional
- (void)nativeBannerAdDidFinishHandlingClick:(FBNativeBannerAd *)arg1;
- (void)nativeBannerAdDidClick:(FBNativeBannerAd *)arg1;
- (void)nativeBannerAd:(FBNativeBannerAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)nativeBannerAdWillLogImpression:(FBNativeBannerAd *)arg1;
- (void)nativeBannerAdDidDownloadMedia:(FBNativeBannerAd *)arg1;
- (void)nativeBannerAdDidLoad:(FBNativeBannerAd *)arg1;
@end

