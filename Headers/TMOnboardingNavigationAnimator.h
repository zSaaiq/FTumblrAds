//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMTransitionAnimator.h"

@interface TMOnboardingNavigationAnimator : TMTransitionAnimator
{
}

- (struct CGRect)centeredOnScreenRectForViewController:(id)arg1 presentationView:(id)arg2;
- (struct CGRect)offscreenRectForViewController:(id)arg1 onRight:(_Bool)arg2 presentationView:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)dismissalDuration;
- (double)presentationDuration;

@end

