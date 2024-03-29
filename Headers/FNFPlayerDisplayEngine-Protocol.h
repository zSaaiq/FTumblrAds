//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSObject;
@protocol FNFPlayerDisplayEngineDelegate, OS_dispatch_queue;

@protocol FNFPlayerDisplayEngine <NSObject>
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(nonatomic) __weak id <FNFPlayerDisplayEngineDelegate> displayEngineDelegate;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
- (void)setLoggingContext:(id)arg1;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)requestLastDisplayedSampleBuffer:(void (^)(struct __CVBuffer *))arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3;
- (void)dispatchAsyncOnRenderingThread:(void (^)(void))arg1;
- (void)setRenderingThreadPriority:(double)arg1;
- (void)displayFrameAsApplicable;
- (void)setNeedsDisplayFrame;
- (void)invalidate;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attributes:(unsigned int)arg2 codec:(unsigned long long)arg3 enqueueInfo:(NSDictionary *)arg4;
- (_Bool)flushIfError;
- (_Bool)seekFrameUpdatesFinished;
- (_Bool)flushDisplayReadySampleBuffers;
- (void)flushAndRemoveImage;
- (void)flush;
- (_Bool)isReadyForMoreMediaData;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject<OS_dispatch_queue> *)arg1 usingBlock:(void (^)(void))arg2;
- (_Bool)allowRenderingWhileApplicationInactive;
- (void)pauseDisplayLink;
- (void)pause:(int)arg1;
- (void)resume;
- (void)setShouldApplyRotationTransform:(_Bool)arg1;
@end

