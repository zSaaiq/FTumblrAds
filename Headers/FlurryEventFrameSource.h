//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryActorStreamComponent.h"

#import "IFlurryEventFrameSource-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface FlurryEventFrameSource : FlurryActorStreamComponent <IFlurryEventFrameSource>
{
    NSMutableDictionary *_eventCounts;
    NSMutableArray *_eventLog;
    NSNumber *_counter;
}

+ (_Bool)isValidInputEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3 transaction:(id)arg4;
+ (id)eventFrameSource;
@property(retain, nonatomic) NSNumber *counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSMutableArray *eventLog; // @synthesize eventLog=_eventLog;
@property(retain, nonatomic) NSMutableDictionary *eventCounts; // @synthesize eventCounts=_eventCounts;
- (void).cxx_destruct;
- (void)onqueue_recordEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3 transaction:(id)arg4;
- (void)onqueue_endTimedEvent:(id)arg1 withParameters:(id)arg2;
- (void)endTimedEvent:(id)arg1 withParameters:(id)arg2;
- (void)recordEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3 transaction:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

