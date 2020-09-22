//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdAssetCacheSignalHandler-Protocol.h"

@class FBAdLoggingContext, NSString;

@interface FBAdCacheSignalHandler : NSObject <FBAdAssetCacheSignalHandler>
{
    FBAdLoggingContext *_loggingContext;
}

@property(retain, nonatomic) FBAdLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
- (void).cxx_destruct;
- (void)logInMemoryCacheFailureForKey:(id)arg1 assetType:(long long)arg2 failureReason:(id)arg3 context:(id)arg4;
- (void)logCreativeDownloadFailureForKey:(id)arg1 assetType:(long long)arg2 failureReason:(id)arg3 context:(id)arg4;
- (void)logDiskWriteEventIfNeededForKey:(id)arg1 assetType:(long long)arg2 failureReason:(id)arg3 success:(_Bool)arg4 context:(id)arg5;
- (void)logCacheHitOrMissForKey:(id)arg1 assetType:(long long)arg2 hit:(_Bool)arg3 context:(id)arg4;
- (id)adCreativeFromAssetType:(long long)arg1;
- (id)cacheDebugDataForKey:(id)arg1 context:(id)arg2;
- (void)didReceiveWipeSignal:(id)arg1;
- (void)didReceiveCreativeSignal:(id)arg1;
- (id)initWithLoggingContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

