//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SMAd;

@protocol SMAdViewDelegate <NSObject>
- (unsigned long long)getAdPosition;
- (void)reportVideoCompleted;
- (void)reportAdViewLayoutFailure;
- (void)reportViewBeaconWithDynamicMomentsAd:(SMAd *)arg1 withSlotPosition:(long long)arg2;
- (void)setImpressionParametersForAd:(SMAd *)arg1;
@end

