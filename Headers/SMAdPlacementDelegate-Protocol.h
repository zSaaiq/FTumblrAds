//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SMAdPlacementDelegate <NSObject>
- (void)adIsReady;

@optional
- (void)videoAdCompleted;
- (void)adRefreshFailedWithStatus:(int)arg1;
- (void)invalidateSMAdWithStatus:(int)arg1;
- (long long)adPosition;
@end

