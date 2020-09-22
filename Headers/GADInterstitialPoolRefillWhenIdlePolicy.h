//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADInterstitialPoolGroupRefillPolicy.h"

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface GADInterstitialPoolRefillWhenIdlePolicy : GADInterstitialPoolGroupRefillPolicy
{
    id _adRequestCountObserver;
    id _videoBufferingStartObserver;
    id _videoBufferingStopObserver;
    NSMutableSet *_bufferingVideoPlayerIdentifiers;
    NSObject<OS_dispatch_queue> *_bufferLockQueue;
}

- (void).cxx_destruct;
- (void)fillPools;
- (void)interstitialPoolDidRemoveEntry:(id)arg1;
- (void)addPool:(id)arg1;
- (void)dealloc;
- (id)init;

@end

