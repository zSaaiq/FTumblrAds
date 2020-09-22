//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnalyticsDelegate-Protocol.h"
#import "CacheManagerObserver-Protocol.h"
#import "MidrollRequestHelperDelegate-Protocol.h"

@class AdEngine, AdPlaybackManager, Analytics, CacheManager, MidrollRequestHelper, NSMutableDictionary, NSString, YVAPGeminiViewabilityManager;
@protocol YVAPAnalyticsDelegate, YahooVideoAdPluginDelegate;

@interface YahooVideoAdPlugin : NSObject <CacheManagerObserver, AnalyticsDelegate, MidrollRequestHelperDelegate>
{
    _Bool _isClipStarted;
    _Bool _willHandleFallbackAds;
    id <YahooVideoAdPluginDelegate> _delegate;
    AdEngine *_engine;
    NSString *_accountId;
    NSString *_clipId;
    NSMutableDictionary *_waitList;
    MidrollRequestHelper *_midrollRequestHelper;
    CacheManager *_cacheManager;
    id <YVAPAnalyticsDelegate> _videoAnaltyics;
    Analytics *_adAnalytics;
    YVAPGeminiViewabilityManager *_geminiViewabilityManager;
    AdPlaybackManager *_adPlaybackManager;
    NSMutableDictionary *_playbackMap;
    double _videoStartTime;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool willHandleFallbackAds; // @synthesize willHandleFallbackAds=_willHandleFallbackAds;
@property(nonatomic) _Bool isClipStarted; // @synthesize isClipStarted=_isClipStarted;
@property(nonatomic) double videoStartTime; // @synthesize videoStartTime=_videoStartTime;
@property(retain, nonatomic) NSMutableDictionary *playbackMap; // @synthesize playbackMap=_playbackMap;
@property(retain, nonatomic) AdPlaybackManager *adPlaybackManager; // @synthesize adPlaybackManager=_adPlaybackManager;
@property(retain, nonatomic) YVAPGeminiViewabilityManager *geminiViewabilityManager; // @synthesize geminiViewabilityManager=_geminiViewabilityManager;
@property(retain, nonatomic) Analytics *adAnalytics; // @synthesize adAnalytics=_adAnalytics;
@property(retain, nonatomic) id <YVAPAnalyticsDelegate> videoAnaltyics; // @synthesize videoAnaltyics=_videoAnaltyics;
@property(retain) CacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) MidrollRequestHelper *midrollRequestHelper; // @synthesize midrollRequestHelper=_midrollRequestHelper;
@property(retain, nonatomic) NSMutableDictionary *waitList; // @synthesize waitList=_waitList;
@property(retain, nonatomic) NSString *clipId; // @synthesize clipId=_clipId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) AdEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak id <YahooVideoAdPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (id)adPodWithDuration:(double)arg1 possibleAds:(id)arg2 currentAdPod:(id)arg3;
- (id)prepareAdResponse:(id)arg1 withAdSpec:(id)arg2 commSpec:(id)arg3 playerData:(id)arg4 adNumber:(long long)arg5 adBreakNumber:(long long)arg6;
- (id)prepareAdStreamsWithAdResponses:(id)arg1 maxDuration:(double)arg2 startingAdNumber:(long long)arg3 adBreakNumber:(long long)arg4;
- (void)midrollRequestHelper:(id)arg1 finishedRequestWithAds:(id)arg2;
- (void)startRequestNFLLiveMidrolls:(id)arg1 adBreakNumber:(long long)arg2 timeout:(id)arg3 label:(id)arg4 adBreakId:(id)arg5;
- (_Bool)completeCurrentMidrollsRequest;
- (void)startRequestMidrollsForDuration:(id)arg1 adBreakNumber:(long long)arg2 timeout:(id)arg3;
- (id)midrollRequestHelperWithAllocation:(id)arg1 playerData:(id)arg2 targetDuration:(id)arg3 adBreakNumber:(long long)arg4 timeout:(id)arg5;
- (_Bool)needsGeminiViewabilityData:(id)arg1;
- (void)updateGeminiViewabilityData:(id)arg1;
- (void)onAdMetric:(id)arg1;
- (void)onAdBreakEnd:(id)arg1;
- (void)onAdBreakStart:(id)arg1;
- (void)onAdPlaybackError:(id)arg1 error:(id)arg2;
- (void)onAdNotPlayable:(id)arg1 error:(id)arg2;
- (void)onNoAd:(id)arg1;
- (void)onAdClick:(id)arg1 progess:(double)arg2 withDuration:(double)arg3;
- (void)onAdEnd:(id)arg1;
- (void)onAdProgress:(id)arg1 progess:(double)arg2 withDuration:(double)arg3;
- (void)onAdStart:(id)arg1 bitrate:(long long)arg2 startLatency:(double)arg3;
- (void)onContentVideoEnd;
- (void)onContentVideoResume;
- (void)onContentVideoProgess:(double)arg1 withDuration:(double)arg2;
- (void)onContentVideoStart;
- (void)onAdCacheUpdate:(id)arg1;
- (void)prefetchNFLLiveMidrollAdFor:(id)arg1 clipId:(id)arg2;
- (id)getAdFor:(id)arg1 clipId:(id)arg2;
- (_Bool)isWaitingForPrevideoAds;
- (id)sharedIcebreakerCacheManager;
- (id)sharedCacheManager;
- (void)sendAdStreamUpdate:(id)arg1;
- (void)updateAds:(id)arg1;
- (id)handleAdsFallback:(id)arg1;
- (void)parsePlayerData:(id)arg1;
- (void)beginAdExperience:(id)arg1;
- (void)runOnMain:(CDUnknownBlockType)arg1;
- (id)initWithAccountId:(id)arg1 timeout:(double)arg2 analytics:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

