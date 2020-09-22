//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "_TtP11TumblrTheme9TMTheming_-Protocol.h"

@class NSString, UIViewController;
@protocol TMNavigationControllerDelegate, TMNavigationControllerPushInterceptor;

@interface TMNavigationController : UINavigationController <UINavigationControllerDelegate, _TtP11TumblrTheme9TMTheming_>
{
    NSString *_currentlyViewingBlogUUID;
    id <TMNavigationControllerPushInterceptor> _navigationPushInterceptor;
    CDUnknownBlockType _removalCallback;
    id <TMNavigationControllerDelegate> _navigationDelegate;
    id _themeChangeNotificationObserver;
    UIViewController *_rootViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) id themeChangeNotificationObserver; // @synthesize themeChangeNotificationObserver=_themeChangeNotificationObserver;
@property(nonatomic) __weak id <TMNavigationControllerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(copy, nonatomic) CDUnknownBlockType removalCallback; // @synthesize removalCallback=_removalCallback;
@property(nonatomic) __weak id <TMNavigationControllerPushInterceptor> navigationPushInterceptor; // @synthesize navigationPushInterceptor=_navigationPushInterceptor;
- (_Bool)viewControllerShouldDetermineSupportedDeviceOrientations:(id)arg1;
- (id)blogUUIDForViewController:(id)arg1;
- (id)themeForViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)reselect;
- (void)updateTheming:(id)arg1 forViewController:(id)arg2;
- (void)updateTheming:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)transitionThemeWithTransitionCoordinator:(id)arg1;
@property(readonly, nonatomic) NSString *currentlyViewingBlogUUID; // @synthesize currentlyViewingBlogUUID=_currentlyViewingBlogUUID;
- (void)transitionStatusBarWithTransitionCoordinator:(id)arg1;
- (long long)transitionPopupWithTransitionCoodinator:(id)arg1;
- (void)updateNavigationBarForViewController:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)previewActionItems;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

