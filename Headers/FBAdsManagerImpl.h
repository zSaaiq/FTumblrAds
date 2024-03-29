//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdsManager-Protocol.h"

@class FBAdDictionary, NSString;

@interface FBAdsManagerImpl : NSObject <FBAdsManager>
{
    FBAdDictionary *_loadedAds;
}

- (void).cxx_destruct;
- (id)loadedRewardedVideoAdForPlacementId:(id)arg1;
- (void)removeLoadedRewardedVideoAdForPlacementId:(id)arg1 ad:(id)arg2;
- (void)setLoadedRewardedVideoAdForPlacementId:(id)arg1 ad:(id)arg2;
- (id)loadedInterstitialAdForPlacementId:(id)arg1;
- (void)removeLoadedInterstitialAdForPlacementId:(id)arg1 ad:(id)arg2;
- (void)setLoadedInterstitialAdForPlacementId:(id)arg1 ad:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

