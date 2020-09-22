//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFAssetEventListener-Protocol.h"
#import "FNFPlayerDisplayEngineDelegate-Protocol.h"

@class FNFPlayerExponentialBackoffTimer, NSError;
@protocol FNFAssetForPlayer, FNFClock, FNFFrameDisplayHandling, FNFPlayerAudioDecoder, FNFPlayerAudioEngine, FNFPlayerCaptionParser, FNFPlayerDisplayEngine, FNFPlayerLiveTraceManager, FNFSynchronousPlayerDelegate, OS_dispatch_queue;

@interface FNFSynchronousPlayer : NSObject <FNFPlayerDisplayEngineDelegate, FNFAssetEventListener>
{
    id <FNFAssetForPlayer> _playerAsset;
    id <FNFPlayerAudioEngine> _audioEngine;
    id <FNFPlayerAudioDecoder> _audioDecoder;
    id <FNFPlayerDisplayEngine> _displayEngine;
    id <FNFClock> _clock;
    id <FNFPlayerCaptionParser> _captionParser;
    id <FNFPlayerLiveTraceManager> _liveTraceManager;
    id <FNFFrameDisplayHandling> _frameDisplayHandler;
    NSObject<OS_dispatch_queue> *_runningQueue;
    struct FNFPlayerInternalState _playerInternalState;
    NSError *_playerError;
    float _volume;
    float _volumeRampTime;
    CDUnknownBlockType _audioLevelCallback;
    CDUnknownBlockType _representationChangedCallback;
    _Bool _endFrameSeekIfNoMoreFrames;
    _Bool _useLastCallbackInBackToBackFrameSeek;
    _Bool _flushAudioQueueOnPause;
    _Bool _enableASRCaptions;
    _Bool _isDurationIndefinite;
    _Bool _playbackAVSyncEarlyAudioSetup;
    _Bool _hasPendingMuteRequest;
    unsigned int _minSampleAudioFrameSize;
    _Bool _enableAVSyncLogging;
    _Bool _enableAVSyncMetrics;
    FNFPlayerExponentialBackoffTimer *_exponentialBackoffTimer;
    double _lastResetTime;
    double _lastAVSyncMetricTime;
    long long _audioRetryCount;
    _Bool _displaySeekFrame;
    _Bool _skipBackToBackSeekAsApplicable;
    _Bool _audioPreparedToPlay;
    _Bool _decompressionErrorDebugging;
    _Bool _enableAdsFrameLogging;
    CDStruct_1b6d18a9 _timeBetweenSampleBufferFlushDuringFrameSeek;
    _Bool _forbidEnqueueVideoWhenAppInactive;
    _Bool _displayFirstFrame;
    _Bool _allowsVideoPlaybackWithoutAudio;
    _Bool _restartStallStateWhenPlayingRequested;
    int _frameLoggingSampleRate;
    _Bool _shouldLogNegativeAudioStartTime;
    _Bool _negativeAudioStartTimeThreshold;
    _Bool _checkPlayingRequestedForPauseStateUpdate;
    _Bool _shouldAssignPauseReason;
    _Bool _ignoreStallPriorDidStartPlayForPause;
    _Bool _useAbsolutePtsForLiveAVSyncLogging;
    id <FNFSynchronousPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <FNFSynchronousPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)manifestDataFetched:(id)arg1 isFirstManifest:(_Bool)arg2;
