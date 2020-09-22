//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdActor.h"

#import "FlurryAdCacheDelegate-Protocol.h"
#import "FlurryPreCachingDelegate-Protocol.h"

@class FlurryAdCache, FlurryAdCapabilities, FlurryAdTargeting, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView, UIViewController;
@protocol FlurryAdDelegate;

@interface FlurryAdManager : FlurryAdActor <FlurryAdCacheDelegate, FlurryPreCachingDelegate>
{
    NSMutableDictionary *_adSpaceToAdMap;
    NSMutableDictionary *_adSpaceToTimerMap;
    NSMutableArray *_pendingAdArray;
    NSMutableDictionary *_pendingAssetsToAdPrepareRequests;
    int _adViewType;
    NSMutableArray *_cachePendingAdUnitArray;
    NSArray *_supportedAssetsList;
    FlurryAdTargeting *_targeting;
    NSMutableArray *_timers;
    FlurryAdCapabilities *_adCapabilities;
    UIViewController *_rvc;
    id <FlurryAdDelegate> _adDelegate;
    Class _cacheKeyFactory;
    NSMutableDictionary *_adSpaceToGuidsMap;
    FlurryAdCache *_adCache;
    NSMutableDictionary *_viewabilityPending;
    UIView *_stubView;
    NSMutableArray *_allPendingAds;
    NSString *_currentAdSpace;
}

