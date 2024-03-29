//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFSafariViewControllerDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSString, SKStoreProductViewController, UIActivityIndicatorView, UIButton, UIView, YMAd, YMAdSafariViewController, YVideoView;
@protocol YMAdExtendedVideoViewControllerDelegate;

@interface YMAdExtendedVideoViewController : UIViewController <SKStoreProductViewControllerDelegate, SFSafariViewControllerDelegate>
{
    _Bool _isPresented;
    _Bool _isSplitViewSetup;
    _Bool _safariNeedsInit;
    _Bool _isDetailViewLoaded;
    int _videoHeight;
    YVideoView *_videoView;
    UIView *_placeholderView;
    YMAd *_ad;
    id <YMAdExtendedVideoViewControllerDelegate> _delegate;
    UIView *_videoViewContainer;
    UIView *_detailViewContainer;
    SKStoreProductViewController *_storeViewController;
    YMAdSafariViewController *_safariViewController;
    UIActivityIndicatorView *_spinner;
    UIView *_closeView;
    UIButton *_closeButton;
    struct CGSize _origSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *closeView; // @synthesize closeView=_closeView;
@property(nonatomic) _Bool isDetailViewLoaded; // @synthesize isDetailViewLoaded=_isDetailViewLoaded;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool safariNeedsInit; // @synthesize safariNeedsInit=_safariNeedsInit;
@property(nonatomic) _Bool isSplitViewSetup; // @synthesize isSplitViewSetup=_isSplitViewSetup;
@property(nonatomic) int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) struct CGSize origSize; // @synthesize origSize=_origSize;
@property(retain, nonatomic) YMAdSafariViewController *safariViewController; // @synthesize safariViewController=_safariViewController;
@property(retain, nonatomic) SKStoreProductViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
@property(retain, nonatomic) UIView *detailViewContainer; // @synthesize detailViewContainer=_detailViewContainer;
@property(retain, nonatomic) UIView *videoViewContainer; // @synthesize videoViewContainer=_videoViewContainer;
@property(nonatomic) __weak id <YMAdExtendedVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YMAd *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) YVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
- (void)addCloseButton;
- (void)removeSpinner;
- (id)initWithViews:(id)arg1 placeHolderView:(id)arg2 ad:(id)arg3 delegate:(id)arg4;
- (void)didReceiveMemoryWarning;
- (void)handleClose;
- (void)dismissView:(CDUnknownBlockType)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)positionForSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)initSplitView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

