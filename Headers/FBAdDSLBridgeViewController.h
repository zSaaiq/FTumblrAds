//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdDSLViewControllerDelegate-Protocol.h"
#import "FBAdReportingCoordinatorDelegate-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class FBAdDSLViewController, FBAdFunnelLogger, FBAdPlacementDefinition, FBAdReportingCoordinator, FBAdViewabilityValidator, FBNativeAdDataModel, NSDate, NSObject, NSString;
@protocol FBAdDSLBridgeDelegate, OS_dispatch_queue;

@interface FBAdDSLBridgeViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdViewabilityValidatorDelegate, FBAdDSLViewControllerDelegate>
{
    _Bool _dynamicViewControllerNotifiedImpression;
    _Bool _rewardDidComplete;
    id <FBAdDSLBridgeDelegate> _delegate;
    FBAdDSLViewController *_dynamicViewController;
    FBAdReportingCoordinator *_reportingCoordinator;
    FBNativeAdDataModel *_model;
    FBAdFunnelLogger *_funnelLogger;
    FBAdViewabilityValidator *_viewabilityValidator;
    FBAdPlacementDefinition *_placementDefinition;
    NSDate *_loadTime;
    NSDate *_impressionTime;
    NSDate *_CTATime;
    NSDate *_memWarning;
    unsigned long long _errorCounter;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(nonatomic) _Bool rewardDidComplete; // @synthesize rewardDidComplete=_rewardDidComplete;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) unsigned long long errorCounter; // @synthesize errorCounter=_errorCounter;
@property(retain, nonatomic) NSDate *memWarning; // @synthesize memWarning=_memWarning;
@property(retain, nonatomic) NSDate *CTATime; // @synthesize CTATime=_CTATime;
@property(retain, nonatomic) NSDate *impressionTime; // @synthesize impressionTime=_impressionTime;
@property(retain, nonatomic) NSDate *loadTime; // @synthesize loadTime=_loadTime;
@property(nonatomic) _Bool dynamicViewControllerNotifiedImpression; // @synthesize dynamicViewControllerNotifiedImpression=_dynamicViewControllerNotifiedImpression;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(nonatomic) __weak FBAdFunnelLogger *funnelLogger; // @synthesize funnelLogger=_funnelLogger;
@property(copy, nonatomic) FBNativeAdDataModel *model; // @synthesize model=_model;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(readonly, nonatomic) FBAdDSLViewController *dynamicViewController; // @synthesize dynamicViewController=_dynamicViewController;
@property(nonatomic) __weak id <FBAdDSLBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (void)dynamicAdViewController:(id)arg1 logFunnelEventWithName:(id)arg2;
- (void)dynamicAdViewController:(id)arg1 logFunnelEvent:(unsigned long long)arg2 extraData:(id)arg3;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)assetForURL:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sdkVersion;
- (id)context;
- (void)logDSLEventWithData:(id)arg1;
- (void)dynamicAdViewController:(id)arg1 debugEventWithData:(id)arg2;
- (void)logErrorEventWithData:(id)arg1;
- (void)dynamicAdViewController:(id)arg1 logErrorWithData:(id)arg2;
- (id)dslViewStateExtraData;
- (void)dynamicAdViewController:(id)arg1 logEventWithData:(id)arg2;
- (void)dynamicAdViewController:(id)arg1 closeButtonTappedWithTouch:(id)arg2;
- (void)dynamicAdViewController:(id)arg1 reportFlowStartedWithTouch:(id)arg2;
- (void)dynamicAdViewController:(id)arg1 rewardCompletedWithTouch:(id)arg2;
- (void)dynamicAdViewController:(id)arg1 reportImpressionWithAdView:(id)arg2;
- (void)dynamicAdViewController:(id)arg1 CTATappedWithTouch:(id)arg2 extraData:(id)arg3;
- (void)dynamicAdViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)dynamicAdViewControllerDidLoad:(id)arg1;
- (void)dismissDSLViewController;
- (_Bool)isReadyToPresent;
- (void)logImpression;
- (void)setupNotifications;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (void)loadAdWithData:(id)arg1;
- (void)prepareToShowAd;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNativeAdDataModel:(id)arg1 placementDefinition:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

