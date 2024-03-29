//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString, UIView, UIViewController;

@protocol IFlurryManagedUIAdReporting <NSObject>
@property(copy, nonatomic) CDUnknownBlockType createImpressionParams;
@property(retain, nonatomic) NSDictionary *impressionParams;
@property(retain, nonatomic) NSString *instrumentationTag;
@property(retain, nonatomic) NSString *requestIdentifier;
@property(retain, nonatomic) NSDate *timeOfCreation;
@property(nonatomic) unsigned long long mediaTypeForInstrumentation;
@property(nonatomic) unsigned long long adTypeForInstrumentation;
- (void)reportPageLoadTime;
- (void)reportAdClose;
- (void)reportVideoReplay;
- (void)reportVideoPaused;
- (void)reportVideoClickQuartile100WithParams:(NSDictionary *)arg1;
- (void)reportVideoQuartile100WithParams:(NSDictionary *)arg1;
- (void)reportVideoQuartile75WithParams:(NSDictionary *)arg1;
- (void)reportVideoQuartile50WithParams:(NSDictionary *)arg1;
- (void)reportVideoQuartile25WithParams:(NSDictionary *)arg1;
- (void)reportVideoChargeWithParams:(NSDictionary *)arg1;
- (void)reportVideoStartWithParams:(NSDictionary *)arg1;
- (void)reportVideoTickedToPosition:(float)arg1 withDuration:(float)arg2 params:(NSDictionary *)arg3;
- (void)reportAdHiddenReasonGivenWithParams:(NSDictionary *)arg1;
- (void)reportAdHiddenWithParams:(NSDictionary *)arg1;
- (void)reportSponsoredAdActionShare;
- (void)reportSponsoredAdActionSave;
- (void)reportSponsoredAdActionImpressionInternalWithParams:(NSDictionary *)arg1;
- (void)reportSponsoredAdActionClickInternalWithParams:(NSDictionary *)arg1;
- (void)reportWebEndCardImpressionWithParams:(NSDictionary *)arg1;
- (void)reportFullPageWebViewOpenActionWithURL:(NSString *)arg1 presentingViewController:(UIViewController *)arg2;
- (void)reportCallAction:(NSString *)arg1;
- (void)reportClickToCall;
- (void)reportFeedbackClickWithPresentingViewController:(UIViewController *)arg1;
- (void)reportInfoIconClickWithPresentingViewController:(UIViewController *)arg1;
- (void)reportClickWithPresentingViewController:(UIViewController *)arg1 params:(NSDictionary *)arg2;
- (void)trackingViewSetActive:(_Bool)arg1;
- (UIView *)trackingView;
- (void)untrackViewability;
- (void)trackViewabilityWithViewForVideo:(UIView *)arg1;
- (void)trackViewabilityWithView:(UIView *)arg1;
@end

