//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class YAActor;
@protocol OS_dispatch_queue;

@interface YADeferredQueue : NSObject
{
    unsigned long long _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    YAActor *_actor;
}

- (void).cxx_destruct;
@property(nonatomic) __weak YAActor *actor; // @synthesize actor=_actor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
- (void)resume;
- (void)suspend;
- (void)asyncBlock:(CDUnknownBlockType)arg1;
- (void)syncBlock:(CDUnknownBlockType)arg1;
- (id)initWithDescription:(id)arg1 actor:(id)arg2;
- (id)init;

@end

