//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol YVAPAnalyticsDelegate <NSObject>
- (void)logMidrollPodCacheUpdateWithParameters:(NSDictionary *)arg1;
- (void)logMidrollPodEndWithParameters:(NSDictionary *)arg1;
- (void)logMidrollPodStartWithParameters:(NSDictionary *)arg1;
- (void)logAdErrorWithParameters:(NSDictionary *)arg1;
- (void)logAdCompletionWithParameters:(NSDictionary *)arg1;
- (void)logAdViewWithParameters:(NSDictionary *)arg1;
- (void)logAdProgressWithParameters:(NSDictionary *)arg1;
- (void)logAdDeliveryWithParameters:(NSDictionary *)arg1;
- (void)logAdOpportunityWithParameters:(NSDictionary *)arg1;
- (void)logAdCallFailWithParameters:(NSDictionary *)arg1;
- (void)logAdCallWithParameters:(NSDictionary *)arg1;
@end

