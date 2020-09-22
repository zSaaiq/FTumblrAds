//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CommunicatorDelegate-Protocol.h"

@class Cache, NSMutableDictionary, NSNotificationCenter, NSString;

@interface CacheManager : NSObject <CommunicatorDelegate>
{
    NSMutableDictionary *_ruleCache;
    NSMutableDictionary *_allocationCache;
    NSMutableDictionary *_playerDataCache;
    Cache *_adCache;
    NSMutableDictionary *_cuePointCache;
    NSNotificationCenter *_notificationCenter;
}

+ (id)sharedManager:(long long)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) NSMutableDictionary *cuePointCache; // @synthesize cuePointCache=_cuePointCache;
@property(retain) Cache *adCache; // @synthesize adCache=_adCache;
@property(retain) NSMutableDictionary *playerDataCache; // @synthesize playerDataCache=_playerDataCache;
@property(retain) NSMutableDictionary *allocationCache; // @synthesize allocationCache=_allocationCache;
@property(retain) NSMutableDictionary *ruleCache; // @synthesize ruleCache=_ruleCache;
- (id)createAdEngine;
- (long long)backend;
- (void)updateAdCache:(id)arg1 key:(id)arg2;
- (void)addAdResponse:(id)arg1 forKey:(id)arg2;
- (void)adFailure:(id)arg1 key:(id)arg2 communicator:(id)arg3 error:(id)arg4;
- (void)adReady:(id)arg1 key:(id)arg2 communicator:(id)arg3;
- (id)getAdForKey:(id)arg1;
- (id)getAdFor:(id)arg1 communicatorSpec:(id)arg2 adSpec:(id)arg3 observer:(id)arg4;
- (void)addCuePoints:(id)arg1 forKey:(id)arg2;
- (id)getCuePointsForKey:(id)arg1;
- (void)addPlayerData:(id)arg1 forKey:(id)arg2;
- (id)getPlayerDataForKey:(id)arg1;
- (id)getAllocationForKey:(id)arg1;
- (void)addAllocation:(id)arg1 forKey:(id)arg2;
- (id)getRuleForKey:(id)arg1;
- (void)addRule:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

