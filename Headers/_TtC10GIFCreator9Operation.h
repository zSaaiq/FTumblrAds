//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE;

@interface _TtC10GIFCreator9Operation : NSOperation
{
    MISSING_TYPE *stateQueue;
    MISSING_TYPE *_state;
}

+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)start;
- (void)addDependency:(id)arg1;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;

// Remaining properties
@property(nonatomic, readonly) _Bool cancelled;
@property(nonatomic, readonly) _Bool executing;
@property(nonatomic, readonly) _Bool finished;
@property(nonatomic, readonly) _Bool ready;

@end

