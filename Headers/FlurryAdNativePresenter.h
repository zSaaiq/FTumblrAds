//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdActor.h"

#import "FlurryAdNativeInteractorDelegate-Protocol.h"
#import "IFlurryAdPresenter-Protocol.h"
#import "IFlurryEventControllerHandler-Protocol.h"

@class FlurryAdFrame, FlurryAdManager, FlurryAdNativeInteractor, FlurryAdNativeRouter, FlurryAdUnit, NSString, UIView, UIViewController, UIWebView;
@protocol FlurryAdNativePresenterDelegate;

@interface FlurryAdNativePresenter : FlurryAdActor <FlurryAdNativeInteractorDelegate, IFlurryEventControllerHandler, IFlurryAdPresenter>
{
    _Bool appStoreInvoked;
    _Bool isAudioOn;
    _Bool adRendered;
    _Bool isFullScreen;
    _Bool activelyRespondingToAction;
    int audioOnAndFullViewInMilliSecs;
    float videoLastPositionInSecs;
    float adPercentVisible;
    FlurryAdFrame *_adFrame;
    NSString *space;
    UIViewController *presentingViewController;
    long long initialOrientation;
    id <FlurryAdNativePresenterDelegate> _delegate;
    FlurryAdNativeInteractor *_adNativeInteractor;
    FlurryAdNativeRouter *_adNativeRouter;
    FlurryAdUnit *_adUnit;
}

@property(retain, nonatomic) FlurryAdUnit *adUnit; // @synthesize adUnit=_adUnit;
@property(retain, nonatomic) FlurryAdNativeRouter *adNativeRouter; // @synthesize adNativeRouter=_adNativeRouter;
@property(retain, nonatomic) FlurryAdNativeInteractor *adNativeInteractor; // @synthesize adNativeInteractor=_adNativeInteractor;
@property(nonatomic) __weak id <FlurryAdNativePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool activelyRespondingToAction; // @synthesize activelyRespondingToAction;
@property(nonatomic) float adPercentVisible; // @synthesize adPercentVisible;
@property(nonatomic) float videoLastPositionInSecs; // @synthesize videoLastPositionInSecs;
@property(nonatomic) int audioOnAndFullViewInMilliSecs; // @synthesize audioOnAndFullViewInMilliSecs;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen;
@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation;
@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController;
@property(nonatomic) _Bool adRendered; // @synthesize adRendered;
@property(copy, nonatomic) NSString *space; // @synthesize space;
@property(nonatomic) _Bool isAudioOn; // @synthesize isAudioOn;
@property(nonatomic) _Bool appStoreInvoked; // @synthesize appStoreInvoked;
@property(retain, nonatomic) FlurryAdFrame *adFrame; // @synthesize adFrame=_adFrame;
- (void).cxx_destruct;
- (void)processAdEvent:(int)arg1;
- (void)presentAlertViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)openUrlInNativeBrowser:(id)arg1 params:(id)arg2;
- (void)showLoadingView;
- (void)reportPageLoadTime;
- (void)removeTakeoverWindows;
- (void)removeLoadingView;
- (void)openSKAppstore:(id)arg1;
- (_Bool)openAppUrl:(id)arg1 fromExWebView:(_Bool)arg2;
- (void)externalAdViewDidFinishLoad;
- (void)externalAdViewDidFailLoadWithError:(id)arg1;
- (void)externalAdViewDidCloseDismissAd:(_Bool)arg1;
- (id)activeAdUnit;
- (void)block_notifyDelegateOfSuccess:(id)arg1;
- (void)block_notifyDelegateOfFailure:(id)arg1;
- (void)adNativeInteractorFetchFailure:(id)arg1;
- (void)adNativeInteractorFetchSuccess:(id)arg1;
- (id)block_buildAsssetList:(id)arg1;
- (void)block_handleFetchSuccess:(id)arg1;
- (void)block_processFilled;
- (void)block_processPrepared;
- (void)block_prepareUsingAdUnit:(id)arg1;
- (void)fetchAdWithParams:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak FlurryAdManager *adManager;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property _Bool displayWhenReady;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isInView100HalfTime;
@property(nonatomic) _Bool isLoadingAdComponents;
@property(readonly, nonatomic) _Bool isReengagementAd;
@property(nonatomic) _Bool isSponsoredAd;
@property(nonatomic) _Bool mraidAdLoaded;
@property(nonatomic) long long notificationFlag;
@property(readonly, nonatomic) UIView *parentView;
@property(readonly, nonatomic) UIViewController *parentViewController;
@property(readonly) Class superclass;
@property(nonatomic) float timeInView100;
@property(nonatomic) float timeInView50;
@property(nonatomic) float timeInView50MaxContinuous;
@property(nonatomic) float timeInView50MaxContinuousLast;
@property(readonly, retain, nonatomic) UIWebView *webView;

@end

