//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol FlurryCustomAdNetworkDelegate, FlurryCustomAdNetworkProperties;

@protocol FlurryCustomAdNetwork <NSObject>
- (void)adRequestCompleteForSpace:(NSString *)arg1 isInterstitial:(_Bool)arg2;
- (_Bool)adWillDisplayForSpace:(NSString *)arg1 viewContainer:(UIView *)arg2 showInterstitial:(_Bool)arg3;
- (_Bool)getAd:(NSString *)arg1 withFrame:(struct CGRect)arg2 loadInterstitial:(_Bool)arg3;
- (NSString *)adNetworkVersion;
- (NSString *)adNetworkName;
- (void)setMediationDelegate:(id <FlurryCustomAdNetworkDelegate>)arg1;
- (id)initWithAdProperites:(id <FlurryCustomAdNetworkProperties>)arg1;
@end

