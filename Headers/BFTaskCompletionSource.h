//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BFTask;

@interface BFTaskCompletionSource : NSObject
{
    BFTask *_task;
}

+ (id)taskCompletionSource;
@property(readonly, nonatomic) BFTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (_Bool)trySetCancelled;
- (_Bool)trySetException:(id)arg1;
- (_Bool)trySetError:(id)arg1;
- (_Bool)trySetResult:(id)arg1;
- (void)cancel;
- (void)setException:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (id)init;

@end

