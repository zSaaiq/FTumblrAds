//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADCustomEventRequest, NSString, UIViewController;
@protocol GADCustomEventInterstitialDelegate;

@protocol GADCustomEventInterstitial <NSObject>
@property(nonatomic) __weak id <GADCustomEventInterstitialDelegate> delegate;
- (void)presentFromRootViewController:(UIViewController *)arg1;
- (void)requestInterstitialAdWithParameter:(NSString *)arg1 label:(NSString *)arg2 request:(GADCustomEventRequest *)arg3;
@end

