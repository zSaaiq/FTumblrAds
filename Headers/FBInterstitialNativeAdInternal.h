//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBAdDisplayableViewController-Protocol.h"
#import "FBAdDisplayableViewDelegate-Protocol.h"

@class FBAdCommandProcessor, FBAdDataModel, FBAdExtraHint, FBAdPlacementDefinition, FBInterstitialAdNativeView, FBNativeAdDataModel, NSNumber, NSString;
@protocol FBAdDisplayableViewControllerDelegate, FBAdFunnelLoggingDelegate;

@interface FBInterstitialNativeAdInternal : UIViewController <FBAdCommandProcessorDelegate, FBAdDisplayableViewDelegate, FBAdDisplayableViewController>
{
    _Bool _nativeViewHasAppearedBefore;
    id <FBAdDisplayableViewControllerDelegate> _delegate;
    FBNativeAdDataModel *_dataModel;
    FBAdPlacementDefinition *_placementDefinition;
    UIViewController *_rootViewController;
    FBAdCommandProcessor *_commandProcessor;
    double _firstImpressionTime;
    FBInterstitialAdNativeView *_nativeView;
    id <FBAdFunnelLoggingDelegate> _funnelLoggerDelegate;
    FBAdExtraHint *_extraHint;
}

@property(retain, nonatomic) FBAdExtraHint *extraHint; // @synthesize extraHint=_extraHint;
@property(nonatomic) __weak id <FBAdFunnelLoggingDelegate> funnelLoggerDelegate; // @synthesize funnelLoggerDelegate=_funnelLoggerDelegate;
@property(nonatomic) _Bool nativeViewHasAppearedBefore; // @synthesize nativeViewHasAppearedBefore=_nativeViewHasAppearedBefore;
@property(nonatomic) __weak FBInterstitialAdNativeView *nativeView; // @synthesize nativeView=_nativeView;
@property(nonatomic) double firstImpressionTime; // @synthesize firstImpressionTime=_firstImpressionTime;
@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FBAdDisplayableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)logger;
- (void)adDisplayableViewDidProgress:(id)arg1;
- (void)adDisplayableViewDidEnd:(id)arg1;
- (void)adDisplayableView:(id)arg1 didFailWithError:(id)arg2;
- (void)adDisplayableViewDidClose:(id)arg1;
- (void)processCommand:(id)arg1 withExtraData:(id)arg2 skipAppStore:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)adDisplayableViewDidInteract:(id)arg1 withTouchData:(id)arg2 touchType:(id)arg3 withCommand:(id)arg4 skipAppStore:(_Bool)arg5 withPageNumber:(id)arg6 withPageTotal:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)adDisplayableViewDidInteract:(id)arg1 withGesture:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6;
- (void)adDisplayableViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)adDisplayableViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6;
- (void)adDisplayableViewWantsToLogImpression:(id)arg1 withViewabilityValidator:(id)arg2 withPageNumber:(id)arg3 withPageTotal:(id)arg4;
- (void)adDisplayableViewDidLoad:(id)arg1;
- (id)adDisplayableViewRootViewController:(id)arg1;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)setupCommandProcessorIfNeeded;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)showAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAd;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
@property(readonly, nonatomic) NSNumber *cickDelayTime;
@property(readonly, nonatomic) FBAdDataModel *adDataModel;
- (id)initWithAdData:(id)arg1 placementDefinition:(id)arg2 extraHint:(id)arg3;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
