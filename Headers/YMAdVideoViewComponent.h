//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YMAdVideoPlaying-Protocol.h"

@class NSString, YMAdView;

@interface YMAdVideoViewComponent : NSObject <YMAdVideoPlaying>
{
    _Bool _autoplayEnabled;
    YMAdView *_owner;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(nonatomic) __weak YMAdView *owner; // @synthesize owner=_owner;
@property(readonly) _Bool isPresentingModally;
- (void)disableAutoplay;
- (void)enableAutoplay;
@property(readonly) double secondsOnScreenBeforeAutoplay;
- (int)updateScreenInfo:(id)arg1;
- (void)didLeaveScreen;
- (void)willEnterScreen;
- (id)videoPlayerViewDelegate;
- (id)videoPlayerView;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
