//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class TMBlurView, _TtC11TumblrTheme14AppColorScheme, _TtC11TumblrTheme7TMTheme, _TtC8SharedUI20ComposeNavigationBar;

@interface TMComposeNavigationController : UINavigationController
{
    _Bool _inheritTopViewControllersStatusBarStyle;
    _Bool _shouldUseTheme;
    long long _preferredStatusBarStyle;
    TMBlurView *_backgroundView;
    long long _statusBarStyle;
    _TtC11TumblrTheme14AppColorScheme *_appColorScheme;
    _TtC11TumblrTheme7TMTheme *_theme;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseTheme; // @synthesize shouldUseTheme=_shouldUseTheme;
@property(retain, nonatomic) _TtC11TumblrTheme7TMTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) _TtC11TumblrTheme14AppColorScheme *appColorScheme; // @synthesize appColorScheme=_appColorScheme;
@property(readonly, nonatomic) _Bool inheritTopViewControllersStatusBarStyle; // @synthesize inheritTopViewControllersStatusBarStyle=_inheritTopViewControllersStatusBarStyle;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(readonly, nonatomic) TMBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)dealloc;
- (void)updateTheming:(id)arg1;
- (void)updateColors:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 inheritTopViewControllersStatusBarStyle:(_Bool)arg2 appColorScheme:(id)arg3 shouldUseTheme:(_Bool)arg4;
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2 inheritTopViewControllersStatusBarStyle:(_Bool)arg3 appColorScheme:(id)arg4 shouldUseTheme:(_Bool)arg5;

// Remaining properties
@property(readonly, nonatomic) _TtC8SharedUI20ComposeNavigationBar *navigationBar; // @dynamic navigationBar;

@end
