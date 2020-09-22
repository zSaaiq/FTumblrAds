//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, YVideoContainerView, YVideoOverlayProxy;
@protocol YVideoAlternateOverlaysDelegate;

@interface YVideoAlternateOverlays : UIView
{
    NSObject<YVideoAlternateOverlaysDelegate> *_delegate;
    YVideoContainerView *_videoContainer;
    YVideoOverlayProxy *_preVideoOverlayProxy;
    YVideoOverlayProxy *_midVideoOverlayProxy;
    YVideoOverlayProxy *_postVideoOverlayProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YVideoOverlayProxy *postVideoOverlayProxy; // @synthesize postVideoOverlayProxy=_postVideoOverlayProxy;
@property(retain, nonatomic) YVideoOverlayProxy *midVideoOverlayProxy; // @synthesize midVideoOverlayProxy=_midVideoOverlayProxy;
@property(retain, nonatomic) YVideoOverlayProxy *preVideoOverlayProxy; // @synthesize preVideoOverlayProxy=_preVideoOverlayProxy;
@property(nonatomic) __weak YVideoContainerView *videoContainer; // @synthesize videoContainer=_videoContainer;
@property(nonatomic) __weak NSObject<YVideoAlternateOverlaysDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)show:(_Bool)arg1 overlay:(id)arg2 animated:(_Bool)arg3;
- (void)setupNewView:(id)arg1;
- (void)hidePostVideoAnimated:(_Bool)arg1;
- (void)showPostVideoAnimated:(_Bool)arg1;
- (void)hideMidVideoAnimated:(_Bool)arg1;
- (void)showMidVideoAnimated:(_Bool)arg1;
- (void)hidePreVideoAnimated:(_Bool)arg1;
- (void)showPreVideoAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UIView *postVideoOverlay;
@property(readonly, nonatomic) UIView *midVideoOverlay;
@property(readonly, nonatomic) UIView *preVideoOverlay;
- (void)createPostVideoOverlay;
- (void)createMidVideoOverlay;
- (void)createPreVideoOverlay;
- (id)initWithVideoContainerVideo:(id)arg1;

@end
