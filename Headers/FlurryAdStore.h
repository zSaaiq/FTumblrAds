//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryAdActor.h"

#import "IFlurryAdRequestDelegate-Protocol.h"

@class FlurryAdStoreCollection, NSMutableDictionary, NSOperationQueue, NSString, NSURLCache;
@protocol IFlurryAdStoreBlobBuilder;

@interface FlurryAdStore : FlurryAdActor <IFlurryAdRequestDelegate>
{
    NSURLCache *_assetCache;
    NSOperationQueue *_operationAdQueue;
    FlurryAdStoreCollection *_adStoreCollection;
    struct NSMutableDictionary *_adRequestToAdRequestParamsMap;
    struct NSMutableDictionary *_pendingRequests;
    id <IFlurryAdStoreBlobBuilder> _adStoreBlobBuilder;
}

@property(retain, nonatomic) id <IFlurryAdStoreBlobBuilder> adStoreBlobBuilder; // @synthesize adStoreBlobBuilder=_adStoreBlobBuilder;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableDictionary *adRequestToAdRequestParamsMap; // @synthesize adRequestToAdRequestParamsMap=_adRequestToAdRequestParamsMap;
@property(retain, nonatomic) FlurryAdStoreCollection *adStoreCollection; // @synthesize adStoreCollection=_adStoreCollection;
@property(retain, nonatomic) NSOperationQueue *operationAdQueue; // @synthesize operationAdQueue=_operationAdQueue;
@property(retain, nonatomic) NSURLCache *assetCache; // @synthesize assetCache=_assetCache;
- (void).cxx_destruct;
- (void)block_adRequest:(id)arg1 failedWithError:(id)arg2;
- (void)adRequest:(id)arg1 failedWithError:(id)arg2;
- (void)block_adRequest:(id)arg1 successfulWithData:(id)arg2;
- (void)adRequest:(id)arg1 successfulWithData:(id)arg2;
- (void)block_notifyForRequestParams:(id)arg1 reponseObject:(id)arg2;
- (void)block_notifyPendingRequestsForAdStoreKey:(id)arg1 fetchFailureWithError:(id)arg2;
- (void)block_addToPendingListRequestParams:(id)arg1;
- (void)block_downloadURLs:(id)arg1;
- (void)block_refreshCacheUsingRequestParams:(id)arg1;
- (void)block_attemptToServicePendingRequestsForKey:(id)arg1;
- (_Bool)block_serveAdUnitForRequestParams:(id)arg1;
- (_Bool)block_isAdUnitAvailableForRequestParams:(id)arg1;
- (id)block_cacheableURLsForRequestParams:(id)arg1;
- (_Bool)block_hasItemsForRequestParams:(id)arg1;
- (_Bool)block_coreHandlerForRequestParams:(id)arg1;
- (void)block_fetchWithParams:(id)arg1;
- (void)fetchWithParams:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

