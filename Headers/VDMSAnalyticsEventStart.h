//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VDMSAnalyticsEvent.h"

@interface VDMSAnalyticsEventStart : VDMSAnalyticsEvent
{
    _Bool _suspendedDuringLoad;
    _Bool _readyBeforePlaying;
    _Bool _adPlayedBeforeVideo;
    double _playbackLatency;
    double _loadingRendererLatency;
    double _loadingPlaylistsLatency;
    double _loadingStreamLatency;
    long long _watchDuration;
    unsigned long long _wantsToPlay;
}

@property(nonatomic) unsigned long long wantsToPlay; // @synthesize wantsToPlay=_wantsToPlay;
@property(nonatomic) long long watchDuration; // @synthesize watchDuration=_watchDuration;
@property(nonatomic) _Bool adPlayedBeforeVideo; // @synthesize adPlayedBeforeVideo=_adPlayedBeforeVideo;
@property(nonatomic) _Bool readyBeforePlaying; // @synthesize readyBeforePlaying=_readyBeforePlaying;
@property(nonatomic) _Bool suspendedDuringLoad; // @synthesize suspendedDuringLoad=_suspendedDuringLoad;
@property(nonatomic) double loadingStreamLatency; // @synthesize loadingStreamLatency=_loadingStreamLatency;
@property(nonatomic) double loadingPlaylistsLatency; // @synthesize loadingPlaylistsLatency=_loadingPlaylistsLatency;
@property(nonatomic) double loadingRendererLatency; // @synthesize loadingRendererLatency=_loadingRendererLatency;
@property(nonatomic) double playbackLatency; // @synthesize playbackLatency=_playbackLatency;

@end

