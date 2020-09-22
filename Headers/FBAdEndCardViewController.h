//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdEndCardNoMediaViewDelegate-Protocol.h"
#import "FBAdEndCardScreenshotViewDelegate-Protocol.h"
#import "FBAdGoToEndcardTransitionable-Protocol.h"
#import "FBAdReportingCoordinatorDelegate-Protocol.h"

@class FBAdDetailsAndCTAButtonContainerView, FBAdReportingCoordinator, FBInterstitialAdToolbarView, NSString;
@protocol FBAdEndCardViewControllerDelegate;

@interface FBAdEndCardViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdEndCardScreenshotViewDelegate, FBAdEndCardNoMediaViewDelegate, FBAdGoToEndcardTransitionable>
{
    _Bool _hasAppearedBefore;
    _Bool _useNewToolbar;
    double _closeButtonDelay;
    id <FBAdEndCardViewControllerDelegate> _delegate;
    FBInterstitialAdToolbarView *_toolbarView;
    FBAdReportingCoordinator *_reportingCoordinator;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(nonatomic) _Bool useNewToolbar; // @synthesize useNewToolbar=_useNewToolbar;
@property(nonatomic) _Bool hasAppearedBefore; // @synthesize hasAppearedBefore=_hasAppearedBefore;
@property(retain, nonatomic) FBInterstitialAdToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) __weak id <FBAdEndCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double closeButtonDelay; // @synthesize closeButtonDelay=_closeButtonDelay;
- (void).cxx_destruct;
- (id)endCardAdaptiveView;
- (id)endCardNoMediaView;
- (id)endCardScreenshotView;
- (void)setupNotifications;
@property(readonly, nonatomic) __weak FBAdDetailsAndCTAButtonContainerView *adDetailsAndCTAButtonContainerView;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)endCardNoMediaViewDidTerminate:(id)arg1;
- (void)endCardNoMediaViewWillClose:(id)arg1;
- (void)endCardNoMediaViewClicked:(id)arg1;
- (void)endCardScreenshotViewWillClose;
- (void)endCardScreenshotViewClicked;
- (void)fadeInCloseButtonWithDuration:(double)arg1 delay:(double)arg2;
- (void)hideCloseButton;
- (void)setupToolbarViewWithRootViewController:(id)arg1 adDataModel:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)initWithAdDataModel:(id)arg1 useNewLayout:(_Bool)arg2 useNewToolbar:(_Bool)arg3 useAdaptiveLayout:(_Bool)arg4 rootViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

