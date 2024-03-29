//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADGMSGHandler.h"

#import "GADAdFetcherDelegate-Protocol.h"
#import "GADResourceCacheDelegate-Protocol.h"

@class GADSDKCoreWebView, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol GADSDKCoreGMSGHandlerDelegate, OS_dispatch_queue;

@interface GADSDKCoreGMSGHandler : GADGMSGHandler <GADAdFetcherDelegate, GADResourceCacheDelegate>
{
    NSMutableDictionary *_adFetchers;
    NSMutableDictionary *_resourceCaches;
    NSMutableSet *_SDKCoreRefreshPauseIDs;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADSDKCoreWebView *_SDKCoreWebView;
    id <GADSDKCoreGMSGHandlerDelegate> _delegate;
}

+ (id)actionBlockDictionary;
@property(nonatomic) __weak id <GADSDKCoreGMSGHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GADSDKCoreWebView *SDKCoreWebView; // @synthesize SDKCoreWebView=_SDKCoreWebView;
- (void).cxx_destruct;
- (void)resourceCache:(id)arg1 didFailCachingWithError:(id)arg2;
- (void)resourceCacheDidSucceedCaching:(id)arg1;
- (void)resourceCacheDidReceiveResponse:(id)arg1;
- (void)resourceCacheDidStartCaching:(id)arg1;
- (void)notifyCacheDictionary:(id)arg1 fileDictionary:(id)arg2 requestID:(id)arg3 error:(id)arg4;
- (void)notifyResourceCache:(id)arg1 status:(id)arg2 cachingInProgress:(_Bool)arg3 error:(id)arg4;
- (id)requestIDForResourceCache:(id)arg1;
- (void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned long long)arg4;
- (void)adFetcher:(id)arg1 didFetchAd:(id)arg2;
- (_Bool)isFetchInProgressForFetchRequestID:(id)arg1;
- (void)removeAdFetcherForFetchRequestID:(id)arg1;
- (void)setAdFetcher:(id)arg1 forFetchRequestID:(id)arg2;
- (id)fetchRequestIDForAdFetcher:(id)arg1;
- (void)failedToFetchAd:(id)arg1 forRequestID:(id)arg2 withError:(id)arg3 responseCode:(long long)arg4;
- (void)fetchedAd:(id)arg1 forFetchRequestID:(id)arg2 responseCode:(long long)arg3;
- (void)adView:(id)arg1 didReceiveSDKCoreRefreshAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveCleanupCacheDirectoryAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveResourceStatusCheckAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveRemoveResourceAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveCacheResourceAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveResultAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveSDKCoreSaveState:(id)arg2;
- (void)adView:(id)arg1 didReceiveAppSettings:(id)arg2;
- (void)adView:(id)arg1 didReceiveFetchAdAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveSDKCoreReloadRequestWithParameters:(id)arg2;
- (void)adView:(id)arg1 didReceiveLoadAdAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveloadSDKConstantsAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveInvalidAdRequestAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveloadAdURLAction:(id)arg2;
- (id)resourceCacheForFileURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

