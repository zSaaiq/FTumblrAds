//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSNEventGenerator-Protocol.h"

@class NSString, YSNEventFactory;
@protocol YSNEventStore;

@interface YSNAppLifecycleEventGenerator : NSObject <YSNEventGenerator>
{
    long long _appFirstActTimestamp;
    _Bool _isInBackground;
    id <YSNEventStore> _store;
    long long _lastLifecycleEvent;
    long long _lastLifecycleEventTimestamp;
    YSNEventFactory *_eventFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YSNEventFactory *eventFactory; // @synthesize eventFactory=_eventFactory;
@property(nonatomic) long long lastLifecycleEventTimestamp; // @synthesize lastLifecycleEventTimestamp=_lastLifecycleEventTimestamp;
@property(nonatomic) long long lastLifecycleEvent; // @synthesize lastLifecycleEvent=_lastLifecycleEvent;
@property(retain, nonatomic) id <YSNEventStore> store; // @synthesize store=_store;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
- (int)lifecycleSequenceNum;
- (_Bool)isBackground;
- (void)reset;
@property(readonly, nonatomic) long long appFirstActTimestamp;
- (void)dealloc;
- (id)initWithStore:(id)arg1;
- (id)init;
- (void)fetchAttributionDetailsWithRetryCount:(unsigned long long)arg1;
- (void)p_logAppFirstActEvent;
- (void)p_handleApplicationWillTerminate;
- (void)p_handleApplicationDidEnterBackground;
- (void)p_handleApplicationWillResignActive;
- (void)p_handleApplicationDidBecomeActive;
- (void)p_handleApplicationWillEnterForeground;
- (void)p_handleApplicationDidFinishLaunching;
- (void)p_setFirstVisitTimestampGlobalParameter:(long long)arg1;
- (void)p_incrementLifecycleSequenceNum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

