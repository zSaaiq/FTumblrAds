//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTContext.h"

@class RTKernel;

@interface RTNativeContext : RTContext
{
    RTKernel *mKernel;
}

+ (id)validSyncCallers;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) RTKernel *kernel; // @synthesize kernel=mKernel;
- (void)removeChildContext:(id)arg1;
- (void)cleanupContextStates:(id)arg1;
- (void)routeMessage:(id)arg1;
- (void)routeResponseMessage:(id)arg1;
- (void)routeRequestMessage:(id)arg1;
- (void)checkAvailableServices:(id)arg1;
- (void)destroyHandle:(id)arg1;
- (void)createHandle:(id)arg1;
- (void)cancelMethod:(id)arg1;
- (id)initWithID:(id)arg1 parent:(id)arg2 kernel:(id)arg3;

@end
