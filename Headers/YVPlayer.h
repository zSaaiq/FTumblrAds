//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSConnectionObserver-Protocol.h"

@class NSDictionary, NSHashTable, NSString, UIViewController, VDMSStoreScheduler, YVPlayerConfiguration, YVStateValue, YVTime, YVValue, YVValueStore, YVideoViewFullScreenPresentationViewController;

@interface YVPlayer : NSObject <VDMSConnectionObserver>
{
    YVStateValue *_currentPlaylistIndex;
    YVStateValue *_windowState;
    YVStateValue *_connectionType;
    YVStateValue *_inLowPowerMode;
    YVStateValue *_autoplayPreference;
    YVStateValue *_airplayInProgress;
    YVStateValue *_chromecastInProgress;
    YVStateValue *_popoutActive;
    YVStateValue *_closedCaptionsPreference;
    YVStateValue *_videoGravity;
    YVStateValue *_seekTolerance;
    YVValue *_autoplayConditionsMet;
    YVStateValue *_videoFrameOutputPixelBufferAttributes;
    YVStateValue *_videoFrameOutputBlock;
    YVStateValue *_highFrequencyPositionUpdateBlock;
    YVValue *_videoFrameOutputEnabled;
    YVValue *_highFrequencyPositionUpdatesEnabled;
    NSString *_instanceId;
    YVPlayerConfiguration *_configuration;
    YVideoViewFullScreenPresentationViewController *_fullscreenViewController;
    UIViewController *_currentViewController;
    VDMSStoreScheduler *_scheduler;
    YVValueStore *_valueStore;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) YVValueStore *valueStore; // @synthesize valueStore=_valueStore;
@property(readonly, nonatomic) VDMSStoreScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak YVideoViewFullScreenPresentationViewController *fullscreenViewController; // @synthesize fullscreenViewController=_fullscreenViewController;
@property(retain, nonatomic) YVPlayerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, nonatomic) _Bool highFrequencyPositionUpdatesEnabled;
@property(readonly, nonatomic) _Bool videoFrameOutputEnabled;
@property(copy, nonatomic) CDUnknownBlockType highFrequencyPositionUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType videoFrameOutputBlock;
@property(retain, nonatomic) NSDictionary *videoFrameOutputPixelBufferAttributes;
@property(readonly, nonatomic) _Bool autoplayConditionsMet;
@property(retain, nonatomic) YVTime *seekTolerance;
@property(nonatomic) long long videoGravity;
@property(nonatomic) unsigned long long closedCaptionsPreference;
@property(nonatomic) long long windowState;
@property(nonatomic) unsigned long long currentPlaylistIndex;
- (void)popoutActiveChanged;
- (void)chromecastInProgressChanged;
- (void)airplayInProgressChanged;
- (void)autoplayPreferenceChanged;
- (void)powerStateChanged;
- (void)connection:(id)arg1 connectionTypeChangedTo:(unsigned long long)arg2 from:(unsigned long long)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)transactionEffects;
- (void)openTransactionWithImpulse:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

