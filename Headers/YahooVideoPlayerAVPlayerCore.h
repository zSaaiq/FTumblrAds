//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVPlayerItemLegibleOutputPushDelegate-Protocol.h"
#import "YVideoAVPlayerInnerCoreDelegate-Protocol.h"

@class AVPlayerItemLegibleOutput, AVPlayerItemVideoOutput, CADisplayLink, NSDate, NSString, NSTimer, VDMSKeyValueObserver, YVPlaybackInfo, YVStoreSession, YVideoAVPlayerInnerCore, YVideoPlayerView;

@interface YahooVideoPlayerAVPlayerCore : NSObject <YVideoAVPlayerInnerCoreDelegate, AVPlayerItemLegibleOutputPushDelegate>
{
    _Bool _allowsExternalPlayback;
    float _frameRate;
    YVideoPlayerView *_view;
    NSDate *_playerItemProgramDate;
    YVStoreSession *_store;
    YVPlaybackInfo *_playbackInfo;
    VDMSKeyValueObserver *_playerViewFrameObserver;
    YVideoAVPlayerInnerCore *_player;
    NSObject *_lockToken;
    id _timeObserver;
    NSTimer *_playImmediatelyTimer;
    AVPlayerItemVideoOutput *_frameGrabber;
    CADisplayLink *_videoFrameDisplayLink;
    AVPlayerItemVideoOutput *_videoFrameOutput;
    unsigned long long _numberOfMissingOutputPixelBuffers;
    unsigned long long _numberOfOutputResetsInARow;
    AVPlayerItemLegibleOutput *_legibleOutput;
    CADisplayLink *_metalDisplayLink;
    AVPlayerItemVideoOutput *_metalVideoOutput;
    NSTimer *_volumeFadeInTimer;
    CDStruct_1b6d18a9 _playerTimeAtLastDisplayLinkUpdate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *volumeFadeInTimer; // @synthesize volumeFadeInTimer=_volumeFadeInTimer;
@property(retain, nonatomic) AVPlayerItemVideoOutput *metalVideoOutput; // @synthesize metalVideoOutput=_metalVideoOutput;
@property(retain, nonatomic) CADisplayLink *metalDisplayLink; // @synthesize metalDisplayLink=_metalDisplayLink;
@property(retain, nonatomic) AVPlayerItemLegibleOutput *legibleOutput; // @synthesize legibleOutput=_legibleOutput;
@property(nonatomic) unsigned long long numberOfOutputResetsInARow; // @synthesize numberOfOutputResetsInARow=_numberOfOutputResetsInARow;
@property(nonatomic) unsigned long long numberOfMissingOutputPixelBuffers; // @synthesize numberOfMissingOutputPixelBuffers=_numberOfMissingOutputPixelBuffers;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) CDStruct_1b6d18a9 playerTimeAtLastDisplayLinkUpdate; // @synthesize playerTimeAtLastDisplayLinkUpdate=_playerTimeAtLastDisplayLinkUpdate;
@property(retain, nonatomic) AVPlayerItemVideoOutput *videoFrameOutput; // @synthesize videoFrameOutput=_videoFrameOutput;
@property(retain, nonatomic) CADisplayLink *videoFrameDisplayLink; // @synthesize videoFrameDisplayLink=_videoFrameDisplayLink;
@property(retain, nonatomic) AVPlayerItemVideoOutput *frameGrabber; // @synthesize frameGrabber=_frameGrabber;
@property(retain, nonatomic) NSTimer *playImmediatelyTimer; // @synthesize playImmediatelyTimer=_playImmediatelyTimer;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain) NSObject *lockToken; // @synthesize lockToken=_lockToken;
@property(retain, nonatomic) YVideoAVPlayerInnerCore *player; // @synthesize player=_player;
@property(retain, nonatomic) VDMSKeyValueObserver *playerViewFrameObserver; // @synthesize playerViewFrameObserver=_playerViewFrameObserver;
@property(readonly, nonatomic) YVPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(readonly, nonatomic) __weak YVStoreSession *store; // @synthesize store=_store;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(readonly, nonatomic) NSDate *playerItemProgramDate; // @synthesize playerItemProgramDate=_playerItemProgramDate;
@property(retain, nonatomic) YVideoPlayerView *view; // @synthesize view=_view;
- (void)dateRangeCuesChanged:(id)arg1;
- (void)receivedEmbeddedCues:(id)arg1;
- (void)masterPlaylistBitrateVariantsParsed:(id)arg1;
- (void)newPlayerItemErrorLogEntry:(id)arg1;
- (void)newPlayerItemAccessLogEntry:(id)arg1;
- (void)playerItemFailedToPlayToEnd:(id)arg1;
- (void)playerItemPlayedToEnd;
- (void)playerItemTimeJumped;
- (void)playerControlStatusChangedTo:(long long)arg1;
- (void)playerExternalPlaybackActiveChanged:(_Bool)arg1;
- (void)playerRateChanged:(float)arg1;
- (void)playerStatusChanged:(long long)arg1;
- (void)playerItemStatusChanged:(long long)arg1;
- (void)playerWasServedBytesFromCache:(unsigned long long)arg1;
- (void)playerWasServedHLSMediaPlaylist;
- (void)playerBeganLoading;
- (void)playerCreated:(id)arg1;
- (void)playerItemCreated:(id)arg1;
- (void)playerLoadingFailed:(id)arg1;
@property(readonly, nonatomic) _Bool isUsingVideoCache;
@property(readonly, nonatomic) _Bool usingLocalPlaylists;
@property(readonly, nonatomic) unsigned long long bytesToPreload;
@property(readonly, nonatomic) unsigned long long cachedByteSize;
- (_Bool)captureCurrentFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)fatalError:(id)arg1;
- (void)stopTimeUpdates;
- (void)playerTimeUpdated:(CDStruct_1b6d18a9)arg1;
- (void)startTimeUpdates;
- (void)tearDownFrameGrabberOutput;
- (void)setupFrameGrabberOutput;
- (void)updateFrameGrabberOutput;
- (void)tearDownMetalPlayerOutput;
- (void)metalDisplayLinkCallback;
- (void)setupMetalVideoOutput;
- (void)updateMetalVideoOutput;
- (void)pollVideoFrameOutput;
- (void)setVideoFrameDisplayLinkResumed:(_Bool)arg1;
- (void)tearDownVideoFrameDisplayLink;
- (void)setUpVideoFrameDisplayLink;
- (void)tearDownVideoFrameOutput;
- (void)setUpVideoFrameOutput;
- (id)allocAVPlayerItemVideoOutput;
- (void)tearDown;
- (id)createPlayer;
- (void)startLoadingAsset;
- (void)handleAudioSessionDeactivated:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 tolerance:(CDStruct_1b6d18a9)arg2;
- (void)pause;
- (void)tryPlayImmediately;
- (void)play;
- (void)selectAudioStream:(id)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_1b6d18a9)arg4;
- (void)removeLegibleOutput;
- (void)addLegibleOutput;
- (void)configureTextStyleRules;
- (void)selectCaptionStream:(id)arg1;
- (_Bool)selectStream:(id)arg1 forCharacteristic:(id)arg2;
- (void)mediaSelectionOption:(id)arg1 languageTag:(id *)arg2 displayName:(id *)arg3;
@property(readonly, nonatomic) double forwardBufferDuration;
@property(readonly, nonatomic) double totalBufferDuration;
- (void)setPreferredForwardBufferDuration:(double)arg1 onPlayerItem:(id)arg2;
@property(nonatomic) double preferredForwardBufferDuration;
@property(nonatomic) long long preferredPeakBitRate;
- (void)setVolume:(float)arg1 interpolateChange:(_Bool)arg2;
- (void)setVideoGravity:(long long)arg1;
@property(readonly, nonatomic) _Bool isExternalPlaybackActive;
@property(readonly, nonatomic) long long playerStatus;
- (id)notificationCenter;
@property(readonly, nonatomic) struct CGRect videoPlayerFrame;
@property(readonly, nonatomic) CDStruct_5c5366e1 seekableTimeRange;
- (void)reattachPlayer;
- (void)detachPlayer;
- (void)dealloc;
- (id)initWithStore:(id)arg1 playbackInfo:(id)arg2;
- (void)performOnNextMainRunLoop:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

