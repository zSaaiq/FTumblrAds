//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FBAdLoggingContext : NSObject
{
    struct NSMutableDictionary *_cacheDebugMap;
}

+ (id)sharedContext;
@property(retain, nonatomic) NSMutableDictionary *cacheDebugMap; // @synthesize cacheDebugMap=_cacheDebugMap;
- (void).cxx_destruct;
- (id)cacheKeyForKey:(id)arg1 context:(id)arg2;
- (void)clearContext;
- (void)markCacheEventLoggedForKey:(id)arg1 requestId:(id)arg2 cacheEventTypeCode:(long long)arg3 context:(id)arg4;
- (void)markInMemoryWriteFailureCacheEventLoggedForKey:(id)arg1 requestId:(id)arg2 context:(id)arg3;
- (void)markCacheHitOrMissEventLoggedForKey:(id)arg1 requestId:(id)arg2 context:(id)arg3;
- (void)mapCacheDebugData:(id)arg1 forKey:(id)arg2 context:(id)arg3;
- (id)cacheDebugDataForKey:(id)arg1 context:(id)arg2;

@end

