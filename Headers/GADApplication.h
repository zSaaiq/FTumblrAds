//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADConfigurationDelegate-Protocol.h"
#import "GADStatisticDictionaryDelegate-Protocol.h"

@class GADAd, GADConfiguration, GADContentQueue, GADScheduler, GADStatisticDictionary, NSArray, NSMutableSet, NSString, UIViewController;
@protocol NSObject, OS_dispatch_queue;

@interface GADApplication : NSObject <GADConfigurationDelegate, GADStatisticDictionaryDelegate>
{
    GADAd *_backgroundingAd;
    id <NSObject> _appBecameActiveObserver;
    id <NSObject> _appWillEnterForegroundObserver;
    id <NSObject> _appWillResignActiveObserver;
    GADContentQueue *_contentQueue;
    GADScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSArray *_availableAdapterNames;
    unsigned long long _activeViewID;
    NSString *_version;
    NSString *_mainBundleIdentifier;
    _Bool _appFinishedLaunching;
    _Bool _hasRunAdditionalEarlyActivities;
    _Bool _backgroundLoadingEnabled;
    _Bool _needsConfigurationUpdate;
    _Bool _isConfigurationUpdatePublisherInitiated;
    GADConfiguration *_configuration;
    NSMutableSet *_adRequesters;
    unsigned long long _mainWindowSupportedInterfaceOrientations;
    _Bool _debugModeEnabled;
    NSString *_sessionIdentifier;
    GADStatisticDictionary *_statistics;
    GADStatisticDictionary *_nativeAdStatistics;
    NSString *_inAppPreviewCreativeToken;
    NSString *_UUIDString;
    NSObject<OS_dispatch_queue> *_notificationSerialQueue;
    NSObject<OS_dispatch_queue> *_statisticsSerialQueue;
    unsigned long long _sequenceNumber;
    NSMutableSet *_adStatistics;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, nonatomic) NSMutableSet *adStatistics; // @synthesize adStatistics=_adStatistics;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsSerialQueue; // @synthesize statisticsSerialQueue=_statisticsSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationSerialQueue; // @synthesize notificationSerialQueue=_notificationSerialQueue;
@property(readonly, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(copy, nonatomic) NSString *inAppPreviewCreativeToken; // @synthesize inAppPreviewCreativeToken=_inAppPreviewCreativeToken;
@property(nonatomic) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(readonly, copy, nonatomic) GADStatisticDictionary *nativeAdStatistics; // @synthesize nativeAdStatistics=_nativeAdStatistics;
@property(readonly, copy, nonatomic) GADStatisticDictionary *statistics; // @synthesize statistics=_statistics;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)openURL:(id)arg1 strictUniversalLink:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1;
- (long long)topViewControllerOrientation;
- (_Bool)supportsOrientations:(unsigned long long)arg1;
- (unsigned long long)mainWindowSupportedInterfaceOrientations;
- (_Bool)isSplitScreenEnabled;
- (id)parameters;
- (unsigned long long)nextActiveViewID;
- (void)GADLinkCategories;
- (void)didUpdateStatisticDictionary:(id)arg1;
- (id)notificationQueue;
- (id)pendingAdStatistics;
@property(readonly, copy, nonatomic) UIViewController *topViewController;
- (id)mainWindow;
- (id)placeholderWindow;
- (id)iTunesMetadata;
- (id)iTunesMetadataPath;
@property(readonly, nonatomic) _Bool backgroundReloadingEnabled;
@property(readonly, nonatomic) _Bool backgroundLoadingEnabled;
- (void)enableBackgroundAdLoading;
@property(readonly, nonatomic) _Bool active;
- (void)appDidFinishLaunching;
@property(readonly, copy, nonatomic) NSString *mainBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *version;
- (void)runAdditionalEarlyActivities;
- (void)runEarlyActivities;
- (void)dealloc;
- (id)init;
- (void)configurationDidUpdate:(id)arg1;
- (void)loadServerSideConfigurationIfNeeded;
- (void)loadServerSideConfigurationForPublisherApplicationID:(id)arg1;
- (void)refreshServerSideConfiguration;
- (id)javaScriptForRequestingServerSideConfiguration;
@property(readonly, nonatomic) GADConfiguration *configuration;
- (void)createConfiguration;
- (void)stopContentHashing;
- (void)startContentHashing;
- (id)fingerprintWithServedPenaltyDeduction;
- (void)updateAvailableAdapterNamesWithPotentialAdapterNames:(id)arg1;
- (void)setAvailableAdapterNames:(id)arg1;
@property(readonly, copy) NSArray *availableAdapterNames;
- (id)nextRequestStatisticsDictionaryForSlot:(id)arg1;
- (id)timeSinceFirstAdRequestInMilliseconds;
- (id)nextSequenceNumberAsString;
- (void)incrementSequenceNumber;
- (void)incrementTotalAdClickCount;
- (long long)currentAdRequestCount;
- (void)requesterDidEndRequest:(id)arg1;
- (void)requesterWillBeginRequest:(id)arg1;
- (void)updateTimeInSession;
- (void)incrementTotalAdRequestCountInCurrentSession;
- (void)decrementTotalAdRequestCount;
- (void)incrementTotalAdRequestCount;
- (void)didNotSendAdStatistics:(id)arg1;
- (void)willResignActive;
- (void)resetTimeInSession;
- (void)resetPreqsInSession;
- (void)sendForegroundPing;
- (void)willEnterForeground;
- (void)didBecomeActive;
- (void)willLeaveApplicationDueToClickOnAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

