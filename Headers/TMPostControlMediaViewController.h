//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TMMediaTransitioning-Protocol.h"
#import "TMPostControlDelegate-Protocol.h"

@class CAGradientLayer, NSString, TMMediaTransitionController, TMMediaViewController, TMPostControlToolbar, UIButton, UIView, _TtC6Tumblr23MediaGestureCoordinator, _TtC6Tumblr28LightBoxPostControlViewModel;
@protocol LightBoxDelegate;

@interface TMPostControlMediaViewController : UIViewController <TMMediaTransitioning, TMPostControlDelegate>
{
    _Bool _lightboxOverlayHidden;
    _TtC6Tumblr23MediaGestureCoordinator *gestureCoordinator;
    id <LightBoxDelegate> _lightBoxResponder;
    _TtC6Tumblr28LightBoxPostControlViewModel *_lightBoxPostControlViewModel;
    TMMediaTransitionController *_transitionController;
    TMMediaViewController *_mediaViewController;
    TMPostControlToolbar *_controlsToolbar;
    UIButton *_dismissButton;
    UIView *_topGradientView;
    CAGradientLayer *_topGradient;
    UIView *_bottomGradientView;
    CAGradientLayer *_bottomGradient;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lightboxOverlayHidden; // @synthesize lightboxOverlayHidden=_lightboxOverlayHidden;
@property(retain, nonatomic) CAGradientLayer *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(retain, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) CAGradientLayer *topGradient; // @synthesize topGradient=_topGradient;
@property(retain, nonatomic) UIView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) TMPostControlToolbar *controlsToolbar; // @synthesize controlsToolbar=_controlsToolbar;
@property(retain, nonatomic) TMMediaViewController *mediaViewController; // @synthesize mediaViewController=_mediaViewController;
@property(retain, nonatomic) TMMediaTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) _TtC6Tumblr28LightBoxPostControlViewModel *lightBoxPostControlViewModel; // @synthesize lightBoxPostControlViewModel=_lightBoxPostControlViewModel;
@property(nonatomic) __weak id <LightBoxDelegate> lightBoxResponder; // @synthesize lightBoxResponder=_lightBoxResponder;
@property(retain, nonatomic) _TtC6Tumblr23MediaGestureCoordinator *gestureCoordinator; // @synthesize gestureCoordinator;
- (void)willBeginTransitioning;
- (_Bool)originalMediaViewVisible;
- (id)mediaView;
- (struct CGSize)mediaSize;
- (double)mediaFooterHeight;
- (struct UIEdgeInsets)mediaClippingInsets;
- (_Bool)isVideoMedia;
- (struct CGRect)initialFrameForView:(id)arg1 toView:(id)arg2;
- (struct CGRect)finalFrameForView:(id)arg1 toView:(id)arg2;
- (void)didEndTransitioning;
- (_Bool)canPerformGestureDismissal;
@property(readonly, nonatomic) UIView *backgroundView;
- (void)postControlHit:(id)arg1;
- (void)toggleLightboxOverlay;
- (void)dismiss;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaViewController:(id)arg1 transitionController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

