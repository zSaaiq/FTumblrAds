//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;
@protocol YMAdVideoPlayerWebViewOverlayDelegate;

@interface YMAdVideoPlayerWebViewOverlay : UIView <UIWebViewDelegate>
{
    id <YMAdVideoPlayerWebViewOverlayDelegate> _delegate;
    UIWebView *_webView;
}

+ (id)overlayWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <YMAdVideoPlayerWebViewOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)lookupFramesForSizeClass:(int)arg1 overlayFrame:(struct CGRect *)arg2;
- (void)loadRequestWithURL:(id)arg1;
- (void)createAndAddWebView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

