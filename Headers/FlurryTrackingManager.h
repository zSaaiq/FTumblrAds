//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FlurryTrackingManager : NSObject
{
    NSMutableArray *_trackers;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _heartBeatHandler;
    NSArray *_rules;
}

+ (_Bool)isValidView:(id)arg1 delegate:(id)arg2 trackingDuration:(double)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(copy, nonatomic) CDUnknownBlockType heartBeatHandler; // @synthesize heartBeatHandler=_heartBeatHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *trackers; // @synthesize trackers=_trackers;
- (void).cxx_destruct;
- (void)willEnterBackground;
- (void)willBecomeActive;
- (void)setTrackingView:(id)arg1 active:(_Bool)arg2;
- (void)ftmRuleNotVisibleForPercentageThreshold:(id)arg1;
- (void)ftmRuleAllHeartBeats:(id)arg1;
- (void)ftmRuleTimeElapsedDurationThreshold:(id)arg1;
- (void)applyRulesToTrackers;
- (void)initHeartBeatHandler;
- (void)stopTimerIfNoObjectsToTrack;
- (void)startTimerIfNotRunning;
- (void)removeExpiredTrackers;
- (void)removeTrackerRules:(unsigned long long)arg1 forDelegate:(id)arg2;
- (void)addTrackerRules:(unsigned long long)arg1 forDelegate:(id)arg2;
- (_Bool)block_deregisterTrackerWithTag:(id)arg1;
- (_Bool)removeTrackerWithDelegate:(id)arg1;
- (_Bool)addTracker:(id)arg1;
- (void)removeRules:(unsigned long long)arg1 forDelegate:(id)arg2;
- (void)addRules:(unsigned long long)arg1 forDelegate:(id)arg2;
- (void)deregisterTrackerWithDelegate:(id)arg1;
- (void)deregisterTrackerWithTag:(id)arg1;
- (_Bool)registerTracker:(id)arg1;
- (_Bool)registerViewToTrack:(id)arg1 duration:(double)arg2 rules:(unsigned long long)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)init;

@end
