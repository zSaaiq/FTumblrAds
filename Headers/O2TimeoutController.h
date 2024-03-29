//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, O2Timer;

@interface O2TimeoutController : NSObject
{
    NSMutableSet *_processedSlots;
    CDUnknownBlockType _dispatch;
    O2Timer *_softTimeoutTimer;
    O2Timer *_hardTimeoutTimer;
    NSArray *_ids;
}

+ (id)controllerWithDispatch:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *ids; // @synthesize ids=_ids;
@property(retain, nonatomic) O2Timer *hardTimeoutTimer; // @synthesize hardTimeoutTimer=_hardTimeoutTimer;
@property(retain, nonatomic) O2Timer *softTimeoutTimer; // @synthesize softTimeoutTimer=_softTimeoutTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType dispatch; // @synthesize dispatch=_dispatch;
@property(retain, nonatomic) NSMutableSet *processedSlots; // @synthesize processedSlots=_processedSlots;
- (void)processWithItemFetcherQueue:(id)arg1 finalResult:(id)arg2 currentSlotID:(id)arg3 softTimeoutTimerProvider:(CDUnknownBlockType)arg4 hardTimeoutTimerProvider:(CDUnknownBlockType)arg5;
- (void)processState:(id)arg1;
- (id)initWithDispatch:(CDUnknownBlockType)arg1;

@end

