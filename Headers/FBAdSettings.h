//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdSettings : NSObject
{
}

+ (long long)externalToInternalLogLevel:(long long)arg1;
+ (long long)internalToExternalLogLevel:(long long)arg1;
+ (id)internalToExternalLogMap;
+ (_Bool)assertionsEnabled;
+ (id)routingToken;
+ (id)bidderToken;
+ (void)setLoggingDelegate:(id)arg1;
+ (id)loggingDelegate;
+ (void)setTestAdType:(long long)arg1;
+ (long long)testAdType;
+ (id)sessionInfo;
+ (void)resetSessionID;
+ (id)sessionStartTime;
+ (id)sessionID;
+ (void)setLogLevel:(long long)arg1;
+ (long long)getLogLevel;
+ (id)synchronizationEndpointURL;
+ (id)baseURL;
+ (id)crashReportingEndpointForAppIdentifier:(id)arg1;
+ (id)baseBiddingURL;
+ (id)baseEventURL;
+ (id)baseURLWithDefault:(id)arg1 withFormat:(id)arg2;
+ (id)webviewBaseURL;
+ (id)deliveryEndpointURL;
+ (id)urlSession;
+ (void)setUrlPrefix:(id)arg1;
+ (id)urlPrefix;
+ (id)getMediationService;
+ (void)setMediationService:(id)arg1;
+ (void)setBackgroundVideoPlaybackAllowed:(_Bool)arg1;
+ (_Bool)isBackgroundVideoPlaybackAllowed;
+ (id)persistentUserAgent;
+ (void)setPersistentUserAgent:(id)arg1;
+ (id)btExtras;
+ (void)setBtExtras:(id)arg1;
+ (void)setMixedAudience:(_Bool)arg1;
+ (_Bool)isMixedAudience;
+ (_Bool)isChildDirected;
+ (void)setIsChildDirected:(_Bool)arg1;
+ (_Bool)isTestMode;
+ (void)clearTestDevice:(id)arg1;
+ (void)clearTestDevices;
+ (void)addTestDevices:(id)arg1;
+ (void)addTestDevice:(id)arg1;
+ (void)persistTestDevices;
+ (id)testDevices;
+ (id)testDeviceHash;
+ (void)initialize;

@end

