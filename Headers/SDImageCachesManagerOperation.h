//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SDImageCachesManagerOperation : NSOperation
{
    NSObject<OS_dispatch_semaphore> *_pendingCountLock;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    unsigned long long _pendingCount;
}

- (void).cxx_destruct;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)setCancelled:(_Bool)arg1;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (void)reset;
- (void)done;
- (void)cancel;
- (void)completeOne;
@property(readonly, nonatomic) unsigned long long pendingCount; // @synthesize pendingCount=_pendingCount;
- (void)beginWithTotalCount:(unsigned long long)arg1;
- (id)init;

@end
