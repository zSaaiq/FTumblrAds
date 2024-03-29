//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFSafariViewControllerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class NSString, UIButton, UIView, WKWebView, YMAd;

@interface YMAdTileViewController : UIViewController <WKNavigationDelegate, WKScriptMessageHandler, SFSafariViewControllerDelegate>
{
    YMAd *_ad;
    WKWebView *_webView;
    UIView *_closeView;
    UIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) YMAd *ad; // @synthesize ad=_ad;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)addCloseButton;
- (void)handleClose;
- (void)fetchHTMLContent:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewDidLoad;
- (id)initWithAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

