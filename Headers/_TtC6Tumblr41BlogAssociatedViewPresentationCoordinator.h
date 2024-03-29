//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class MISSING_TYPE, _TtC6Tumblr28BlogNavigationOptionsManager;

@interface _TtC6Tumblr41BlogAssociatedViewPresentationCoordinator : NSObject <UIPopoverPresentationControllerDelegate>
{
    MISSING_TYPE *blogUUID;
    MISSING_TYPE *blogEventProvider;
    MISSING_TYPE *blogNotificationCTATracker;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *linkRouter;
    MISSING_TYPE *session;
    MISSING_TYPE *clientSideAdSources;
    MISSING_TYPE *supplyLoggingManager;
    MISSING_TYPE *currentAlertViewController;
    MISSING_TYPE *blogNavigationOptionsManager;
    MISSING_TYPE *dropdownAnimationViewProvidingTransitionDelegate;
    MISSING_TYPE *preferences;
}

- (void).cxx_destruct;
- (id)init;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)dismissAlertController;
- (void)displayErrorToastWithMessage:(id)arg1 pushingNavigationController:(id)arg2;
- (void)pushBlogPageSettings:(id)arg1 appColorScheme:(id)arg2 theme:(id)arg3 requestFactory:(id)arg4 accountViewModelFactory:(id)arg5;
- (void)pushProfile:(id)arg1 requestFactory:(id)arg2 accountViewModelFactory:(id)arg3;
- (void)pushInBlogSearch:(id)arg1;
- (void)pushCurrentBlog:(id)arg1;
- (_Bool)displayStatusIndicatorPopover:(id)arg1 screenIdentifier:(id)arg2 presenter:(id)arg3 tapHandler:(CDUnknownBlockType)arg4;
- (void)displayBlogNotificationsDialogIfNeededFromView:(id)arg1 screenIdentifier:(id)arg2 outgoingRequestGateway:(id)arg3 presentingViewController:(id)arg4 forceDisplay:(_Bool)arg5;
- (void)displayBlogSelectionFrom:(id)arg1 delegate:(id)arg2;
- (void)displayMessageActionsFromView:(id)arg1 presentingViewController:(id)arg2 delegate:(id)arg3;
- (id)initWithBlogUUID:(id)arg1 blogEventProvider:(id)arg2 blogNotificationCTATracker:(id)arg3 blogNavigationOptionsManager:(id)arg4 coreDataController:(id)arg5 linkRouter:(id)arg6 session:(id)arg7 analyticsBuffer:(id)arg8 clientSideAdSources:(id)arg9 preferences:(id)arg10 supplyLoggingManager:(id)arg11;
@property(nonatomic, retain) _TtC6Tumblr28BlogNavigationOptionsManager *blogNavigationOptionsManager; // @synthesize blogNavigationOptionsManager;

@end

