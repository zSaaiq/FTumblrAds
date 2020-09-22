//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioMix, AVPlayerItemAccessLog, AVPlayerItemOutput, NSArray, NSObject;
@protocol FNFAVAsset, OS_dispatch_queue;

@protocol FNFAVPlayerItem <NSObject>
@property(copy, nonatomic) AVAudioMix *audioMix;
@property(readonly, nonatomic) _Bool shouldApplyRotationTransform;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) long long status;
- (void)requestErrorNotificationIfNeeded;
- (void)requestTimeLoadedUpdate;
- (void)addOutput:(AVPlayerItemOutput *)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (void)asyncLoadCurrentQualityWithHandler:(void (^)(NSString *))arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)asyncLoadAvailableQualitiesWithHandler:(void (^)(NSArray *))arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (CDStruct_1b6d18a9)duration;
- (_Bool)isPlaybackLikelyToKeepUp;
- (_Bool)isPlaybackBufferFull;
- (id <FNFAVAsset>)asset;
- (AVPlayerItemAccessLog *)accessLog;
@end
