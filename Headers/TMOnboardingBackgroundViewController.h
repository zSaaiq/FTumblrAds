//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBKVOController, TMKeyboardFrameTracker, TMOnboardingNavigationBar, UIView, _TtC6Tumblr18TMLogoActivityView;

@interface TMOnboardingBackgroundViewController : UIViewController
{
    _Bool _allowsLogoMovement;
    _Bool _displaysLogo;
    _Bool _logoIsMoving;
    _Bool _shouldMoveLogoWithKeyboard;
    _TtC6Tumblr18TMLogoActivityView *_logoView;
    UIView *_splashBackgroundView;
    FBKVOController *_kvoController;
    TMKeyboardFrameTracker *_frameTracker;
    TMOnboardingNavigationBar *_trackingNavigationBar;
    struct CGRect _tumblrLogoRestRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldMoveLogoWithKeyboard; // @synthesize shouldMoveLogoWithKeyboard=_shouldMoveLogoWithKeyboard;
@property(nonatomic) struct CGRect tumblrLogoRestRect; // @synthesize tumblrLogoRestRect=_tumblrLogoRestRect;
@property(nonatomic) _Bool logoIsMoving; // @synthesize logoIsMoving=_logoIsMoving;
@property(retain, nonatomic) TMOnboardingNavigationBar *trackingNavigationBar; // @synthesize trackingNavigationBar=_trackingNavigationBar;
@property(retain, nonatomic) TMKeyboardFrameTracker *frameTracker; // @synthesize frameTracker=_frameTracker;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(nonatomic) _Bool displaysLogo; // @synthesize displaysLogo=_displaysLogo;
@property(nonatomic) _Bool allowsLogoMovement; // @synthesize allowsLogoMovement=_allowsLogoMovement;
@property(readonly, nonatomic) UIView *splashBackgroundView; // @synthesize splashBackgroundView=_splashBackgroundView;
@property(retain, nonatomic) _TtC6Tumblr18TMLogoActivityView *logoView; // @synthesize logoView=_logoView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)moveLogoToRectangle:(struct CGRect)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveLogoToNavigationBar:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preonboardingWillAppear:(id)arg1;
- (void)preonboardingWillDisappear:(id)arg1;
- (void)preonboardingDidAppear:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTrackingNavigationBar:(id)arg1;

@end
