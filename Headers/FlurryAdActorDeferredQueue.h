//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryAdActor;
@protocol OS_dispatch_queue;

@interface FlurryAdActorDeferredQueue : NSObject
{
    unsigned long long _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    FlurryAdActor *_actor;
}

@property(nonatomic) __weak FlurryAdActor *actor; // @synthesize actor=_actor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)asyncBlock:(CDUnknownBlockType)arg1;
- (void)syncBlock:(CDUnknownBlockType)arg1;
- (id)initWithDescription:(id)arg1 actor:(id)arg2;
- (id)init;

@end

