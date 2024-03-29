//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIView;

@interface TMCustomizeCropHeaderTransitionController : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    UIView *_navigationBarSnapshot;
    UIView *_blogSnapshotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blogSnapshotView; // @synthesize blogSnapshotView=_blogSnapshotView;
@property(retain, nonatomic) UIView *navigationBarSnapshot; // @synthesize navigationBarSnapshot=_navigationBarSnapshot;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (id)navigationBarSnapshotForViewController:(id)arg1 afterScreenUpdates:(_Bool)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

