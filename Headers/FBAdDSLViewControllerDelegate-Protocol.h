//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FBAdDSLTouchRecord, FBAdDSLViewController, NSDictionary, NSError, NSString, NSURL, UIView;

@protocol FBAdDSLViewControllerDelegate
- (void)assetForURL:(NSURL *)arg1 type:(unsigned long long)arg2 completion:(void (^)(NSURL *))arg3;
- (NSString *)sdkVersion;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 logFunnelEventWithName:(NSString *)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 logFunnelEvent:(unsigned long long)arg2 extraData:(NSDictionary *)arg3;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 debugEventWithData:(id)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 logErrorWithData:(NSDictionary *)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 logEventWithData:(NSDictionary *)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 closeButtonTappedWithTouch:(FBAdDSLTouchRecord *)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 reportFlowStartedWithTouch:(FBAdDSLTouchRecord *)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 reportImpressionWithAdView:(UIView *)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 CTATappedWithTouch:(FBAdDSLTouchRecord *)arg2 extraData:(NSDictionary *)arg3;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 rewardCompletedWithTouch:(FBAdDSLTouchRecord *)arg2;
- (void)dynamicAdViewController:(FBAdDSLViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)dynamicAdViewControllerDidLoad:(FBAdDSLViewController *)arg1;
@end

