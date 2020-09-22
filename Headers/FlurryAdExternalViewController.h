//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FlurryAdExternalWebViewDelegate-Protocol.h"
#import "IFlurryAdExternalViewController-Protocol.h"

@class FlurryAdExternalWebView, NSNumber, NSString, NSURLRequest, UIProgressView;
@protocol IFlurryAd;

@interface FlurryAdExternalViewController : UIViewController <FlurryAdExternalWebViewDelegate, IFlurryAdExternalViewController>
{
    _Bool _statusBarHidden;
    _Bool _openingAppUrl;
    _Bool _presentOnLoadCompletion;
    _Bool _loadedSomething;
    id <IFlurryAd> _ad;
    NSURLRequest *_currentRequest;
    FlurryAdExternalWebView *_extAdView;
    UIViewController *_parentVC;
    NSNumber *_progressNumber;
    UIProgressView *_progressView;
    CDUnknownBlockType _webViewFinishLoadBlock;
}

@property(copy, nonatomic) CDUnknownBlockType webViewFinishLoadBlock; // @synthesize webViewFinishLoadBlock=_webViewFinishLoadBlock;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool loadedSomething; // @synthesize loadedSomething=_loadedSomething;
@property(retain, nonatomic) NSNumber *progressNumber; // @synthesize progressNumber=_progressNumber;
@property(nonatomic) _Bool presentOnLoadCompletion; // @synthesize presentOnLoadCompletion=_presentOnLoadCompletion;
@property(nonatomic) _Bool openingAppUrl; // @synthesize openingAppUrl=_openingAppUrl;
@property(retain, nonatomic) UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) FlurryAdExternalWebView *extAdView; // @synthesize extAdView=_extAdView;
@property(retain, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) id <IFlurryAd> ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (void)flurryAdExternalWebViewDidFailLoad:(id)arg1 error:(id)arg2;
- (void)flurryAdExternalWebViewDidFinishLoad:(id)arg1;
- (_Bool)flurryAdExternalWebView:(id)arg1 openAppUrl:(id)arg2;
- (void)flurryAdExternalWebViewDidClose:(id)arg1 withResult:(int)arg2;
- (void)progressEstimateChanged:(id)arg1;
- (void)setProgressBarProgress:(float)arg1;
- (void)resetProgressBar;
- (void)hideProgressBar;
- (void)showProgressBar;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)removeWindowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadAd:(id)arg1 withRequest:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)stringFromCharArray:(char *)arg1 length:(long long)arg2;
- (id)initWithAd:(id)arg1 request:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
