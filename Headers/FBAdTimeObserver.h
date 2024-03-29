//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FBAdTimeObserver : NSObject
{
    CDUnknownBlockType _block;
    id _downstreamObserver;
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_1b6d18a9 _interval;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDStruct_1b6d18a9 interval; // @synthesize interval=_interval;
@property(retain, nonatomic) id downstreamObserver; // @synthesize downstreamObserver=_downstreamObserver;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)initWithInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

