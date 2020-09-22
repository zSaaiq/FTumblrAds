//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TMModalContainerProvider-Protocol.h"
#import "TMPanDismissalRecognizerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_TtP11TumblrTheme16AppColorScheming_-Protocol.h"

@class NSLayoutConstraint, NSString, TMPanDismissalRecognizer, TMPopupContainerView, TMPopupTransitionAnimatorProvider, TMSerialAnimationQueue, UILabel, UITapGestureRecognizer, UIView, _TtC11TumblrTheme14AppColorScheme;

@interface TMPopupViewController : UIViewController <UIGestureRecognizerDelegate, TMPanDismissalRecognizerDelegate, _TtP11TumblrTheme16AppColorScheming_, TMModalContainerProvider>
{
    _Bool _canPanToDismiss;
    _Bool _canTapToDismiss;
    _Bool _beingDismissedByPanGestureRecognizer;
    _Bool _rotating;
    _Bool _transitioning;
    unsigned long long _transitionStyle;
    UIView *_footerView;
    long long _statusBarStyle;
    double _verticalInset;
    CDUnknownBlockType _dismissalBlock;
    NSLayoutConstraint *_contentWidthConstraint;
    NSLayoutConstraint *_contentYConstraint;
    TMPopupTransitionAnimatorProvider *_transitionAnimator;
    _TtC11TumblrTheme14AppColorScheme *_appColorScheme;
    UIViewController *_rootViewController;
    TMPopupContainerView *_containerView;
    UIView *_backgroundView;
    TMSerialAnimationQueue *_messageQueue;
    UILabel *_messageLabel;
    TMPanDismissalRecognizer *_panDismissalRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    TMPopupTransitionAnimatorProvider *_transition;
    struct CGPoint _transitionStartPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TMPopupTransitionAnimatorProvider *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TMPanDismissalRecognizer *panDismissalRecognizer; // @synthesize panDismissalRecognizer=_panDismissalRecognizer;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) TMSerialAnimationQueue *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TMPopupContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) _TtC11TumblrTheme14AppColorScheme *appColorScheme; // @synthesize appColorScheme=_appColorScheme;
@property(retain, nonatomic) TMPopupTransitionAnimatorProvider *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(retain, nonatomic) NSLayoutConstraint *contentYConstraint; // @synthesize contentYConstraint=_contentYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentWidthConstraint; // @synthesize contentWidthConstraint=_contentWidthConstraint;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(nonatomic) double verticalInset; // @synthesize verticalInset=_verticalInset;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic, getter=isBeingDismissedByPanGestureRecognizer) _Bool beingDismissedByPanGestureRecognizer; // @synthesize beingDismissedByPanGestureRecognizer=_beingDismissedByPanGestureRecognizer;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool canTapToDismiss; // @synthesize canTapToDismiss=_canTapToDismiss;
@property(nonatomic) _Bool canPanToDismiss; // @synthesize canPanToDismiss=_canPanToDismiss;
@property(nonatomic) struct CGPoint transitionStartPoint; // @synthesize transitionStartPoint=_transitionStartPoint;
@property(nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void)dealloc;
- (_Bool)isPointInContainerView:(struct CGPoint)arg1;
- (void)addPanDismissalRecognizer;
- (void)styleNavigationBar:(id)arg1;
- (id)blurView;
- (void)updateApplicationRootViewTintAdjustmentMode:(long long)arg1;
- (void)updateColors:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)panDismissalRecognizerShouldReceiveTouchAtPoint:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tap:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)setupConstraints;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 backgroundView:(id)arg2;
- (id)initWithRootViewController:(id)arg1 tintColor:(id)arg2;
- (id)initWithRootViewController:(id)arg1 backgroundView:(id)arg2 ignoresKeyboardNotificiations:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

