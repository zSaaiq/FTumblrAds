//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNativeAd, NSError;

@protocol FBNativeAdDelegate <NSObject>

@optional
- (void)nativeAdDidFinishHandlingClick:(FBNativeAd *)arg1;
- (void)nativeAdDidClick:(FBNativeAd *)arg1;
- (void)nativeAd:(FBNativeAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)nativeAdWillLogImpression:(FBNativeAd *)arg1;
- (void)nativeAdDidDownloadMedia:(FBNativeAd *)arg1;
- (void)nativeAdDidLoad:(FBNativeAd *)arg1;
@end

