//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryNativeVideoState : NSObject
{
    _Bool playbackCompletedBeaconFired;
    _Bool playbackCompletedOnce;
    _Bool playbackMutedInFullScreen;
    _Bool outOfViewPlaying;
    _Bool userEngaged;
    _Bool initialVideoCompleted;
    _Bool initialVideoFirstQuartile;
    _Bool initialVideoMidpoint;
    _Bool initialVideoStart;
    _Bool initialVideoThirdQuartile;
    _Bool costPerViewLimitNotReached;
    int playBackState;
    double videoPlayerCurrentTime;
}

@property(nonatomic) _Bool costPerViewLimitNotReached; // @synthesize costPerViewLimitNotReached;
@property(nonatomic) _Bool initialVideoThirdQuartile; // @synthesize initialVideoThirdQuartile;
@property(nonatomic) _Bool initialVideoStart; // @synthesize initialVideoStart;
@property(nonatomic) _Bool initialVideoMidpoint; // @synthesize initialVideoMidpoint;
@property(nonatomic) _Bool initialVideoFirstQuartile; // @synthesize initialVideoFirstQuartile;
@property(nonatomic) _Bool initialVideoCompleted; // @synthesize initialVideoCompleted;
@property(nonatomic) _Bool userEngaged; // @synthesize userEngaged;
@property(nonatomic) _Bool outOfViewPlaying; // @synthesize outOfViewPlaying;
@property(nonatomic) double videoPlayerCurrentTime; // @synthesize videoPlayerCurrentTime;
@property(nonatomic) int playBackState; // @synthesize playBackState;
@property(nonatomic) _Bool playbackMutedInFullScreen; // @synthesize playbackMutedInFullScreen;
@property(nonatomic) _Bool playbackCompletedOnce; // @synthesize playbackCompletedOnce;
@property(nonatomic) _Bool playbackCompletedBeaconFired; // @synthesize playbackCompletedBeaconFired;
- (void)resetVideoBeacons;
- (id)init;

@end

