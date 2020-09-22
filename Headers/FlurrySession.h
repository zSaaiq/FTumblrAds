//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlurryDataSenderDelegate-Protocol.h"
#import "FlurryWatchConnectivityDelegate-Protocol.h"
#import "IFlurrySession-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FlurrySession : NSObject <FlurryDataSenderDelegate, FlurryWatchConnectivityDelegate, IFlurrySession, NSCoding>
{
    _Bool _isComplete;
    _Bool _crashed;
    _Bool _truncated;
    _Bool _eventLogComplete;
    _Bool _eventLoggingEnabled;
    _Bool _sessionReportsOnCloseEnabled;
    _Bool _sessionReportsOnPauseEnabled;
    _Bool _crashReportingEnabled;
    _Bool _setBackgroundSessionEnabled;
    _Bool _hasSessionOriginName;
    _Bool _hasDeepLinkName;
    _Bool _isNotificationSettingsEnabledCachedValue;
    float _accuracy;
    float _verticalAccuracy;
    float _speed;
    float _bearing;
    int _pageViewCount;
    int _totalErrorCount;
    int _gender;
    int _serializationVersion;
    int _buildEnv;
    int _appApplicationState;
    int _watchEventThreshold;
    int _watchDurationThreshold;
    NSData *_crashReportData;
    NSDate *_startTime;
    NSString *_apiKey;
    NSMutableDictionary *_sessionParams;
    NSMutableDictionary *_sessionPropertyParams;
    double _latitude;
    double _longitude;
    double _altitude;
    NSDate *_locationTimestamp;
    NSString *_appVersion;
    NSDate *_endTime;
    NSDate *_resumeTime;
    NSDate *_pauseTime;
    NSDate *_bgPauseTime;
    long long _totalPauseIntervalMillis;
    NSMutableDictionary *_eventCounts;
    NSMutableArray *_pendingEventLog;
    NSMutableArray *_eventLog;
    NSMutableArray *_errors;
    NSDictionary *_userDefinedCrashParams;
    NSString *_locale;
    NSString *_timeZone;
    NSString *_userID;
    NSString *_deviceToken;
    NSString *_sessionOriginName;
    NSString *_deepLinkName;
    NSString *_watchAppVersion;
    NSMutableArray *_purchaseItems;
    NSDate *_lastPartialUploadTime;
    NSDate *_age;
    NSArray *_configVariants;
    NSMutableArray *_transactionRequests;
    NSDictionary *_savedCrashContext;
    NSArray *_savedBreadcrumbs;
}

