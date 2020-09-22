//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBDBiometricSignalsManager, NSMutableDictionary, NSSet;
@protocol BotDetectionConfigProviderDelegate, BotDetectionDynamicLoadedLibraryProviderDelegate, BotDetectionSignalLoggerDelegate, BotDetectionSignalsProviderDelegate, OS_dispatch_queue;

@interface FBBDSignalCollector : NSObject
{
    NSSet *_allSupportedSignals;
    _Bool _isSignalCollectorInitialized;
    id <BotDetectionConfigProviderDelegate> _configDelegate;
    id <BotDetectionSignalsProviderDelegate> _signalsDelegate;
    id <BotDetectionSignalLoggerDelegate> _loggerDelegate;
    id <BotDetectionDynamicLoadedLibraryProviderDelegate> _dynamicLoadedLibraryProviderDelegate;
    _Bool _isIntervalModeEnabled;
    unsigned long long _bufferSizeCurrent;
    FBBDBiometricSignalsManager *_biometricSignalManager;
    _Bool _isOffsite;
    NSMutableDictionary *_collectedSignalDict;
    NSObject<OS_dispatch_queue> *_signalCollectionQueue;
}

- (void).cxx_destruct;
- (_Bool)isSignalEnabledForCurrentTierWithSignalFlags:(unsigned long long)arg1;
- (void)collectDynamicSignals;
- (void)collectStaticSignals;
- (void)sendSignalsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finalizeSignalsAndSendUsingCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithConfigDelegate:(id)arg1 withSignalsDelegate:(id)arg2 withLoggerDelegate:(id)arg3 withDynamicLibraryProviderDelegate:(id)arg4 withAppSessionId:(id)arg5;

@end
