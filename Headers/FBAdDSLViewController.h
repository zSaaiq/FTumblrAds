//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdDSLFullScreenAdViewControllerDelegate-Protocol.h"
#import "FBAdDSLViewModelDataLoaderDelegate-Protocol.h"

@class FBAdDSLConfiguration, FBAdDSLFullScreenAdDataProvider, FBAdDSLFullScreenAdViewController, FBAdDSLViewModel, NSDate, NSMutableArray, NSString;
@protocol FBAdDSLViewControllerDelegate;

@interface FBAdDSLViewController : UIViewController <FBAdDSLViewModelDataLoaderDelegate, FBAdDSLFullScreenAdViewControllerDelegate>
{
    _Bool _authKeySet;
    _Bool _dslReportedCriticalError;
    _Bool _dslControllerDidAppear;
    id <FBAdDSLViewControllerDelegate> _delegate;
    FBAdDSLFullScreenAdViewController *_fullScreenWebView;
    FBAdDSLFullScreenAdDataProvider *_dataProvider;
    FBAdDSLConfiguration *_configuration;
    FBAdDSLViewModel *_viewModel;
    NSDate *_viewReadyToShowDate;
    NSMutableArray *_eventsBuffer;
    long long _webViewRetryCountBeforeViewDidAppear;
    long long _webViewRetryCountAfterViewDidAppear;
}

@property(nonatomic) _Bool dslControllerDidAppear; // @synthesize dslControllerDidAppear=_dslControllerDidAppear;
@property(nonatomic) long long webViewRetryCountAfterViewDidAppear; // @synthesize webViewRetryCountAfterViewDidAppear=_webViewRetryCountAfterViewDidAppear;
@property(nonatomic) long long webViewRetryCountBeforeViewDidAppear; // @synthesize webViewRetryCountBeforeViewDidAppear=_webViewRetryCountBeforeViewDidAppear;
@property(retain, nonatomic) NSMutableArray *eventsBuffer; // @synthesize eventsBuffer=_eventsBuffer;
@property(nonatomic) _Bool dslReportedCriticalError; // @synthesize dslReportedCriticalError=_dslReportedCriticalError;
@property(retain, nonatomic) NSDate *viewReadyToShowDate; // @synthesize viewReadyToShowDate=_viewReadyToShowDate;
@property(nonatomic, getter=isAuthKeySet) _Bool authKeySet; // @synthesize authKeySet=_authKeySet;
@property(retain, nonatomic) FBAdDSLViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) FBAdDSLConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) FBAdDSLFullScreenAdDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) FBAdDSLFullScreenAdViewController *fullScreenWebView; // @synthesize fullScreenWebView=_fullScreenWebView;
@property(nonatomic) __weak id <FBAdDSLViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)assetForURL:(id)arg1 withType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dslViewModelDidLoad:(id)arg1;
- (void)dslViewModelDidFailToLoad:(id)arg1 withError:(id)arg2;
- (_Bool)shouldReloadProcessForDslFullScreenAfterViewDidApper;
- (_Bool)shouldReloadProcessForDslFullScreenBeforeViewDidApper;
- (_Bool)shouldReloadProcessForDslFullScreenAdViewController:(id)arg1;
- (void)logErrorOfType:(unsigned long long)arg1 withError:(id)arg2;
- (void)dslFullScreenAdViewController:(id)arg1 logErrorType:(unsigned long long)arg2 withError:(id)arg3;
- (void)dslFullScreenAdViewController:(id)arg1 printDebugWithInfo:(id)arg2;
- (void)dslFullScreenAdViewController:(id)arg1 funnelLogWithData:(id)arg2;
- (void)dslFullScreenAdViewController:(id)arg1 logData:(id)arg2;
- (void)dslFullScreenAdViewController:(id)arg1 handleEvent:(unsigned long long)arg2 withTouch:(id)arg3 extraData:(id)arg4;
- (void)dslFullScreenAdViewController:(id)arg1 notifyEvent:(unsigned long long)arg2;
- (void)notifyFullScreenToLoadAd;
- (void)sendEventsInBuffer;
- (CDUnknownBlockType)failBlockForEvent:(unsigned long long)arg1;
- (CDUnknownBlockType)successBlockForEvent:(unsigned long long)arg1;
- (void)sendEvent:(unsigned long long)arg1 toAdViewController:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)sendEvent:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isReadyToPresent;
- (id)adView;
- (void)notifyAppSuspended;
- (void)notifyAppBackground;
- (void)notifyAppInactive;
- (void)notifyAppActive;
- (void)notifyAdReportFlowFinished;
- (void)notifyAdReportFlowStarted;
- (void)prepareToShowAd;
- (void)loadAdWithData:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

