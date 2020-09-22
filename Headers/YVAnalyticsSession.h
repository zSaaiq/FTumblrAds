//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VDMSGlobalState, VDMSKeyValueObserver, YVAnalyticsVolumeChange, YVideoSession;
@protocol YVAnalyticsSessionDelegate;

@interface YVAnalyticsSession : NSObject
{
    id <YVAnalyticsSessionDelegate> _delegate;
    VDMSGlobalState *_globalState;
    YVideoSession *_videoSession;
    NSString *_sessionId;
    unsigned long long _continuousPlayCount;
    VDMSKeyValueObserver *_audioSessionOutputVolumeObserver;
    YVAnalyticsVolumeChange *_volumeChange;
    long long _windowState;
}

- (void).cxx_destruct;
@property(nonatomic) long long windowState; // @synthesize windowState=_windowState;
@property(retain, nonatomic) YVAnalyticsVolumeChange *volumeChange; // @synthesize volumeChange=_volumeChange;
@property(retain, nonatomic) VDMSKeyValueObserver *audioSessionOutputVolumeObserver; // @synthesize audioSessionOutputVolumeObserver=_audioSessionOutputVolumeObserver;
@property(readonly, nonatomic) unsigned long long continuousPlayCount; // @synthesize continuousPlayCount=_continuousPlayCount;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) __weak YVideoSession *videoSession; // @synthesize videoSession=_videoSession;
@property(readonly, nonatomic) __weak VDMSGlobalState *globalState; // @synthesize globalState=_globalState;
@property(nonatomic) __weak id <YVAnalyticsSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logAdEventWithName:(id)arg1 parameters:(id)arg2;
- (void)logPlayPauseActionTriggered:(_Bool)arg1 action:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)addRequestTypeAndActionToParameters:(id)arg1 action:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)userToggledChrome:(_Bool)arg1;
- (void)userPressedUnmuteButton;
- (void)userPressedMuteButton;
- (void)logMuteButtonPressedAndMuted:(_Bool)arg1;
- (void)logVolumeChangedFrom:(float)arg1 to:(float)arg2 atPlaybackPosition:(double)arg3;
- (void)audioSessionOutputVolumeChangedFrom:(float)arg1;
- (void)logUserChangedAudioStream:(id)arg1;
- (void)logUserChangedCaptionsLanguage:(id)arg1;
- (void)logSeekCompleted:(id)arg1;
- (void)logChromecastEvent:(id)arg1;
- (void)logAirplayEvent:(id)arg1;
- (void)logErrorWithType:(long long)arg1 logCode:(id)arg2 description:(id)arg3 url:(id)arg4;
- (void)playlistScrolled;
- (void)videoApiRequestCompletedWithUrl:(id)arg1 httpStatusCode:(long long)arg2 contentLength:(unsigned long long)arg3 latency:(double)arg4 instrumentationInfo:(id)arg5 performanceMetrics:(id)arg6 recovery:(_Bool)arg7;
- (void)trackWindowState:(long long)arg1 fromUserInteraction:(_Bool)arg2;
- (void)logBitrateChanged:(id)arg1;
- (void)logStall:(id)arg1;
- (void)logVideoComplete:(id)arg1;
- (void)logVideoProgress:(id)arg1;
- (void)logStreamView:(id)arg1;
- (void)logVideoStart:(id)arg1;
- (void)logVideoRequest:(id)arg1;
- (void)addWatchTimeToParameters:(id)arg1;
- (void)addVideoCacheMetricsToParameters:(id)arg1;
- (void)addProgramDateTimeLatencyToParameters:(id)arg1;
- (void)addPlaybackPositionToParameters:(id)arg1;
- (void)addBufferInfoToParameters:(id)arg1 indicatedBitrate:(id)arg2 indicatedAverageBitrate:(id)arg3 observedBitrate:(id)arg4 stallCount:(unsigned long long)arg5 stallDuration:(double)arg6 droppedFrames:(id)arg7;
- (id)commonParamsForEventType:(long long)arg1;
- (id)initWithVideoSession:(id)arg1 sessionId:(id)arg2 continuousPlayCount:(unsigned long long)arg3 delegate:(id)arg4;

@end
