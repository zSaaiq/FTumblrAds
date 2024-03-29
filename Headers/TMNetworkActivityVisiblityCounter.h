//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue, TMNetworkActivityIndicatorManager;

@interface TMNetworkActivityVisiblityCounter : NSObject
{
    id <TMNetworkActivityIndicatorManager> _networkActivityIndicatorManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
    long long _count;
}

- (void).cxx_destruct;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <TMNetworkActivityIndicatorManager> networkActivityIndicatorManager; // @synthesize networkActivityIndicatorManager=_networkActivityIndicatorManager;
- (void)timerHit;
- (void)resetTimer;
- (void)updateCount:(_Bool)arg1;
@property(readonly, nonatomic) long long activeCount;
- (void)update:(long long)arg1;
- (id)initWithNetworkActivityIndicatorManager:(id)arg1;

@end

