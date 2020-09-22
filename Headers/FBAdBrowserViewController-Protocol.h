//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSURL, UIBarButtonItem, UIToolbar, WKWebView;
@protocol FBAdSafariViewControllerDelegate;

@protocol FBAdBrowserViewController <NSObject>
@property(nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden;
@property(nonatomic) __weak NSObject<FBAdSafariViewControllerDelegate> *delegate;
@property(retain, nonatomic) UIToolbar *toolBar;
@property(retain, nonatomic) UIBarButtonItem *spinnerButton;
@property(retain, nonatomic) UIBarButtonItem *refreshButton;
@property(retain, nonatomic) UIBarButtonItem *forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton;
@property(retain, nonatomic) WKWebView *webView;
- (void)loadURL:(NSURL *)arg1;
- (void)doneButtonClicked:(id)arg1;
- (void)refreshButtonClicked:(id)arg1;
- (void)forwardButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
@end
