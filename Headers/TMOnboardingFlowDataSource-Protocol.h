//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TMOnboardingNavigationController, UIViewController;
@protocol TMOnboardingFlowContainer, TMOnboardingFormViewControllerDelegate;

@protocol TMOnboardingFlowDataSource <NSObject>
- (long long)initialLoginViewControllerType;
- (UIViewController *)newViewControllerForType:(long long)arg1 wasLaunchedFromError:(_Bool)arg2;
@property(nonatomic, readonly) long long viewControllerType;
@property(nonatomic) __weak id <TMOnboardingFlowContainer> onboardingFlowContainer;
@property(nonatomic) __weak id <TMOnboardingFormViewControllerDelegate> onboardingFormDelegate;
@property(nonatomic, readonly) long long initialViewControllerType;
@property(nonatomic, readonly) TMOnboardingNavigationController *navigationController;
@end

