//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;
@protocol _TtP13OnboardingKit36OnboardingFlowViewControllerDelegate_;

@interface _TtC13OnboardingKit29OnboardingBlogsViewController : UIViewController
{
    MISSING_TYPE *requestSenderFactory;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *configuration;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *onboardingTopicsEventProvider;
    MISSING_TYPE *bucket;
    MISSING_TYPE *blogCellModels;
    MISSING_TYPE *$__lazy_storage_$_headerView;
    MISSING_TYPE *$__lazy_storage_$_collectionView;
    MISSING_TYPE *onboardingFlowViewControllerDelegate;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateColors:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)nextButtonPressed;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)viewController;
@property(nonatomic, retain) id <_TtP13OnboardingKit36OnboardingFlowViewControllerDelegate_> onboardingFlowViewControllerDelegate; // @synthesize onboardingFlowViewControllerDelegate;
@property(nonatomic, readonly) _Bool shouldAutorotate;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

@end

