//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class MISSING_TYPE, UIViewController;

@interface _TtC8SharedUI20TMPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    MISSING_TYPE *bounceEnabled;
    MISSING_TYPE *currentViewController;
    MISSING_TYPE *incomingViewController;
    MISSING_TYPE *orderedViewControllers;
    MISSING_TYPE *$__lazy_storage_$_innerScrollView;
    MISSING_TYPE *pagingDelegate;
}

- (void).cxx_destruct;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property(nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

@end
