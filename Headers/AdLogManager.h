//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdDataSenderBase.h"

#import "FlurryAdHttpAsyncTaskDelegate-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AdLogManager : FlurryAdDataSenderBase <FlurryAdHttpAsyncTaskDelegate, NSCoding>
{
    _Bool _isBackgroundSupported;
    NSMutableDictionary *_adLogsMap;
    NSMutableDictionary *_dataBlocksMap;
}

+ (void)unregisterBackgoundTask:(unsigned long long)arg1;
+ (unsigned long long)registerBackgoundTask;
+ (id)instance;
@property(nonatomic) _Bool isBackgroundSupported; // @synthesize isBackgroundSupported=_isBackgroundSupported;
@property(retain, nonatomic) NSMutableDictionary *dataBlocksMap; // @synthesize dataBlocksMap=_dataBlocksMap;
@property(retain, nonatomic) NSMutableDictionary *adLogsMap; // @synthesize adLogsMap=_adLogsMap;
- (void).cxx_destruct;
- (void)requestSuccessful:(id)arg1 withResponse:(id)arg2;
- (void)handleSuccessfulRequest:(id)arg1 withResponse:(id)arg2;
- (void)requestDidCancel:(id)arg1 withResponse:(id)arg2;
- (void)requestDidFail:(id)arg1 withResponse:(id)arg2;
- (void)retransmitNotSentBlocks;
- (void)didCompleteAllTasks;
- (void)sendSerializedAdLogsData:(id)arg1 withIdentifier:(id)arg2;
- (void)sendAdLogsAsyncMainThread;
- (id)getAdLogsWithNonEmptyAdEvents:(id)arg1;
- (void)sendAdLogsAsync;
- (void)performSendAdLogs:(id)arg1 blockInfo:(id)arg2;
- (void)saveLogManager;
- (void)saveLogManagerSync;
- (void)discardOldAdLogs;
- (void)firePendingUrlsOnNetworkAvailability;
- (void)networkStatusChanged:(id)arg1;
- (void)appWillResume:(id)arg1;
- (void)appWillBackground:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)removeAdLogsWithTransferIdentifier:(id)arg1;
- (void)performRemoveAdLogsWithTransferIdentifier:(id)arg1;
- (id)getAdLog:(id)arg1;
- (void)storeAdLog:(id)arg1;
- (void)registerForNotifications:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fireUrlOnTimer:(id)arg1;
- (void)setTimerToFireUrl:(id)arg1 withDuration:(double)arg2;
- (void)firePendingUrls;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

