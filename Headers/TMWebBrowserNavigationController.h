//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMModalNavigationController.h"

#import "TMWebBrowserController-Protocol.h"

@class NSString, TMWebBrowserController;

@interface TMWebBrowserNavigationController : TMModalNavigationController <TMWebBrowserController>
{
    TMWebBrowserController *_webBrowserController;
}

+ (id)abuseBrowserNavigationControllerWithShareEventProvider:(id)arg1;
+ (id)helpBrowserNavigationControllerWithShareEventProvider:(id)arg1;
+ (id)creditsBrowserNavigationControllerWithShareEventProvider:(id)arg1;
+ (id)privacyPolicyBrowserNavigationControllerWithShareEventProvider:(id)arg1;
+ (id)passwordResetHelpBrowserNavigationControllerWithShareEventProvider:(id)arg1;
+ (id)sensitiveReblogLearnMoreBrowserNavigationController;
+ (id)appealRejectedLearnMoreBrowserNavigationController;
+ (id)appealInReviewLearnMoreBrowserNavigationController;
+ (id)appealLearnMoreBrowserNavigationController;
+ (id)nsfwHelpBrowserNavigationController;
+ (id)termsOfServiceBrowserNavigationControllerWithShareEventProvider:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TMWebBrowserController *webBrowserController; // @synthesize webBrowserController=_webBrowserController;
- (void)addFormTokenForURL:(id)arg1 token:(id)arg2;
@property(nonatomic) _Bool adjustAudioSessionCategoryForPlayback;
@property(nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback;
- (id)initWithURL:(id)arg1 showActionButton:(_Bool)arg2 shareEventProvider:(id)arg3 token:(id)arg4 linkRouter:(id)arg5 dismissButtonText:(id)arg6 appColorScheme:(id)arg7;
- (id)initWithURL:(id)arg1 showActionButton:(_Bool)arg2 shareEventProvider:(id)arg3;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
