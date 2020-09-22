//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdDSLJSScriptMessageHandlerDelegate-Protocol.h"
#import "FBAdTouchGestureRecognizerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class FBAdDSLTouchRecord, NSString, WKNavigation, WKWebView;
@protocol FBAdDSLFullScreenAdViewControllerDataSource, FBAdDSLFullScreenAdViewControllerDelegate;

@interface FBAdDSLFullScreenAdViewController : UIViewController <WKUIDelegate, WKNavigationDelegate, FBAdDSLJSScriptMessageHandlerDelegate, FBAdTouchGestureRecognizerDelegate>
{
    id <FBAdDSLFullScreenAdViewControllerDelegate> _delegate;
    id <FBAdDSLFullScreenAdViewControllerDataSource> _dataSource;
    WKWebView *_webview;
    FBAdDSLTouchRecord *_lastTouchRecord;
    WKNavigation *_warmupNavigation;
}

@property(retain, nonatomic) WKNavigation *warmupNavigation; // @synthesize warmupNavigation=_warmupNavigation;
@property(retain, nonatomic) FBAdDSLTouchRecord *lastTouchRecord; // @synthesize lastTouchRecord=_lastTouchRecord;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <FBAdDSLFullScreenAdViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FBAdDSLFullScreenAdViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gestureRecognizer:(id)arg1 cancelledWithTouches:(id)arg2 event:(id)arg3;
- (void)gestureRecognizer:(id)arg1 endedWithTouches:(id)arg2 event:(id)arg3;
- (void)gestureRecognizer:(id)arg1 movedWithTouches:(id)arg2 event:(id)arg3;
- (void)gestureRecognizer:(id)arg1 beganWithTouches:(id)arg2 event:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)dslJSScriptMessageHandler:(id)arg1 willEvaluateJSMessage:(id)arg2;
- (void)sendEvent:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 toWebView:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)logErrorFromJSErrorWithExtraData:(id)arg1;
- (id)dataFromJSEvent:(id)arg1;
- (void)dslJSScriptMessageHandler:(id)arg1 receivedJSScriptEvent:(long long)arg2 withExtraData:(id)arg3;
- (void)reloadWebView;
- (id)adView;
- (void)loadWebView;
- (void)setupGestureRecognizer;
- (void)setupWebView;
- (void)warmupWebView;
- (void)initializeWebView;
- (void)dealloc;
- (void)loadDSLFullScreenView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

