//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YVProcessGraphDateProvider-Protocol.h"

@class AVAudioSession, NSArray, NSDate, NSHashTable, NSNotificationCenter, NSPointerArray, NSString, NSUserDefaults, UIPasteboard, VDMSDeviceState, VDMSStoreScheduler, YVAirplay, YVAllPlayersExtent, YVCustomChrome, YVExternalAPI, YVFairplayCertificateCache, YVLocation, YVNielsenSettings, YVProcessGraph, YVRemoteConfiguration, YVRemoteConfigurationSource, YVideoAutoplaySettings, YVideoChromecast, YVideoChromecastRemoteControl, YVideoConnection, YVideoLiveStatsOverlayView, YVideoPlayQueue, YVideoPopout;
@protocol YVExternalLoggerProtocol, YVOMSDKProtocol;

@interface VDMSGlobalState : NSObject <YVProcessGraphDateProvider>
{
    YVideoChromecast *_chromecast;
    YVCustomChrome *_customChrome;
    YVExternalAPI *_externalAPI;
    YVNielsenSettings *_nielsenSettings;
    YVFairplayCertificateCache *_fairplayCertificateCache;
    YVRemoteConfigurationSource *_remoteConfigurationSource;
    YVProcessGraph *_processGraph;
    YVAllPlayersExtent *_allPlayersExtent;
    id <YVOMSDKProtocol> _omsdk;
    VDMSDeviceState *_device;
    YVAirplay *_airplay;
    YVideoChromecastRemoteControl *_chromecastRemoteControl;
    YVideoConnection *_connection;
    YVideoPlayQueue *_playQueue;
    YVideoPopout *_popout;
    YVLocation *_location;
    YVideoLiveStatsOverlayView *_statsOverlay;
    NSHashTable *_videoViewHashTable;
    YVideoAutoplaySettings *_autoplaySettings;
    NSPointerArray *_playerSessionPointerArray;
    unsigned long long _maxInFlightPlayerSessions;
    VDMSStoreScheduler *_storeScheduler;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) VDMSStoreScheduler *storeScheduler; // @synthesize storeScheduler=_storeScheduler;
@property(readonly, nonatomic) unsigned long long maxInFlightPlayerSessions; // @synthesize maxInFlightPlayerSessions=_maxInFlightPlayerSessions;
@property(retain, nonatomic) NSPointerArray *playerSessionPointerArray; // @synthesize playerSessionPointerArray=_playerSessionPointerArray;
@property(retain, nonatomic) YVideoAutoplaySettings *autoplaySettings; // @synthesize autoplaySettings=_autoplaySettings;
@property(retain, nonatomic) NSHashTable *videoViewHashTable; // @synthesize videoViewHashTable=_videoViewHashTable;
@property(retain, nonatomic) YVideoLiveStatsOverlayView *statsOverlay; // @synthesize statsOverlay=_statsOverlay;
@property(retain, nonatomic) YVLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) YVideoPopout *popout; // @synthesize popout=_popout;
@property(retain, nonatomic) YVideoPlayQueue *playQueue; // @synthesize playQueue=_playQueue;
@property(retain, nonatomic) YVideoConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) YVideoChromecastRemoteControl *chromecastRemoteControl; // @synthesize chromecastRemoteControl=_chromecastRemoteControl;
@property(retain, nonatomic) YVAirplay *airplay; // @synthesize airplay=_airplay;
@property(retain, nonatomic) VDMSDeviceState *device; // @synthesize device=_device;
@property(readonly, nonatomic) id <YVOMSDKProtocol> omsdk; // @synthesize omsdk=_omsdk;
@property(readonly, nonatomic) YVAllPlayersExtent *allPlayersExtent; // @synthesize allPlayersExtent=_allPlayersExtent;
@property(retain, nonatomic) YVProcessGraph *processGraph; // @synthesize processGraph=_processGraph;
@property(readonly, nonatomic) YVRemoteConfigurationSource *remoteConfigurationSource; // @synthesize remoteConfigurationSource=_remoteConfigurationSource;
@property(readonly, nonatomic) YVFairplayCertificateCache *fairplayCertificateCache; // @synthesize fairplayCertificateCache=_fairplayCertificateCache;
@property(readonly, nonatomic) YVNielsenSettings *nielsenSettings; // @synthesize nielsenSettings=_nielsenSettings;
@property(readonly, nonatomic) YVExternalAPI *externalAPI; // @synthesize externalAPI=_externalAPI;
@property(readonly, nonatomic) YVCustomChrome *customChrome; // @synthesize customChrome=_customChrome;
@property(retain, nonatomic) YVideoChromecast *chromecast; // @synthesize chromecast=_chromecast;
- (id)allocOpenMeasurement;
@property(readonly, nonatomic) _Bool omsdkAvailable;
@property(readonly, nonatomic) YVRemoteConfiguration *currentRemoteConfiguration;
- (id)allocRemoteConfigurationSource;
- (id)allocFairplayCertificateCache;
@property(retain, nonatomic) NSString *userCaptionLanguagePreference;
@property(readonly, nonatomic) NSUserDefaults *defaults;
- (id)allocNielsenSettings;
- (void)audioRouteChangedNotification:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)receivedMemoryWarning;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
- (id)playerSessions;
@property(readonly, nonatomic) NSArray *videoViews;
- (void)videoViewCreated:(id)arg1;
@property(readonly, nonatomic) id <YVExternalLoggerProtocol> analyticsLogger;
@property(readonly, nonatomic) UIPasteboard *pasteboard;
@property(readonly, nonatomic) AVAudioSession *audioSession;
- (Class)statsOverlayClass;
- (Class)locationClass;
- (id)allocPopout;
- (Class)playQueueClass;
- (long long)autoplayPreference;
- (Class)autoplaySettingsClass;
@property(readonly, nonatomic) _Bool inLowPowerMode;
@property(readonly, nonatomic) _Bool isAccessibilityRunning;
- (id)allocConnection;
- (Class)chromecastRemoteControlClass;
- (id)allocChromecast;
- (id)allocAutoplaySettings;
- (Class)airplayClass;
- (id)processGraphCurrentDate;
@property(readonly, nonatomic) NSDate *currentDate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
