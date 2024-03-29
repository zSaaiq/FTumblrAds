//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString, _TtC12TumblrConfig19ServerConfiguration;

@interface _TtC10CoreTumblr13TMPreferences : NSObject
{
    MISSING_TYPE *lastPostedBlogUUIDs;
    MISSING_TYPE *_oAuthTokenSecret;
    MISSING_TYPE *userDefaults;
}

+ (id)tumblrAppGroupPreferences;
+ (id)TMServerConfigurationUpdatedNotification;
- (void).cxx_destruct;
- (void)cleanConfigurationAnalyticsFeatureStateMap;
- (id)CCPACompliantString;
- (id)analyticsSessionID;
- (void)setLocalBlogSettings:(id)arg1 forBlog:(id)arg2;
- (id)localBlogSettingsForBlog:(id)arg1;
- (_Bool)hasAuthenticationTokens;
- (void)clear;
- (void)setEmailAddress:(id)arg1 OAuthToken:(id)arg2 OAuthTokenSecret:(id)arg3;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isPartialUser;
@property(nonatomic) _Bool showDashboardWelcome;
@property(nonatomic, copy) NSDictionary *onboardingFlowConfiguration;
@property(nonatomic, readonly) NSString *uniqueIdentifier;
@property(nonatomic, readonly) NSString *oAuthTokenSecret;
@property(nonatomic, readonly) NSString *oAuthToken;
@property(nonatomic, readonly) NSString *emailAddress;
@property(nonatomic, retain) _TtC12TumblrConfig19ServerConfiguration *serverConfiguration;
@property(nonatomic) _Bool userIsFullOver18User;
@property(nonatomic, copy) NSString *yahooBCookie;
@property(nonatomic) _Bool hasFollowedOneBlog;
@property(nonatomic) int postFormat;
@property(nonatomic) _Bool hasUsedMobileQueue;
@property(nonatomic, copy) NSString *lastSeenBlogUUID;
@property(nonatomic, copy) NSString *lastPostedBlogUUID;
@property(nonatomic, readonly) NSString *primaryBlogName;
@property(nonatomic, readonly) NSString *primaryBlogUUID;

@end

