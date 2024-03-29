//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdPushQueue-Protocol.h"
#import "FBAdSyncBundleDelegate-Protocol.h"

@class NSString;
@protocol FBAdPersistentCache, FBAdSync;

@interface FBAdPushQueueImpl : NSObject <FBAdSyncBundleDelegate, FBAdPushQueue>
{
    id <FBAdPersistentCache> _cache;
    id <FBAdSync> _sync;
    CDUnknownBlockType _logger;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <FBAdSync> sync; // @synthesize sync=_sync;
@property(readonly, nonatomic) id <FBAdPersistentCache> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)assetTypeFromTypeParam:(id)arg1;
- (id)itemsToPrefetchFromBundle:(id)arg1;
- (void)fbadSyncBundleDidUpdatePayload:(id)arg1;
- (void)disablePrecaching;
- (void)enablePrecaching;
- (id)initWithPersistentCache:(id)arg1 sync:(id)arg2 logger:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

