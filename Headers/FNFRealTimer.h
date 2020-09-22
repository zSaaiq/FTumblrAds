//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFTimer-Protocol.h"

@class NSString;
@protocol OS_dispatch_source;

@interface FNFRealTimer : NSObject <FNFTimer>
{
    NSObject<OS_dispatch_source> *_timer;
    _Bool _suspended;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)pause;
- (id)initWithInterval:(unsigned long long)arg1 fireOnce:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
