//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol OPrivacyAnalytics <NSObject>
- (void)logTelemetryEventWithName:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)logEventWithName:(NSString *)arg1 params:(NSDictionary *)arg2;
@end

