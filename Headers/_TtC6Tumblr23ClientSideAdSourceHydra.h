//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr23ClientSideAdSourceHydra : NSObject
{
    MISSING_TYPE *readyQueue;
    MISSING_TYPE *loadingQueue;
    MISSING_TYPE *requesterQueue;
    MISSING_TYPE *cache;
    MISSING_TYPE *retryDelayTimeInterval;
    MISSING_TYPE *placementID;
    MISSING_TYPE *placementIDKey;
    MISSING_TYPE *isAppInactive;
    MISSING_TYPE *clientSideAdType;
    MISSING_TYPE *expirationTimeInterval;
    MISSING_TYPE *adLoadingMinimumTimeInterval;
    MISSING_TYPE *retryMaxDelay;
    MISSING_TYPE *hasReceivedLoadResponseSinceActive;
    MISSING_TYPE *hasReceivedLoadResponseSinceColdLaunch;
    MISSING_TYPE *lastResponseWasNoFill;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *timeLastAdWasLoaded;
    MISSING_TYPE *timeOfLastRequest;
    MISSING_TYPE *isInitialLoad;
    MISSING_TYPE *doesLoad;
    MISSING_TYPE *loadingStrategy;
    MISSING_TYPE *adProviderIDs;
    MISSING_TYPE *adAnalyticsProvider;
    MISSING_TYPE *manualTestLoaderFactory;
    MISSING_TYPE *totalQueueSize;
    MISSING_TYPE *loadingQueueSize;
    MISSING_TYPE *lastKnownErrorCode;
}

- (void).cxx_destruct;
- (id)init;
- (void)serverConfigurationUpdated;
- (void)willResignActive;
- (void)didBecomeActive;

@end
