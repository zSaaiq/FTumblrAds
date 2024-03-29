//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADRequest, NSMutableArray, NSString;
@protocol GADInterstitialPoolDelegate, OS_dispatch_queue;

@interface GADInterstitialPool : NSObject
{
    NSMutableArray *_entries;
    GADRequest *_request;
    id <GADInterstitialPoolDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSString *_adUnitID;
}

@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;
- (id)nextEntry;
- (void)fill;
- (void)addCacheEntryWithTimeout:(double)arg1 maxCount:(long long)arg2;
- (void)scheduleTimeout:(double)arg1 cacheEntry:(id)arg2;
- (void)removeObject:(id)arg1;
@property __weak id <GADInterstitialPoolDelegate> delegate;
@property(copy) GADRequest *request;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2;
- (id)init;

@end

