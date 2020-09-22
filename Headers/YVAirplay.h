//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, VDMSStoreScheduler, YVStateValue, YVValue, YVValueStore;

@interface YVAirplay : NSObject
{
    YVStateValue *_connectedDeviceName;
    YVStateValue *_screenCount;
    YVValue *_connectedToExternalDisplay;
    YVValue *_airplayOverlayMessage;
    YVStateValue *_airplayingVideoSession;
    YVValue *_eventStartAirplayingVideoSession;
    YVValue *_airplayingVideoView;
    YVStateValue *_initEvent;
    YVStateValue *_updateTimerFiredEvent;
    VDMSStoreScheduler *_scheduler;
    YVValueStore *_valueStore;
    NSTimer *_updateTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(readonly, nonatomic) YVValueStore *valueStore; // @synthesize valueStore=_valueStore;
@property(readonly, nonatomic) VDMSStoreScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void)updateTimerFired;
- (void)videoStoppedAirplaying:(id)arg1;
- (void)videoStartedAirplaying:(id)arg1;
@property(readonly, nonatomic) _Bool isExternalScreenAirplay;
@property(readonly, nonatomic) _Bool isAirplayInProgress;
@property(readonly, nonatomic) _Bool isConnectedToAirplay;
- (id)connectedAirplayDeviceName;
- (unsigned long long)screenCount;
- (id)airplayingMessage;
@property(readonly, nonatomic) NSString *connectedDeviceName;
- (void)updateScreenCount:(id)arg1;
- (void)updateAudioRoute:(id)arg1;
- (void)transactionEffects;
- (void)openTransactionWithImpulse:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

