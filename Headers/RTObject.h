//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTLogComponent-Protocol.h"

@class NSOperationQueue, NSString, NSThread;
@protocol OS_dispatch_queue, RTLog;

@interface RTObject : NSObject <RTLogComponent>
{
    unsigned int mQueueDepth;
    NSString *mID;
    NSObject<OS_dispatch_queue> *mQueue;
    NSOperationQueue *mOperationQueue;
    NSThread *mActiveThread;
}

+ (void)removeLastOwnedObject;
+ (void)setLastOwnedObject:(id)arg1;
+ (id)getLastOwnedObject;
+ (void)setDefaultLogger:(id)arg1;
+ (unsigned long long)lastOwnedObjectKey;
+ (id)validSyncCallers;
+ (void)initialize;
+ (id)currentObject;
- (void).cxx_destruct;
@property(nonatomic) NSThread *activeThread; // @synthesize activeThread=mActiveThread;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=mOperationQueue;
@property(nonatomic) unsigned int queueDepth; // @synthesize queueDepth=mQueueDepth;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=mQueue;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=mID;
- (id)newTimer;
- (id)newWallTimerWithTimeout:(unsigned long long)arg1 interval:(unsigned long long)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (id)newWallTimerWithTimeout:(unsigned long long)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (id)newTimerWithTimeout:(unsigned long long)arg1 interval:(unsigned long long)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (id)newTimerWithTimeout:(unsigned long long)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)wrapAsyncBlock:(CDUnknownBlockType)arg1;
- (void)mainBlock:(CDUnknownBlockType)arg1;
- (void)groupNotify:(CDUnknownBlockType)arg1 onGroup:(id)arg2;
- (void)asyncBlock:(CDUnknownBlockType)arg1 onGroup:(id)arg2 fast:(_Bool)arg3;
- (void)asyncBlock:(CDUnknownBlockType)arg1 onGroup:(id)arg2;
- (void)asyncBlock:(CDUnknownBlockType)arg1 fast:(_Bool)arg2;
- (void)asyncBlock:(CDUnknownBlockType)arg1;
- (void)syncBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <RTLog> logger;
@property(readonly, copy, nonatomic) NSString *componentName;
- (void)dealloc;
- (id)initWithID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
