//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, YMAdController, YMAdView;

@protocol YMAdControllerEventReceiver <NSObject>
@property(readonly) NSSet *tapRegionsForExpand;
- (void)adControllerWillPerformAdClick:(YMAdController *)arg1;
- (void)adController:(YMAdController *)arg1 viewStateAnimationChangedFrom:(_Bool)arg2;
- (void)adController:(YMAdController *)arg1 didChangeViewStateFrom:(int)arg2;
- (void)adController:(YMAdController *)arg1 willBeAssignedNewView:(YMAdView *)arg2;
@end

