//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GADSDKCoreGMSGHandler, NSDictionary, NSString;

@protocol GADSDKCoreGMSGHandlerDelegate
- (void)SDKCoreGMSGHandlerDidReceiveResumeSDKCoreRefreshAction:(GADSDKCoreGMSGHandler *)arg1;
- (void)SDKCoreGMSGHandlerDidReceivePauseSDKCoreRefreshAction:(GADSDKCoreGMSGHandler *)arg1;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 didReceiveResultActionWithRequestID:(NSString *)arg2 arguments:(NSDictionary *)arg3;
- (void)SDKCoreGMSGHandlerDidReceiveSDKCoreUpdateNotification:(GADSDKCoreGMSGHandler *)arg1;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 didLoadSDKConstants:(NSDictionary *)arg2;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 didReceiveInvalidAdWithRequestID:(NSString *)arg2 parameters:(NSDictionary *)arg3;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 loadAdWithRequestID:(NSString *)arg2 parameters:(NSDictionary *)arg3;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 loadAdURLWithRequestID:(NSString *)arg2 parameters:(NSDictionary *)arg3;
@end
