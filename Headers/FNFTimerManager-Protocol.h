//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FNFTimer, OS_dispatch_queue;

@protocol FNFTimerManager <NSObject>
- (id <FNFTimer>)createTimerWithInterval:(unsigned long long)arg1 fireOnce:(_Bool)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 block:(void (^)(void))arg4;
@end

