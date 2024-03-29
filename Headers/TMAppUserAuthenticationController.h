//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMNoticeManagerDelegate-Protocol.h"
#import "_TtP6Tumblr39CustomHTTPRequestHeaderProviderDelegate_-Protocol.h"

@class NSString, TMAPIApplicationCredentials, TMCrashlyticsCrashReporter, TMNoticeManager, TMPushNotificationRegistrar, TMUserAuthenticationController, _TtC10CoreTumblr13TMPreferences, _TtC22OutgoingRequestGateway22OutgoingRequestGateway, _TtC6Tumblr20ConfigurationUpdater, _TtC6Tumblr25ConfigurationUpdaterTimer, _TtC6Tumblr31CustomHTTPRequestHeaderProvider;
@protocol TMAppUserAuthenticationControllerDelegate, TMSession, TMTumblrCoreDataController;

@interface TMAppUserAuthenticationController : NSObject <TMNoticeManagerDelegate, _TtP6Tumblr39CustomHTTPRequestHeaderProviderDelegate_>
{
    TMPushNotificationRegistrar *_pushNotificationRegistrar;
    CDUnknownBlockType _postLoginAuthorizationBlock;
    TMUserAuthenticationController *_userAuthenticationController;
    id <TMTumblrCoreDataController> _coreDataController;
    _TtC10CoreTumblr13TMPreferences *_preferences;
    _TtC22OutgoingRequestGateway22OutgoingRequestGateway *_outgoingRequestGateway;
    TMNoticeManager *_noticeManager;
    _TtC6Tumblr31CustomHTTPRequestHeaderProvider *_HTTPRequestHeaderProvider;
    _TtC6Tumblr20ConfigurationUpdater *_configurationUpdater;
    _TtC6Tumblr25ConfigurationUpdaterTimer *_configurationUpdaterTimer;
    TMCrashlyticsCrashReporter *_crashReporter;
    TMAPIApplicationCredentials *_appCredentials;
    id <TMSession> _session;
    id <TMAppUserAuthenticationControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TMAppUserAuthenticationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(retain, nonatomic) TMAPIApplicationCredentials *appCredentials; // @synthesize appCredentials=_appCredentials;
@property(retain, nonatomic) TMCrashlyticsCrashReporter *crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) _TtC6Tumblr25ConfigurationUpdaterTimer *configurationUpdaterTimer; // @synthesize configurationUpdaterTimer=_configurationUpdaterTimer;
@property(retain, nonatomic) _TtC6Tumblr20ConfigurationUpdater *configurationUpdater; // @synthesize configurationUpdater=_configurationUpdater;
@property(retain, nonatomic) _TtC6Tumblr31CustomHTTPRequestHeaderProvider *HTTPRequestHeaderProvider; // @synthesize HTTPRequestHeaderProvider=_HTTPRequestHeaderProvider;
@property(retain, nonatomic) TMNoticeManager *noticeManager; // @synthesize noticeManager=_noticeManager;
@property(retain, nonatomic) _TtC22OutgoingRequestGateway22OutgoingRequestGateway *outgoingRequestGateway; // @synthesize outgoingRequestGateway=_outgoingRequestGateway;
@property(retain, nonatomic) _TtC10CoreTumblr13TMPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) id <TMTumblrCoreDataController> coreDataController; // @synthesize coreDataController=_coreDataController;
@property(retain, nonatomic) TMUserAuthenticationController *userAuthenticationController; // @synthesize userAuthenticationController=_userAuthenticationController;
@property(copy, nonatomic) CDUnknownBlockType postLoginAuthorizationBlock; // @synthesize postLoginAuthorizationBlock=_postLoginAuthorizationBlock;
@property(retain, nonatomic) TMPushNotificationRegistrar *pushNotificationRegistrar; // @synthesize pushNotificationRegistrar=_pushNotificationRegistrar;
- (void)customHeaderProviderDidUpdateWithHeaders:(id)arg1;
- (void)noticeManagerReceivedNoticeWithIdentifier:(id)arg1 message:(id)arg2;
- (void)postLoginAuthorize;
- (void)configureAPIClientsWithOAuthTokens;
- (void)clearAPIClientOAuthTokens;
- (void)configureApplicationAfterUserLogin;
- (void)accountForChangesInLoginState;
- (void)captureLoginState;
- (void)processLogout;
- (void)processRegistration;
- (void)processLogin;
- (void)processLoginWithBlogToFollow:(id)arg1 postToLike:(id)arg2;
- (void)registerForRemoteNotificationsWithDeviceToken:(id)arg1;
- (id)registerForPushNotificationsIfNeeded;
- (id)initWithPreferences:(id)arg1 outgoingRequestGateway:(id)arg2 coreDataController:(id)arg3 customHeaderProvider:(id)arg4 configurationUpdater:(id)arg5 pushNotificationRegistrar:(id)arg6 noticeManager:(id)arg7 userInfoDataService:(id)arg8 crashReporter:(id)arg9 appCredentials:(id)arg10 session:(id)arg11 analyticsBuffer:(id)arg12 delegate:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