+ (long long)getBatteryState;
+ (void)disableTransferOfFlurryInfo;
+ (void)disableWatchConnectivity;
+ (id)initialTimestampFilePath;
+ (id)oldInitialTimestampFilePathUptilAgentVersion109;
+ (id)currentWatchAutoIncrementFilePath;
+ (id)currentWatchSessionFilePath;
+ (id)currentSessionFilePath;
+ (void)removeCurrentSessionFile;
+ (id)crashedSessionsFilePath;
+ (id)sessionsFilePath;
+ (id)removeOldSessionsIfNecessary:(id)arg1;
+ (void)addToSavedSessions:(id)arg1;
+ (void)setSavedSessions:(id)arg1;
+ (void)setSavedCrashedSessions:(id)arg1;
+ (id)savedCrashedSessions;
+ (id)savedSessions;
+ (void)sessionIdWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sessionId;
+ (id)currentSession;
+ (void)sendFlush;
+ (void)cleanup;
+ (void)setupCurrentSessionWithKey:(id)arg1;
+ (id)sessionWithApiKey:(id)arg1 startTime:(id)arg2 withPreCacheEventLog:(id)arg3;
+ (id)getFlurryVersion;
+ (id)getAgentVersion;
+ (id)getAgentVersionWithBuild;
@property(retain, nonatomic) NSArray *savedBreadcrumbs; // @synthesize savedBreadcrumbs=_savedBreadcrumbs;
@property(retain, nonatomic) NSDictionary *savedCrashContext; // @synthesize savedCrashContext=_savedCrashContext;
@property(retain, nonatomic) NSMutableArray *transactionRequests; // @synthesize transactionRequests=_transactionRequests;
@property(retain, nonatomic) NSArray *configVariants; // @synthesize configVariants=_configVariants;
@property(nonatomic) _Bool isNotificationSettingsEnabledCachedValue; // @synthesize isNotificationSettingsEnabledCachedValue=_isNotificationSettingsEnabledCachedValue;
@property(retain, nonatomic) NSDate *age; // @synthesize age=_age;
@property(retain) NSDate *lastPartialUploadTime; // @synthesize lastPartialUploadTime=_lastPartialUploadTime;
@property(retain, nonatomic) NSMutableArray *purchaseItems; // @synthesize purchaseItems=_purchaseItems;
@property(nonatomic) int watchDurationThreshold; // @synthesize watchDurationThreshold=_watchDurationThreshold;
@property(nonatomic) int watchEventThreshold; // @synthesize watchEventThreshold=_watchEventThreshold;
@property(retain, nonatomic) NSString *watchAppVersion; // @synthesize watchAppVersion=_watchAppVersion;
@property(copy, nonatomic) NSString *deepLinkName; // @synthesize deepLinkName=_deepLinkName;
@property(copy, nonatomic) NSString *sessionOriginName; // @synthesize sessionOriginName=_sessionOriginName;
@property(nonatomic) _Bool hasDeepLinkName; // @synthesize hasDeepLinkName=_hasDeepLinkName;
@property(nonatomic) _Bool hasSessionOriginName; // @synthesize hasSessionOriginName=_hasSessionOriginName;
@property(nonatomic) int appApplicationState; // @synthesize appApplicationState=_appApplicationState;
@property(nonatomic) _Bool setBackgroundSessionEnabled; // @synthesize setBackgroundSessionEnabled=_setBackgroundSessionEnabled;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(nonatomic) _Bool eventLoggingEnabled; // @synthesize eventLoggingEnabled=_eventLoggingEnabled;
@property(nonatomic) int buildEnv; // @synthesize buildEnv=_buildEnv;
@property(nonatomic) int serializationVersion; // @synthesize serializationVersion=_serializationVersion;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) int totalErrorCount; // @synthesize totalErrorCount=_totalErrorCount;
@property(retain, nonatomic) NSDictionary *userDefinedCrashParams; // @synthesize userDefinedCrashParams=_userDefinedCrashParams;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(nonatomic) _Bool eventLogComplete; // @synthesize eventLogComplete=_eventLogComplete;
@property(retain, nonatomic) NSMutableArray *eventLog; // @synthesize eventLog=_eventLog;
@property(retain, nonatomic) NSMutableArray *pendingEventLog; // @synthesize pendingEventLog=_pendingEventLog;
@property(retain, nonatomic) NSMutableDictionary *eventCounts; // @synthesize eventCounts=_eventCounts;
@property(nonatomic) long long totalPauseIntervalMillis; // @synthesize totalPauseIntervalMillis=_totalPauseIntervalMillis;
@property(retain) NSDate *bgPauseTime; // @synthesize bgPauseTime=_bgPauseTime;
@property(retain) NSDate *pauseTime; // @synthesize pauseTime=_pauseTime;
@property(retain) NSDate *resumeTime; // @synthesize resumeTime=_resumeTime;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int pageViewCount; // @synthesize pageViewCount=_pageViewCount;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool truncated; // @synthesize truncated=_truncated;
@property(retain, nonatomic) NSDate *locationTimestamp; // @synthesize locationTimestamp=_locationTimestamp;
@property(nonatomic) float bearing; // @synthesize bearing=_bearing;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) float accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSMutableDictionary *sessionPropertyParams; // @synthesize sessionPropertyParams=_sessionPropertyParams;
@property(retain, nonatomic) NSMutableDictionary *sessionParams; // @synthesize sessionParams=_sessionParams;
@property(retain) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSData *crashReportData; // @synthesize crashReportData=_crashReportData;
@property _Bool crashed; // @synthesize crashed=_crashed;
@property _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void).cxx_destruct;
- (void)dealloc;
- (void)transferIDs;
- (id)installationIDAsBytes;
- (void)startTimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBuildEnvironment;
- (void)sendFlush;
- (void)setUpFlurrySessionGuid;
- (id)installationIDForSessionReport;
- (void)migrateInstallIDFromDiskToKeychain;
- (void)removeInstallationIDFromKeychain;
- (long long)sessionLength;
- (long long)timeIntervalSinceSessionStart:(id)arg1;
- (_Bool)sentReportSuccessful;
- (id)initialTimestamp;
- (_Bool)isPauseSecondsBeforeNewBGSessionReached;
- (_Bool)isPaused;
- (id)dataForSessions:(id)arg1;
- (void)getSessionParametersAtPhase:(int)arg1 callSite:(int)arg2;
- (id)data;
- (int)updateIfTrackedAndChangedPropertyValue:(id)arg1 forPropertyKey:(id)arg2;
- (void)sendSessionsToServerIncludingCurrentSession:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)sendSessionsToServerIncludingCurrentSession:(_Bool)arg1;
- (void)sendSessionsToServerForCreateSession;
- (_Bool)flurryUserInfo:(id)arg1;
- (_Bool)isFlurryUserInfo:(id)arg1;
- (void)saveToDisk;
- (void)mergeValidPendingEventLog;
- (void)mergePendingEventLog;
- (int)putEventIntoLog:(id)arg1;
- (void)recordCrashedRecordSet:(id)arg1;
- (void)recordError:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 withParameters:(id)arg5 liveReport:(id)arg6;
- (void)recordError:(id)arg1 message:(id)arg2 error:(id)arg3 withParameters:(id)arg4 liveReport:(id)arg5;
- (void)recordError:(id)arg1 message:(id)arg2 exception:(id)arg3 withParameters:(id)arg4 liveReport:(id)arg5;
- (void)setIAPReportingEnabled:(_Bool)arg1;
- (void)recordTransaction:(id)arg1 statusCallback:(CDUnknownBlockType)arg2;
- (void)endTimedEvents;
- (void)endTimedEvent:(id)arg1 withParameters:(id)arg2;
- (int)recordEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3 transaction:(id)arg4;
- (int)recordEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3;
- (int)totalEventCount;
- (int)recordEvent:(id)arg1 withParameters:(id)arg2;
- (void)uploadPartialSessionDataIfNeeded:(_Bool)arg1;
- (void)setAgeInYears:(int)arg1;
- (void)setGenderAsString:(id)arg1;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4 altitude:(double)arg5 bearing:(float)arg6 speed:(float)arg7 timestamp:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (void)resetEventLogs;
- (id)dataForSending:(id)arg1;
- (void)maybeIncrementPageView;
- (void)finishSessionWithFinishTime:(id)arg1;
- (void)endSessionWithEndTime:(id)arg1;
- (void)archiveSession;
- (void)resumeSession;
- (void)markSessionAsResuming;
- (void)pauseSessionWithPauseTime:(id)arg1 completionhandler:(CDUnknownBlockType)arg2;
- (void)pauseSessionWithPauseTime:(id)arg1;
- (void)resetSessionData;
- (id)initWithAPIKey:(id)arg1 appVersion:(id)arg2 startDate:(id)arg3;
- (void)setCountBackgroundSessionsEnabled:(_Bool)arg1;
@property(nonatomic) _Bool crashReportingEnabled; // @synthesize crashReportingEnabled=_crashReportingEnabled;
@property(nonatomic) _Bool sessionReportsOnPauseEnabled; // @synthesize sessionReportsOnPauseEnabled=_sessionReportsOnPauseEnabled;
@property(nonatomic) _Bool sessionReportsOnCloseEnabled; // @synthesize sessionReportsOnCloseEnabled=_sessionReportsOnCloseEnabled;
- (_Bool)needToSendPartialReport;
- (id)sessionWithNewEventsWithApiKey:(id)arg1 startTime:(id)arg2;
- (void)setIsNotificationsSettingsEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

