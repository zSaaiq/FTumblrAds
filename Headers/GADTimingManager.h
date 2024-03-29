//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GADTimingManager : NSObject
{
    NSString *_identifier;
    NSString *_userDefaultsKey;
    NSMutableDictionary *_timings;
    NSObject<OS_dispatch_queue> *_savingQueue;
}

- (void).cxx_destruct;
- (void)removeTimingForCategory:(id)arg1;
- (id)timingForCategory:(id)arg1;
- (id)addTimingWithCategory:(id)arg1;
- (void)addTiming:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)savePersistentTimings;
- (void)loadPersistentTimings;
- (void)applicationWillTerminate:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *categories;
@property(readonly, copy, nonatomic) NSArray *timings;
- (void)dealloc;
- (id)init;

@end

