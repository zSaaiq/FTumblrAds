//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIViewController;
@protocol GADMRewardBasedVideoAdNetworkConnector;

@protocol GADMRewardBasedVideoAdNetworkAdapter <NSObject>
+ (Class)networkExtrasClass;
+ (NSString *)adapterVersion;
- (void)stopBeingDelegate;
- (void)presentRewardBasedVideoAdWithRootViewController:(UIViewController *)arg1;
- (void)requestRewardBasedVideoAd;
- (void)setUp;
- (id)initWithRewardBasedVideoAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector>)arg1;

@optional
- (void)setUpWithUserID:(NSString *)arg1;
- (id)initWithGADMAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector>)arg1;
- (id)initWithRewardBasedVideoAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector>)arg1 credentials:(NSArray *)arg2;
@end

