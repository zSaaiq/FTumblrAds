//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr33TrendingTopicDetailViewController : UIViewController
{
    MISSING_TYPE *topicDetailViewModel;
    MISSING_TYPE *session;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *eventProvider;
    MISSING_TYPE *clientSideAdSources;
    MISSING_TYPE *timelineViewController;
    MISSING_TYPE *nextTopicButtonBottomConstraint;
    MISSING_TYPE *nextTopicButtonHeightConstraint;
    MISSING_TYPE *timelineViewBottomConstraint;
    MISSING_TYPE *timelineViewTopConstraint;
    MISSING_TYPE *nextTopicButton;
    MISSING_TYPE *isFirstLoad;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *$__lazy_storage_$_followBarButtonItem;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)stylingForNavigationBar;
- (void)updateChangedUI:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)didSelectNextTopic:(id)arg1;
- (void)didSelectFollowBarButtonItem:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool hidesBottomBarWhenPushed;

@end
