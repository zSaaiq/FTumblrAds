//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;
@protocol _TtP13OnboardingKit36OnboardingFlowViewControllerDelegate_;

@interface _TtC13OnboardingKit38OnboardingTopicSelectionViewController : UIViewController
{
    MISSING_TYPE *requestSenderFactory;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *configuration;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *onboardingTopicsEventProvider;
    MISSING_TYPE *bucket;
    MISSING_TYPE *requireTopicMinimum;
    MISSING_TYPE *dataManager;
    MISSING_TYPE *didSubmitTopics;
    MISSING_TYPE *didSelectCustomTopicBeforeDismissingSearch;
    MISSING_TYPE *emptyView;
    MISSING_TYPE *$__lazy_storage_$_headerView;
    MISSING_TYPE *$__lazy_storage_$_collectionView;
    MISSING_TYPE *$__lazy_storage_$_searchContainer;
    MISSING_TYPE *searchViewController;
    MISSING_TYPE *onboardingFlowViewControllerDelegate;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchContainerViewControllerDidUnfollowSearchTerm:(id)arg1;
- (void)searchContainerViewControllerDidFollowSearchTerm:(id)arg1;
- (void)searchContainerViewControllerDidClearSearchTerm:(id)arg1;
- (void)searchContainerViewControllerDidEndSearching:(id)arg1;
- (void)searchContainerViewControllerDidBeginSearching:(id)arg1;
- (void)searchContainerViewController:(id)arg1 didSelectTag:(id)arg2;
- (void)searchContainerViewController:(id)arg1 didSelectBlog:(id)arg2;
- (void)searchContainerViewController:(id)arg1 didEnterQuery:(id)arg2 isRecommendedTag:(_Bool)arg3 isSelectedFromResults:(_Bool)arg4;
- (void)updateColors:(id)arg1;
- (void)nextButtonPressed;
- (void)deviceDidRotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)viewController;
@property(nonatomic) __weak id <_TtP13OnboardingKit36OnboardingFlowViewControllerDelegate_> onboardingFlowViewControllerDelegate; // @synthesize onboardingFlowViewControllerDelegate;
@property(nonatomic, readonly) _Bool shouldAutorotate;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

@end
