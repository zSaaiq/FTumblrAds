//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdGoToEndcardTransitionable-Protocol.h"
#import "FBAdIntroCardTransitionable-Protocol.h"
#import "FBAdReportingCoordinatorDelegate-Protocol.h"
#import "FBAdVideoAdViewDelegate-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class FBAdDetailsAndCTAButtonContainerView, FBAdFunnelLogger, FBAdLooseRewardView, FBAdPlacementDefinition, FBAdReportingCoordinator, FBAdVideoAdView, FBAdViewabilityValidator, FBInterstitialAdToolbarView, FBNativeAdDataModel, NSString;
@protocol FBAdVideoAdViewControllerDelegate;

@interface FBAdVideoAdViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdViewabilityValidatorDelegate, FBAdVideoAdViewDelegate, FBAdGoToEndcardTransitionable, FBAdIntroCardTransitionable>
{
    _Bool _forcedSkipped;
    _Bool _isLoaded;
    _Bool _hasAppearedBefore;
    _Bool _autoplay;
    _Bool _toldDelegateToLogImpression;
    _Bool _videoReadyToDisplay;
    _Bool _loggedShowOrFailure;
    id <FBAdVideoAdViewControllerDelegate> _delegate;
    FBAdVideoAdView *_videoAdView;
    FBAdReportingCoordinator *_reportingCoordinator;
    FBAdPlacementDefinition *_placementDefinition;
    FBAdViewabilityValidator *_viewabilityValidator;
    NSString *_token;
    FBAdFunnelLogger *_funnelLogger;
    NSString *_requestId;
    FBNativeAdDataModel *_adDataModel;
    FBAdLooseRewardView *_looseRewardView;
}

@property(retain, nonatomic) FBAdLooseRewardView *looseRewardView; // @synthesize looseRewardView=_looseRewardView;
@property(copy, nonatomic) FBNativeAdDataModel *adDataModel; // @synthesize adDataModel=_adDataModel;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic, getter=isLoggedShowOrFailure) _Bool loggedShowOrFailure; // @synthesize loggedShowOrFailure=_loggedShowOrFailure;
@property(nonatomic) __weak FBAdFunnelLogger *funnelLogger; // @synthesize funnelLogger=_funnelLogger;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property _Bool videoReadyToDisplay; // @synthesize videoReadyToDisplay=_videoReadyToDisplay;
@property(nonatomic) _Bool toldDelegateToLogImpression; // @synthesize toldDelegateToLogImpression=_toldDelegateToLogImpression;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool hasAppearedBefore; // @synthesize hasAppearedBefore=_hasAppearedBefore;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) __weak FBAdVideoAdView *videoAdView; // @synthesize videoAdView=_videoAdView;
@property(nonatomic, getter=isForcedSkipped) _Bool forcedSkipped; // @synthesize forcedSkipped=_forcedSkipped;
@property(nonatomic) __weak id <FBAdVideoAdViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
@property(readonly, nonatomic) __weak FBInterstitialAdToolbarView *toolbarView;
@property(readonly, nonatomic) __weak FBAdDetailsAndCTAButtonContainerView *adDetailsAndCTAButtonContainerView;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (id)logger;
- (id)funnel;
@property(readonly, nonatomic, getter=shouldShowEndcard) _Bool showEndcard;
- (void)funnelLogVideoSkipped;
- (void)funnelLogCTAClick;
- (void)videoAdView:(id)arg1 didTouchCTAWithGesture:(id)arg2;
- (void)videoAdView:(id)arg1 didTouchCTAWithEvent:(id)arg2;
- (void)showLooseRewardView:(id)arg1 touchData:(id)arg2;
- (void)continueWatchingViedeo:(id)arg1;
- (_Bool)shuouldShowLoseRewardDialog:(id)arg1;
- (void)videoAdView:(id)arg1 skippedWithTouchData:(id)arg2;
- (void)videoAdView:(id)arg1 didEndWithError:(id)arg2;
- (void)videoAdViewDidLoad:(id)arg1;
- (void)skipVideo:(id)arg1 withTouchData:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)cleanLayout;
- (_Bool)criteriasForLoggingImpressionForVideoIsMet;
- (void)tellDelegateToLogImpressionIfCriteriasAreMet;
- (void)stopViewabilityValidation;
- (void)setupViewabilityValidation;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersStatusBarHidden;
- (id)initWithAdDataModel:(id)arg1 placementDefinition:(id)arg2 useNewLayout:(_Bool)arg3 useNewToolbar:(_Bool)arg4 useAdaptiveLayout:(_Bool)arg5 showCta:(_Bool)arg6 autoplay:(_Bool)arg7 isRewardedAd:(_Bool)arg8 forcedViewTime:(CDStruct_1b6d18a9)arg9 rootViewController:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
