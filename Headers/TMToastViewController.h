//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TMToastBoundsDetectionBehaviorDelegate-Protocol.h"
#import "TMToastPanGestureRecognizerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, TMToastPanGestureRecognizer, TMToastTransitionController, TMToastView, UIDynamicAnimator, UIPushBehavior;
@protocol TMToastViewControllerDelegate, _TtP8TumblrUI5Toast_;

@interface TMToastViewController : UIViewController <UIGestureRecognizerDelegate, TMToastPanGestureRecognizerDelegate, TMToastBoundsDetectionBehaviorDelegate>
{
    TMToastView *_toastView;
    id <_TtP8TumblrUI5Toast_> _toast;
    id <TMToastViewControllerDelegate> _delegate;
    double _toastDisplayDuration;
    TMToastTransitionController *_transitionController;
    NSTimer *_dismissTimer;
    UIDynamicAnimator *_dynamicAnimator;
    UIPushBehavior *_pushBehavior;
    NSArray *_attachmentBehaviors;
    TMToastPanGestureRecognizer *_panGestureRecognizer;
    CDUnknownBlockType _dismissCompletion;
    struct CGSize _previousFrameSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize previousFrameSize; // @synthesize previousFrameSize=_previousFrameSize;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion=_dismissCompletion;
@property(retain, nonatomic) TMToastPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(copy, nonatomic) NSArray *attachmentBehaviors; // @synthesize attachmentBehaviors=_attachmentBehaviors;
@property(retain, nonatomic) UIPushBehavior *pushBehavior; // @synthesize pushBehavior=_pushBehavior;
@property(retain, nonatomic) UIDynamicAnimator *dynamicAnimator; // @synthesize dynamicAnimator=_dynamicAnimator;
@property(retain, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) TMToastTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) double toastDisplayDuration; // @synthesize toastDisplayDuration=_toastDisplayDuration;
@property(nonatomic) __weak id <TMToastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <_TtP8TumblrUI5Toast_> toast; // @synthesize toast=_toast;
@property(retain, nonatomic) TMToastView *toastView; // @synthesize toastView=_toastView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)toastPanGestureRecognizer:(id)arg1 touchesDidMove:(id)arg2;
- (void)toastPanGestureRecognizer:(id)arg1 didRemoveTouch:(id)arg2;
- (void)toastPanGestureRecognizer:(id)arg1 didAddTouch:(id)arg2;
- (void)updateAttachmentBehaviors;
- (id)attachmentBehaviorForTouch:(id)arg1;
- (void)toastBoundsDetectionBehaviorDidEndIntersectingWithDetectionBounds:(id)arg1;
- (void)dismissToast;
- (void)stopDismissTimer;
- (void)startDismissTimer;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredStatusBarStyle;
- (void)layoutToastView;
- (void)pan:(id)arg1;
- (void)tapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithToast:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

