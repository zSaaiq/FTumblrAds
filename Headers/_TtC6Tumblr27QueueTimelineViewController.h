//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr27QueueTimelineViewController : UIViewController
{
    MISSING_TYPE *blogName;
    MISSING_TYPE *timelineViewController;
    MISSING_TYPE *permalinkHeaderView;
    MISSING_TYPE *queueSettingsUpdater;
    MISSING_TYPE *queueHeaderView;
    MISSING_TYPE *firstUseBannerView;
    MISSING_TYPE *headerContainerView;
    MISSING_TYPE *queueConfiguration;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *hasUsedMobileQueue;
    MISSING_TYPE *appColorScheme;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateColors:(id)arg1;
- (id)preferredTheme;
- (void)updateTheming:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithBlogUUID:(id)arg1 coreDataController:(id)arg2 timelineViewController:(id)arg3 queueSettingsUpdater:(id)arg4 analyticsBuffer:(id)arg5 hasUsedMobileQueue:(_Bool)arg6 appColorScheme:(id)arg7;
- (void)viewDidLoad;
@property(nonatomic) _Bool hidesBottomBarWhenPushed;

@end