- (void)playerLiveItemDidEnd:(id)arg1;
- (void)playerItemDidFail:(id)arg1;
- (void)playbackDidUndry;
- (void)playbackDidDryOut;
- (void)playerItemDidWarn:(id)arg1;
- (void)durationChanged:(CDStruct_1b6d18a9)arg1;
- (void)timeLoadedChanged:(id)arg1;
- (void)displayEngineDidWarn:(id)arg1;
- (void)displayEngineDidLayoutSubLayers:(struct CGRect)arg1;
- (void)displayEngineIsReadyForDisplay:(_Bool)arg1;
- (void)_updateAVSyncWithSample:(double)arg1;
- (void)_handleFrameDisplayError:(id)arg1;
- (void)_frameLogging:(CDStruct_1b6d18a9)arg1 frameDisplayPlayerTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)_framesDidDisplayWithPts:(double)arg1 audioDisplayTime:(double)arg2 videoDisplayTime:(double)arg3;
- (void)displayEngineStartedToDisplayFrameAt:(CDStruct_1b6d18a9)arg1 playerTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)displayEngineUpdatedWithError:(id)arg1;
- (id)callbackQueueForDisplayEngineDelegate;
- (id)_strForMuteReason:(int)arg1;
- (void)_resetStallState;
- (void)invalidate;
- (long long)status;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)_setupLayer;
- (void)_restartAudioPlayback;
- (void)_handleAudioPlaybackError:(id)arg1;
- (void)_logAudioPlaybackWarning:(id)arg1;
- (void)_audioDecoderErrorCallback:(id)arg1;
- (void)_audioEngineErrorCallback:(id)arg1;
- (void)_audioEngineOutputCallback:(double)arg1 framePts:(double)arg2;
- (void)_audioEngineEnqueueCallback:(double)arg1 firstFramePts:(double)arg2 displayFramePts:(double)arg3;
- (_Bool)_readyToPlay;
- (void)_syncVolume;
- (void)_updateStatus:(long long)arg1;
- (void)_updateToFailureStatusWithError:(id)arg1;
- (void)_enqueueBuffer:(id)arg1;
- (void)_startVideo:(id)arg1;
- (void)_setupAudio;
- (_Bool)_videoIsAudioActive;
- (_Bool)_videoHasAudioTrack;
- (void)_checkIfRepresentationChanged;
- (void)_videoLayerEnqueueDecompressedFrameCallback;
- (void)_videoLayerEnqueueFrameCallback:(id)arg1;
- (void)_markDisplayImmediately:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_canParseCaptions;
- (_Bool)_audioPutDataIntoBufferCallback:(struct AudioQueueBuffer *)arg1 timestamp:(struct AudioTimeStamp *)arg2 framePts:(CDStruct_1b6d18a9 *)arg3 isfirstPacket:(_Bool *)arg4;
- (void)_adjustAudioFrameToCurrentPlaybackTime;
- (_Bool)_audioBufferLengthIsGreaterThan:(CDStruct_1b6d18a9)arg1;
- (_Bool)_videoBufferLengthIsGreaterThan:(CDStruct_1b6d18a9)arg1;
- (_Bool)_enqueuedTime:(CDStruct_1b6d18a9)arg1 isGreaterThanLength:(CDStruct_1b6d18a9)arg2;
- (void)_playbackTimeListenerForAsset:(CDStruct_1b6d18a9)arg1;
- (void)_playbackFinishedTimeForAsset:(CDStruct_1b6d18a9)arg1;
- (void)_flushSampleBuffersDuringFrameSeekWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_addSampleBufferFlushTimerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_addStallTimer;
- (id)_addSeekFrameUpdateTimer;
- (id)_addDurationTimerForAsset;
- (id)_addPlaybackTimerForAsset;
- (void)_startStalling:(_Bool)arg1;
- (void)_updateFrameAfterSeek;
- (void)_startUpdateSeekFrame;
- (void)_manageStallStateWithDidStartPlaying:(_Bool)arg1;
- (void)_updateTimersOnPause;
- (void)_setupAudioEngine;
- (void)_resumePlayback;
- (void)_pausePlayback:(int)arg1;
- (void)_reenableLevelMeteringIfNeeded;
- (void)_levelMeterCallback;
- (_Bool)_isScreenCapturedForProtectedContent;
- (_Bool)_isHDMIConnectedForProtectedContent;
- (_Bool)_isPlayRestricted;
- (void)didChangeScreenCaptured;
- (void)didDisconnectWithExternalScreen;
- (void)didConnectWithExternalScreen;
- (void)addRepresentationChangedCallback:(CDUnknownBlockType)arg1;
- (void)removeLevelMeterCallback;
- (void)addLevelMeterCallback:(CDUnknownBlockType)arg1 timeInterval:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)lastRequestedStartTime;
- (CDStruct_1b6d18a9)lastStartingTime;
- (void)setShowCaptions:(_Bool)arg1;
- (_Bool)showCaptions;
- (void)setMuted:(_Bool)arg1 muteReason:(int)arg2;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)_handleSeekCancellation;
- (void)_handleFramePerfectSeekWithSeekReason:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleSeekCompletionHandlerWithSeekReason:(int)arg1 seekFinished:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1 frameSeekOn:(_Bool)arg2 seekReason:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 seekReason:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 seekReason:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)error;
- (CDStruct_1b6d18a9)currentTime;
- (void)_syncAudioEngineWithClock;
- (void)setRate:(float)arg1;
- (float)rate;
- (id)currentItem;
- (void)removeTimeObserver:(id)arg1;
- (void)flushTimeObserver:(id)arg1;
- (void)addTimeObserver:(id)arg1;
- (id)createPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 followMasterClock:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 loggingContext:(id)arg2;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setUserSelectedQuality:(id)arg1;
- (void)setLiveTraceManager:(id)arg1;
- (void)setAudioDecoder:(id)arg1;
- (void)setAudioEngine:(id)arg1;
- (void)setCaptionParser:(id)arg1;
- (void)pauseWithPauseReason:(int)arg1 context:(id)arg2;
- (void)pauseWithContext:(id)arg1;
- (void)playWithContext:(id)arg1;
- (void)pause;
- (void)play;
- (id)description;
- (id)initWithDisplayEngine:(id)arg1 config:(CDStruct_edd528ab)arg2 audioEngine:(id)arg3 audioDecoder:(id)arg4 clock:(id)arg5 runningQueue:(id)arg6 muted:(_Bool)arg7 asyncTimebase:(_Bool)arg8;
- (void)dealloc;

@end

