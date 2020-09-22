//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdRangeRequestDataFetcherDelegate-Protocol.h"
#import "FNFAssetResourceLoaderDelegate-Protocol.h"

@class FBAdRangeRequestCache, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface FBAdResourceLoader : NSObject <FBAdRangeRequestDataFetcherDelegate, FNFAssetResourceLoaderDelegate>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSMutableArray *_fetchers;
    FBAdRangeRequestCache *_cache;
}

@property(retain, nonatomic) FBAdRangeRequestCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSMutableArray *fetchers; // @synthesize fetchers=_fetchers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
- (void).cxx_destruct;
- (void)rangeRequestDataFetcher:(id)arg1 didFinishFetchSuccessfullyWithData:(id)arg2;
- (void)rangeRequestDataFetcher:(id)arg1 didFinishFetchWithError:(id)arg2;
- (void)resourceLoader:(id)arg1 locallyAvailableSizeForUrl:(id)arg2 inRange:(struct _NSRange)arg3 completion:(CDUnknownBlockType)arg4;
- (int)activeRequestCountUsingResourceLoader:(id)arg1;
- (unsigned long long)resourceLoader:(id)arg1 locallyAvailableSizeForUrl:(id)arg2 offset:(long long)arg3 length:(int)arg4;
- (_Bool)resourceLoader:(id)arg1 hasCachedDataForUrl:(id)arg2 offset:(long long)arg3 length:(int)arg4;
- (_Bool)resourceLoader:(id)arg1 hasPrefetchedDataForUrl:(id)arg2;
- (void)resourceLoader:(id)arg1 cancelLoadingRequest:(id)arg2;
- (void)resourceLoader:(id)arg1 loadRequest:(id)arg2;
- (id)initWithPersistentCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
