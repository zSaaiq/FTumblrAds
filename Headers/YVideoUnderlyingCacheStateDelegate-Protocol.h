//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YVideoUnderlyingCacheState;

@protocol YVideoUnderlyingCacheStateDelegate <NSObject>
- (void)stateEvicted;
- (void)stateDidCompleteCaching;
- (void)stateDidStopCaching;
- (void)stateResumeCaching;
- (void)stateSuspendCaching;
- (void)stateChangedTo:(YVideoUnderlyingCacheState *)arg1 error:(NSError *)arg2;
@end

