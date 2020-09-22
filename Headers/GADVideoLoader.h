//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"

@class AVPlayerItem, AVURLAsset, GADAssetLoadingVideoPlayerItem, GADGCacheURLLoader, GADResourceCache, GADVideoConfiguration, GADVideoPlayer, NSMutableArray, NSString, NSURL;
@protocol GADVideoLoaderDelegate;

@interface GADVideoLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    NSURL *_sourceURL;
    GADGCacheURLLoader *_gcacheURLLoader;
    _Bool _hasNotifiedVideoLoadingStarted;
    _Bool _hasNotifiedVideoLoadingFailed;
    NSMutableArray *_pendingRequests;
    AVURLAsset *_cachedResourceAsset;
    _Bool _isObservingResourceCache;
    GADResourceCache *_resourceCache;
    GADVideoPlayer *_player;
    GADVideoConfiguration *_configuration;
    GADAssetLoadingVideoPlayerItem *_assetLoadingPlayerItem;
    _Bool _hasBeenUsed;
    AVPlayerItem *_playerItem;
    id <GADVideoLoaderDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic) __weak id <GADVideoLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;
- (void)resourceCacheDidUpdateCacheNotification:(id)arg1;
- (void)stopObservingResourceCacheUpdates;
- (void)observeResourceCacheUpdates;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)processAssetResourceLoadingRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)notifyVideoLoaderFailedToLoadURL:(id)arg1 withError:(id)arg2;
- (void)notifyVideoLoaderDidStartLoadingURL:(id)arg1;
- (void)loadWithResourceCache:(id)arg1;
- (void)loadAdvanceControlVideoURL:(id)arg1 resourceCache:(id)arg2;
- (void)loadGCacheURL:(id)arg1;
- (void)loadStandardURL:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)loadURL:(id)arg1 resourceCache:(id)arg2 configuration:(id)arg3;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
