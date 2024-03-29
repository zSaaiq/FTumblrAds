//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LoginViewControllerDelegate-Protocol.h"
#import "TMLoginTwoFactorAuthenticationConfirmationViewControllerDelegate-Protocol.h"
#import "TMOnboardingFlowDataSource-Protocol.h"
#import "TMPreonboardingFlowDelegate-Protocol.h"

@class NSString, TMAuthentication, TMOnboardingEventProvider, TMOnboardingNavigationController, TMRegistrationParameters, _TtC10CoreTumblr13TMPreferences, _TtC10LinkRouter10LinkRouter, _TtC6Tumblr18LoginEventProvider, _TtC6Tumblr19ClientSideAdSources, _TtC6Tumblr20OnboardingModeConfig, _TtC6Tumblr24OnboardingFlowController, _TtC6Tumblr26GUCEConsentFlowCoordinator, _TtC6Tumblr29RegistrationFlowEventProvider, _TtC9Timelines7APILink;
@protocol TMOnboardingFlowContainer, TMOnboardingFormViewControllerDelegate, TMSession, TMTumblrCoreDataController, _TtP9Analytics14EventBuffering_;

@interface TMOnboardingFlowApplicationDataSource : NSObject <LoginViewControllerDelegate, TMLoginTwoFactorAuthenticationConfirmationViewControllerDelegate, TMOnboardingFlowDataSource, TMPreonboardingFlowDelegate>
{
    _Bool _shouldResetPassword;
    TMOnboardingNavigationController *_navigationController;
    id <TMOnboardingFormViewControllerDelegate> _onboardingFormDelegate;
    id <TMOnboardingFlowContainer> _onboardingFlowContainer;
    long long _initialViewControllerType;
    TMRegistrationParameters *_registrationParameters;
    TMOnboardingEventProvider *_eventProvider;
    _TtC6Tumblr29RegistrationFlowEventProvider *_registrationFlowEventProvider;
    TMAuthentication *_authentication;
    long long _viewControllerType;
    id <_TtP9Analytics14EventBuffering_> _analyticsBuffer;
    id <TMTumblrCoreDataController> _coreDataController;
    _TtC9Timelines7APILink *_authenticationLink;
    _TtC10LinkRouter10LinkRouter *_linkRouter;
    _TtC10CoreTumblr13TMPreferences *_preferences;
    _TtC6Tumblr19ClientSideAdSources *_clientSideAdSources;
    id <TMSession> _session;
    _TtC6Tumblr24OnboardingFlowController *_onboardingFlowController;
    _TtC6Tumblr18LoginEventProvider *_loginEventProvider;
    _TtC6Tumblr26GUCEConsentFlowCoordinator *_guceConsentFlowCoordinator;
    _TtC6Tumblr20OnboardingModeConfig *_onboardingConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6Tumblr20OnboardingModeConfig *onboardingConfig; // @synthesize onboardingConfig=_onboardingConfig;
@property(readonly, nonatomic) _TtC6Tumblr26GUCEConsentFlowCoordinator *guceConsentFlowCoordinator; // @synthesize guceConsentFlowCoordinator=_guceConsentFlowCoordinator;
@property(retain, nonatomic) _TtC6Tumblr18LoginEventProvider *loginEventProvider; // @synthesize loginEventProvider=_loginEventProvider;
@property(retain, nonatomic) _TtC6Tumblr24OnboardingFlowController *onboardingFlowController; // @synthesize onboardingFlowController=_onboardingFlowController;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(nonatomic) _Bool shouldResetPassword; // @synthesize shouldResetPassword=_shouldResetPassword;
@property(readonly, nonatomic) _TtC6Tumblr19ClientSideAdSources *clientSideAdSources; // @synthesize clientSideAdSources=_clientSideAdSources;
@property(readonly, nonatomic) _TtC10CoreTumblr13TMPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) _TtC10LinkRouter10LinkRouter *linkRouter; // @synthesize linkRouter=_linkRouter;
@property(retain, nonatomic) _TtC9Timelines7APILink *authenticationLink; // @synthesize authenticationLink=_authenticationLink;
@property(readonly, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(readonly, nonatomic) id <_TtP9Analytics14EventBuffering_> analyticsBuffer; // @synthesize analyticsBuffer=_analyticsBuffer;
@property(nonatomic) long long viewControllerType; // @synthesize viewControllerType=_viewControllerType;
@property(retain, nonatomic) TMAuthentication *authentication; // @synthesize authentication=_authentication;
@property(readonly, nonatomic) _TtC6Tumblr29RegistrationFlowEventProvider *registrationFlowEventProvider; // @synthesize registrationFlowEventProvider=_registrationFlowEventProvider;
@property(retain, nonatomic) TMOnboardingEventProvider *eventProvider; // @synthesize eventProvider=_eventProvider;
@property(retain, nonatomic) TMRegistrationParameters *registrationParameters; // @synthesize registrationParameters=_registrationParameters;
@property(readonly, nonatomic) long long initialViewControllerType; // @synthesize initialViewControllerType=_initialViewControllerType;
@property(nonatomic) __weak id <TMOnboardingFlowContainer> onboardingFlowContainer; // @synthesize onboardingFlowContainer=_onboardingFlowContainer;
@property(nonatomic) __weak id <TMOnboardingFormViewControllerDelegate> onboardingFormDelegate; // @synthesize onboardingFormDelegate=_onboardingFormDelegate;
@property(readonly, nonatomic) TMOnboardingNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)leftNavigationBarItem:(id)arg1 animated:(_Bool)arg2;
- (long long)loginModeForceValue;
- (void)magicLinkVerifyAndSendWithEmail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginViewControllerWithEmailAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentOnboardingViewControllerWithType:(long long)arg1;
- (void)presentOnboardingViewController:(id)arg1;
- (long long)initialLoginViewControllerType;
- (id)initialLoginViewController:(_Bool)arg1;
- (void)showGUCEConsentFlowForLoginWithAPIError:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)authenticateUserWithUserInputToken:(id)arg1 guceConsentValues:(id)arg2 gdprAuthToken:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)twoFactorConfirmationViewControllerDidAuthenticate:(id)arg1;
- (void)showServerConfiguredOnboardingFlow;
- (void)showOnboardingSelectionMenu;
- (void)registrationControllerDidRegister:(id)arg1;
- (void)presentHelpDocumentation;
- (void)updateRegistrationParametersWithEmail:(id)arg1 andPassword:(id)arg2;
- (void)loginController:(id)arg1 submittedEmailAddress:(id)arg2 password:(id)arg3 oneTimePassword:(id)arg4 guceConsentValues:(id)arg5;
- (id)newViewControllerForType:(long long)arg1 wasLaunchedFromError:(_Bool)arg2;
- (void)showGUCEConsentFlowWithConfig:(id)arg1;
- (id)initWithInitialViewControllerType:(long long)arg1 navigationController:(id)arg2 authentication:(id)arg3 analyticsBuffer:(id)arg4 coreDataController:(id)arg5 linkRouter:(id)arg6 session:(id)arg7 clientSideAdSources:(id)arg8 blogNameSuggestion:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

