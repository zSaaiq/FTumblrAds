//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol FBAdSync, FBAdSyncBundle;

@protocol FBAdSyncDelegate <NSObject>

@optional
- (void)sync:(id <FBAdSync>)arg1 didFailSynchronizationWithError:(NSError *)arg2;
- (void)syncDidCompleteSynchronization:(id <FBAdSync>)arg1;
- (void)syncDidStartSynchronization:(id <FBAdSync>)arg1;
- (void)sync:(id <FBAdSync>)arg1 didCreateClientOwnedBundle:(id <FBAdSyncBundle>)arg2;
- (void)sync:(id <FBAdSync>)arg1 didCreateServerOwnedBundle:(id <FBAdSyncBundle>)arg2;
- (void)sync:(id <FBAdSync>)arg1 didChangeStateFromState:(long long)arg2;
@end