+ (id)getMediaAssetUrlFromAdFrame:(id)arg1;
+ (id)getMediaAssetUrlFromAdUnit:(id)arg1;
+ (id)allPendingAds;
+ (id)instance;
@property(copy, nonatomic) NSString *currentAdSpace; // @synthesize currentAdSpace=_currentAdSpace;
@property(retain, nonatomic) NSMutableArray *allPendingAds; // @synthesize allPendingAds=_allPendingAds;
@property(nonatomic) int adViewType; // @synthesize adViewType=_adViewType;
@property(retain, nonatomic) UIView *stubView; // @synthesize stubView=_stubView;
@property(retain, nonatomic) NSMutableDictionary *viewabilityPending; // @synthesize viewabilityPending=_viewabilityPending;
@property(retain, nonatomic) FlurryAdCache *adCache; // @synthesize adCache=_adCache;
@property(retain, nonatomic) NSMutableDictionary *adSpaceToGuidsMap; // @synthesize adSpaceToGuidsMap=_adSpaceToGuidsMap;
@property(nonatomic) __weak Class cacheKeyFactory; // @synthesize cacheKeyFactory=_cacheKeyFactory;
@property __weak id <FlurryAdDelegate> adDelegate; // @synthesize adDelegate=_adDelegate;
@property(nonatomic) __weak UIViewController *rvc; // @synthesize rvc=_rvc;
@property(retain, nonatomic) FlurryAdCapabilities *adCapabilities; // @synthesize adCapabilities=_adCapabilities;
@property(retain, nonatomic) NSMutableArray *timers; // @synthesize timers=_timers;
@property(retain, nonatomic) FlurryAdTargeting *targeting; // @synthesize targeting=_targeting;
@property(retain, nonatomic) NSArray *supportedAssetsList; // @synthesize supportedAssetsList=_supportedAssetsList;
@property(retain, nonatomic) NSMutableArray *cachePendingAdUnitArray; // @synthesize cachePendingAdUnitArray=_cachePendingAdUnitArray;
@property(retain) NSMutableArray *pendingAdArray; // @synthesize pendingAdArray=_pendingAdArray;
@property(retain, nonatomic) NSMutableDictionary *adSpaceToTimerMap; // @synthesize adSpaceToTimerMap=_adSpaceToTimerMap;
@property(retain, nonatomic) NSMutableDictionary *adSpaceToAdMap; // @synthesize adSpaceToAdMap=_adSpaceToAdMap;
- (void).cxx_destruct;
- (void)armTimer:(id)arg1;
- (void)block_assetPreCachingCancelled:(id)arg1;
- (void)block_assetPreCachingFailed:(id)arg1;
- (void)block_assetPreCachingDone:(id)arg1;
- (void)assetPreCachingCancelled:(id)arg1;
- (void)assetPreCachingFailed:(id)arg1;
- (void)assetPreCachingDone:(id)arg1;
- (_Bool)isPendingAdAsset:(id)arg1;
- (id)getCacheableAssetsFromAdUnit:(id)arg1;
- (_Bool)isFailedAssetInAdunit:(id)arg1 forAsset:(id)arg2;
- (_Bool)block_areAllAssetsCachedForAdUnit:(id)arg1;
- (void)block_removeInvalidTImers;
- (void)block_assetDownloadTimeoutForAsset:(id)arg1;
- (void)block_downloadAssetForURLString:(id)arg1 withExpirationTime:(double)arg2;
- (void)block_primeAssetCacheForSpace:(id)arg1;
- (void)primeAssetCacheForSpace:(id)arg1;
- (void)assetDownloadTimeoutForAsset:(id)arg1;
- (void)downloadCacheableAssetsForAdUnit:(id)arg1;
- (id)block_fetchPendingAdForSpace:(id)arg1;
- (void)block_addPendingAd:(id)arg1;
- (void)block_removePendingAd:(id)arg1;
- (_Bool)isInPendingAdArrayAd:(id)arg1;
- (void)purgeExpiredAds;
- (void)resetCounterForId:(id)arg1 newCount:(int)arg2;
- (void)removeAdUnitForFreqCapId:(id)arg1 adSpace:(id)arg2;
- (void)removeAdUnitsForSpace:(id)arg1;
- (void)removeAdUnitsForGroupID:(id)arg1 withSpace:(id)arg2;
- (void)clearCache;
- (void)addPendingAd:(id)arg1;
- (void)removePendingAd:(id)arg1;
- (id)fetchPendingAdForSpace:(id)arg1;
- (_Bool)block_hasNonExpiredCacheCompleteAdUnitForCacheKey:(id)arg1;
- (_Bool)block_hasNonExpiredCachePendingAdUnitForCacheKey:(id)arg1;
- (void)block_removeExpiredCachePendingAdUnits;
- (id)block_getNonExpiredCachePendingAdUnitForCacheKey:(id)arg1;
- (void)blockMainThread_notifyAdsNotAvailableForSpace:(id)arg1 timeout:(long long)arg2 error:(id)arg3;
- (void)blockMainThread_notifySpace:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)block_registerTrackerForAd:(id)arg1 withTrackingView:(id)arg2 withVideoView:(id)arg3;
- (void)block_untrackViewabilityForAdSpace:(id)arg1;
- (_Bool)block_trackViewabilityForAdSpace:(id)arg1 withTrackingView:(id)arg2 withVideoView:(id)arg3;
- (void)untrackViewabilityForAdSpaceAsync:(id)arg1;
- (void)trackViewabilityForAdSpaceAsync:(id)arg1 withTrackingView:(id)arg2 withVideoView:(id)arg3;
- (void)processClickForAdSpace:(id)arg1;
- (void)processImpressionForAdSpace:(id)arg1;
- (_Bool)isGuidActive:(id)arg1;
- (void)block_adsAvailableForSpace:(id)arg1 forParams:(id)arg2;
- (void)block_adsNotAvailableForSpaceWithParams:(id)arg1;
- (void)block_csrtbAdsNotAvailableForSpace:(id)arg1 forParams:(id)arg2;
- (void)csrtbAdsNotAvailableForSpaceWithParams:(id)arg1;
- (void)adsNotAvailableForSpaceWithParams:(id)arg1;
- (void)adsAvailableForSpaceWithParams:(id)arg1;
- (id)block_adForSpace:(id)arg1;
- (id)adForSpace:(id)arg1;
- (void)block_deRegisterAdForSpace:(id)arg1;
- (void)deRegisterAdForSpace:(id)arg1;
- (_Bool)block_registerAd:(id)arg1 adSpaceName:(id)arg2;
- (_Bool)registerAd:(id)arg1 adSpaceName:(id)arg2;
- (void)deRegisterGuids:(id)arg1 forAdSpace:(id)arg2;
- (void)registerActiveGuids:(id)arg1 forAdSpace:(id)arg2;
- (unsigned long long)adUnitCountForSpace:(id)arg1;
- (void)blockMain_prepareNewAdWithSpace:(id)arg1 params:(id)arg2 adUnit:(id)arg3 displayWhenReady:(_Bool)arg4;
- (void)block_processShowNew:(id)arg1 params:(id)arg2 cacheKey:(id)arg3;
- (void)showNewAdForSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 withBounds:(struct CGRect)arg5 timeout:(long long)arg6;
- (void)refreshActiveAdSpace:(id)arg1;
- (_Bool)block_timerStartedForSpace:(id)arg1;
- (_Bool)timerStartedForSpace:(id)arg1;
- (void)delayNewAd:(id)arg1 guid:(id)arg2 delay:(long long)arg3;
- (void)block_removeFromViewabilityPendingFromSpace:(id)arg1;
- (_Bool)blockMain_displayAd:(id)arg1;
- (void)displayAdInView:(id)arg1 viewControllerForPresentation:(id)arg2 fullScreen:(_Bool)arg3;
- (void)adOutOfView:(id)arg1;
- (void)adInView:(id)arg1;
- (void)blockMainThread_adReadyForDisplay:(id)arg1;
- (void)block_processPreparedAd:(id)arg1 params:(id)arg2 cacheKey:(id)arg3 waitingForAdUnit:(_Bool)arg4 unitsPresentInCache:(_Bool)arg5 forShowingNow:(_Bool)arg6;
- (void)block_prepareAdForSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 withBounds:(struct CGRect)arg5 notification:(long long)arg6 forShowingNow:(_Bool)arg7;
- (void)block_fetchCachedAdUnitForKey:(id)arg1 params:(id)arg2 waitingOnAdUnit:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)adReadyForDisplay:(id)arg1;
- (void)refreshIfEmpty:(id)arg1;
- (void)prepareAdAsyncForSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 withBounds:(struct CGRect)arg5 notification:(long long)arg6;
- (void)initialize:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAdViewType:(int)arg1 adTargeting:(id)arg2;
- (id)initWithAdViewType:(int)arg1 adTargeting:(id)arg2 supportedAssetsList:(id)arg3;
- (void)removeFromAllPendingAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
