//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidrollRequestHelper.h"

#import "CommunicatorDelegate-Protocol.h"

@class CacheManagerIceBreaker, NSHashTable, NSString;

@interface NFLLiveMidrollRequestHelper : MidrollRequestHelper <CommunicatorDelegate>
{
    _Bool _adResponseReceived;
    CacheManagerIceBreaker *_cacheManager;
    NSString *_label;
    NSString *_adBreakId;
    NSHashTable *_adIds;
}

+ (id)requestNewNFLLiveMidrolls:(id)arg1 playerData:(id)arg2 targetDuration:(id)arg3 adBreakNumber:(long long)arg4 timeout:(id)arg5 analytics:(id)arg6 delegate:(id)arg7 cacheManager:(id)arg8 label:(id)arg9 adBreakId:(id)arg10;
- (void).cxx_destruct;
@property(nonatomic) _Bool adResponseReceived; // @synthesize adResponseReceived=_adResponseReceived;
@property(retain, nonatomic) NSHashTable *adIds; // @synthesize adIds=_adIds;
@property(retain, nonatomic) NSString *adBreakId; // @synthesize adBreakId=_adBreakId;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) CacheManagerIceBreaker *cacheManager; // @synthesize cacheManager=_cacheManager;
- (void)adReady:(id)arg1 key:(id)arg2 communicator:(id)arg3;
- (void)incrementduplicateAdCount;
- (void)cacheAdWithAdResponse:(id)arg1 ad:(id)arg2;
- (void)updateNumberOfAds:(id)arg1;
- (long long)numberOfAds;
- (void)requestAds;
- (id)initWithAllocation:(id)arg1 playerData:(id)arg2 targetDuration:(id)arg3 adBreakNumber:(long long)arg4 timeout:(id)arg5 analytics:(id)arg6 delegate:(id)arg7 cacheManager:(id)arg8 label:(id)arg9 adBreakId:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
