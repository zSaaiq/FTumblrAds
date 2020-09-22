//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError, NSString, NSURLResponse;

@protocol _TtP14TelegraphSwift14PusherDelegate_

@optional
- (void)failedToSubscribeToChannelWithName:(NSString *)arg1 response:(NSURLResponse *)arg2 data:(NSString *)arg3 error:(NSError *)arg4;
- (void)subscribedToChannelWithName:(NSString *)arg1;
- (void)changedConnectionStateFrom:(long long)arg1 to:(long long)arg2;
- (void)unsubscribedFromInterestWithName:(NSString *)arg1;
- (void)subscribedToInterestsWithInterests:(NSArray *)arg1;
- (void)subscribedToInterestWithName:(NSString *)arg1;
- (void)failedToRegisterForPushNotificationsWithResponse:(NSURLResponse *)arg1 responseBody:(NSString *)arg2;
- (void)registeredForPushNotificationsWithClientId:(NSString *)arg1;
- (void)debugLogWithMessage:(NSString *)arg1;
@end
