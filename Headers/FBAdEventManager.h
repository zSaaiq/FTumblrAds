//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdEventLogger-Protocol.h"

@class FBAdConcurrentArray, FBAdConfigManager, FBAdDatabaseManager, FBAdTimer, FBAdURLSession, NSString, NSUUID;
@protocol FBAdDebugEventLogger, OS_dispatch_queue;

@interface FBAdEventManager : NSObject <FBAdEventLogger>
{
    FBAdDatabaseManager *_databaseManager;
    FBAdTimer *_dispatchTimer;
    NSObject<OS_dispatch_queue> *_dispatchTimerQueue;
    FBAdConcurrentArray *_eventsInTransit;
    unsigned long long _sendAttempts;
    FBAdURLSession *_urlSession;
    FBAdConfigManager *_configManager;
    CDUnknownBlockType _sessionInfoProvider;
    id <FBAdDebugEventLogger> _debugEventLogger;
}

+ (const char *)eventTableString;
+ (const char *)tokenTableString;
@property(retain, nonatomic) id <FBAdDebugEventLogger> debugEventLogger; // @synthesize debugEventLogger=_debugEventLogger;
@property(copy, nonatomic) CDUnknownBlockType sessionInfoProvider; // @synthesize sessionInfoProvider=_sessionInfoProvider;
@property(retain, nonatomic) FBAdConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain, nonatomic) FBAdURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) unsigned long long sendAttempts; // @synthesize sendAttempts=_sendAttempts;
@property(retain, nonatomic) FBAdConcurrentArray *eventsInTransit; // @synthesize eventsInTransit=_eventsInTransit;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchTimerQueue; // @synthesize dispatchTimerQueue=_dispatchTimerQueue;
@property(retain, nonatomic) FBAdTimer *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(retain) FBAdDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) double sessionTime;
- (void)queryTokensSyncWithStatement:(const char *)arg1 withDatabase:(struct sqlite3 *)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)queryEventsSyncWithStatement:(const char *)arg1 withDatabase:(struct sqlite3 *)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)removeAllOrphanedEventsSyncWithDatabase:(struct sqlite3 *)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)removeAllOrphanedTokensSyncWithDatabase:(struct sqlite3 *)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateAttemptCountForEvent:(id)arg1 withDatabase:(struct sqlite3 *)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)insertEvent:(id)arg1 withDatabase:(struct sqlite3 *)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)cleanupEventsSync:(id)arg1 withDatabase:(struct sqlite3 *)arg2;
- (_Bool)isEventRetriable:(id)arg1;
- (_Bool)isEventSuccessful:(id)arg1;
- (id)context;
- (void)sendRequestInternal:(id)arg1 withExtraData:(id)arg2 onRetry:(CDUnknownBlockType)arg3;
- (_Bool)shouldPurgeOn413Response;
- (void)dispatchEventsImmediately;
- (void)dispatchEvents;
- (void)retryDispatch;
- (_Bool)shouldDispatchNow:(id)arg1;
- (id)funnelLogger;
- (void)logClickGuardEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logShowAdCalledEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logAdReportingEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logDSLEventForToken:(id)arg1 extraData:(id)arg2;
- (void)logPlayableMetricsForToken:(id)arg1 extraData:(id)arg2;
- (void)logUXFunnelEventForToken:(id)arg1 extraData:(id)arg2;
- (void)logDebugEventWithSubtype:(id)arg1 code:(long long)arg2 extraData:(id)arg3;
- (void)logUserReturnEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logOffTargetClickEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logDeviceRotateEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logAdCompleteEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logBrowserSessionEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logCloseEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logVideoEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logSnapshotForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logImpressionMissForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logImpressionForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logEventOfType:(id)arg1 withPriority:(unsigned long long)arg2 withToken:(id)arg3 withExtraData:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)logEventOfType:(id)arg1 withPriority:(unsigned long long)arg2 withToken:(id)arg3 withExtraData:(id)arg4;
- (void)logEvent:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)tokenIdForToken:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)setupDatabaseWithCallback:(CDUnknownBlockType)arg1;
- (void)migrateDatabaseV1ToV2:(struct sqlite3 *)arg1;
- (void)resetDispatchTimerWithTimeInterval:(double)arg1;
- (_Bool)shouldCollectLocalCountersSignal;
- (void)dealloc;
- (id)sessionStartTime;
@property(readonly, nonatomic) NSUUID *sessionId;
- (id)initWithDatabaseManager:(id)arg1 debugEventLogger:(id)arg2 sessionIdProvider:(CDUnknownBlockType)arg3;
- (id)initWithDatabaseManager:(id)arg1;
- (id)initWithDebugEventLogger:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

